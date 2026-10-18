// FUN_00413350 @ 00413350 body=[[00413350, 00413454] [00413458, 00413469]]


void FUN_00413350(void)

{
  int iVar1;
  int in_ECX;
  int *piVar2;
  int in_EDX;
  int local_44;
  int local_40;
  undefined4 local_34 [5];
  uint uStack_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b4dd10;
  local_14 = ExceptionList;
  if ((*(char *)(in_EDX + 0x39c) != '\0') && (*(int *)(in_EDX + 0x34c) == 2)) {
    for (piVar2 = *(int **)(in_EDX + 0x380);
        (piVar2 != *(int **)(in_EDX + 900) && (*piVar2 != in_ECX)); piVar2 = piVar2 + 1) {
    }
    if ((*(int **)(in_EDX + 0x380) <= piVar2) && (piVar2 < *(int **)(in_EDX + 900))) {
      ExceptionList = &local_14;
      FUN_004063b0(in_ECX);
      local_c = 0;
      FUN_00989510(&local_44,0x2f);
      local_c = CONCAT31(local_c._1_3_,1);
      iVar1 = (local_40 - local_44) / 0x1c;
      piVar2 = (int *)(*(int *)(in_EDX + 0x78) + 0x54);
      if (iVar1 < 1) {
        (**(code **)(*piVar2 + 0x40))(local_34);
      }
      else {
        (**(code **)(*piVar2 + 0x40))(local_44 + -0x1c + iVar1 * 0x1c);
      }
      FUN_009b6400(*(undefined4 *)(in_EDX + 0x78));
      *(undefined2 *)(*(int *)(in_EDX + 0x78) + 0x4c) = 1;
      FUN_0040b3c0();
      if (0xf < uStack_20) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_34[0]);
      }
    }
  }
  ExceptionList = local_14;
  return;
}

