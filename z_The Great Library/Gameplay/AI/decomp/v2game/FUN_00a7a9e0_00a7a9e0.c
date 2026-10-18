// FUN_00a7a9e0 @ 00a7a9e0 body=[[00a7a9e0, 00a7aa49]]


undefined4 FUN_00a7a9e0(void)

{
  int *in_ECX;
  tagRECT local_1c;
  int local_c;
  int local_8;
  
  if ((char)in_ECX[0x34] != '\0') {
    return 1;
  }
  (**(code **)(*in_ECX + 0x4c))(&local_c);
  GetWindowRect((HWND)in_ECX[0x33],&local_1c);
  if ((((-1 < local_c) && (local_c <= local_1c.right - local_1c.left)) && (-1 < local_8)) &&
     (local_8 <= local_1c.bottom - local_1c.top)) {
    return 1;
  }
  return 0;
}

