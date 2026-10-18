// FUN_0093c980 @ 0093c980 body=[[0093c980, 0093ca81]]


void FUN_0093c980(void)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int in_EAX;
  int iVar6;
  undefined4 uVar7;
  
  if (*(int *)(in_EAX + 0x108) < *(int *)(DAT_012588e8 + 0xb0c)) {
    iVar6 = FUN_00936fc0(in_EAX,*(undefined4 *)(in_EAX + 0x2c),*(undefined4 *)(in_EAX + 0x3c),0);
    *(int *)(in_EAX + 0x100) = iVar6 - *(int *)(in_EAX + 0x104);
    uVar7 = FUN_00936fc0(in_EAX,*(undefined4 *)(in_EAX + 0x2c),*(undefined4 *)(in_EAX + 0x3c),0);
    iVar6 = DAT_012588e8;
    *(undefined4 *)(in_EAX + 0x104) = uVar7;
    *(undefined4 *)(in_EAX + 0x108) = *(undefined4 *)(iVar6 + 0xb0c);
    FUN_00424810(3);
  }
  puVar2 = *(undefined4 **)(in_EAX + 0xe0);
  puVar3 = (undefined4 *)*puVar2;
  while (puVar3 != puVar2) {
    iVar6 = 0;
    if (0 < (int)(puVar3[5] - puVar3[4] & 0xffffffc0)) {
      do {
        FUN_00954650();
        iVar6 = iVar6 + 1;
      } while (iVar6 < (int)(puVar3[5] - puVar3[4]) >> 6);
    }
    if (*(char *)((int)puVar3 + 0x21) == '\0') {
      puVar4 = (undefined4 *)puVar3[2];
      if (*(char *)((int)puVar4 + 0x21) == '\0') {
        cVar1 = *(char *)((int)*puVar4 + 0x21);
        puVar3 = puVar4;
        puVar4 = (undefined4 *)*puVar4;
        while (cVar1 == '\0') {
          cVar1 = *(char *)((int)*puVar4 + 0x21);
          puVar3 = puVar4;
          puVar4 = (undefined4 *)*puVar4;
        }
      }
      else {
        cVar1 = *(char *)((int)puVar3[1] + 0x21);
        puVar5 = (undefined4 *)puVar3[1];
        puVar4 = puVar3;
        while ((puVar3 = puVar5, cVar1 == '\0' && (puVar4 == (undefined4 *)puVar3[2]))) {
          cVar1 = *(char *)((int)puVar3[1] + 0x21);
          puVar5 = (undefined4 *)puVar3[1];
          puVar4 = puVar3;
        }
      }
    }
  }
  return;
}

