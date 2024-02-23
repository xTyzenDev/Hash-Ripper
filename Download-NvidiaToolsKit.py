import requests
from tqdm import tqdm
import time
import py7zr
import os
import sys
import subprocess


def download_cudaToolkit():
    nvidiaurl = "https://developer.download.nvidia.com/compute/cuda/12.3.2/local_installers/cuda_12.3.2_546.12_windows.exe"  

    response = requests.get(nvidiaurl, stream=True)
    taille_fichier = int(response.headers.get('content-length', 0))

    with open('cuda_12.3.2_546.12_windows.exe', 'wb') as fichier, tqdm(
        desc="Download cuda_12.3.2_546.12_windows.exe",
        total=taille_fichier,
        unit='o',
        unit_scale=True,
        unit_divisor=1024,
    ) as barre_progression:
        for morceau in response.iter_content(chunk_size=1024):
            if morceau:
                fichier.write(morceau)
                barre_progression.update(len(morceau))


def executing_Cuda():
    install_cmd = "cuda_12.3.2_546.12_windows.exe"
    subprocess.run([install_cmd], check=True)

download_cudaToolkit()
os.system("cls")
executing_Cuda()
sys.exit(1)