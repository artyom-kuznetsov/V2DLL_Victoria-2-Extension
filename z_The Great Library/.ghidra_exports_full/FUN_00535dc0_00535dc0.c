// FUN_00535dc0 @ 00535dc0 body=[[00535dc0, 00535f7c] [00535f80, 00535fb3]]


void FUN_00535dc0(int param_1,int param_2,undefined4 *param_3,undefined4 param_4,int param_5,
                 int param_6)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  char cVar6;
  int *local_24;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00ba6c10;
  local_10 = ExceptionList;
  iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + param_3[1] * 4);
  local_24 = *(int **)(param_2 + 0xc);
  ExceptionList = &local_10;
LAB_00535e01:
  do {
    do {
      if ((local_24 < *(int **)(param_2 + 0xc)) || (*(int **)(param_2 + 0x10) <= local_24)) {
        ExceptionList = local_10;
        return;
      }
      piVar2 = (int *)*local_24;
      local_24 = local_24 + 1;
    } while (((char)piVar2[0x4c] != '\0') ||
            (cVar6 = (**(code **)(*piVar2 + 0x20))(param_4), cVar6 == '\0'));
    iVar3 = *(int *)(*(int *)(param_1 + 0xbe8) + param_3[1] * 4);
    cVar6 = (**(code **)(piVar2[0x1a] + 0x18))(param_4);
    piVar4 = *(int **)(iVar3 + 0x50);
    do {
      if (piVar4 == (int *)0x0) {
        if (((cVar6 != '\0') &&
            (0 < (int)(*(int *)(iVar1 + 0x9dc) - *(int *)(iVar1 + 0x9d8) & 0xfffffffcU))) &&
           (FUN_00535fc0(param_3,piVar2 + 5,0xffffffff,0), param_5 != 0)) {
          FUN_004d61d0();
        }
        goto LAB_00535e01;
      }
      puVar5 = (undefined4 *)*piVar4;
      piVar4 = (int *)piVar4[2];
    } while (puVar5[9] != piVar2[2]);
    if (((cVar6 == '\0') ||
        ((int)(*(int *)(iVar1 + 0x9dc) - *(int *)(iVar1 + 0x9d8) & 0xfffffffcU) < 1)) &&
       (((int)puVar5[6] < *(int *)(DAT_012588e8 + 0xb0c) &&
        (cVar6 = FUN_00534ab0(param_1,piVar2,*param_3,param_3[1]), cVar6 == '\0')))) {
      if (param_6 != 0) {
        FUN_004d61d0();
      }
      *(undefined1 *)(iVar3 + 0x71) = 1;
      for (piVar2 = *(int **)(iVar3 + 0x50);
          (piVar2 != (int *)0x0 && ((undefined4 *)*piVar2 != puVar5)); piVar2 = (int *)piVar2[2]) {
      }
      FUN_005f2ae0(piVar2);
      for (piVar2 = *(int **)(DAT_012588e8 + 0xa84);
          (piVar2 != (int *)0x0 && ((undefined4 *)*piVar2 != puVar5)); piVar2 = (int *)piVar2[2]) {
      }
      FUN_005f2ae0(piVar2);
      (**(code **)*puVar5)(1);
    }
  } while( true );
}

