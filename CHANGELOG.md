# Changelog

## 2025-01-20

### Common to all chapters

#### Added

- Added various .gitignore files.

#### Fixed

- Cleaned thread CPU affinity, otherwise GRC might fail to run on computer with few CPU cores.
- Changed some SDR Source block|DC Offset Mode to Automatic (2), otherwise DC is too high thus can't work properly (e.g. ex_fig_5_25_26_27.grc can't decode data).

#### Changed

- Revised README.md, added various preparation to run examples.
- Changed GRC options block parameter id, to be same as file name.
- Changed GRC options block parameter title, to match Figure numbering, and with a meaningful sentence.
- When Time Sink display complex signal, changed 'Signal 1'/'Signal 2' to 'Signal 1 - I'/'Signal 1 - Q', to emphasis the fact that they are 2 compoments of 1 signal.
- Some GRC only has PlutoSDR Source/Sink, added osmocom Source/Sink to allow using non-Pluto SDR (e.g. USRP).
- A few GRC block parameters are automatically changed by GNU Radio 3.10.9.2

### Chapter 1

#### ex1_06.grc

##### Fixed

- Removed some special parameters (e.g. Mb0: Clock Source) of UHD: USRP Source block, otherwise it might fail to run on some USRP devices (e.g. USRP B210).

#### ex1_10.grc

##### Changed

- Arranged signal order and revised signal labels to better reflect the quantization comparison.

#### ex1_11.grc

##### Fixed

- Changed samp_rate default value to 48000, otherwise it might fail to play audio on legacy sound card.

### Chapter 2

#### ex2_09.grc

##### Fixed

- Fixed osmocom Source|Ch0: Frequency.
- Fixed Audio Sink|Sample Rate.

##### Changed

- Revised QT GUI Range f:Start to 87.
- Revised samp_rate decimation expressions, to follow consitent logic.

#### ex2_14.grc

##### Changed

- Revised signal labels to better reflect modulation comparison.
- Revised QT GUI Time Sink|Y min/Y max.

### Chapter 4

#### ex4_01.grc

##### Changed

- Revised QT GUI Time Sink|Y max.

#### ex4_04.grc

##### Changed

- Revised QT GUI Time Sink|Y max.

#### ex4_06.grc

##### Changed

- Revised signal labels.
- Revised QT GUI Time Sink|Autoscale to Yes.

### Chapter 5

#### ex_fig_5_6.grc

##### Changed

- Revised signal labels.

#### ex_fig_5_8.grc

##### Changed

- Changed File Source|File to qpsk_msg_rec_symb.
- Added Random Source.

### Chapter 6

#### Changed

- Many GRC filenames don't match Figure numbering, changed accordingly.
  - ex6_03.grc/png      -> ex_fig_6_3.grc/png
  - ex_fig_6_3.grc/png  -> ex_fig_6_4.grc/png
  - ex_fig_6_4.grc/png  -> ex_fig_6_5.grc/png
  - ex_fig_6_7.grc/png  -> ex_fig_6_8.grc/png
  - ex_fig_6_10.grc/png -> ex_fig_6_11.grc/png
  - ex_fig_6_11.grc/png -> ex_fig_6_12.grc/png

### Chapter 7

#### ex_fig_7_24.grc

##### Fixed

- Fixed UHD: USRP Source|Clock Rate (Hz) to Default, because the specified 8*samp_rate is not accepted for some USRP devices (e.g. USRP B210).

### Chapter 8

#### ex8_01.grc

##### Fixed

- Fixed File Source|File to MeteorM2N_180501_17h52_after_resampler.sigmf-data

##### Changed

- Change Throttle|Sample Rate to samp_rate, to reflect actual processing speed.

#### ex8_01_withRRC.grc

##### Fixed

- Fixed File Source|File to MeteorM2N_180501_17h52_after_resampler.sigmf-data

##### Changed

- Added Throttle block, to reflect actual processing speed.
