// FUN_00472e00 @ 00472e00 body=[[00472e00, 00472f42]]


void FUN_00472e00(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int in_ECX;
  undefined1 local_3c [40];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  uVar1 = DAT_012587e4;
  local_c = 0xffffffff;
  puStack_10 = &LAB_00bbc108;
  local_14 = ExceptionList;
  if (param_2 < 0x666) {
    if (param_2 == 0x665) {
      ExceptionList = &local_14;
      iVar2 = FID_conflict__sscanf((char *)(param_1 + 0x22c),"%u",in_ECX + 0x28);
      if (iVar2 == 0) {
        FUN_009a1140();
        ExceptionList = local_14;
        return;
      }
    }
    else {
      if (param_2 == 0x449) {
        ExceptionList = &local_14;
        *(undefined4 *)(in_ECX + 8) = 2;
        puVar3 = (undefined4 *)FUN_0055c6c0(uVar1,local_3c,param_1 + 0x22c);
        *(undefined4 *)(in_ECX + 0x10) = *puVar3;
        *(undefined4 *)(in_ECX + 0x14) = puVar3[1];
        ExceptionList = local_14;
        return;
      }
      if (param_2 == 0x63b) {
        ExceptionList = &local_14;
        *(undefined4 *)(in_ECX + 8) = 1;
        uVar1 = FUN_009885d0();
        local_c = 0;
        iVar2 = FUN_00975ed0(uVar1);
        if (iVar2 == 0) {
          iVar2 = FUN_00974850();
        }
        *(int *)(in_ECX + 0xc) = iVar2;
        FUN_00408ad0();
        ExceptionList = local_14;
        return;
      }
    }
  }
  else if ((param_2 == 0x95e) || (param_2 == 0xa22)) {
    ExceptionList = &local_14;
    FUN_009a1d40();
  }
  ExceptionList = local_14;
  return;
}

