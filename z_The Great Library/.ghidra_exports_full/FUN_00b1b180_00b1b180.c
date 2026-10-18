// FUN_00b1b180 @ 00b1b180 body=[[00b1b180, 00b1b257] [00b1b260, 00b1b308]]


void FUN_00b1b180(int *param_1)

{
  int *piVar1;
  uint uVar2;
  int *in_ECX;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  char unaff_retaddr;
  int *local_110;
  uint uStack_10c;
  uint uStack_108;
  byte abStack_104 [248];
  uint uStack_c;
  uint local_4;
  
  local_4 = DAT_00ef259c ^ (uint)&local_110;
  local_110 = param_1;
  uStack_108 = (**(code **)(*param_1 + 0x78))();
  uVar3 = uStack_108 >> 8;
  if (uStack_108 >> 8 != 0) {
    do {
      uStack_10c = uVar3;
      (**(code **)(*param_1 + 8))(abStack_104,0x100);
      iVar4 = *in_ECX;
      uVar3 = 0;
      uVar6 = 0xffff;
      uVar5 = 0;
      do {
        uVar7 = (uint)abStack_104[uVar5];
        piVar1 = (int *)(iVar4 + uVar7 * 0x10);
        *piVar1 = *piVar1 + 1;
        uVar2 = *(uint *)(*in_ECX + uVar7 * 0x10);
        if (uVar3 < uVar2) {
          uVar3 = uVar2;
          uVar6 = uVar7;
        }
        uVar7 = (uint)abStack_104[uVar5 + 1];
        piVar1 = (int *)(*in_ECX + uVar7 * 0x10);
        *piVar1 = *piVar1 + 1;
        uVar2 = *(uint *)(*in_ECX + uVar7 * 0x10);
        if (uVar3 < uVar2) {
          uVar3 = uVar2;
          uVar6 = uVar7;
        }
        uVar7 = (uint)abStack_104[uVar5 + 2];
        piVar1 = (int *)(*in_ECX + uVar7 * 0x10);
        *piVar1 = *piVar1 + 1;
        uVar2 = *(uint *)(*in_ECX + uVar7 * 0x10);
        if (uVar3 < uVar2) {
          uVar3 = uVar2;
          uVar6 = uVar7;
        }
        uVar7 = (uint)abStack_104[uVar5 + 3];
        piVar1 = (int *)(*in_ECX + uVar7 * 0x10);
        *piVar1 = *piVar1 + 1;
        iVar4 = *in_ECX;
        uVar2 = *(uint *)(iVar4 + uVar7 * 0x10);
        if (uVar3 < uVar2) {
          uVar3 = uVar2;
          uVar6 = uVar7;
        }
        uVar5 = uVar5 + 4;
      } while (uVar5 < 0x100);
      *(short *)((int)in_ECX + 0x22) = (short)uVar6;
      uVar3 = 0;
      do {
        uVar6 = (uint)abStack_104[uVar3];
        if ((((uVar6 == *(ushort *)((int)in_ECX + 0x22)) && (uVar3 < 0xfd)) &&
            (abStack_104[uVar3 + 1] == uVar6)) &&
           ((abStack_104[uVar3 + 2] == uVar6 && (abStack_104[uVar3 + 3] == uVar6)))) {
          piVar1 = (int *)(*in_ECX + (uint)*(ushort *)((int)in_ECX + 0x22) * 0x10);
          *piVar1 = *piVar1 + -4;
          *(int *)(*in_ECX + 0x1000) = *(int *)(*in_ECX + 0x1000) + 1;
          uVar3 = uVar3 + 3;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < 0x100);
      param_1 = local_110;
      uVar3 = uStack_10c - 1;
    } while (uStack_10c - 1 != 0);
    uStack_10c = 0;
  }
  uVar3 = uStack_108 & 0xff;
  (**(code **)(*param_1 + 8))(abStack_104,uVar3);
  FUN_00b1add0(&uStack_10c,uVar3);
  if (unaff_retaddr == '\x01') {
    (**(code **)(*param_1 + 100))();
  }
  __security_check_cookie(uStack_c ^ (uint)&stack0xfffffee8);
  return;
}

