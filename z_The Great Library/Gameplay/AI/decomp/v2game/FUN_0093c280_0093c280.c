// FUN_0093c280 @ 0093c280 body=[[0093c280, 0093c348]]


uint FUN_0093c280(int param_1)

{
  int *piVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int *in_EAX;
  undefined4 *puVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  
  piVar1 = in_EAX + 0x38;
  puVar4 = *(undefined4 **)*piVar1;
  do {
    do {
      if (puVar4 == (undefined4 *)*piVar1) {
        return (uint)in_EAX & 0xffffff00;
      }
      puVar6 = puVar4;
      if (*(char *)((int)puVar4 + 0x21) == '\0') {
        puVar6 = (undefined4 *)puVar4[2];
        if (*(char *)((int)puVar6 + 0x21) == '\0') {
          cVar2 = *(char *)((int)*puVar6 + 0x21);
          puVar3 = (undefined4 *)*puVar6;
          while (cVar2 == '\0') {
            cVar2 = *(char *)((int)*puVar3 + 0x21);
            puVar6 = puVar3;
            puVar3 = (undefined4 *)*puVar3;
          }
        }
        else {
          cVar2 = *(char *)((int)puVar4[1] + 0x21);
          puVar5 = (undefined4 *)puVar4[1];
          puVar3 = puVar4;
          while ((puVar6 = puVar5, cVar2 == '\0' && (puVar3 == (undefined4 *)puVar6[2]))) {
            cVar2 = *(char *)((int)puVar6[1] + 0x21);
            puVar5 = (undefined4 *)puVar6[1];
            puVar3 = puVar6;
          }
        }
      }
      in_EAX = (int *)puVar4[4];
      iVar7 = puVar4[5] - (int)in_EAX >> 6;
      iVar9 = 0;
      puVar4 = puVar6;
    } while (iVar7 < 1);
    piVar8 = in_EAX + 3;
    do {
      if (piVar8[6] == *(int *)(param_1 + 4)) {
        for (in_EAX = *(int **)(*piVar8 + 0x120); in_EAX != (int *)0x0; in_EAX = (int *)in_EAX[2]) {
          if (*in_EAX == 0x8a1) {
            return CONCAT31((int3)((uint)in_EAX >> 8),1);
          }
        }
      }
      iVar9 = iVar9 + 1;
      piVar8 = piVar8 + 0x10;
    } while (iVar9 < iVar7);
  } while( true );
}

