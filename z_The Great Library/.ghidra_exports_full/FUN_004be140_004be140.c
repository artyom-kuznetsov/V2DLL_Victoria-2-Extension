// FUN_004be140 @ 004be140 body=[[004be140, 004be1e0]]


void FUN_004be140(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b9f88b;
  local_10 = ExceptionList;
  iVar1 = in_ECX[1];
  ExceptionList = &local_10;
  iVar3 = FUN_00aae9af(0x288);
  local_8 = 0;
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    FUN_00955450(iVar3,param_1);
    *(int *)(iVar3 + 0x278) = iVar1;
    *(undefined4 *)(iVar3 + 0x27c) = 0;
    *(undefined1 *)(iVar3 + 0x280) = 0;
  }
  iVar2 = in_ECX[2];
  in_ECX[1] = iVar3;
  in_ECX[2] = iVar2 + 1;
  if (iVar2 != 0) {
    *(int *)(iVar1 + 0x27c) = iVar3;
    ExceptionList = local_10;
    return;
  }
  *in_ECX = iVar3;
  ExceptionList = local_10;
  return;
}

