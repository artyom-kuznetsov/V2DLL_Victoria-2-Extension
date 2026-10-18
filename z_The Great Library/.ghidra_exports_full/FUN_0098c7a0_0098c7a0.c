// FUN_0098c7a0 @ 0098c7a0 body=[[0098c7a0, 0098cab4]]


void FUN_0098c7a0(int param_1,int param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int in_ECX;
  undefined1 local_68 [4];
  undefined1 local_64 [4];
  undefined1 local_60 [4];
  undefined1 local_5c [4];
  undefined1 local_58 [4];
  undefined1 local_54 [4];
  undefined1 local_50 [28];
  undefined1 local_34 [32];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b4fe40;
  local_14 = ExceptionList;
  if (param_2 < 0x5d) {
    if (param_2 == 0x5c) {
      ExceptionList = &local_14;
      piVar2 = (int *)FUN_0098fb60(param_1 + 0x228,local_60);
      *(float *)(in_ECX + 0xc4) = (float)*piVar2 / 1000.0;
      ExceptionList = local_14;
      return;
    }
    switch(param_2) {
    case 0x1d:
      ExceptionList = &local_14;
      FUN_004012f0(in_ECX + 0xa8);
      ExceptionList = local_14;
      return;
    case 0x1f:
      ExceptionList = &local_14;
      piVar2 = (int *)FUN_0098fb60(param_1 + 0x228,local_68);
      *(float *)(in_ECX + 0xa0) = (float)*piVar2 / 1000.0;
      ExceptionList = local_14;
      return;
    case 0x20:
      ExceptionList = &local_14;
      piVar2 = (int *)FUN_0098fb60(param_1 + 0x228,local_64);
      *(float *)(in_ECX + 0xa4) = (float)*piVar2 / 1000.0;
      ExceptionList = local_14;
      return;
    case 0x24:
      ExceptionList = &local_14;
      FUN_009885d0();
      local_c = 0;
      uVar1 = FUN_009bcbf0(local_50,1);
      *(undefined4 *)(in_ECX + 0x90) = uVar1;
      FUN_00408ad0();
      ExceptionList = local_14;
      return;
    case 0x25:
      ExceptionList = &local_14;
      FUN_009885d0();
      local_c = 1;
      uVar1 = FUN_009bcbf0(local_34,1);
      *(undefined4 *)(in_ECX + 0x94) = uVar1;
      FUN_00408ad0();
      ExceptionList = local_14;
      return;
    }
  }
  else if (param_2 < 0x1b9) {
    if (param_2 == 0x1b8) {
      ExceptionList = &local_14;
      FUN_009a1bb0(in_ECX + 200);
      ExceptionList = local_14;
      return;
    }
    if (param_2 == 0x68) {
      ExceptionList = &local_14;
      piVar2 = (int *)FUN_0098fb60(param_1 + 0x228,local_58);
      *(float *)(in_ECX + 0x98) = (float)*piVar2 / 1000.0;
      ExceptionList = local_14;
      return;
    }
    if (param_2 == 0x69) {
      ExceptionList = &local_14;
      piVar2 = (int *)FUN_0098fb60(param_1 + 0x228,local_5c);
      *(float *)(in_ECX + 0x9c) = (float)*piVar2 / 1000.0;
      ExceptionList = local_14;
      return;
    }
  }
  else if (param_2 == 0x1b9) {
    ExceptionList = &local_14;
    piVar2 = (int *)FUN_0098fb60(param_1 + 0x228,local_54);
    *(float *)(in_ECX + 0xcc) = (float)*piVar2 / 1000.0;
    ExceptionList = local_14;
    return;
  }
  ExceptionList = &local_14;
  FUN_00a20b80(param_1,param_2);
  ExceptionList = local_14;
  return;
}

