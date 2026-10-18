// FUN_004eeee0 @ 004eeee0 body=[[004eeee0, 004eef98]]


void FUN_004eeee0(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  int in_EAX;
  int iVar4;
  int iVar5;
  longlong *unaff_ESI;
  undefined8 uVar6;
  longlong lVar7;
  
  iVar5 = *(int *)(param_1 + 8);
  iVar4 = iVar5;
  if (iVar5 == 0) {
    iVar4 = *(int *)(*(int *)(param_1 + 0xc) + 0x188);
  }
  if (*(int *)(iVar4 + 200) == 0) {
    *(undefined4 *)unaff_ESI = 0;
    *(undefined4 *)((int)unaff_ESI + 4) = 0;
    return;
  }
  iVar4 = iVar5;
  if (iVar5 == 0) {
    iVar4 = *(int *)(*(int *)(param_1 + 0xc) + 0x188);
  }
  uVar1 = *(uint *)(iVar4 + 200);
  if (iVar5 == 0) {
    iVar5 = *(int *)(*(int *)(param_1 + 0xc) + 0x188);
  }
  iVar5 = *(int *)(iVar5 + 0x118);
  *(undefined4 *)unaff_ESI = *(undefined4 *)(in_EAX + 0xf8);
  uVar2 = *(undefined4 *)(in_EAX + 0xfc);
  uVar3 = *(uint *)(iVar5 + *(int *)(*(int *)(in_EAX + 0xf0) + 0x28) * 4);
  uVar6 = __alldiv(uVar3 << 0x1e,uVar3 >> 2,uVar1 << 0xf,((int)uVar1 >> 0x1f) << 0xf | uVar1 >> 0x11
                  );
  lVar7 = __allmul(uVar6,(int)*unaff_ESI,uVar2);
  *unaff_ESI = lVar7 >> 0xf;
  return;
}

