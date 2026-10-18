// FUN_009c1cb0 @ 009c1cb0 body=[[009c1cb0, 009c1d27]]


uint FUN_009c1cb0(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *in_EAX;
  uint3 uVar7;
  uint uVar6;
  uint uVar8;
  
  uVar8 = (uint)(*in_EAX * 0x10000 + in_EAX[1]) % *(uint *)(param_1 + 4);
  uVar6 = *(uint *)(param_1 + 8);
  piVar1 = (int *)(uVar6 + uVar8 * 4);
  piVar5 = *(int **)(uVar6 + uVar8 * 4);
  piVar4 = (int *)0x0;
  while( true ) {
    piVar3 = piVar5;
    if (piVar3 == (int *)0x0) {
      return uVar6 & 0xffffff00;
    }
    iVar2 = *piVar3;
    uVar7 = (uint3)((uint)(iVar2 + 8) >> 8);
    if ((*(int *)(iVar2 + 0xc) == in_EAX[1]) && (*(int *)(iVar2 + 8) == *in_EAX)) {
      uVar6 = CONCAT31(uVar7,1);
    }
    else {
      uVar6 = (uint)uVar7 << 8;
    }
    if ((char)uVar6 != '\0') break;
    piVar5 = (int *)piVar3[1];
    piVar4 = piVar3;
  }
  if (piVar4 == (int *)0x0) {
    *piVar1 = piVar3[1];
  }
  else {
    piVar4[1] = piVar3[1];
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(piVar3);
}

