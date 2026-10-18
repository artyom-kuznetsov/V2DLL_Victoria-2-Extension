// FUN_00457b00 @ 00457b00 body=[[00457b00, 00457bbe] [00457bc8, 00457c2b]]


void FUN_00457b00(int param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int local_84;
  int local_80;
  uint local_7c;
  undefined4 local_6c;
  uint local_68;
  undefined1 local_60 [8];
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_38;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00ba1a88;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_0068f390();
  uVar2 = FUN_0045e4e0(param_2);
  iVar4 = DAT_012586f4;
  local_c = 0;
  local_84 = FUN_00462500(uVar2);
  if (local_84 != *(int *)(iVar4 + 0x178)) {
    cVar1 = FUN_0098ab20();
    if (cVar1 == '\0') {
      piVar3 = &local_84;
      goto LAB_00457b89;
    }
  }
  local_80 = *(int *)(iVar4 + 0x178);
  piVar3 = &local_80;
LAB_00457b89:
  if (*piVar3 == *(int *)(iVar4 + 0x178)) {
    iVar4 = 1;
  }
  else {
    iVar4 = *(int *)(*piVar3 + 0x28);
  }
  *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + iVar4;
  local_c = 0xffffffff;
  if (0xf < local_68) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_7c);
  }
  local_68 = 0xf;
  local_6c = 0;
  local_7c = local_7c & 0xffffff00;
  FUN_008a8650(0);
  local_58 = *(undefined4 *)(DAT_012588e8 + 0xb5c);
  local_54 = *(undefined4 *)(DAT_012588e8 + 0xb60);
  local_38 = param_2;
  FUN_0045f0d0(local_60);
  ExceptionList = local_14;
  return;
}

