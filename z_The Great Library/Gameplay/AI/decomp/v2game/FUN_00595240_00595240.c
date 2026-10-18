// FUN_00595240 @ 00595240 body=[[00595240, 005953c2]]


int * FUN_00595240(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  int in_ECX;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  int iStack_1c;
  int iStack_18;
  
  piVar1 = *(int **)(in_ECX + 0x20);
  *param_1 = 0;
  do {
    if (piVar1 == (int *)0x0) {
      return param_1;
    }
    piVar2 = (int *)*piVar1;
    piVar1 = (int *)piVar1[2];
    iVar6 = *(int *)(*(int *)(DAT_012587e4 + 4) + piVar2[0x33] * 4);
    cVar4 = (**(code **)(*piVar2 + 0x3c))();
    iVar6 = *(int *)(iVar6 + 0xa60);
    if (cVar4 == '\0') {
      iStack_18 = *(int *)(iVar6 + 0x3a8);
      iStack_1c = *(int *)(iVar6 + 0x3b0);
    }
    else {
      iStack_18 = *(int *)(iVar6 + 0x398);
      iStack_1c = *(int *)(iVar6 + 0x3a0);
    }
    piVar2 = (int *)piVar2[0xe];
    while (piVar2 != (int *)0x0) {
      piVar3 = (int *)*piVar2;
      piVar2 = (int *)piVar2[2];
      if ((piVar3[0x1d] == 0) || (*(char *)(piVar3[0x1d] + 0x164) == '\0')) {
        iVar6 = piVar3[0x10];
      }
      else {
        iVar6 = 0;
      }
      iVar6 = __alldiv((longlong)piVar3[0xf] * (longlong)iVar6,1000,0);
      iVar7 = 1000;
      cVar4 = (**(code **)(*piVar3 + 0x24))();
      if (cVar4 == '\0') {
        cVar4 = (**(code **)(*piVar3 + 0x28))();
        if (cVar4 != '\0') {
          iVar5 = *(int *)(piVar3[0xe] + 0x244) + iStack_1c;
          goto LAB_0059536c;
        }
      }
      else {
        iVar5 = *(int *)(piVar3[0xe] + 0x234) +
                *(int *)(piVar3[0xe] + 0x230) + iStack_1c + iStack_18;
        uVar8 = __allmul(iVar5,iVar5 >> 0x1f,1000,0);
        iVar5 = __alldiv(uVar8,10000,0);
        if (1000 < iVar5) {
LAB_0059536c:
          uVar8 = __allmul(iVar5,iVar5 >> 0x1f,1000,0);
          iVar7 = __alldiv(uVar8,1000,0);
        }
      }
      iVar6 = __alldiv((longlong)iVar6 * (longlong)iVar7,1000,0);
      *param_1 = *param_1 + iVar6;
    }
  } while( true );
}

