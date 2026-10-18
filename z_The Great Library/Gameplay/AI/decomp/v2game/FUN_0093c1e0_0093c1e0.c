// FUN_0093c1e0 @ 0093c1e0 body=[[0093c1e0, 0093c271]]


uint FUN_0093c1e0(int param_1)

{
  int *piVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint in_EAX;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  int *piVar9;
  
  piVar1 = (int *)(in_EAX + 0xe0);
  puVar3 = *(undefined4 **)*piVar1;
  do {
    do {
      if (puVar3 == (undefined4 *)*piVar1) {
        return in_EAX & 0xffffff00;
      }
      piVar9 = puVar3 + 4;
      puVar7 = puVar3;
      if (*(char *)((int)puVar3 + 0x21) == '\0') {
        puVar7 = (undefined4 *)puVar3[2];
        if (*(char *)((int)puVar7 + 0x21) == '\0') {
          cVar2 = *(char *)((int)*puVar7 + 0x21);
          puVar4 = (undefined4 *)*puVar7;
          while (cVar2 == '\0') {
            cVar2 = *(char *)((int)*puVar4 + 0x21);
            puVar7 = puVar4;
            puVar4 = (undefined4 *)*puVar4;
          }
        }
        else {
          cVar2 = *(char *)((int)puVar3[1] + 0x21);
          puVar5 = (undefined4 *)puVar3[1];
          puVar4 = puVar3;
          while ((puVar7 = puVar5, cVar2 == '\0' && (puVar4 == (undefined4 *)puVar7[2]))) {
            cVar2 = *(char *)((int)puVar7[1] + 0x21);
            puVar5 = (undefined4 *)puVar7[1];
            puVar4 = puVar7;
          }
        }
      }
      iVar6 = puVar3[5] - *piVar9;
      in_EAX = iVar6 >> 6;
      iVar8 = 0;
      puVar3 = puVar7;
    } while ((int)in_EAX < 1);
    piVar9 = (int *)(*piVar9 + 0x24);
    do {
      if (*piVar9 == *(int *)(param_1 + 4)) {
        return CONCAT31((int3)(iVar6 >> 0xe),1);
      }
      iVar8 = iVar8 + 1;
      piVar9 = piVar9 + 0x10;
    } while (iVar8 < (int)in_EAX);
  } while( true );
}

