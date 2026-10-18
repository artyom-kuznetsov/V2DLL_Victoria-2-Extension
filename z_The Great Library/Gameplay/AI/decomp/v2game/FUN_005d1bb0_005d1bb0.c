// FUN_005d1bb0 @ 005d1bb0  (requested 005D1BB0, first bytes: 55 8B EC 64 A1 00 00 00)


void FUN_005d1bb0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  undefined4 *puVar5;
  int *in_ECX;
  int *piVar6;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00b5f790;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (((int *)in_ECX[0x1d] == (int *)0x0) ||
     (ExceptionList = &local_10, cVar3 = (**(code **)(*(int *)in_ECX[0x1d] + 0x2c))(), cVar3 != '\0'
     )) {
    iVar4 = in_ECX[0x1c];
    if (iVar4 != 0) {
      (**(code **)(**(int **)(iVar4 + 0x10) + 0x30))();
      if ((*(int *)(*(int *)(iVar4 + 0x10) + 0x38) - *(int *)(*(int *)(iVar4 + 0x10) + 0x34) &
          0xfffffff8U) == 0) {
        FUN_005b5980(DAT_012588e8 + 0xab4);
      }
      in_ECX[0x1c] = 0;
    }
    if (in_ECX[0x1d] != 0) {
      cVar3 = (**(code **)(*in_ECX + 0x3c))();
      if ((cVar3 == '\0') || (cVar3 = FUN_005cbf30(), cVar3 != '\0')) {
        cVar3 = FUN_005cbec0();
        if (cVar3 != '\0') {
          *(undefined1 *)(in_ECX + 0x41) = 1;
        }
        if (in_ECX[0x1d] != 0) {
          FUN_005a9640();
        }
        in_ECX[0x1d] = 0;
      }
      else {
        piVar6 = *(int **)(in_ECX[0x1d] + 0x14);
        for (puVar1 = (undefined4 *)piVar6[8]; puVar1 != (undefined4 *)0x0;
            puVar1 = (undefined4 *)puVar1[2]) {
          if ((int *)*puVar1 == in_ECX) goto LAB_005d1c5e;
        }
        piVar6 = *(int **)(in_ECX[0x1d] + 0x10);
LAB_005d1c5e:
        cVar3 = (**(code **)(*piVar6 + 0x1c))();
        if (cVar3 == '\0') {
          piVar6 = *(int **)(in_ECX[0x1d] + 0x14);
          for (puVar1 = (undefined4 *)piVar6[8]; puVar1 != (undefined4 *)0x0;
              puVar1 = (undefined4 *)puVar1[2]) {
            if ((int *)*puVar1 == in_ECX) goto LAB_005d1c85;
          }
          piVar6 = *(int **)(in_ECX[0x1d] + 0x10);
LAB_005d1c85:
          (**(code **)(*piVar6 + 0x18))();
        }
      }
    }
    if ((char)param_2 != '\0') {
      if (((in_ECX[0x3b] == 0) || (param_1[2] == 0)) || (*(int *)*param_1 != *(int *)in_ECX[0x39]))
      {
        FUN_00401000(0x3f000000);
        iVar4 = FUN_00b31c00();
        in_ECX[0x3e] = iVar4;
        in_ECX[0x40] = 0;
      }
      FUN_009a63f0();
    }
    puVar1 = (undefined4 *)*param_1;
    while (puVar1 != (undefined4 *)0x0) {
      local_14 = in_ECX[0x3a];
      uVar2 = *puVar1;
      puVar1 = (undefined4 *)puVar1[2];
      puVar5 = (undefined4 *)FUN_00aae9af(0x10);
      if (puVar5 == (undefined4 *)0x0) {
        puVar5 = (undefined4 *)0x0;
      }
      else {
        *puVar5 = uVar2;
        puVar5[1] = local_14;
        puVar5[2] = 0;
        *(undefined1 *)(puVar5 + 3) = 0;
      }
      iVar4 = in_ECX[0x3b];
      in_ECX[0x3a] = (int)puVar5;
      in_ECX[0x3b] = iVar4 + 1;
      if (iVar4 == 0) {
        in_ECX[0x39] = (int)puVar5;
      }
      else {
        *(undefined4 **)(local_14 + 8) = puVar5;
      }
    }
    if (in_ECX[0x3b] != 0) {
      FUN_005d1fc0();
    }
    if (0 < in_ECX[0x15]) {
      FUN_005d24a0(&local_14);
      piVar6 = (int *)in_ECX[0x13];
      while (piVar6 != (int *)0x0) {
        iVar4 = *piVar6;
        piVar6 = (int *)piVar6[2];
        if (*(int *)(iVar4 + 0xdc) == in_ECX[0x37]) {
          FUN_005d1bb0(param_1,param_2);
          FUN_005d24a0(&local_18);
          if (local_14 < local_18) {
            local_14 = local_18;
          }
        }
      }
      piVar6 = (int *)in_ECX[0x13];
      in_ECX[0x2a] = DAT_01259abc;
      in_ECX[0x2b] = local_14;
      while (piVar6 != (int *)0x0) {
        iVar4 = *piVar6;
        piVar6 = (int *)piVar6[2];
        if (*(int *)(iVar4 + 0xdc) == in_ECX[0x37]) {
          *(int *)(iVar4 + 0xa8) = DAT_01259abc;
          *(int *)(iVar4 + 0xac) = local_14;
        }
      }
    }
  }
  ExceptionList = local_10;
  return;
}

