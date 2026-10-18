// FUN_00a47660 @ 00a47660 body=[[00a47660, 00a476fb]]


void FUN_00a47660(int param_1,undefined4 *param_2)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *unaff_EDI;
  bool bVar6;
  
  iVar3 = (int)param_2;
  puVar5 = (undefined4 *)(*(undefined4 **)(param_1 + 4))[1];
  bVar6 = true;
  cVar1 = *(char *)((int)puVar5 + 0x29);
  puVar2 = *(undefined4 **)(param_1 + 4);
  while (cVar1 == '\0') {
    bVar6 = *(int *)((int)param_2 + 0xc) < (int)puVar5[3];
    if (bVar6) {
      puVar4 = (undefined4 *)*puVar5;
    }
    else {
      puVar4 = (undefined4 *)puVar5[2];
    }
    puVar2 = puVar5;
    puVar5 = puVar4;
    cVar1 = *(char *)((int)puVar4 + 0x29);
  }
  param_2 = puVar2;
  if (bVar6) {
    if (puVar2 == (undefined4 *)**(int **)(param_1 + 4)) {
      bVar6 = true;
      goto LAB_00a476b0;
    }
    FUN_00a478a0();
  }
  if (*(int *)(iVar3 + 0xc) <= (int)param_2[3]) {
    FUN_0098bf40();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(iVar3 + 0x10));
  }
LAB_00a476b0:
  puVar5 = (undefined4 *)FUN_00a47720(&param_1,bVar6,iVar3);
  *unaff_EDI = *puVar5;
  *(undefined1 *)(unaff_EDI + 1) = 1;
  return;
}

