// FUN_00844050 @ 00844050  (requested 00844050, first bytes: 55 8B EC 83 EC 14 53 56)


int FUN_00844050(undefined4 param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int in_EAX;
  int iVar4;
  int iVar5;
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = *(undefined4 *)(in_EAX + 0x10);
  local_8 = *(undefined4 *)(in_EAX + 0x14);
  iVar4 = FUN_00834150(&param_1,&local_c);
  uVar1 = *(uint *)(in_EAX + 0x14);
  iVar2 = *(int *)(*(int *)(DAT_012587e4 + 4) + param_2 * 4);
  piVar3 = *(int **)(*(int *)(iVar2 + 0x3bc) + (uVar1 % *(uint *)(iVar2 + 0x3b8)) * 4);
  do {
    if (piVar3 == (int *)0x0) {
LAB_008440c2:
      iVar5 = 0;
LAB_008440c4:
      if (((int)(iVar5 + (iVar5 >> 0x1f & 7U)) >> 3) + iVar4 < 0x33) {
        iVar4 = 0;
      }
      else {
        iVar4 = (200 - *(int *)(*(int *)(*(int *)(iVar2 + 0xbe8) + uVar1 * 4) + 0x3c) / 1000) / 2;
        if ((*(char *)(iVar2 + 0x31) != '\0') &&
           (*(char *)(*(int *)(*(int *)(DAT_012587e4 + 4) + uVar1 * 4) + 0x31) != '\0')) {
          return iVar4 / 2;
        }
      }
      return iVar4;
    }
    iVar5 = *piVar3;
    if (*(uint *)(iVar5 + 0xc) == uVar1) {
      if (iVar5 != 0) {
        iVar5 = *(int *)(iVar5 + 0x10);
        goto LAB_008440c4;
      }
      goto LAB_008440c2;
    }
    piVar3 = (int *)piVar3[1];
  } while( true );
}

