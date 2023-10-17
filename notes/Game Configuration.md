# Touhou 6 Config Format

Touhou 6 stores game configs in a relatively simple way, a 56 byte file named 東方紅魔郷.cfg in a unmodified release.

## File Format

The file is a simple binary file, with the following structure:

| Offset | Size | Description | Type |
| --- | --- | --- | --- |
| 0x00 | 18 | Input Related (x8) | int16_t |
| 0x12 | 2 | Config File Version | uint16_t |
| 0x14 | 4 | Game Version | uint32_t |
| 0x18 | 1 | Starting Lives | uint8_t |
| 0x19 | 1 | Starting Bombs | uint8_t |
| 0x1A | 1 | Graphics Format | uint8_t |
| 0x1B | 1 | BGM Format | uint8_t |
| 0x1C | 1 | Unknown Byte | uint8_t |
| 0x1D | 1 | Unknown Byte | uint8_t |
| 0x1E | 1 | Fullscreen | uint8_t |
| 0x1F | 1 | Frameskip Setting | uint8_t |
| 0x20 | 2 | Deadzone X | uint16_t |
| 0x22 | 2 | Deadzone Y | uint16_t |
| 0x24 | 10 | Unknown Fields (x10) | uint8_t |
| 0x36 | 12 | Unknown Flags Union | uint32_t |