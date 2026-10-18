// FUN_00617350 @ 00617350 body=[[00617350, 00617435]]


void FUN_00617350(void)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b45913;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = CSelectGreatPowerDialog::vftable;
  local_8 = 1;
  if ((undefined4 *)in_ECX[0x1b] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[0x1b])(1);
  }
  piVar2 = *(int **)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(DAT_012588e8 + 0xb60) * 4) +
                    0xce4);
  if (piVar2 != (int *)0x0) {
    puVar1 = (undefined4 *)in_ECX[0x1c];
    do {
      if ((undefined4 *)*piVar2 == puVar1) {
        for (piVar2 = *(int **)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                        *(int *)(DAT_012588e8 + 0xb60) * 4) + 0xce4);
            (piVar2 != (int *)0x0 && ((undefined4 *)*piVar2 != puVar1)); piVar2 = (int *)piVar2[2])
        {
        }
        FUN_005f2ae0(piVar2);
        if (puVar1 != (undefined4 *)0x0) {
          (**(code **)*puVar1)(1);
        }
        break;
      }
      piVar2 = (int *)piVar2[2];
    } while (piVar2 != (int *)0x0);
  }
  in_ECX[0x1f] = CButtonObserver::vftable;
  local_8 = 0xffffffff;
  FUN_00640880();
  ExceptionList = local_10;
  return;
}

