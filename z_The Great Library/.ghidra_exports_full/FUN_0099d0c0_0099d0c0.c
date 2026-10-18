// FUN_0099d0c0 @ 0099d0c0 body=[[0099d0c0, 0099d1f8]]


void FUN_0099d0c0(void)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  int in_EAX;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 *puStack_16c;
  undefined4 uStack_150;
  undefined1 local_148 [4];
  undefined1 auStack_144 [196];
  uint uStack_80;
  
  puStack_16c = (undefined1 *)0x99d0d6;
  FUN_0099d060();
  puStack_16c = local_148;
  uVar5 = 0;
  (**(code **)(**(int **)(in_EAX + 100) + 0x20))(*(int **)(in_EAX + 100),0);
  (**(code **)(**(int **)(in_EAX + 100) + 0x1c))(*(int **)(in_EAX + 100),auStack_144);
  if (uStack_80 < 0xffff0200) {
    *(undefined1 *)(in_EAX + 0x6bc4c) = 0;
    return;
  }
  puStack_16c = (undefined1 *)0x18;
  iVar4 = 0;
  do {
    puVar2 = (&puStack_16c)[iVar4];
    iVar3 = (**(code **)(**(int **)(in_EAX + 0x60) + 0x28))
                      (*(int **)(in_EAX + 0x60),*(undefined4 *)(in_EAX + 0x68),1,uStack_150,1,3,
                       puVar2);
    if (-1 < iVar3) {
      iVar4 = (**(code **)(**(int **)(in_EAX + 100) + 0x5c))
                        (*(int **)(in_EAX + 100),uVar5,uVar5,1,1,puVar2,0,in_EAX + 0x6bc50,0);
      if (-1 < iVar4) {
        puVar1 = (undefined4 *)(in_EAX + 0x6bc58);
        iVar4 = D3DXCreateEffectFromFileA
                          (*(undefined4 *)(in_EAX + 100),"gfx\\FX\\shadowmap.fx",0,0,0,
                           *(undefined4 *)(in_EAX + 0x6b9c8),puVar1,0);
        if (-1 < iVar4) {
          uVar5 = (**(code **)(*(int *)*puVar1 + 0xec))((int *)*puVar1);
          iVar4 = (**(code **)(*(int *)*puVar1 + 0xf0))((int *)*puVar1,uVar5);
          if (-1 < iVar4) {
            *(undefined1 *)(in_EAX + 0x6bc4c) = 1;
            return;
          }
        }
      }
      FUN_0099d060();
      return;
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 4);
  return;
}

