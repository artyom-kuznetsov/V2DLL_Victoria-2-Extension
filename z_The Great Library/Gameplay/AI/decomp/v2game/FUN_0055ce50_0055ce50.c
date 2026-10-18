// FUN_0055ce50 @ 0055ce50 body=[[0055ce50, 0055cf0d] [0055cf11, 0055cf2b] [0055cf2f, 0055cf49] [0055cf4d, 0055cf62]]


int FUN_0055ce50(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  uint local_68 [4];
  undefined4 local_58;
  uint local_54;
  uint local_4c;
  undefined4 local_3c;
  uint local_38;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3dad8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar2 = FUN_0055d120(param_1);
  if (iVar2 != *(int *)(in_ECX + 4)) {
    cVar1 = FUN_0098ab20();
    if (cVar1 == '\0') goto LAB_0055cf4d;
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  local_8 = 0;
  local_54 = 0xf;
  local_58 = 0;
  local_68[0] = local_68[0] & 0xffffff00;
  FUN_00408ed0(param_1,0,0xffffffff);
  local_8._0_1_ = 1;
  local_38 = 0xf;
  local_3c = 0;
  local_4c = local_4c & 0xffffff00;
  FUN_00408ed0(local_30,0,0xffffffff);
  local_8 = CONCAT31(local_8._1_3_,2);
  uVar3 = FUN_0055daf0(local_68);
  FUN_0055d670(iVar2,uVar3);
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_4c);
  }
  local_38 = 0xf;
  local_3c = 0;
  local_4c = local_4c & 0xffffff00;
  if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_68[0]);
  }
  local_54 = 0xf;
  local_58 = 0;
  local_68[0] = local_68[0] & 0xffffff00;
  iVar2 = param_1;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
LAB_0055cf4d:
  ExceptionList = local_10;
  return iVar2 + 0x28;
}

