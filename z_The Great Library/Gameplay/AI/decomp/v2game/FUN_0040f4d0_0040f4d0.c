// FUN_0040f4d0 @ 0040f4d0 body=[[0040f4d0, 0040f608] [0040f60c, 0040f73d]]


void FUN_0040f4d0(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int in_ECX;
  int *piVar5;
  code *pcVar6;
  undefined4 local_34 [5];
  uint local_20;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3d918;
  local_10 = ExceptionList;
  if ((((*(int *)(in_ECX + 0x34c) != 0) || (iVar3 = *(int *)(in_ECX + 0x390), iVar3 == 0)) ||
      (*(char *)(iVar3 + 0x1f0) == '\0')) ||
     ((*(int *)(iVar3 + 0x218) != *(int *)(in_ECX + 0x3a4) || (*(char *)(in_ECX + 0x39d) != '\0'))))
  {
    ExceptionList = &local_10;
    (**(code **)(*(int *)(*(int *)(in_ECX + 0x30) + 0x18) + 0x38))();
    iVar3 = *(int *)(in_ECX + 0x38);
    goto LAB_0040f724;
  }
  ExceptionList = &local_10;
  if (*(char *)(*(int *)(in_ECX + 0x30) + 0x67) == '\0') {
    ExceptionList = &local_10;
    (**(code **)(*(int *)(*(int *)(in_ECX + 0x30) + 0x18) + 0x34))();
  }
  iVar2 = FUN_004149e0();
  iVar3 = *(int *)(in_ECX + 0x34);
  local_18 = iVar2;
  if (iVar2 < 1) {
    piVar5 = (int *)(iVar3 + 0x18);
LAB_0040f68b:
    pcVar6 = *(code **)(*piVar5 + 0x38);
  }
  else {
    if (*(char *)(iVar3 + 0x67) == '\0') {
      (**(code **)(*(int *)(iVar3 + 0x18) + 0x34))();
    }
    iVar3 = *(int *)(in_ECX + 0x4c);
    local_14 = 0;
    if (0 < (int)(*(int *)(in_ECX + 0x50) - iVar3 & 0xfffffffcU)) {
      do {
        iVar2 = local_14;
        piVar5 = *(int **)(iVar3 + local_14 * 4);
        if (local_14 < local_18) {
          FUN_00414910();
          local_8 = 0;
          cVar1 = FUN_0040b360();
          if (cVar1 == '\0') {
            (**(code **)(*piVar5 + 0xe4))(local_34);
            (**(code **)(*piVar5 + 0x48))(local_14 + 1);
            (**(code **)(*piVar5 + 0x34))();
          }
          else {
            (**(code **)(*piVar5 + 0x38))();
          }
          local_8 = 0xffffffff;
          if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_34[0]);
          }
        }
        else {
          (**(code **)(*piVar5 + 0x38))();
          local_14 = iVar2;
        }
        iVar3 = *(int *)(in_ECX + 0x4c);
        local_14 = local_14 + 1;
        iVar2 = local_18;
      } while (local_14 < *(int *)(in_ECX + 0x50) - iVar3 >> 2);
    }
    iVar3 = (*(int **)(in_ECX + 0x398))[**(int **)(in_ECX + 0x398) + 1];
    if ((iVar3 < 0) || (iVar2 <= iVar3)) {
      piVar5 = *(int **)(in_ECX + 0x60);
      goto LAB_0040f68b;
    }
    iVar2 = **(int **)(in_ECX + 0x60);
    puVar4 = (undefined4 *)
             (**(code **)(**(int **)(*(int *)(in_ECX + 0x4c) + iVar3 * 4) + 0x3c))(&local_18);
    (**(code **)(iVar2 + 200))(*puVar4);
    (**(code **)(**(int **)(in_ECX + 0x60) + 0x34))();
    pcVar6 = *(code **)(**(int **)(in_ECX + 0x60) + 0x124);
  }
  (*pcVar6)();
  piVar5 = *(int **)(*(int *)(in_ECX + 0x3c) + **(int **)(in_ECX + 0x398) * 4);
  if (piVar5 == (int *)0x0) {
    pcVar6 = *(code **)(**(int **)(in_ECX + 0x5c) + 0x38);
  }
  else {
    iVar3 = **(int **)(in_ECX + 0x5c);
    puVar4 = (undefined4 *)(**(code **)(*piVar5 + 0x3c))(&local_14);
    (**(code **)(iVar3 + 200))(*puVar4);
    (**(code **)(**(int **)(in_ECX + 0x5c) + 0x34))();
    pcVar6 = *(code **)(**(int **)(in_ECX + 0x5c) + 0x124);
  }
  (*pcVar6)();
  iVar3 = *(int *)(in_ECX + 0x38);
  if (**(int **)(in_ECX + 0x398) == 5) {
    if (*(char *)(iVar3 + 0x67) != '\0') {
      ExceptionList = local_10;
      return;
    }
    (**(code **)(*(int *)(iVar3 + 0x18) + 0x34))();
    ExceptionList = local_10;
    return;
  }
LAB_0040f724:
  (**(code **)(*(int *)(iVar3 + 0x18) + 0x38))();
  ExceptionList = local_10;
  return;
}

