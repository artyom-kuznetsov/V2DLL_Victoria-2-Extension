// FUN_00450220 @ 00450220 body=[[00450220, 00450275]]


int FUN_00450220(int param_1)

{
  uint uVar1;
  uint uVar2;
  int in_EAX;
  uint uVar3;
  uint3 uVar4;
  int iVar5;
  uint *puVar6;
  
  iVar5 = 0;
  puVar6 = (uint *)(in_EAX + 0x2d4);
  do {
    uVar1 = *puVar6;
    uVar2 = puVar6[1];
    uVar3 = uVar1;
    if (uVar1 != uVar2) {
      do {
        if (*(int *)(uVar3 + 4) == *(int *)(param_1 + 4)) break;
        uVar3 = uVar3 + 8;
      } while (uVar3 != uVar2);
    }
    uVar4 = (uint3)(uVar3 >> 8);
    if ((uVar1 <= uVar3) && (uVar3 < uVar2)) {
      return CONCAT31(uVar4,1);
    }
    iVar5 = iVar5 + 1;
    puVar6 = puVar6 + 4;
    if (10 < iVar5) {
      return (uint)uVar4 << 8;
    }
  } while( true );
}

