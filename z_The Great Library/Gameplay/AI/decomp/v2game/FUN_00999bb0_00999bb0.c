// FUN_00999bb0 @ 00999bb0 body=[[00999bb0, 00999cf5]]


void FUN_00999bb0(void)

{
  void *pvVar1;
  undefined4 *puVar2;
  int in_EAX;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  
  FUN_009999b0();
  pvVar1 = *(void **)(in_EAX + 0x40);
  if (pvVar1 != *(void **)(in_EAX + 0x44)) {
    FID_conflict__memcpy(pvVar1,*(void **)(in_EAX + 0x44),0);
    *(void **)(in_EAX + 0x44) = pvVar1;
  }
  pvVar1 = *(void **)(in_EAX + 0x50);
  if (pvVar1 != *(void **)(in_EAX + 0x54)) {
    FID_conflict__memcpy(pvVar1,*(void **)(in_EAX + 0x54),0);
    *(void **)(in_EAX + 0x54) = pvVar1;
  }
  pvVar1 = *(void **)(in_EAX + 0xf8);
  if (pvVar1 != *(void **)(in_EAX + 0xfc)) {
    FID_conflict__memcpy(pvVar1,*(void **)(in_EAX + 0xfc),0);
    *(void **)(in_EAX + 0xfc) = pvVar1;
  }
  iVar5 = in_EAX + 0x6b9e0;
  uVar3 = FUN_005da1e0(iVar5);
  FUN_0099a200(uVar3,iVar5);
  FUN_00999d00(in_EAX);
  for (piVar4 = *(int **)(in_EAX + 0x128);
      (*(int **)(in_EAX + 0x128) <= piVar4 && (piVar4 < *(int **)(in_EAX + 300)));
      piVar4 = piVar4 + 1) {
    puVar2 = (undefined4 *)*piVar4;
    (**(code **)(*(int *)*puVar2 + 400))((int *)*puVar2,0,puVar2[1],0,*(undefined2 *)(puVar2 + 3));
    (**(code **)(*(int *)*puVar2 + 0x164))((int *)*puVar2,puVar2[4]);
    (**(code **)(*(int *)*puVar2 + 0x144))((int *)*puVar2,5,0,*(ushort *)((int)puVar2 + 0xe) - 2);
  }
  (**(code **)(**(int **)(in_EAX + 100) + 0xe4))(*(int **)(in_EAX + 100),7,1);
  (**(code **)(**(int **)(in_EAX + 100) + 0xe4))(*(int **)(in_EAX + 100),0xe,1);
  return;
}

