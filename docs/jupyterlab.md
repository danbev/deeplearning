### Jupiterlab notes

#### Install
Set up a conda environment:
```console
$ conda create -n jupiterlab
$ conda activate jupiterlab
```

Install 
```console
(jupiterlab) $ conda install -c conda-forge jupyterlab
```

```console
$ npm install -g ijavascript
$ conda activate jupiterlab
(jupiterlab) $ ijsinstall
```


### Starting
```console
(jupiterlab) $ jupyter lab
[I 2021-09-16 09:28:26.561 ServerApp] jupyterlab | extension was successfully linked.
[I 2021-09-16 09:28:26.571 ServerApp] Writing Jupyter server cookie secret to /home/danielbevenius/.local/share/jupyter/runtime/jupyter_cookie_secret
[I 2021-09-16 09:28:26.741 ServerApp] nbclassic | extension was successfully linked.
[I 2021-09-16 09:28:26.763 ServerApp] nbclassic | extension was successfully loaded.
[I 2021-09-16 09:28:26.764 LabApp] JupyterLab extension loaded from /home/danielbevenius/.conda/envs/jupiterlab/lib/python3.9/site-packages/jupyterlab
[I 2021-09-16 09:28:26.764 LabApp] JupyterLab application directory is /home/danielbevenius/.conda/envs/jupiterlab/share/jupyter/lab
[I 2021-09-16 09:28:26.768 ServerApp] jupyterlab | extension was successfully loaded.
[I 2021-09-16 09:28:26.768 ServerApp] Serving notebooks from local directory: /home/danielbevenius/work/machine-learning/jupiterlab
[I 2021-09-16 09:28:26.768 ServerApp] Jupyter Server 1.11.0 is running at:
[I 2021-09-16 09:28:26.768 ServerApp] http://localhost:8888/lab?token=4547b6d592d94290634ab3874f761711e60576584589cb81
[I 2021-09-16 09:28:26.768 ServerApp]  or http://127.0.0.1:8888/lab?token=4547b6d592d94290634ab3874f761711e60576584589cb81
[I 2021-09-16 09:28:26.768 ServerApp] Use Control-C to stop this server and shut down all kernels (twice to skip confirmation).
[C 2021-09-16 09:28:26.812 ServerApp] 
    
    To access the server, open this file in a browser:
        file:///home/danielbevenius/.local/share/jupyter/runtime/jpserver-1704908-open.html
    Or copy and paste one of these URLs:
        http://localhost:8888/lab?token=4547b6d592d94290634ab3874f761711e60576584589cb81
     or http://127.0.0.1:8888/lab?token=4547b6d592d94290634ab3874f761711e60576584589cb81
[I 2021-09-16 09:28:30.420 LabApp] Build is up to date
```
This will open up http://localhost:8888/lab in a web browser.
