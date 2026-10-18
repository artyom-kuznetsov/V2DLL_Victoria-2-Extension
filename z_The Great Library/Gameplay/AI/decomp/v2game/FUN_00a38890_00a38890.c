// FUN_00a38890 @ 00a38890 body=[[00a38890, 00a388a8]]


void FUN_00a38890(LPCSTR param_1)

{
  if (0xf < *(uint *)(param_1 + 0x14)) {
    param_1 = *(LPCSTR *)param_1;
  }
  DeleteFileA(param_1);
  return;
}

