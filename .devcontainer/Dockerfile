    # syntax=docker/dockerfile:1
    FROM node:19

    ARG USERNAME=vscode
    ARG GROUPNAME=${USERNAME}
    ARG USER_UID=1000
    ARG USER_GID=${USER_UID}

    RUN apt-get update \
    && groupadd --gid ${USER_GID} ${GROUPNAME} \
    && useradd -s /bin/bash --uid ${USER_UID} --gid ${USER_GID} -m ${USERNAME} \
    && apt-get -y install sudo \ 
    && echo ${USERNAME} ALL=\(ALL\) NOPASSWD:ALL > /etc/sudoers.d/${USERNAME} \
    && chmod 0440 /etc/sudoers.d/${USERNAME}

    # インタラクティブモードにならないようにする
    ARG DEBIAN_FRONTEND=noninteractive

    # タイムゾーンを日本に設定
    ENV TZ=Asia/Tokyo

    WORKDIR /atcoder

    # 起動シェルをshからbashに変更
    SHELL ["/bin/bash", "-c"]

    # パッケージなど
    RUN apt update && \
        apt install -y \
        time \
        tzdata \
        tree \
        git \
        curl \
        gcc-9 \
        g++-9 \
        gdb \
        python3.9 \
        python3-pip \
        lua5.4 
        
    # C++でAtCoder Library(ACL)を使えるようにする
    RUN git clone https://github.com/atcoder/ac-library.git /lib/ac-library
    ENV CPLUS_INCLUDE_PATH /lib/ac-library

    # Python3, PyPy3の環境設定
    RUN apt-get update && \
    apt-get inatall -y python3-pip pypy3 nodejs npm

    # pythonライブラリをインストール
    COPY requirements.txt /tmp/
    RUN python -m pip install --upgrade pip \
    && pip install -r /tmp/requirements.txt

    # atcoder-cliのインストール
    RUN npm install -g atcoder-cli@2.2.0

    # ojのインストール
    RUN pip install online-judge-tools==11.5.1

    