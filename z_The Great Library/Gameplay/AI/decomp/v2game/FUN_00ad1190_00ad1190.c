// FUN_00ad1190 @ 00ad1190 body=[[00ad1190, 00ad11a8] [00ad11b0, 00ad11fc] [00ad1200, 00ad1310]]


void FUN_00ad1190(ushort param_1)

{
  void *_Src;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int in_ECX;
  ushort *puVar5;
  short *psVar6;
  
  uVar1 = *(uint *)(in_ECX + 400);
  uVar2 = 0;
  if (uVar1 != 0) {
    puVar5 = *(ushort **)(in_ECX + 0x18c);
    do {
      if (*puVar5 == param_1) {
        if (uVar2 != 0xffffffff) {
          return;
        }
        break;
      }
      uVar2 = uVar2 + 1;
      puVar5 = puVar5 + 1;
    } while (uVar2 < uVar1);
  }
  uVar2 = (uint)param_1;
  do {
    do {
      uVar2 = *(uint *)(*(int *)(*(int *)(*(int *)(in_ECX + 0x1ac) + 0x80) + uVar2 * 4) + 4);
      if (uVar2 == 0xffffffff) {
        *(uint *)(in_ECX + 400) = uVar1 + 1;
        if (*(uint *)(in_ECX + 0x194) < uVar1 + 1) {
          FUN_00b08780(uVar1 + 2);
        }
        iVar4 = *(int *)(in_ECX + 400) + -1;
        if (iVar4 != 0) {
          FID_conflict__memcpy
                    ((void *)((int)*(void **)(in_ECX + 0x18c) + 2),*(void **)(in_ECX + 0x18c),
                     iVar4 * 2);
        }
        if (*(ushort **)(in_ECX + 0x18c) != (ushort *)0x0) {
          **(ushort **)(in_ECX + 0x18c) = param_1;
        }
        return;
      }
      uVar3 = 0;
    } while (uVar1 == 0);
    psVar6 = *(short **)(in_ECX + 0x18c);
    do {
      if (*psVar6 == (short)uVar2) {
        if (uVar3 != 0xffffffff) {
          uVar3 = uVar3 + 1;
          uVar2 = uVar1 + 1;
          *(uint *)(in_ECX + 400) = uVar2;
          if (uVar1 <= uVar3) {
            if (*(uint *)(in_ECX + 0x194) < uVar2) {
              FUN_00b08780(uVar1 + 2);
            }
            puVar5 = (ushort *)(*(int *)(in_ECX + 0x18c) + -2 + *(int *)(in_ECX + 400) * 2);
            if (puVar5 == (ushort *)0x0) {
              return;
            }
            *puVar5 = param_1;
            return;
          }
          if (*(uint *)(in_ECX + 0x194) < uVar2) {
            FUN_00b08780(uVar1 + 2);
          }
          iVar4 = (*(int *)(in_ECX + 400) - uVar3) + -1;
          if (iVar4 != 0) {
            _Src = (void *)(*(int *)(in_ECX + 0x18c) + uVar3 * 2);
            FID_conflict__memcpy((void *)((int)_Src + 2),_Src,iVar4 * 2);
          }
          puVar5 = (ushort *)(*(int *)(in_ECX + 0x18c) + uVar3 * 2);
          if (puVar5 == (ushort *)0x0) {
            return;
          }
          *puVar5 = param_1;
          return;
        }
        break;
      }
      uVar3 = uVar3 + 1;
      psVar6 = psVar6 + 1;
    } while (uVar3 < uVar1);
  } while( true );
}

