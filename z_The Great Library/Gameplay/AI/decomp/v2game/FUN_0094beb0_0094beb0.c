// FUN_0094beb0 @ 0094beb0 body=[[0094beb0, 0094c0db] [0094c0f3, 0094c235]]


/* WARNING: Removing unreachable block (ram,0x0094c136) */
/* WARNING: Removing unreachable block (ram,0x0094c0d2) */
/* WARNING: Removing unreachable block (ram,0x0094bf88) */

void FUN_0094beb0(int param_1,int param_2)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int in_ECX;
  undefined4 uVar6;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00bbc108;
  local_14 = ExceptionList;
  if (param_2 < 0x344) {
    if (param_2 != 0x343) {
      if (param_2 < 0x1cb) {
        if (param_2 == 0x1ca) {
          ExceptionList = &local_14;
          FUN_009a19f0();
          ExceptionList = local_14;
          return;
        }
        if (param_2 == 0xc2) {
          ExceptionList = &local_14;
          puVar2 = (undefined4 *)FUN_0055c6c0();
          *(undefined4 *)(in_ECX + 0x20) = *puVar2;
          *(undefined4 *)(in_ECX + 0x24) = puVar2[1];
          ExceptionList = local_14;
          return;
        }
        if (param_2 == 0x109) {
          ExceptionList = &local_14;
          FUN_009a1ce0();
          ExceptionList = local_14;
          return;
        }
      }
      else {
        if (param_2 == 0x2a1) {
          ExceptionList = &local_14;
          FUN_009885d0();
          FUN_0043bb10();
          ExceptionList = local_14;
          return;
        }
        if (param_2 == 0x2f0) {
          ExceptionList = &local_14;
          puVar2 = (undefined4 *)FUN_0055c6c0();
          *(undefined4 *)(in_ECX + 0x10) = *puVar2;
          *(undefined4 *)(in_ECX + 0x14) = puVar2[1];
          ExceptionList = local_14;
          return;
        }
      }
      goto LAB_0094c1c2;
    }
    local_c = 0;
    ExceptionList = &local_14;
    FUN_009a1750();
    iVar3 = FUN_0090cc40();
    piVar4 = (int *)FUN_0090da40();
    if (piVar4 == (int *)0x0) {
      piVar4 = (int *)**(undefined4 **)(iVar3 + 0xc);
    }
    *(int **)(in_ECX + 0xc) = piVar4;
    if ((piVar4 == (int *)0x0) || (cVar1 = (**(code **)(*piVar4 + 0x1c))(), cVar1 == '\0')) {
      iVar3 = FUN_00aaf0c5();
      iVar5 = FUN_0090cc40();
      if (iVar3 < *(int *)(iVar5 + 0x10) - *(int *)(iVar5 + 0xc) >> 2) {
        uVar6 = *(undefined4 *)(*(int *)(iVar5 + 0xc) + iVar3 * 4);
      }
      else {
        uVar6 = **(undefined4 **)(iVar5 + 0xc);
      }
      *(undefined4 *)(in_ECX + 0xc) = uVar6;
    }
  }
  else if (param_2 < 0x5cc) {
    if (param_2 == 0x5cb) {
      ExceptionList = &local_14;
      FUN_009a1ce0();
      ExceptionList = local_14;
      return;
    }
    if (param_2 == 0x381) {
      ExceptionList = &local_14;
      puVar2 = (undefined4 *)FUN_0055c6c0();
      *(undefined4 *)(in_ECX + 0x18) = *puVar2;
      *(undefined4 *)(in_ECX + 0x1c) = puVar2[1];
      ExceptionList = local_14;
      return;
    }
    if (param_2 != 0x4a2) {
LAB_0094c1c2:
      ExceptionList = &local_14;
      FUN_009a0f40();
      ExceptionList = local_14;
      return;
    }
    ExceptionList = &local_14;
    FUN_009a1c10();
  }
  else {
    if (param_2 != 0x840) {
      if (param_2 == 0xa2b) {
        ExceptionList = &local_14;
        FUN_009a1bb0();
        ExceptionList = local_14;
        return;
      }
      goto LAB_0094c1c2;
    }
    ExceptionList = &local_14;
    iVar3 = FID_conflict__sscanf((char *)(param_1 + 0x22c),"%i");
    if (iVar3 == 0) {
      FUN_009a1140();
    }
  }
  ExceptionList = local_14;
  return;
}

