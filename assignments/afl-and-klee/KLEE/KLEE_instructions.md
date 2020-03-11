## Installation:
Docker installation is recommended, and detailed installation instructions can be found at https://klee.github.io/docker/

1. Install Docker
Follow these links for installation instructions on [Ubuntu](https://docs.docker.com/install/linux/docker-ce/ubuntu/), [OS X](https://docs.docker.com/docker-for-mac/) and [Windows](https://docs.docker.com/docker-for-windows/).

2. Pull the docker image provided by KLEE, and then create KLEE docker container
```console
$ docker pull klee/klee:2.0
$ docker run -ti --name=klee_container klee/klee
```

3. Both get_sign.c and regexp.c are already in '~/klee_src/examples'. You can then follow the instructions at https://klee.github.io/tutorials/testing-function/ to test them.
```console
klee@22cbddc920c1:~$ cd ~/klee_src/examples/
klee@22cbddc920c1:~/klee_src/examples$ ls
get_sign  regexp  sort
```

4. To exit or restart the container:
```console
klee@22cbddc920c1:~$ exit
```

```console
$ docker ps -a
CONTAINER ID        IMAGE               COMMAND             CREATED             STATUS                      PORTS               NAMES
eeebf02b0a8d        klee/klee:2.0       "/bin/bash"         About an hour ago   Exited (0) 4 seconds ago                        klee_container
$ docker start -ai klee_container
```