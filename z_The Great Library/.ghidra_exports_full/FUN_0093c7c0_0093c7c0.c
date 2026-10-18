// FUN_0093c7c0 @ 0093c7c0 body=[[0093c7c0, 0093c884]]


uint FUN_0093c7c0(int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *in_EAX;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  
  puVar2 = *(undefined4 **)in_EAX[0x38];
  puVar5 = in_EAX;
  do {
    if (puVar2 == (undefined4 *)in_EAX[0x38]) {
      return (uint)puVar5 & 0xffffff00;
    }
    iVar4 = puVar2[5] - puVar2[4];
    puVar5 = (undefined4 *)(iVar4 >> 6);
    iVar6 = 0;
    if (0 < (int)puVar5) {
      piVar7 = (int *)(puVar2[4] + 0x28);
      do {
        if (*(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + *piVar7 * 4) + 0x188) == param_1) {
          return CONCAT31((int3)(iVar4 >> 0xe),1);
        }
        iVar6 = iVar6 + 1;
        piVar7 = piVar7 + 0x10;
      } while (iVar6 < (int)puVar5);
    }
    if (*(char *)((int)puVar2 + 0x21) == '\0') {
      puVar5 = (undefined4 *)puVar2[2];
      if (*(char *)((int)puVar5 + 0x21) == '\0') {
        cVar1 = *(char *)((int)*puVar5 + 0x21);
        puVar2 = puVar5;
        puVar5 = (undefined4 *)*puVar5;
        while (cVar1 == '\0') {
          cVar1 = *(char *)((int)*puVar5 + 0x21);
          puVar2 = puVar5;
          puVar5 = (undefined4 *)*puVar5;
        }
      }
      else {
        cVar1 = *(char *)((int)puVar2[1] + 0x21);
        puVar5 = (undefined4 *)puVar2[1];
        puVar3 = puVar2;
        while ((puVar2 = puVar5, puVar5 = puVar2, cVar1 == '\0' &&
               (puVar3 == (undefined4 *)puVar2[2]))) {
          cVar1 = *(char *)((int)puVar2[1] + 0x21);
          puVar5 = (undefined4 *)puVar2[1];
          puVar3 = puVar2;
        }
      }
    }
  } while( true );
}

