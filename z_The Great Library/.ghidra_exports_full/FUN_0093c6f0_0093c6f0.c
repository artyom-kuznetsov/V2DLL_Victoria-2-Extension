// FUN_0093c6f0 @ 0093c6f0 body=[[0093c6f0, 0093c7bf]]


uint FUN_0093c6f0(int param_1,char param_2,int param_3)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 *in_EAX;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  
  puVar2 = *(undefined4 **)in_EAX[0x38];
  puVar4 = in_EAX;
  do {
    if (puVar2 == (undefined4 *)in_EAX[0x38]) {
      return (uint)puVar4 & 0xffffff00;
    }
    puVar4 = (undefined4 *)puVar2[4];
    iVar5 = puVar2[5] - (int)puVar4 >> 6;
    iVar7 = 0;
    if (0 < iVar5) {
      puVar6 = puVar4 + 5;
      do {
        if (param_2 == '\0') {
LAB_0093c744:
          puVar4 = (undefined4 *)*puVar6;
          if (puVar4 == *(undefined4 **)(param_1 + 4)) {
            return CONCAT31((int3)((uint)puVar4 >> 8),1);
          }
        }
        else {
          piVar3 = *(int **)(puVar6[-2] + 0x120);
          puVar4 = (undefined4 *)0x0;
          if (piVar3 != (int *)0x0) {
            do {
              if (*piVar3 == param_3) goto LAB_0093c744;
              piVar3 = (int *)piVar3[2];
            } while (piVar3 != (int *)0x0);
            puVar4 = (undefined4 *)0x0;
          }
        }
        iVar7 = iVar7 + 1;
        puVar6 = puVar6 + 0x10;
      } while (iVar7 < iVar5);
    }
    if (*(char *)((int)puVar2 + 0x21) == '\0') {
      puVar4 = (undefined4 *)puVar2[2];
      if (*(char *)((int)puVar4 + 0x21) == '\0') {
        cVar1 = *(char *)((int)*puVar4 + 0x21);
        puVar2 = puVar4;
        puVar4 = (undefined4 *)*puVar4;
        while (cVar1 == '\0') {
          cVar1 = *(char *)((int)*puVar4 + 0x21);
          puVar2 = puVar4;
          puVar4 = (undefined4 *)*puVar4;
        }
      }
      else {
        cVar1 = *(char *)((int)puVar2[1] + 0x21);
        puVar4 = (undefined4 *)puVar2[1];
        puVar6 = puVar2;
        while ((puVar2 = puVar4, puVar4 = puVar2, cVar1 == '\0' &&
               (puVar6 == (undefined4 *)puVar2[2]))) {
          cVar1 = *(char *)((int)puVar2[1] + 0x21);
          puVar4 = (undefined4 *)puVar2[1];
          puVar6 = puVar2;
        }
      }
    }
  } while( true );
}

