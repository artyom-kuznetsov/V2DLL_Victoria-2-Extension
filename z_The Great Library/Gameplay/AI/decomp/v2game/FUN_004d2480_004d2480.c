// FUN_004d2480 @ 004d2480 body=[[004d2480, 004d24cc] [004d24d0, 004d262e]]


void FUN_004d2480(void)

{
  int *piVar1;
  int in_EAX;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined8 uVar7;
  
  **(undefined4 **)(in_EAX + 0x26c) = 0;
  *(undefined4 *)(*(int *)(in_EAX + 0x26c) + 4) = 0;
  *(undefined4 *)(*(int *)(in_EAX + 0x26c) + 8) = 0;
  *(undefined4 *)(*(int *)(in_EAX + 0x26c) + 0xc) = 0;
  iVar2 = DAT_012588e8;
  if ((*(int *)(in_EAX + 0x4c) - *(int *)(in_EAX + 0x48) & 0xfffffffcU) != 0) {
    for (piVar5 = *(int **)(in_EAX + 0x48);
        (*(int **)(in_EAX + 0x48) <= piVar5 && (piVar5 < *(int **)(in_EAX + 0x4c)));
        piVar5 = piVar5 + 1) {
      iVar4 = *(int *)(*(int *)(iVar2 + 0xacc) + *piVar5 * 4);
      **(int **)(in_EAX + 0x26c) =
           **(int **)(in_EAX + 0x26c) + *(int *)(*(int *)(iVar4 + 0x9c) + 0x1e0);
      piVar1 = (int *)(*(int *)(in_EAX + 0x26c) + 4);
      *piVar1 = *piVar1 + *(int *)(*(int *)(iVar4 + 0x9c) + 0x1e8);
      piVar1 = (int *)(*(int *)(in_EAX + 0x26c) + 8);
      *piVar1 = *piVar1 + *(int *)(*(int *)(iVar4 + 0x9c) + 0x1f0);
    }
    iVar2 = *(int *)(in_EAX + 0x4c) - *(int *)(in_EAX + 0x48) >> 2;
    if (iVar2 != 0) {
      iVar2 = iVar2 * 1000;
      uVar7 = __allmul(**(int **)(in_EAX + 0x26c),**(int **)(in_EAX + 0x26c) >> 0x1f,1000,0);
      uVar3 = __alldiv(uVar7,iVar2,iVar2 >> 0x1f);
      **(undefined4 **)(in_EAX + 0x26c) = uVar3;
      iVar4 = (*(int *)(in_EAX + 0x4c) - *(int *)(in_EAX + 0x48) >> 2) * 1000;
      piVar5 = (int *)(*(int *)(in_EAX + 0x26c) + 4);
      iVar2 = *piVar5;
      uVar7 = __allmul(iVar2,iVar2 >> 0x1f,1000,0);
      iVar2 = __alldiv(uVar7,iVar4,iVar4 >> 0x1f);
      *piVar5 = iVar2;
      iVar4 = (*(int *)(in_EAX + 0x4c) - *(int *)(in_EAX + 0x48) >> 2) * 1000;
      piVar5 = (int *)(*(int *)(in_EAX + 0x26c) + 8);
      iVar2 = *piVar5;
      uVar7 = __allmul(iVar2,iVar2 >> 0x1f,1000,0);
      iVar2 = __alldiv(uVar7,iVar4,iVar4 >> 0x1f);
      *piVar5 = iVar2;
      iVar2 = *(int *)(in_EAX + 0x26c);
      iVar4 = *(int *)(iVar2 + 0xc);
      iVar6 = (*(int *)(in_EAX + 0x4c) - *(int *)(in_EAX + 0x48) >> 2) * 1000;
      uVar7 = __allmul(iVar4,iVar4 >> 0x1f,1000,0);
      uVar3 = __alldiv(uVar7,iVar6,iVar6 >> 0x1f);
      *(undefined4 *)(iVar2 + 0xc) = uVar3;
    }
  }
  return;
}

