// FUN_00a8a550 @ 00a8a550 body=[[00a8a550, 00a8a589] [00a8a58c, 00a8a677]]


int * FUN_00a8a550(int param_1,undefined8 *param_2,int *param_3,int param_4,ushort param_5)

{
  undefined8 uVar1;
  byte bVar2;
  int *piVar3;
  u_long uVar4;
  int iVar5;
  int *piVar6;
  
  bVar2 = *(byte *)((int)param_2 + 1);
  *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + *(int *)((int)param_2 + 4) + (uint)param_5;
  piVar6 = (int *)((uint)bVar2 * 0x20 + *(int *)(param_1 + 0x1c));
  piVar3 = (int *)(*(code *)PTR__malloc_00f071f8)(0x54);
  if (piVar3 != (int *)0x0) {
    if (*(char *)((int)param_2 + 1) == -1) {
      *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + 1;
      piVar3[2] = *(int *)(param_1 + 0xa0);
      piVar3[3] = 0;
    }
    else if ((*(byte *)((int)param_2 + 2) & 1) == 0) {
      if ((*(byte *)((int)param_2 + 2) & 2) == 0) {
        piVar6[1] = piVar6[1] + 1;
        piVar3[2] = *piVar6;
        piVar3[3] = piVar6[1];
      }
      else {
        *(int *)(param_1 + 0xd0) = *(int *)(param_1 + 0xd0) + 1;
        piVar3[2] = 0;
        piVar3[3] = 0;
      }
    }
    else {
      *piVar6 = *piVar6 + 1;
      piVar3[2] = *piVar6;
      piVar3[3] = 0;
    }
    *(undefined8 *)(piVar3 + 9) = *param_2;
    *(undefined8 *)(piVar3 + 0xb) = param_2[1];
    *(undefined8 *)(piVar3 + 0xd) = param_2[2];
    uVar1 = param_2[3];
    piVar3[4] = 0;
    piVar3[5] = 0;
    piVar3[6] = 0;
    *(undefined8 *)(piVar3 + 0xf) = uVar1;
    uVar1 = param_2[4];
    *(ushort *)(piVar3 + 8) = param_5;
    piVar3[7] = param_4;
    iVar5 = *(int *)(param_2 + 5);
    *(undefined8 *)(piVar3 + 0x11) = uVar1;
    piVar3[0x14] = (int)param_3;
    piVar3[0x13] = iVar5;
    uVar4 = htonl(piVar3[2]);
    piVar3[0xb] = uVar4;
    if (param_3 != (int *)0x0) {
      *param_3 = *param_3 + 1;
    }
    iVar5 = param_1 + 0xbc;
    if ((*(byte *)((int)param_2 + 2) & 1) == 0) {
      iVar5 = param_1 + 0xc4;
    }
    piVar6 = *(int **)(iVar5 + 4);
    *piVar3 = iVar5;
    piVar3[1] = (int)piVar6;
    *piVar6 = (int)piVar3;
    *(int **)(iVar5 + 4) = piVar3;
    return piVar3;
  }
                    /* WARNING: Subroutine does not return */
  _abort();
}

