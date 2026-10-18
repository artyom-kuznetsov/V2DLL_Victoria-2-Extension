// FUN_00b1b010 @ 00b1b010 body=[[00b1b010, 00b1b0cb]]


void FUN_00b1b010(byte *param_1,undefined4 param_2,int param_3,int *param_4)

{
  undefined2 uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int *in_ECX;
  int iVar5;
  uint uVar6;
  byte *local_8;
  undefined1 local_4;
  
  uVar6 = (uint)*(ushort *)(in_ECX + 8);
  uVar1 = *(undefined2 *)(*in_ECX + 10 + (uint)*(ushort *)((int)in_ECX + 0x22) * 0x10);
  iVar4 = 0;
  iVar5 = 0;
  local_8 = param_1 + 1;
  param_1 = (byte *)(uint)*param_1;
  do {
    iVar3 = *in_ECX;
    if (((uint)param_1 & 1 << ((byte)iVar5 & 0x1f)) == 0) {
      uVar2 = *(ushort *)(iVar3 + 4 + uVar6 * 0x10);
    }
    else {
      uVar2 = *(ushort *)(iVar3 + 6 + uVar6 * 0x10);
    }
    uVar6 = (uint)uVar2;
    if (*(char *)(iVar3 + 0xc + uVar6 * 0x10) != '\0') {
      if (uVar6 == 0x100) {
        local_4 = (undefined1)uVar1;
        *(undefined1 *)(iVar4 + param_3) = local_4;
        *(undefined1 *)(iVar4 + 1 + param_3) = local_4;
        *(undefined1 *)(iVar4 + 2 + param_3) = local_4;
        *(undefined1 *)(iVar4 + 3 + param_3) = local_4;
        iVar4 = iVar4 + 4;
      }
      else {
        if (uVar6 == 0x101) {
          *param_4 = iVar4;
          return;
        }
        *(undefined1 *)(iVar4 + param_3) = *(undefined1 *)(iVar3 + 10 + uVar6 * 0x10);
        iVar4 = iVar4 + 1;
      }
      uVar6 = (uint)*(ushort *)(in_ECX + 8);
    }
    iVar5 = iVar5 + 1;
    if (iVar5 == 8) {
      param_1 = (byte *)(uint)*local_8;
      local_8 = local_8 + 1;
      iVar5 = 0;
    }
  } while( true );
}

