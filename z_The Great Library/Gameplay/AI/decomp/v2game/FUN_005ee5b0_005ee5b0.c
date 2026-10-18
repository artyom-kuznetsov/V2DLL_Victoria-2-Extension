// FUN_005ee5b0 @ 005ee5b0 body=[[005ee5b0, 005ee6dd]]


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005ee5b0(void)

{
  int *piVar1;
  void *pvVar2;
  int *in_EAX;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  
  piVar5 = (int *)*in_EAX;
  iVar3 = in_EAX[1] - (int)piVar5 >> 2;
  if (iVar3 != 0) {
    piVar1 = piVar5 + iVar3;
    for (; piVar5 != piVar1; piVar5 = piVar5 + 1) {
      if ((undefined4 *)*piVar5 != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)*piVar5)(1);
      }
    }
  }
  pvVar2 = (void *)*in_EAX;
  if (pvVar2 != (void *)in_EAX[1]) {
    FID_conflict__memcpy(pvVar2,(void *)in_EAX[1],0);
    in_EAX[1] = (int)pvVar2;
  }
  piVar5 = (int *)in_EAX[4];
  iVar3 = in_EAX[5] - (int)piVar5 >> 2;
  if (iVar3 != 0) {
    piVar1 = piVar5 + iVar3;
    for (; piVar5 != piVar1; piVar5 = piVar5 + 1) {
      if ((undefined4 *)*piVar5 != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)*piVar5)(1);
      }
    }
  }
  pvVar2 = (void *)in_EAX[4];
  if (pvVar2 != (void *)in_EAX[5]) {
    FID_conflict__memcpy(pvVar2,(void *)in_EAX[5],0);
    in_EAX[5] = (int)pvVar2;
  }
  if ((undefined4 *)in_EAX[8] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_EAX[8])(1);
  }
  puVar4 = (undefined4 *)FUN_00aae9af(0x20);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    _DAT_012588d0 = _DAT_012588d0 + 1;
    *puVar4 = CHistoryContainer::vftable;
    puVar4[1] = 0x18d;
    puVar4[2] = 43800000;
    puVar4[2] = DAT_01259abc;
    puVar4[3] = 0;
    puVar4[4] = 0;
    puVar4[5] = 0;
    *(undefined1 *)(puVar4 + 6) = 0;
    puVar4[7] = 0;
    *puVar4 = CDiplomaticHistory::vftable;
  }
  in_EAX[8] = (int)puVar4;
  FUN_008601b0(in_EAX + 10);
  FUN_008601b0(in_EAX + 0xe);
  FUN_005edbc0();
  return;
}

