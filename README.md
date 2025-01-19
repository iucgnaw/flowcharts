# Flowcharts

Supporting flowcharts for the book [Communication systems engineering with GNU Radio - a hands-on approach](https://www.wiley.com/en-fr/Communication+Systems+Engineering+with+GNU+Radio%3A+A+Hands-on+Approach-p-9781394218882).

<img src="https://www.wiley.com/storefront-pdp-assets/_next/image?url=https%3A%2F%2Fmedia.wiley.com%2Fproduct_data%2FcoverImage300%2F85%2F13942188%2F1394218885.jpg&w=384&q=75">

## Dependencies

Below actions are tested on Ubuntu 24.04 minimal installation.

### GNU Radio

```
sudo apt install gnuradio
```

All flowcharts designed and tested with GNU Radio 3.10, best displayed with the following
options (``View`` menu) active:
* Show parameter expressions in block
* Show parameter value in block
* Show block comments

### USRP/UHD

#### Install UHD Host Utilities

```
sudo apt install uhd-host
```

#### Download UHD Images

```
sudo uhd_images_downloader
```

#### Setup for USB-based USRP Devices (e.g. B210)

```
cd /usr/libexec/uhd/utils/
sudo cp uhd-usrp.rules /etc/udev/rules.d/
sudo udevadm control --reload-rules
sudo udevadm trigger
```

### Build Tools

Out of Tree (OOT) block compilation assumes a functional ``GNU Radio`` environment, ``cmake`` and ``GCC``, most probably on a GNU/Linux computer.

```
sudo apt install build-essential cmake
```

## By Chapters

### Chapter 2

#### Signal Files
Downlaod [analog_FM_France.sigmf-data](https://iqengine.org/api/datasources/gnuradiofast/iqengine/analog_FM_France.sigmf-data), [analog_FM_France.sigmf-meta](https://iqengine.org/api/datasources/gnuradiofast/iqengine/analog_FM_France.sigmf-meta), [3genuine_69dB_11h15_1.sigmf-data](https://iqengine.org/api/datasources/gnuradiofast/iqengine/space/3genuine_69dB_11h15_1.sigmf-data) and [3genuine_69dB_11h15_1.sigmf-meta](https://iqengine.org/api/datasources/gnuradiofast/iqengine/space/3genuine_69dB_11h15_1.sigmf-meta), put into chapter folder.

#### OOT Module

##### gr-osmosdr

```
sudo apt install gr-osmosdr
```

##### gr-acars

```
cd ~
git clone git://git.code.sf.net/p/gr-acars/code gr-acars
cd gr-acars/3.10ng/
mkdir build
cd build/
cmake ../
make
sudo make install
sudo ldconfig
```

### Chapter 3

#### Octave

```
sudo apt install octave octave-dev
```

##### Octave Package: instrument-control

Run Octave, in Command Window, run below to install:

```
pkg install -forge instrument-control
```

Run below to verify:

```
pkg list instrument-control
```

#### multimon-ng

```
sudo apt install multimon-ng
```

### Chapter 4

#### Signal Files
Downlaod [3genuine_69dB_11h15_1.sigmf-data](https://iqengine.org/api/datasources/gnuradiofast/iqengine/space/3genuine_69dB_11h15_1.sigmf-data) and [3genuine_69dB_11h15_1.sigmf-meta](https://iqengine.org/api/datasources/gnuradiofast/iqengine/space/3genuine_69dB_11h15_1.sigmf-meta), put into chapter folder.

### Chapter 5

#### gr-rds

```
sudo apt install gr-rds
```

### Chapter 6

#### gr-message

Build and install the companion gr-message

```
cd chap6_synchronization_tags/gr-message/
mkdir build
cd build/
cmake ../
make
sudo make install
sudo ldconfig
```

#### gr-dab

##### Dependencies

```
sudo apt install autoconf libtool pyqt5-dev-tools libfaad-dev libzmq3-dev
```

##### Build and install fdk-aac from Opendigitalradio

NOTE: Don't install libfdk-aac2 and libfdk-aac-dev from apt, as it doesn't support DAB

```
cd ~
git clone https://github.com/Opendigitalradio/fdk-aac.git
cd fdk-aac
./bootstrap
./configure
make
sudo make install
sudo ldconfig
```

##### Build and install gr-dab from hboeglen

```
cd ~
git clone https://github.com/hboeglen/gr-dab.git

cd gr-dab/
cd fdk-aac-dab/
./bootstrap
./configure
make
sudo make install
sudo ldconfig

cd ../
cd ODR-AudioEnc/
./bootstrap
./configure
make
sudo make install
sudo ldconfig

cd ../
mkdir build
cd build/
cmake -DENABLE_DOXYGEN=OFF ../
make
sudo make install
sudo ldconfig
```

#### gr-nordic

##### Dependencies

```
sudo apt install python3-pip
pip3 install bitstring
```

If pip3 reports "error: externally-managed-environment", rename /usr/lib/python3.x/EXTERNALLY-MANAGED (e.g. to EXTERNALLY-MANAGED.old), then run ```pip3 install``` again. E.g.:

```
sudo mv /usr/lib/python3.12/EXTERNALLY-MANAGED /usr/lib/python3.12/EXTERNALLY-MANAGED.old
```

##### Build and install gr-nordic from hboeglen

```
cd ~
git clone https://github.com/hboeglen/gr-nordic.git
cd gr-nordic/
git checkout maint-3.10
mkdir build
cd build/
cmake ../
make
sudo make install
sudo ldconfig
```

### Chapter 8

#### Signal Files
Downlaod [MeteorM2_180502_14h12.sigmf-data](https://iqengine.org/api/datasources/gnuradiofast/iqengine/space/MeteorM2_180502_14h12.sigmf-data), [MeteorM2_180502_14h12.sigmf-meta](https://iqengine.org/api/datasources/gnuradiofast/iqengine/space/MeteorM2_180502_14h12.sigmf-meta), [MeteorM2N_180501_17h52_after_resampler.sigmf-data](https://iqengine.org/api/datasources/gnuradiofast/iqengine/space/MeteorM2N_180501_17h52_after_resampler.sigmf-data) and [MeteorM2N_180501_17h52_after_resampler.sigmf-meta](https://iqengine.org/api/datasources/gnuradiofast/iqengine/space/MeteorM2N_180501_17h52_after_resampler.sigmf-meta), put into chapter folder.

