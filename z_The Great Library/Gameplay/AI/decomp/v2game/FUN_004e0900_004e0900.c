// FUN_004e0900 @ 004e0900 body=[[004e0900, 004e0a34]]


int FUN_004e0900(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *in_EAX;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (param_1 != in_EAX) {
    puVar2 = (undefined4 *)(param_2 + 0xf0);
    puVar3 = in_EAX + 0x3c;
    do {
      param_2 = param_2 + -0x160;
      puVar2[-0x93] = puVar3[-0x93];
      FUN_00408ed0(puVar3 + -0x92,0,0xffffffff);
      FUN_0047dbb0(puVar2 + -0x8b,puVar3 + -0x8b);
      *(undefined1 *)(puVar2 + -0x75) = *(undefined1 *)(puVar3 + -0x75);
      puVar2[-0x74] = puVar3[-0x74];
      puVar2[-0x72] = puVar3[-0x72];
      puVar2[-0x71] = puVar3[-0x71];
      FUN_0047dbb0(puVar2 + -0x70,puVar3 + -0x70);
      puVar2[-0x59] = puVar3[-0x59];
      puVar2[-0x58] = puVar3[-0x58];
      puVar2[-0x56] = puVar3[-0x56];
      puVar2[-0x55] = puVar3[-0x55];
      puVar2[-0x54] = puVar3[-0x54];
      puVar2[-0x53] = puVar3[-0x53];
      FUN_004ded50(puVar3 + -0x52);
      FUN_005daad0(puVar2 + -0x4e,puVar3 + -0x4e);
      puVar2[-0x4a] = puVar3[-0x4a];
      puVar2[-0x49] = puVar3[-0x49];
      puVar2[-0x48] = puVar3[-0x48];
      puVar2[-0x47] = puVar3[-0x47];
      puVar2[-0x46] = puVar3[-0x46];
      *(undefined1 *)(puVar2 + -0x45) = *(undefined1 *)(puVar3 + -0x45);
      *(undefined1 *)((int)puVar2 + -0x113) = *(undefined1 *)((int)puVar3 + -0x113);
      *(undefined1 *)((int)puVar2 + -0x112) = *(undefined1 *)((int)puVar3 + -0x112);
      puVar2[-0x44] = puVar3[-0x44];
      puVar2[-0x43] = puVar3[-0x43];
      puVar2[-0x42] = puVar3[-0x42];
      puVar2[-0x41] = puVar3[-0x41];
      FUN_009beeb0(puVar3 + -0x40);
      puVar1 = puVar3 + -0x94;
      puVar2 = puVar2 + -0x58;
      puVar3 = puVar3 + -0x58;
    } while (puVar1 != param_1);
  }
  return param_2;
}

