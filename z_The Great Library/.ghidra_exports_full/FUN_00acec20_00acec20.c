// FUN_00acec20 @ 00acec20 body=[[00acec20, 00acec8a]]


void FUN_00acec20(void)

{
  int iVar1;
  byte bVar2;
  int in_ECX;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int local_8;
  
  iVar1 = *(int *)(*(int *)(in_ECX + 0x1ac) + 0x84);
  uVar3 = 0;
  local_8 = 0;
  do {
    iVar6 = 0;
    bVar2 = (byte)uVar3 & 0x1f;
    if (iVar1 != 0) {
      piVar4 = *(int **)(*(int *)(in_ECX + 0x1ac) + 0x80);
      iVar5 = iVar1;
      do {
        if ((*(uint *)(*piVar4 + 0xc) & (1 << bVar2 | 1U >> 0x20 - bVar2)) == 0) {
          iVar6 = iVar6 + 1;
        }
        piVar4 = piVar4 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  } while ((local_8 != iVar6) && (uVar3 = uVar3 + 1, local_8 = iVar6, uVar3 < 0x20));
  return;
}

