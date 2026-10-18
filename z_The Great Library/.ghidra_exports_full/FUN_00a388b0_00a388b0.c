// FUN_00a388b0 @ 00a388b0 body=[[00a388b0, 00a388cd]]


void FUN_00a388b0(LPCSTR param_1)

{
  if (0xf < *(uint *)(param_1 + 0x14)) {
    param_1 = *(LPCSTR *)param_1;
  }
  SetFileAttributesA(param_1,0x80);
  return;
}

