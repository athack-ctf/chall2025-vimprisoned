# Use the latest Ubuntu base image
FROM ubuntu:latest

# Set environment variables to avoid interactive prompts during package installation
ENV DEBIAN_FRONTEND=noninteractive

# Install required packages: vim and openssh-server
RUN apt-get update && \
    apt-get install -y vim openssh-server && \
    apt-get clean

# Creating the vimprison (with the flag)
RUN echo '#!/bin/bash\ncd /home/ned/vimprison/ && export PATH="" && export YOU_HAVE_BEEN_LOOKING_FOR="ATHACKCTF{y0u_h4v3_35c4p3d_th3_vim_prison_0xdeadbeff}" && exec /usr/bin/vim "qrcode$(/usr/bin/shuf -e "1" "2" "3" -n 1)"' > /usr/local/bin/vimprison && \
    chmod +x /usr/local/bin/vimprison

# Create a new user (ned) and set their shell to the vim wrapper script
RUN useradd -m -s /usr/local/bin/vimprison ned && echo "ned:nedned" | chpasswd

# Copying files
COPY vimprison /home/ned/vimprison
COPY hint.txt /home/ned/hint.txt

# Set up SSH server configuration
RUN mkdir /var/run/sshd && \
    sed -i 's/^#PasswordAuthentication yes/PasswordAuthentication yes/' /etc/ssh/sshd_config && \
    sed -i 's/^#PermitRootLogin prohibit-password/PermitRootLogin no/' /etc/ssh/sshd_config


# Expose the SSH port
EXPOSE 22

# Start SSH service
CMD ["/usr/sbin/sshd", "-D"]
