// FUN_0067a730 @ 0067a730 body=[[0067a730, 0067a7c9]]


void FUN_0067a730(int param_1,undefined4 *param_2)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *unaff_ESI;
  bool bVar6;
  
  iVar3 = (int)param_2;
  puVar5 = (undefined4 *)(*(undefined4 **)(param_1 + 4))[1];
  bVar6 = true;
  cVar1 = *(char *)((int)puVar5 + 0x21);
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
    cVar1 = *(char *)((int)puVar4 + 0x21);
  }
  param_2 = puVar2;
  if (bVar6) {
    if (puVar2 == (undefined4 *)**(int **)(param_1 + 4)) {
      bVar6 = true;
      goto LAB_0067a780;
    }
    FUN_00445c00();
  }
  if (*(int *)(iVar3 + 0xc) <= (int)param_2[3]) {
    FUN_00679f00();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(iVar3);
  }
LAB_0067a780:
  puVar5 = (undefined4 *)FUN_0067a7e0(&param_1,bVar6,iVar3);
  *unaff_ESI = *puVar5;
  *(undefined1 *)(unaff_ESI + 1) = 1;
  return;
}

