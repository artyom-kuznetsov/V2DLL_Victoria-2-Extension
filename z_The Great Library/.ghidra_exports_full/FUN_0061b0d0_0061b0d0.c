// FUN_0061b0d0 @ 0061b0d0 body=[[0061b0d0, 0061b28b]]


void FUN_0061b0d0(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *in_EAX;
  int iVar5;
  int iVar6;
  int *piVar7;
  
  piVar1 = (int *)*in_EAX;
  iVar6 = 0;
  piVar7 = piVar1;
  while (piVar7 != (int *)0x0) {
    iVar2 = *piVar7;
    piVar7 = (int *)piVar7[2];
    if (((7 < (int)(*(int *)(iVar2 + 0x30) - *(int *)(iVar2 + 0x2c) & 0xfffffff8U)) &&
        (7 < (int)(*(int *)(iVar2 + 0x40) - *(int *)(iVar2 + 0x3c) & 0xfffffff8U))) &&
       (*(char *)(iVar2 + 0xfc) != '\0')) {
      if (param_3 <= iVar6) {
        return;
      }
      *(int *)(param_2 + iVar6 * 4) = iVar2;
      iVar6 = iVar6 + 1;
    }
  }
  piVar7 = piVar1;
  if (piVar1 != (int *)0x0) {
    do {
      iVar2 = *piVar7;
      piVar7 = (int *)piVar7[2];
      if (((7 < (int)(*(int *)(iVar2 + 0x30) - *(int *)(iVar2 + 0x2c) & 0xfffffff8U)) &&
          (7 < (int)(*(int *)(iVar2 + 0x40) - *(int *)(iVar2 + 0x3c) & 0xfffffff8U))) &&
         (*(char *)(iVar2 + 0xfc) == '\0')) {
        iVar3 = *(int *)(iVar2 + 0x30);
        iVar5 = *(int *)(iVar2 + 0x2c);
        if (iVar5 == iVar3) {
LAB_0061b180:
          iVar3 = *(int *)(iVar2 + 0x40);
          iVar5 = *(int *)(iVar2 + 0x3c);
          if (iVar5 != iVar3) {
            do {
              if (*(int *)(iVar5 + 4) == *(int *)(param_1 + 4)) break;
              iVar5 = iVar5 + 8;
            } while (iVar5 != iVar3);
            if (iVar5 != iVar3) goto LAB_0061b1a0;
          }
        }
        else {
          do {
            if (*(int *)(iVar5 + 4) == *(int *)(param_1 + 4)) break;
            iVar5 = iVar5 + 8;
          } while (iVar5 != iVar3);
          if (iVar5 == iVar3) goto LAB_0061b180;
LAB_0061b1a0:
          if (param_3 <= iVar6) {
            return;
          }
          *(int *)(param_2 + iVar6 * 4) = iVar2;
          iVar6 = iVar6 + 1;
        }
      }
      piVar4 = piVar1;
    } while (piVar7 != (int *)0x0);
joined_r0x0061b1bd:
    if (piVar4 != (int *)0x0) {
      iVar2 = *piVar4;
      piVar4 = (int *)piVar4[2];
      if (((7 < (int)(*(int *)(iVar2 + 0x30) - *(int *)(iVar2 + 0x2c) & 0xfffffff8U)) &&
          (7 < (int)(*(int *)(iVar2 + 0x40) - *(int *)(iVar2 + 0x3c) & 0xfffffff8U))) &&
         (*(char *)(iVar2 + 0xfc) == '\0')) {
        iVar3 = *(int *)(iVar2 + 0x30);
        iVar5 = *(int *)(iVar2 + 0x2c);
        if (iVar5 != iVar3) {
          do {
            if (*(int *)(iVar5 + 4) == *(int *)(param_1 + 4)) break;
            iVar5 = iVar5 + 8;
          } while (iVar5 != iVar3);
          if (iVar5 != iVar3) goto joined_r0x0061b1bd;
        }
        iVar3 = *(int *)(iVar2 + 0x40);
        iVar5 = *(int *)(iVar2 + 0x3c);
        if (iVar5 != iVar3) {
          do {
            if (*(int *)(iVar5 + 4) == *(int *)(param_1 + 4)) break;
            iVar5 = iVar5 + 8;
          } while (iVar5 != iVar3);
          if (iVar5 != iVar3) goto joined_r0x0061b1bd;
        }
        if (param_3 <= iVar6) {
          return;
        }
        *(int *)(param_2 + iVar6 * 4) = iVar2;
        iVar6 = iVar6 + 1;
      }
      goto joined_r0x0061b1bd;
    }
  }
  while( true ) {
    do {
      if (piVar1 == (int *)0x0) {
        return;
      }
      iVar2 = *piVar1;
      piVar1 = (int *)piVar1[2];
    } while ((7 < (int)(*(int *)(iVar2 + 0x30) - *(int *)(iVar2 + 0x2c) & 0xfffffff8U)) &&
            (7 < (int)(*(int *)(iVar2 + 0x40) - *(int *)(iVar2 + 0x3c) & 0xfffffff8U)));
    if (param_3 <= iVar6) break;
    *(undefined4 *)(param_2 + iVar6 * 4) = 0;
    iVar6 = iVar6 + 1;
  }
  return;
}

