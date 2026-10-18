// FUN_00a79730 @ 00a79730 body=[[00a79730, 00a79799]]


undefined8 FUN_00a79730(int param_1)

{
  LPCSTR lpDirectoryName;
  ULARGE_INTEGER local_20;
  ULARGE_INTEGER local_18;
  ULARGE_INTEGER local_10;
  
  lpDirectoryName = *(LPCSTR *)(DAT_013f0744 + param_1 * 4);
  if (0xf < *(uint *)(lpDirectoryName + 0x14)) {
    lpDirectoryName = *(LPCSTR *)lpDirectoryName;
  }
  GetDiskFreeSpaceExA(lpDirectoryName,&local_10,&local_18,&local_20);
  if (DAT_01252644 == 0) {
    return CONCAT44(local_20.s.HighPart,local_20.s.LowPart);
  }
  if (DAT_01252644 == 1) {
    return CONCAT44(local_20.s.HighPart >> 10,local_20.s.LowPart >> 10 | local_20.s.HighPart << 0x16
                   );
  }
  return CONCAT44(local_20.s.HighPart >> 0x14,
                  local_20.s.LowPart >> 0x14 | local_20.s.HighPart << 0xc);
}

