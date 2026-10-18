// FUN_004e5180 @ 004e5180 body=[[004e5180, 004e5202]]


void FUN_004e5180(undefined4 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int in_EAX;
  undefined4 *puVar6;
  undefined4 *unaff_ESI;
  
  piVar5 = *(int **)(in_EAX + 0x94);
  while (piVar5 != (int *)0x0) {
    piVar1 = (int *)piVar5[2];
    iVar2 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *piVar5 * 4);
    piVar5 = piVar1;
    if (*(int *)(iVar2 + 300) == param_2) {
      uVar3 = *(undefined4 *)(iVar2 + 0x58);
      iVar2 = unaff_ESI[1];
      puVar6 = (undefined4 *)FUN_00aae9af(0x10);
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)0x0;
      }
      else {
        *puVar6 = uVar3;
        puVar6[1] = iVar2;
        puVar6[2] = 0;
        *(undefined1 *)(puVar6 + 3) = 0;
      }
      iVar4 = unaff_ESI[2];
      unaff_ESI[1] = puVar6;
      unaff_ESI[2] = iVar4 + 1;
      if (iVar4 == 0) {
        *unaff_ESI = puVar6;
      }
      else {
        *(undefined4 **)(iVar2 + 8) = puVar6;
      }
    }
  }
  return;
}

