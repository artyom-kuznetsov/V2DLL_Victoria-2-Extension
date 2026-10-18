// FUN_00ad1370 @ 00ad1370 body=[[00ad1370, 00ad13b9] [00ad13c0, 00ad142c]]


void FUN_00ad1370(uint param_1)

{
  uint uVar1;
  int in_ECX;
  uint uVar2;
  bool bVar3;
  uint local_8;
  uint local_4;
  
  if (0x1f < param_1) {
    param_1 = 0x1f;
  }
  if (param_1 != *(uint *)(in_ECX + 0x1d4)) {
    local_4 = *(uint *)(*(int *)(in_ECX + 0x1ac) + 0x84);
    uVar2 = 0;
    if (local_4 != 0) {
      do {
        uVar1 = *(uint *)(*(int *)(*(int *)(*(int *)(in_ECX + 0x1ac) + 0x80) + uVar2 * 4) + 0xc);
        bVar3 = (uVar1 & 1 << ((byte)param_1 & 0x1f)) != 0;
        if (((uVar1 & 1 << ((byte)*(undefined4 *)(in_ECX + 0x1d4) & 0x1f)) != 0) != bVar3) {
          if (bVar3) {
            FUN_00ad1190(uVar2);
          }
          else {
            local_8 = uVar2 & 0xffff;
            FUN_00ad3020(&local_8);
          }
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < local_4);
    }
    *(uint *)(in_ECX + 0x1d4) = param_1;
  }
  return;
}

