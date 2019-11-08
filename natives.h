#pragma once

#include "pch.h"

// Generated 08/11/2019 

namespace BUILTIN
{
	static void WAIT(int ms) { return Native::Invoke<void, int>(N::WAIT, ms); }
	static int START_NEW_SCRIPT(char* scriptName, int stackSize) { return Native::Invoke<int, char*, int>(N::START_NEW_SCRIPT, scriptName, stackSize); }
	static int START_NEW_SCRIPT_WITH_ARGS(char* scriptName, Any* args, int argCount, int stackSize) { return Native::Invoke<int, char*, Any*, int, int>(N::START_NEW_SCRIPT_WITH_ARGS, scriptName, args, argCount, stackSize); }
	static int START_NEW_SCRIPT_WITH_NAME_HASH(Hash scriptHash, int stackSize) { return Native::Invoke<int, Hash, int>(N::START_NEW_SCRIPT_WITH_NAME_HASH, scriptHash, stackSize); }
	static int START_NEW_SCRIPT_WITH_NAME_HASH_AND_ARGS(Hash scriptHash, Any* args, int argCount, int stackSize) { return Native::Invoke<int, Hash, Any*, int, int>(N::START_NEW_SCRIPT_WITH_NAME_HASH_AND_ARGS, scriptHash, args, argCount, stackSize); }
	static int TIMERA() { return Native::Invoke<int>(N::TIMERA); }
	static int TIMERB() { return Native::Invoke<int>(N::TIMERB); }
	static void SETTIMERA(int value) { return Native::Invoke<void, int>(N::SETTIMERA, value); }
	static void SETTIMERB(int value) { return Native::Invoke<void, int>(N::SETTIMERB, value); }
	static float TIMESTEP() { return Native::Invoke<float>(N::TIMESTEP); }
	static float SIN(float value) { return Native::Invoke<float, float>(N::SIN, value); }
	static float COS(float value) { return Native::Invoke<float, float>(N::COS, value); }
	static float SQRT(float value) { return Native::Invoke<float, float>(N::SQRT, value); }
	static float POW(float base, float exponent) { return Native::Invoke<float, float, float>(N::POW, base, exponent); }
	static float VMAG(float x, float y, float z) { return Native::Invoke<float, float, float, float>(N::VMAG, x, y, z); }
	static float VMAG2(float x, float y, float z) { return Native::Invoke<float, float, float, float>(N::VMAG2, x, y, z); }
	static float VDIST(float x1, float y1, float z1, float x2, float y2, float z2) { return Native::Invoke<float, float, float, float, float, float, float>(N::VDIST, x1, y1, z1, x2, y2, z2); }
	static float VDIST2(float x1, float y1, float z1, float x2, float y2, float z2) { return Native::Invoke<float, float, float, float, float, float, float>(N::VDIST2, x1, y1, z1, x2, y2, z2); }
	static int SHIFT_LEFT(int value, int bitShift) { return Native::Invoke<int, int, int>(N::SHIFT_LEFT, value, bitShift); }
	static int SHIFT_RIGHT(int value, int bitShift) { return Native::Invoke<int, int, int>(N::SHIFT_RIGHT, value, bitShift); }
	static int FLOOR(float value) { return Native::Invoke<int, float>(N::FLOOR, value); }
	static int CEIL(float value) { return Native::Invoke<int, float>(N::CEIL, value); }
	static int ROUND(float value) { return Native::Invoke<int, float>(N::ROUND, value); }
	static float TO_FLOAT(int value) { return Native::Invoke<float, int>(N::TO_FLOAT, value); }
	static void _SET_THREAD_PRIORITY(Any p0) { return Native::Invoke<void, Any>(N::_SET_THREAD_PRIORITY, p0); }
}
namespace _NAMESPACE1
{
	static Any _0x53E4D0C079CA6855(Any p0) { return Native::Invoke<Any, Any>(0x53E4D0C079CA6855, p0); }
	static Any _0xC276FE69DDA22BAD(Any p0) { return Native::Invoke<Any, Any>(0xC276FE69DDA22BAD, p0); }
	static Any _0x5F5B1B7E8E8F94C6(Any p0) { return Native::Invoke<Any, Any>(0x5F5B1B7E8E8F94C6, p0); }
	static void _0x4972A022AE6DAFA1(Any p0) { return Native::Invoke<void, Any>(0x4972A022AE6DAFA1, p0); }
	static void _0x2BC4A6D92D140112(Any p0) { return Native::Invoke<void, Any>(0x2BC4A6D92D140112, p0); }
	static Any _0x957D7E750216D74B(Any p0) { return Native::Invoke<Any, Any>(0x957D7E750216D74B, p0); }
	static void _0x89783FDDF079C88D(Any p0) { return Native::Invoke<void, Any>(0x89783FDDF079C88D, p0); }
	static void _0x64340DC208D671D5(Any p0) { return Native::Invoke<void, Any>(0x64340DC208D671D5, p0); }
	static void _0x7A1FDCF35EAA140F(Any p0) { return Native::Invoke<void, Any>(0x7A1FDCF35EAA140F, p0); }
	static void _0x2A31D13C5F021D0D(Any p0) { return Native::Invoke<void, Any>(0x2A31D13C5F021D0D, p0); }
	static void _0x3C7A9C2C953128FE(Any p0) { return Native::Invoke<void, Any>(0x3C7A9C2C953128FE, p0); }
	static Any _0xEBA51A294C73292E() { return Native::Invoke<Any>(0xEBA51A294C73292E); }
	static void _0x140B3CB1D424A945(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x140B3CB1D424A945, p0, p1); }
	static Any _0x8CBE916CFC64AD5C(Any p0) { return Native::Invoke<Any, Any>(0x8CBE916CFC64AD5C, p0); }
	static void _0x1A7A802B2301EDC0(Any p0) { return Native::Invoke<void, Any>(0x1A7A802B2301EDC0, p0); }
	static void _0x733077295AB51304(Any p0) { return Native::Invoke<void, Any>(0x733077295AB51304, p0); }
	static Any _0x975BD6351648935F(Any p0) { return Native::Invoke<Any, Any>(0x975BD6351648935F, p0); }
}
namespace _NAMESPACE2
{
	static void _0xAEE3ADD08829CB6F(Any p0) { return Native::Invoke<void, Any>(0xAEE3ADD08829CB6F, p0); }
	static void _0xC273A5B8488F7838(Any p0) { return Native::Invoke<void, Any>(0xC273A5B8488F7838, p0); }
	static void _0xE588B5A8A005CB5E(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<void, Any, Any, Any, Any>(0xE588B5A8A005CB5E, p0, p1, p2, p3); }
	static void _0x8886D83A430537FD(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x8886D83A430537FD, p0, p1); }
	static void _0xBA8818212633500A(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0xBA8818212633500A, p0, p1, p2); }
	static Any _0xF382C92CCC1CCDBC(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(0xF382C92CCC1CCDBC, p0, p1, p2); }
	static Any _0xE195C5A82156321D() { return Native::Invoke<Any>(0xE195C5A82156321D); }
	static Any _0xE2487779957FE897() { return Native::Invoke<Any>(0xE2487779957FE897); }
	static void _0xDD0660C997DE94FD(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xDD0660C997DE94FD, p0, p1); }
	static void _0x4B6C9A43F7D9109B(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x4B6C9A43F7D9109B, p0, p1); }
	static Any _0x159EF5B6EDCE00E8(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x159EF5B6EDCE00E8, p0, p1); }
	static Any _0xDC44F405A6B98D03(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0xDC44F405A6B98D03, p0, p1); }
	static Any _0x2E2E06023D07631E(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x2E2E06023D07631E, p0, p1); }
	static Any _0x43FF27FC1829C202() { return Native::Invoke<Any>(0x43FF27FC1829C202); }
	static Any _0xFFEC4B0A1A3ED515(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0xFFEC4B0A1A3ED515, p0, p1); }
	static Any _0x619E63980BFC0096(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(0x619E63980BFC0096, p0, p1, p2); }
	static Any _0x660639BC60157048(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x660639BC60157048, p0, p1); }
	static void _0x4248AB2EEB3C75AD(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0x4248AB2EEB3C75AD, p0, p1, p2); }
	static void _0xB7079F4C72896756(Any p0, Any p1, Any p2, Any p3, Any p4) { return Native::Invoke<void, Any, Any, Any, Any, Any>(0xB7079F4C72896756, p0, p1, p2, p3, p4); }
	static void _0x5639FBEA922788DA(Any p0) { return Native::Invoke<void, Any>(0x5639FBEA922788DA, p0); }
	static void _0x67F7CEAC2391E114(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x67F7CEAC2391E114, p0, p1); }
	static void _0x8C8371EDFAF014A0(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x8C8371EDFAF014A0, p0, p1); }
	static void _0xF8C20282B237E3F7(Any p0) { return Native::Invoke<void, Any>(0xF8C20282B237E3F7, p0); }
	static Any _0x13F138225C202F66() { return Native::Invoke<Any>(0x13F138225C202F66); }
}
namespace _NAMESPACE3
{
	static Any _0x1FCA98E33C1437B3(Any p0, Any p1, Any p2, Any p3, Any p4) { return Native::Invoke<Any, Any, Any, Any, Any, Any>(0x1FCA98E33C1437B3, p0, p1, p2, p3, p4); }
	static void _0x84EEDB2C6E650000(Any p0) { return Native::Invoke<void, Any>(0x84EEDB2C6E650000, p0); }
	static void _0x4B85B3CF9197AEDF(Any p0) { return Native::Invoke<void, Any>(0x4B85B3CF9197AEDF, p0); }
	static Any _0x4B85B3CF91972222(Any p0) { return Native::Invoke<Any, Any>(0x4B85B3CF91972222, p0); }
	static void _0x8A8208AE92BF87A5(Any p0) { return Native::Invoke<void, Any>(0x8A8208AE92BF87A5, p0); }
	static Any _0x25557E324489393C(Any p0) { return Native::Invoke<Any, Any>(0x25557E324489393C, p0); }
	static Any _0x6F1F0B17109309DA(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x6F1F0B17109309DA, p0, p1); }
	static Any _0x9D1ECA9337BE9FC3(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x9D1ECA9337BE9FC3, p0, p1); }
	static void _0xAF068580194D9DC7(Any p0) { return Native::Invoke<void, Any>(0xAF068580194D9DC7, p0); }
	static Any _0x477122B8D05E7968(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(0x477122B8D05E7968, p0, p1, p2); }
	static Any _0x59606519FF9D3EC2(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x59606519FF9D3EC2, p0, p1); }
	static Any _0xF8D1D2DAB6007EEF() { return Native::Invoke<Any>(0xF8D1D2DAB6007EEF); }
	static Any _0x95531A4A20CCE7BC(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x95531A4A20CCE7BC, p0, p1); }
	static Any _0x9E036D5204FFBBC8(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x9E036D5204FFBBC8, p0, p1); }
	static void _0xF4D94AF761768700(Any p0) { return Native::Invoke<void, Any>(0xF4D94AF761768700, p0); }
	static void _0x8FDF221F13537936(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x8FDF221F13537936, p0, p1); }
	static void _0x718CF1328D20C2B3(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x718CF1328D20C2B3, p0, p1); }
	static void _0x8E1BA705F63C1925(Any p0) { return Native::Invoke<void, Any>(0x8E1BA705F63C1925, p0); }
	static Any _0xCBFC7725DE6CE2E0(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0xCBFC7725DE6CE2E0, p0, p1); }
	static Any _0xD8254CB2C586412B(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0xD8254CB2C586412B, p0, p1); }
	static Any _0xCDC5512A407CF08D(Any p0) { return Native::Invoke<Any, Any>(0xCDC5512A407CF08D, p0); }
	static Any _0xF94692EB9DC15D74(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0xF94692EB9DC15D74, p0, p1); }
	static Any _0x73616E64696C132E() { return Native::Invoke<Any>(0x73616E64696C132E); }
	static Any _0x8D81E7824B7753F7(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(0x8D81E7824B7753F7, p0, p1, p2); }
	static Any _0x4CDFFE3189EBDBD0(Any p0) { return Native::Invoke<Any, Any>(0x4CDFFE3189EBDBD0, p0); }
	static Any _0x34A0671BE613D3D0(Any p0) { return Native::Invoke<Any, Any>(0x34A0671BE613D3D0, p0); }
	static Any _0xD70C7A30412F8FA0(Any p0) { return Native::Invoke<Any, Any>(0xD70C7A30412F8FA0, p0); }
	static Any _0x9AAE3C1148A09BCA(Any p0) { return Native::Invoke<Any, Any>(0x9AAE3C1148A09BCA, p0); }
	static Any _0xA96619FE85159ED2(Any p0) { return Native::Invoke<Any, Any>(0xA96619FE85159ED2, p0); }
	static void _0xA41351EA2A18A0AD(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xA41351EA2A18A0AD, p0, p1); }
	static void _0x323E3AD772BA5D57(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x323E3AD772BA5D57, p0, p1); }
	static void _0x1B70811D3BF75DB9(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x1B70811D3BF75DB9, p0, p1); }
	static void _0x020894BF17A02EF2(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any, Any, Any>(0x020894BF17A02EF2, p0, p1, p2, p3, p4, p5, p6, p7); }
	static void _0xADF1D53F3B1FE0A7(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<void, Any, Any, Any, Any>(0xADF1D53F3B1FE0A7, p0, p1, p2, p3); }
	static void _0xD6824B7D24DC0CE0(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xD6824B7D24DC0CE0, p0, p1); }
	static Any _0x4B4038796F0D6566(Any p0) { return Native::Invoke<Any, Any>(0x4B4038796F0D6566, p0); }
	static void _0x75820B801CFF262A(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x75820B801CFF262A, p0, p1); }
	static Any _0x43C21623E42B821B(Any p0) { return Native::Invoke<Any, Any>(0x43C21623E42B821B, p0); }
	static Any _0x3FBC3F51BF12DFBF(Any p0) { return Native::Invoke<Any, Any>(0x3FBC3F51BF12DFBF, p0); }
	static Any _0x61BE7D6186260002(Any p0) { return Native::Invoke<Any, Any>(0x61BE7D6186260002, p0); }
	static Any _0x49F1D143ADE32656(Any p0) { return Native::Invoke<Any, Any>(0x49F1D143ADE32656, p0); }
	static void _0x8B720AD451CA2AB3(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<void, Any, Any, Any, Any>(0x8B720AD451CA2AB3, p0, p1, p2, p3); }
	static void _0x2BF96692C67F3E53(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0x2BF96692C67F3E53, p0, p1, p2); }
	static Any _0x005E6F28DD7ED58D(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x005E6F28DD7ED58D, p0, p1); }
	static Any _0x73616E64696C616E(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(0x73616E64696C616E, p0, p1, p2); }
	static Any _0xB89FCFF19DAFFF28(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0xB89FCFF19DAFFF28, p0, p1); }
	static Any _0x337F1CC8EE895601(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x337F1CC8EE895601, p0, p1); }
	static Any _0xE5822422197BBBA3(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(0xE5822422197BBBA3, p0, p1, p2); }
	static Any _0xFB5674687A1B2814(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(0xFB5674687A1B2814, p0, p1, p2); }
	static Any _0x430EE0A19BC5A287(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(0x430EE0A19BC5A287, p0, p1, p2); }
	static void _0x519E96C2C68B404B(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0x519E96C2C68B404B, p0, p1, p2); }
	static Any _0x07A6F6447ECA9B64(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x07A6F6447ECA9B64, p0, p1); }
	static void _0x6BC5104E68CBEFE8(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<void, Any, Any, Any, Any>(0x6BC5104E68CBEFE8, p0, p1, p2, p3); }
	static Any _0xCC24CB07F60B496E(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0xCC24CB07F60B496E, p0, p1); }
	static void _0x3A379D2166CF5B92(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0x3A379D2166CF5B92, p0, p1, p2); }
	static Any _0x2B7277484CC095FD(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x2B7277484CC095FD, p0, p1); }
	static Any _0x8398438D8F14F56D(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return Native::Invoke<Any, Any, Any, Any, Any, Any, Any>(0x8398438D8F14F56D, p0, p1, p2, p3, p4, p5); }
	static Any _0x3AB6C7B0BB0DF4B1(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x3AB6C7B0BB0DF4B1, p0, p1); }
	static void _0xDC418495DBA327A1(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0xDC418495DBA327A1, p0, p1, p2); }
	static void _0x1C0B105C3F30B88D(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0x1C0B105C3F30B88D, p0, p1, p2); }
	static void _0x6843A1AA3A336DFF(Any p0) { return Native::Invoke<void, Any>(0x6843A1AA3A336DFF, p0); }
	static void _0xA2507C4948C83D2E(Any p0) { return Native::Invoke<void, Any>(0xA2507C4948C83D2E, p0); }
	static void _0xF7A4C571E572D237(Any p0) { return Native::Invoke<void, Any>(0xF7A4C571E572D237, p0); }
	static Any _0x661B8683611B9B97(Any p0) { return Native::Invoke<Any, Any>(0x661B8683611B9B97, p0); }
	static void _0xAB5E7CAB074D6B84(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xAB5E7CAB074D6B84, p0, p1); }
	static Any _0x1C5D33A4293E6DDE(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x1C5D33A4293E6DDE, p0, p1); }
	static Any _0xA9016536015DE29D(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0xA9016536015DE29D, p0, p1); }
	static void _0x15598CFB25F3DC7E(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0x15598CFB25F3DC7E, p0, p1, p2); }
	static Any _0x1F0E401031E20146(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x1F0E401031E20146, p0, p1); }
	static Any _0xDF7B5144E25CD3FE(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0xDF7B5144E25CD3FE, p0, p1); }
	static Any _0xAE6ADA8FE7E84ACC(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0xAE6ADA8FE7E84ACC, p0, p1); }
	static Any _0xAE5ADA4FE3E21ADC() { return Native::Invoke<Any>(0xAE5ADA4FE3E21ADC); }
	static Any _0x1407F5115FB9583E(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x1407F5115FB9583E, p0, p1); }
	static Any _0x23E33CB9F4A3F547(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x23E33CB9F4A3F547, p0, p1); }
	static Any _0x0DF57F86FE71DBE5(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x0DF57F86FE71DBE5, p0, p1); }
	static void _0x1AD896BF43619551() { return Native::Invoke<void>(0x1AD896BF43619551); }
	static Any _0x4822A65D5AF64E69(Any p0) { return Native::Invoke<Any, Any>(0x4822A65D5AF64E69, p0); }
	static Any _0x5D7BFDA2290B4E39(Any p0) { return Native::Invoke<Any, Any>(0x5D7BFDA2290B4E39, p0); }
	static Any _0xFDFC14799373283F(Any p0) { return Native::Invoke<Any, Any>(0xFDFC14799373283F, p0); }
	static Any _0xB727A847862CB00A(Any p0) { return Native::Invoke<Any, Any>(0xB727A847862CB00A, p0); }
	static Any _0xA1300DE03E5D1973(Any p0) { return Native::Invoke<Any, Any>(0xA1300DE03E5D1973, p0); }
	static void _0x53CB3970BA02E3CC(Any p0) { return Native::Invoke<void, Any>(0x53CB3970BA02E3CC, p0); }
	static void _0xB1A196BAFE650402(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xB1A196BAFE650402, p0, p1); }
	static void _0xAE6DE22DE0ED4554(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xAE6DE22DE0ED4554, p0, p1); }
	static Any _0x61B2AAEF645DDAF0(Any p0, Any p1, Any p2, Any p3, Any p4) { return Native::Invoke<Any, Any, Any, Any, Any, Any>(0x61B2AAEF645DDAF0, p0, p1, p2, p3, p4); }
	static void _0x07706C4CC9C6CC9E(Any p0, Any p1, Any p2, Any p3, Any p4) { return Native::Invoke<void, Any, Any, Any, Any, Any>(0x07706C4CC9C6CC9E, p0, p1, p2, p3, p4); }
	static void _0x3641FCD53E59B335(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0x3641FCD53E59B335, p0, p1, p2); }
	static void _0x99B2A2E3655DEAF1(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x99B2A2E3655DEAF1, p0, p1); }
	static void _0xBC781D24AA11F179(Any p0) { return Native::Invoke<void, Any>(0xBC781D24AA11F179, p0); }
	static Any _0x3B393716C3FD8237(Any p0) { return Native::Invoke<Any, Any>(0x3B393716C3FD8237, p0); }
	static void _0xE12D7B4B959644CD() { return Native::Invoke<void>(0xE12D7B4B959644CD); }
	static void _0xC1193521E3B9FADD(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xC1193521E3B9FADD, p0, p1); }
	static Any _0x7C709C01D43D94CD() { return Native::Invoke<Any>(0x7C709C01D43D94CD); }
	static Any _0x41AFA5F228B0B6B0() { return Native::Invoke<Any>(0x41AFA5F228B0B6B0); }
	static Any _0x2DB524750DC41ED4() { return Native::Invoke<Any>(0x2DB524750DC41ED4); }
	static Any _0xEA41D44A8D42057B() { return Native::Invoke<Any>(0xEA41D44A8D42057B); }
	static Any _0x37C1257849DEF24A() { return Native::Invoke<Any>(0x37C1257849DEF24A); }
	static Any _0xCDCD7B2D49AEE73A() { return Native::Invoke<Any>(0xCDCD7B2D49AEE73A); }
	static Any _0xEF324E9550A394D5(Any p0) { return Native::Invoke<Any, Any>(0xEF324E9550A394D5, p0); }
}
namespace _NAMESPACE4
{
	static Any _0xC31C44C43B48FDE3() { return Native::Invoke<Any>(0xC31C44C43B48FDE3); }
}
namespace _NAMESPACE5
{
	static void _0x5DA12E025D47D4E5(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0x5DA12E025D47D4E5, p0, p1, p2); }
	static Any _0xA4C8E23E29040DE0(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0xA4C8E23E29040DE0, p0, p1); }
	static Any _0x147149F2E909323C(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x147149F2E909323C, p0, p1); }
	static Any _0x0EFA71F4B4330E04(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x0EFA71F4B4330E04, p0, p1); }
	static Any _0x704674A0535A471D(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x704674A0535A471D, p0, p1); }
	static void _0x920F9488BD115EFB(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0x920F9488BD115EFB, p0, p1, p2); }
	static Any _0x958DD43D41F89A47(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x958DD43D41F89A47, p0, p1); }
	static Any _0x7C059C55AD940CB4(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x7C059C55AD940CB4, p0, p1); }
	static void _0x75415EE0CB583760(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0x75415EE0CB583760, p0, p1, p2); }
	static void _0x09A59688C26D88DF(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0x09A59688C26D88DF, p0, p1, p2); }
	static Any _0x219DA04BAA9CB065(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x219DA04BAA9CB065, p0, p1); }
	static Any _0x223BF310F854871C(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x223BF310F854871C, p0, p1); }
	static void _0xC6258F41D86676E0(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0xC6258F41D86676E0, p0, p1, p2); }
	static Any _0x36731AC041289BB1(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x36731AC041289BB1, p0, p1); }
	static Any _0x94A7F191DB49A44D(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(0x94A7F191DB49A44D, p0, p1, p2); }
	static void _0xF6A7C08DF2E28B28(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<void, Any, Any, Any, Any>(0xF6A7C08DF2E28B28, p0, p1, p2, p3); }
	static void _0x4AF5A4C7B9157D14(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<void, Any, Any, Any, Any>(0x4AF5A4C7B9157D14, p0, p1, p2, p3); }
	static void _0xF8DAC3D85636C241(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xF8DAC3D85636C241, p0, p1); }
	static Any _0x103C2F885ABEB00B(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x103C2F885ABEB00B, p0, p1); }
	static Any _0x200373A8DF081F22(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x200373A8DF081F22, p0, p1); }
	static Any _0x4C9F782180712742(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x4C9F782180712742, p0, p1); }
	static Any _0xB429F58803D285B1(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0xB429F58803D285B1, p0, p1); }
	static void _0x7E2C766ADB2C5F1A(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x7E2C766ADB2C5F1A, p0, p1); }
	static void _0xD962F8579D702DB5() { return Native::Invoke<void>(0xD962F8579D702DB5); }
	static void _0xA4D3A1C008F250DF(Any p0) { return Native::Invoke<void, Any>(0xA4D3A1C008F250DF, p0); }
	static void _0xFB6E111908502871(Any p0) { return Native::Invoke<void, Any>(0xFB6E111908502871, p0); }
	static void _0x3FC4C027FD0936F4(Any p0) { return Native::Invoke<void, Any>(0x3FC4C027FD0936F4, p0); }
}
namespace AUDIO
{
	static void _0x7455CD705F7E933E() { return Native::Invoke<void>(0x7455CD705F7E933E); }
	static void _0x33D51F801CB16E4F() { return Native::Invoke<void>(0x33D51F801CB16E4F); }
	static void _0xEF51242E35242B47(Any p0) { return Native::Invoke<void, Any>(0xEF51242E35242B47, p0); }
	static void CREATE_NEW_SCRIPTED_CONVERSATION(Any p0) { return Native::Invoke<void, Any>(N::CREATE_NEW_SCRIPTED_CONVERSATION, p0); }
	static Any _0xDF947FE0D551684E(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0xDF947FE0D551684E, p0, p1); }
	static void ADD_PED_TO_CONVERSATION(int pedIndex, Ped ped, char* name) { return Native::Invoke<void, int, Ped, char*>(N::ADD_PED_TO_CONVERSATION, pedIndex, ped, name); }
	static void _0xA2323A2EAE32A290(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0xA2323A2EAE32A290, p0, p1, p2); }
	static Any _0x79F9C57B8D0DFE90(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x79F9C57B8D0DFE90, p0, p1); }
	static void START_SCRIPT_CONVERSATION(BOOL p0, BOOL p1, BOOL p2, BOOL p3) { return Native::Invoke<void, BOOL, BOOL, BOOL, BOOL>(N::START_SCRIPT_CONVERSATION, p0, p1, p2, p3); }
	static void PRELOAD_SCRIPT_CONVERSATION(BOOL p0, BOOL p1, BOOL p2, BOOL p3) { return Native::Invoke<void, BOOL, BOOL, BOOL, BOOL>(N::PRELOAD_SCRIPT_CONVERSATION, p0, p1, p2, p3); }
	static void START_PRELOADED_CONVERSATION(Any p0) { return Native::Invoke<void, Any>(N::START_PRELOADED_CONVERSATION, p0); }
	static Any _0x0CB3D1919E8D7CBA(Any p0) { return Native::Invoke<Any, Any>(0x0CB3D1919E8D7CBA, p0); }
	static Any _0xFE5C6177064BD390(Any p0) { return Native::Invoke<Any, Any>(0xFE5C6177064BD390, p0); }
	static Any _0xD89504D9D7D5057D(Any p0) { return Native::Invoke<Any, Any>(0xD89504D9D7D5057D, p0); }
	static Any _0x5A13586A9447931F(Any p0) { return Native::Invoke<Any, Any>(0x5A13586A9447931F, p0); }
	static BOOL IS_SCRIPTED_CONVERSATION_LOADED(Any p0) { return Native::Invoke<BOOL, Any>(N::IS_SCRIPTED_CONVERSATION_LOADED, p0); }
	static Any _0xA2CAC9DEF0195E6F(Any p0) { return Native::Invoke<Any, Any>(0xA2CAC9DEF0195E6F, p0); }
	static Any _0x1ECC76792F661CF5(Any p0) { return Native::Invoke<Any, Any>(0x1ECC76792F661CF5, p0); }
	static Any _0xF01C570E0A0A1E67(Any p0) { return Native::Invoke<Any, Any>(0xF01C570E0A0A1E67, p0); }
	static Any _0x847748AE5D7B1071(Any p0) { return Native::Invoke<Any, Any>(0x847748AE5D7B1071, p0); }
	static Any _0xD0730C1FA40348D9(Any p0) { return Native::Invoke<Any, Any>(0xD0730C1FA40348D9, p0); }
	static Any GET_CURRENT_SCRIPTED_CONVERSATION_LINE(Any p0) { return Native::Invoke<Any, Any>(N::GET_CURRENT_SCRIPTED_CONVERSATION_LINE, p0); }
	static void PAUSE_SCRIPTED_CONVERSATION(BOOL p0, Any p1, Any p2, Any p3, Any p4) { return Native::Invoke<void, BOOL, Any, Any, Any, Any>(N::PAUSE_SCRIPTED_CONVERSATION, p0, p1, p2, p3, p4); }
	static void RESTART_SCRIPTED_CONVERSATION(Any p0) { return Native::Invoke<void, Any>(N::RESTART_SCRIPTED_CONVERSATION, p0); }
	static void _0x36559148B78853B3(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0x36559148B78853B3, p0, p1, p2); }
	static Any STOP_SCRIPTED_CONVERSATION(BOOL p0, Any p1, Any p2) { return Native::Invoke<Any, BOOL, Any, Any>(N::STOP_SCRIPTED_CONVERSATION, p0, p1, p2); }
	static void SKIP_TO_NEXT_SCRIPTED_CONVERSATION_LINE(Any p0) { return Native::Invoke<void, Any>(N::SKIP_TO_NEXT_SCRIPTED_CONVERSATION_LINE, p0); }
	static Any _0xF336E9F989B3518F(Any p0) { return Native::Invoke<Any, Any>(0xF336E9F989B3518F, p0); }
	static Any _0x254B0241E964B450(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x254B0241E964B450, p0, p1); }
	static Any _0x152ED1B56E8F1F50(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x152ED1B56E8F1F50, p0, p1); }
	static Any _0x935DBD96D4A3DA1F(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x935DBD96D4A3DA1F, p0, p1); }
	static Any _0x295859EB18F48D82(Any p0) { return Native::Invoke<Any, Any>(0x295859EB18F48D82, p0); }
	static void _0x40CA665AB9D8D505(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x40CA665AB9D8D505, p0, p1); }
	static void _0xF232C2C546AC16D0(Any p0) { return Native::Invoke<void, Any>(0xF232C2C546AC16D0, p0); }
	static void _0x1E6F9A9FE1A99F36(Any p0) { return Native::Invoke<void, Any>(0x1E6F9A9FE1A99F36, p0); }
	static void REGISTER_SCRIPT_WITH_AUDIO(int p0) { return Native::Invoke<void, int>(N::REGISTER_SCRIPT_WITH_AUDIO, p0); }
	static void UNREGISTER_SCRIPT_WITH_AUDIO() { return Native::Invoke<void>(N::UNREGISTER_SCRIPT_WITH_AUDIO); }
	static Any REQUEST_SCRIPT_AUDIO_BANK(Any p0) { return Native::Invoke<Any, Any>(N::REQUEST_SCRIPT_AUDIO_BANK, p0); }
	static void RELEASE_NAMED_SCRIPT_AUDIO_BANK(char* audioBank) { return Native::Invoke<void, char*>(N::RELEASE_NAMED_SCRIPT_AUDIO_BANK, audioBank); }
	static void RELEASE_SCRIPT_AUDIO_BANK() { return Native::Invoke<void>(N::RELEASE_SCRIPT_AUDIO_BANK); }
	static int GET_SOUND_ID() { return Native::Invoke<int>(N::GET_SOUND_ID); }
	static void RELEASE_SOUND_ID(int soundId) { return Native::Invoke<void, int>(N::RELEASE_SOUND_ID, soundId); }
	static void PLAY_SOUND(Any p0, Any p1, Any p2, Any p3, Any p4) { return Native::Invoke<void, Any, Any, Any, Any, Any>(N::PLAY_SOUND, p0, p1, p2, p3, p4); }
	static void PLAY_SOUND_FRONTEND(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(N::PLAY_SOUND_FRONTEND, p0, p1, p2); }
	static void _0xE8EAFF7B41EDD291(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xE8EAFF7B41EDD291, p0, p1); }
	static void _0x6FB1DA3CA9DA7D90(Any p0, Any p1, Any p2, Any p3, Any p4) { return Native::Invoke<void, Any, Any, Any, Any, Any>(0x6FB1DA3CA9DA7D90, p0, p1, p2, p3, p4); }
	static void _0xCCE219C922737BFA(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any, Any, Any>(0xCCE219C922737BFA, p0, p1, p2, p3, p4, p5, p6, p7); }
	static void _0x0F2A2175734926D8(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x0F2A2175734926D8, p0, p1); }
	static Any _0x580D71DFE0088E34(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x580D71DFE0088E34, p0, p1); }
	static Any _0x6DF942C4179BE5AB(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x6DF942C4179BE5AB, p0, p1); }
	static void _0x9821B68CD3E05F2B(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<void, Any, Any, Any, Any>(0x9821B68CD3E05F2B, p0, p1, p2, p3); }
	static Any _0x9963681A8BC69BF3() { return Native::Invoke<Any>(0x9963681A8BC69BF3); }
	static Any _0x2E31ACA7477CF00F() { return Native::Invoke<Any>(0x2E31ACA7477CF00F); }
	static void _0xCE5D0FFE83939AF1(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<void, Any, Any, Any, Any>(0xCE5D0FFE83939AF1, p0, p1, p2, p3); }
	static void _0xF1C5310FEAA36B48(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any>(0xF1C5310FEAA36B48, p0, p1, p2, p3, p4, p5); }
	static void _0xDCF5BA95BBF0FABA(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any, Any, Any, Any>(0xDCF5BA95BBF0FABA, p0, p1, p2, p3, p4, p5, p6, p7, p8); }
	static void _0x0286617C8FC50A53(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<void, Any, Any, Any, Any>(0x0286617C8FC50A53, p0, p1, p2, p3); }
	static void _0x3210BCB36AF7621B(Any p0) { return Native::Invoke<void, Any>(0x3210BCB36AF7621B, p0); }
	static void _0x503703EC1781B7D6(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0x503703EC1781B7D6, p0, p1, p2); }
	static Any _0xE368E8422C860BA7(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(0xE368E8422C860BA7, p0, p1, p2); }
	static void _0x9D746964E0CF2C5F(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x9D746964E0CF2C5F, p0, p1); }
	static Any _0xD9130842D7226045(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0xD9130842D7226045, p0, p1); }
	static void _0x531A78D6BF27014B(Any p0) { return Native::Invoke<void, Any>(0x531A78D6BF27014B, p0); }
	static Any _0x4AD019591E94C064(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<Any, Any, Any, Any, Any>(0x4AD019591E94C064, p0, p1, p2, p3); }
	static void _0x3E93DDDCBB6111E4(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x3E93DDDCBB6111E4, p0, p1); }
	static Any _0x714A0EA7DE1167BE(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x714A0EA7DE1167BE, p0, p1); }
	static Any _0x84848E1C0FC67DBB(Any p0) { return Native::Invoke<Any, Any>(0x84848E1C0FC67DBB, p0); }
	static Any _PLAY_AMBIENT_SPEECH1(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(N::_PLAY_AMBIENT_SPEECH1, p0, p1); }
	static Any _PLAY_AMBIENT_SPEECH_AT_COORDS(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<Any, Any, Any, Any, Any>(N::_PLAY_AMBIENT_SPEECH_AT_COORDS, p0, p1, p2, p3); }
	static Any _0x72E4D1C4639BC465(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x72E4D1C4639BC465, p0, p1); }
	static Any _0xB18FEC133C7C6C69(Any p0) { return Native::Invoke<Any, Any>(0xB18FEC133C7C6C69, p0); }
	static void _0xDC93F0948F2C28F4(Any p0) { return Native::Invoke<void, Any>(0xDC93F0948F2C28F4, p0); }
	static void _0x0D7FD6A55FD63AEF(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0x0D7FD6A55FD63AEF, p0, p1, p2); }
	static void _0x660A8F876DF1D4F8(Any p0) { return Native::Invoke<void, Any>(0x660A8F876DF1D4F8, p0); }
	static void _0x380A2E353AD30917(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0x380A2E353AD30917, p0, p1, p2); }
	static void _0x0FAF7171BF613B80(Any p0) { return Native::Invoke<void, Any>(0x0FAF7171BF613B80, p0); }
	static void PLAY_PAIN(Ped ped, int painID, float p1, Any p3, Any p4) { return Native::Invoke<void, Ped, int, float, Any, Any>(N::PLAY_PAIN, ped, painID, p1, p3, p4); }
	static void _0x6652B0C8F3D414D0(Any p0) { return Native::Invoke<void, Any>(0x6652B0C8F3D414D0, p0); }
	static void _0xF092B6030D6FD49C(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xF092B6030D6FD49C, p0, p1); }
	static void _0x2651DDC0EA269073(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x2651DDC0EA269073, p0, p1); }
	static void SET_AMBIENT_VOICE_NAME(Ped ped, char* name) { return Native::Invoke<void, Ped, char*>(N::SET_AMBIENT_VOICE_NAME, ped, name); }
	static Any _0x2703EFB583F0949A() { return Native::Invoke<Any>(0x2703EFB583F0949A); }
	static void STOP_CURRENT_PLAYING_SPEECH(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(N::STOP_CURRENT_PLAYING_SPEECH, p0, p1); }
	static void STOP_CURRENT_PLAYING_AMBIENT_SPEECH(Ped ped, Any p1) { return Native::Invoke<void, Ped, Any>(N::STOP_CURRENT_PLAYING_AMBIENT_SPEECH, ped, p1); }
	static BOOL IS_AMBIENT_SPEECH_PLAYING(Ped p0) { return Native::Invoke<BOOL, Ped>(N::IS_AMBIENT_SPEECH_PLAYING, p0); }
	static BOOL IS_SCRIPTED_SPEECH_PLAYING(Any p0) { return Native::Invoke<BOOL, Any>(N::IS_SCRIPTED_SPEECH_PLAYING, p0); }
	static BOOL IS_ANY_SPEECH_PLAYING(Ped ped) { return Native::Invoke<BOOL, Ped>(N::IS_ANY_SPEECH_PLAYING, ped); }
	static Any _0x2B101AD9F651243A() { return Native::Invoke<Any>(0x2B101AD9F651243A); }
	static Any _0x4A98E228A936DBCC(Any p0) { return Native::Invoke<Any, Any>(0x4A98E228A936DBCC, p0); }
	static Any _0x6BFFB7C276866996(Any p0) { return Native::Invoke<Any, Any>(0x6BFFB7C276866996, p0); }
	static BOOL _CAN_PED_SPEAK(Ped ped, char* speechName, BOOL unk) { return Native::Invoke<BOOL, Ped, char*, BOOL>(N::_CAN_PED_SPEAK, ped, speechName, unk); }
	static Any _0xF0EE69F500952FA5(Any p0) { return Native::Invoke<Any, Any>(0xF0EE69F500952FA5, p0); }
	static Any _0x9D6DEC9791A4E501(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<Any, Any, Any, Any, Any>(0x9D6DEC9791A4E501, p0, p1, p2, p3); }
	static Any _0x864A842B86993851() { return Native::Invoke<Any>(0x864A842B86993851); }
	static BOOL IS_PED_IN_CURRENT_CONVERSATION(Ped ped, Any p1, Any p2) { return Native::Invoke<BOOL, Ped, Any, Any>(N::IS_PED_IN_CURRENT_CONVERSATION, ped, p1, p2); }
	static Any _0x54B187F111D9C6F8(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x54B187F111D9C6F8, p0, p1); }
	static void SET_PED_IS_DRUNK(Ped ped, BOOL toggle) { return Native::Invoke<void, Ped, BOOL>(N::SET_PED_IS_DRUNK, ped, toggle); }
	static void _0x3A00D87B20A2A5E4(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x3A00D87B20A2A5E4, p0, p1); }
	static void _0xD47D47EFBF103FB8(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xD47D47EFBF103FB8, p0, p1); }
	static void PLAY_ANIMAL_VOCALIZATION(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(N::PLAY_ANIMAL_VOCALIZATION, p0, p1, p2); }
	static Any IS_ANIMAL_VOCALIZATION_PLAYING(Any p0) { return Native::Invoke<Any, Any>(N::IS_ANIMAL_VOCALIZATION_PLAYING, p0); }
	static void SET_ANIMAL_MOOD(Ped animal, int mood) { return Native::Invoke<void, Ped, int>(N::SET_ANIMAL_MOOD, animal, mood); }
	static void _0xFCDEC42B1C78B7F8(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xFCDEC42B1C78B7F8, p0, p1); }
	static void _0xEB4D592620B8C209(Any p0) { return Native::Invoke<void, Any>(0xEB4D592620B8C209, p0); }
	static void _0xA6847BBA4FCDD13F(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xA6847BBA4FCDD13F, p0, p1); }
	static void SET_STATIC_EMITTER_ENABLED(char* emitterName, BOOL toggle) { return Native::Invoke<void, char*, BOOL>(N::SET_STATIC_EMITTER_ENABLED, emitterName, toggle); }
	static void PLAY_END_CREDITS_MUSIC(BOOL play) { return Native::Invoke<void, BOOL>(N::PLAY_END_CREDITS_MUSIC, play); }
	static Any _0x7678FE0455ED1145(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(0x7678FE0455ED1145, p0, p1, p2); }
	static Any _0xFFE9C53DEEA3DB0B(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return Native::Invoke<Any, Any, Any, Any, Any, Any, Any, Any>(0xFFE9C53DEEA3DB0B, p0, p1, p2, p3, p4, p5, p6); }
	static void _0x5E3CCF03995388B5(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<void, Any, Any, Any, Any>(0x5E3CCF03995388B5, p0, p1, p2, p3); }
	static void _0x43037ABFE214A851() { return Native::Invoke<void>(0x43037ABFE214A851); }
	static void SET_AMBIENT_ZONE_STATE(Any* p0, BOOL p1, BOOL p2) { return Native::Invoke<void, Any*, BOOL, BOOL>(N::SET_AMBIENT_ZONE_STATE, p0, p1, p2); }
	static void CLEAR_AMBIENT_ZONE_STATE(char* zoneName, BOOL p1) { return Native::Invoke<void, char*, BOOL>(N::CLEAR_AMBIENT_ZONE_STATE, zoneName, p1); }
	static void SET_AMBIENT_ZONE_LIST_STATE(char* p0, BOOL p1, BOOL p2) { return Native::Invoke<void, char*, BOOL, BOOL>(N::SET_AMBIENT_ZONE_LIST_STATE, p0, p1, p2); }
	static void CLEAR_AMBIENT_ZONE_LIST_STATE(Any* p0, BOOL p1) { return Native::Invoke<void, Any*, BOOL>(N::CLEAR_AMBIENT_ZONE_LIST_STATE, p0, p1); }
	static void SET_AMBIENT_ZONE_STATE_PERSISTENT(char* ambientZone, BOOL p1, BOOL p2) { return Native::Invoke<void, char*, BOOL, BOOL>(N::SET_AMBIENT_ZONE_STATE_PERSISTENT, ambientZone, p1, p2); }
	static void SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT(char* ambientZone, BOOL p1, BOOL p2) { return Native::Invoke<void, char*, BOOL, BOOL>(N::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT, ambientZone, p1, p2); }
	static void _0x3743CE6948194349(Any p0, Any p1, Any p2, Any p3, Any p4) { return Native::Invoke<void, Any, Any, Any, Any, Any>(0x3743CE6948194349, p0, p1, p2, p3, p4); }
	static BOOL IS_HORN_ACTIVE(Vehicle vehicle) { return Native::Invoke<BOOL, Vehicle>(N::IS_HORN_ACTIVE, vehicle); }
	static void _0xFD461D0ABA5559B1(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xFD461D0ABA5559B1, p0, p1); }
	static BOOL IS_STREAM_PLAYING(Any p0) { return Native::Invoke<BOOL, Any>(N::IS_STREAM_PLAYING, p0); }
	static BOOL LOAD_STREAM(char* streamName, char* soundSet) { return Native::Invoke<BOOL, char*, char*>(N::LOAD_STREAM, streamName, soundSet); }
	static void PLAY_STREAM_FROM_PED(Ped ped, Any p1) { return Native::Invoke<void, Ped, Any>(N::PLAY_STREAM_FROM_PED, ped, p1); }
	static void PLAY_STREAM_FRONTEND(Any p0) { return Native::Invoke<void, Any>(N::PLAY_STREAM_FRONTEND, p0); }
	static void PLAY_STREAM_FROM_POSITION(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<void, Any, Any, Any, Any>(N::PLAY_STREAM_FROM_POSITION, p0, p1, p2, p3); }
	static void _0x3A3BE6B920525237(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x3A3BE6B920525237, p0, p1); }
	static void STOP_STREAM(Any p0) { return Native::Invoke<void, Any>(N::STOP_STREAM, p0); }
	static void STOP_PED_SPEAKING(Ped ped, BOOL speaking) { return Native::Invoke<void, Ped, BOOL>(N::STOP_PED_SPEAKING, ped, speaking); }
	static void DISABLE_PED_PAIN_AUDIO(Ped ped, BOOL toggle) { return Native::Invoke<void, Ped, BOOL>(N::DISABLE_PED_PAIN_AUDIO, ped, toggle); }
	static BOOL IS_AMBIENT_SPEECH_DISABLED(Ped ped) { return Native::Invoke<BOOL, Ped>(N::IS_AMBIENT_SPEECH_DISABLED, ped); }
	static Any _0xB2DE3AEBE31150E2(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0xB2DE3AEBE31150E2, p0, p1); }
	static void _0x6378A235374B852F(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x6378A235374B852F, p0, p1); }
	static void _0x87E6302FC61208CC(Any p0) { return Native::Invoke<void, Any>(0x87E6302FC61208CC, p0); }
	static void SET_HORN_ENABLED(Vehicle vehicle, BOOL toggle) { return Native::Invoke<void, Vehicle, BOOL>(N::SET_HORN_ENABLED, vehicle, toggle); }
	static void SET_AUDIO_VEHICLE_PRIORITY(Vehicle vehicle, Any p1) { return Native::Invoke<void, Vehicle, Any>(N::SET_AUDIO_VEHICLE_PRIORITY, vehicle, p1); }
	static void _0x259ACC5B52A2B2D9(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x259ACC5B52A2B2D9, p0, p1); }
	static void _FORCE_VEHICLE_ENGINE_AUDIO(Vehicle vehicle, char* audioName) { return Native::Invoke<void, Vehicle, char*>(N::_FORCE_VEHICLE_ENGINE_AUDIO, vehicle, audioName); }
	static void SET_GPS_ACTIVE(BOOL active) { return Native::Invoke<void, BOOL>(N::SET_GPS_ACTIVE, active); }
	static Any _0x6339C1EA3979B5F7(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x6339C1EA3979B5F7, p0, p1); }
	static void _0x9428447DED71FC7E(Any p0) { return Native::Invoke<void, Any>(0x9428447DED71FC7E, p0); }
	static Any _0xAC84686C06184B0D(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0xAC84686C06184B0D, p0, p1); }
	static BOOL START_AUDIO_SCENE(char* scene) { return Native::Invoke<BOOL, char*>(N::START_AUDIO_SCENE, scene); }
	static Any _0xDC2F83A0612CA34D(Any p0) { return Native::Invoke<Any, Any>(0xDC2F83A0612CA34D, p0); }
	static void STOP_AUDIO_SCENE(char* scene) { return Native::Invoke<void, char*>(N::STOP_AUDIO_SCENE, scene); }
	static void _0x6AB944DF68B512D3(Any p0) { return Native::Invoke<void, Any>(0x6AB944DF68B512D3, p0); }
	static void STOP_AUDIO_SCENES() { return Native::Invoke<void>(N::STOP_AUDIO_SCENES); }
	static BOOL IS_AUDIO_SCENE_ACTIVE(char* scene) { return Native::Invoke<BOOL, char*>(N::IS_AUDIO_SCENE_ACTIVE, scene); }
	static void SET_AUDIO_SCENE_VARIABLE(char* scene, char* variable, float value) { return Native::Invoke<void, char*, char*, float>(N::SET_AUDIO_SCENE_VARIABLE, scene, variable, value); }
	static Any _0x8B25A18E390F75BF(Any p0) { return Native::Invoke<Any, Any>(0x8B25A18E390F75BF, p0); }
	static void ADD_ENTITY_TO_AUDIO_MIX_GROUP(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(N::ADD_ENTITY_TO_AUDIO_MIX_GROUP, p0, p1, p2); }
	static Any _0x131EC9247E7A2903(Any p0) { return Native::Invoke<Any, Any>(0x131EC9247E7A2903, p0); }
	static void REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(N::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP, p0, p1); }
	static Any _0xE600F61F54A444A6() { return Native::Invoke<Any>(0xE600F61F54A444A6); }
	static BOOL AUDIO_IS_SCRIPTED_MUSIC_PLAYING() { return Native::Invoke<BOOL>(N::AUDIO_IS_SCRIPTED_MUSIC_PLAYING); }
	static Any _0xBE28DB99556FF8D9(Any p0) { return Native::Invoke<Any, Any>(0xBE28DB99556FF8D9, p0); }
	static void _0x8E901B65206C2D3E(Any p0) { return Native::Invoke<void, Any>(0x8E901B65206C2D3E, p0); }
	static void _0xC4CFCE4C656EF480(Any p0) { return Native::Invoke<void, Any>(0xC4CFCE4C656EF480, p0); }
	static void _0xABDB4863D3D72021(Any p0, Any p1, Any p2, Any p3, Any p4) { return Native::Invoke<void, Any, Any, Any, Any, Any>(0xABDB4863D3D72021, p0, p1, p2, p3, p4); }
	static void _0xB93A769B8B726950(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xB93A769B8B726950, p0, p1); }
	static void _0xE891504B2F0E2DBA(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xE891504B2F0E2DBA, p0, p1); }
	static void _0x9EB779765E68C52E(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x9EB779765E68C52E, p0, p1); }
	static BOOL PREPARE_MUSIC_EVENT(char* eventName) { return Native::Invoke<BOOL, char*>(N::PREPARE_MUSIC_EVENT, eventName); }
	static BOOL CANCEL_MUSIC_EVENT(char* eventName) { return Native::Invoke<BOOL, char*>(N::CANCEL_MUSIC_EVENT, eventName); }
	static BOOL TRIGGER_MUSIC_EVENT(char* eventName) { return Native::Invoke<BOOL, char*>(N::TRIGGER_MUSIC_EVENT, eventName); }
	static Any _0x05D6195FB4D428F4(Any p0) { return Native::Invoke<Any, Any>(0x05D6195FB4D428F4, p0); }
	static Any GET_MUSIC_PLAYTIME() { return Native::Invoke<Any>(N::GET_MUSIC_PLAYTIME); }
	static void _0xF64034D533CE8AAC(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0xF64034D533CE8AAC, p0, p1, p2); }
	static void _0x149AEE66F0CB3A99(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x149AEE66F0CB3A99, p0, p1); }
	static void _0xDAD6CD07CAA4F382() { return Native::Invoke<void>(0xDAD6CD07CAA4F382); }
	static void _0x8BF907833BE275DE(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x8BF907833BE275DE, p0, p1); }
	static void _0x062D5EAD4DA2FA6A() { return Native::Invoke<void>(0x062D5EAD4DA2FA6A); }
	static void _0x138ADB94F8B90616() { return Native::Invoke<void>(0x138ADB94F8B90616); }
	static void _0xBF4DC1784BE94DFA(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0xBF4DC1784BE94DFA, p0, p1, p2); }
	static void SET_AUDIO_FLAG(char* flagName, BOOL toggle) { return Native::Invoke<void, char*, BOOL>(N::SET_AUDIO_FLAG, flagName, toggle); }
	static void _0x6DA15746D5CC1A92(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any>(0x6DA15746D5CC1A92, p0, p1, p2, p3, p4, p5); }
	static void _0x078F77FD1A43EAB3(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x078F77FD1A43EAB3, p0, p1); }
	static void _0x3D0BBCCF401B5FDB() { return Native::Invoke<void>(0x3D0BBCCF401B5FDB); }
	static void SET_PORTAL_SETTINGS_OVERRIDE(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(N::SET_PORTAL_SETTINGS_OVERRIDE, p0, p1); }
	static void REMOVE_PORTAL_SETTINGS_OVERRIDE(Any p0) { return Native::Invoke<void, Any>(N::REMOVE_PORTAL_SETTINGS_OVERRIDE, p0); }
	static void _0xEA546C31FD45F8CD(Any p0) { return Native::Invoke<void, Any>(0xEA546C31FD45F8CD, p0); }
	static Any _0x44A5EEF54F62E823(Any p0) { return Native::Invoke<Any, Any>(0x44A5EEF54F62E823, p0); }
	static void _0x017492B2201E3428(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<void, Any, Any, Any, Any>(0x017492B2201E3428, p0, p1, p2, p3); }
	static void _0xC886CD666ADD42E1(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xC886CD666ADD42E1, p0, p1); }
	static void _0x5AE0CB5F35F034FD(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any, Any, Any>(0x5AE0CB5F35F034FD, p0, p1, p2, p3, p4, p5, p6, p7); }
	static void _0x821C32C728B24477(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0x821C32C728B24477, p0, p1, p2); }
	static void _0x06C5DF5EE444BC6B(Any p0, Any p1, Any p2, Any p3, Any p4) { return Native::Invoke<void, Any, Any, Any, Any, Any>(0x06C5DF5EE444BC6B, p0, p1, p2, p3, p4); }
	static void _0x341CDD17EFC2472E(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x341CDD17EFC2472E, p0, p1); }
	static void _0x7E176C676F8652A9(Any p0) { return Native::Invoke<void, Any>(0x7E176C676F8652A9, p0); }
	static Any _0x2B9C37C01BF25EDB(Any p0) { return Native::Invoke<Any, Any>(0x2B9C37C01BF25EDB, p0); }
	static Any _0xA6A3A3F96B8B030E() { return Native::Invoke<Any>(0xA6A3A3F96B8B030E); }
	static Any _0x0556C784FA056628(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x0556C784FA056628, p0, p1); }
	static Any _0xC369E2234E34A0CA(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0xC369E2234E34A0CA, p0, p1); }
	static void _0x35B8C070E0C16E2F(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x35B8C070E0C16E2F, p0, p1); }
	static void _0xE7E6CB8B713ED190() { return Native::Invoke<void>(0xE7E6CB8B713ED190); }
	static void _0x569ABC36E28DDEAA() { return Native::Invoke<void>(0x569ABC36E28DDEAA); }
	static void _0x839C9F124BE74D94(Any p0, Any p1, Any p2, Any p3, Any p4) { return Native::Invoke<void, Any, Any, Any, Any, Any>(0x839C9F124BE74D94, p0, p1, p2, p3, p4); }
	static void _0x374F0E716BFCDE82(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<void, Any, Any, Any, Any>(0x374F0E716BFCDE82, p0, p1, p2, p3); }
	static void _0x3E98AC9D8C56C62C(Any p0) { return Native::Invoke<void, Any>(0x3E98AC9D8C56C62C, p0); }
	static void _0xCBF2BEBB468A34F3(Any p0) { return Native::Invoke<void, Any>(0xCBF2BEBB468A34F3, p0); }
	static void _0xA2B851605748AD0E() { return Native::Invoke<void>(0xA2B851605748AD0E); }
	static void _0xCFAD2C8CD1054523(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<void, Any, Any, Any, Any>(0xCFAD2C8CD1054523, p0, p1, p2, p3); }
	static void _0xD733528B6C35647A(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xD733528B6C35647A, p0, p1); }
	static void _0x5BC885EBD75FAA7D(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x5BC885EBD75FAA7D, p0, p1); }
	static void _0x6B7A88A61B41E589(Any p0) { return Native::Invoke<void, Any>(0x6B7A88A61B41E589, p0); }
	static void _0x4BE3EC91C01F0FE8() { return Native::Invoke<void>(0x4BE3EC91C01F0FE8); }
	static Any _0x9B1FC259187C97C0() { return Native::Invoke<Any>(0x9B1FC259187C97C0); }
	static Any _0x2E399EAFBEEA74D5() { return Native::Invoke<Any>(0x2E399EAFBEEA74D5); }
	static Any _0x64B956F4E761DF5C() { return Native::Invoke<Any>(0x64B956F4E761DF5C); }
}
namespace _NAMESPACE7
{
	static Any _0x537CE992BD2D7BCB() { return Native::Invoke<Any>(0x537CE992BD2D7BCB); }
	static Any _0x188B748861B5BA17() { return Native::Invoke<Any>(0x188B748861B5BA17); }
	static Any _0xB462D69D406A2602() { return Native::Invoke<Any>(0xB462D69D406A2602); }
	static Any _0x4EF23E04A0C8FF51() { return Native::Invoke<Any>(0x4EF23E04A0C8FF51); }
	static Any _0x03B61CD51097DE60() { return Native::Invoke<Any>(0x03B61CD51097DE60); }
	static Any _0xFFA13742E43507E3() { return Native::Invoke<Any>(0xFFA13742E43507E3); }
	static Any _0x81847C2134039BDC() { return Native::Invoke<Any>(0x81847C2134039BDC); }
	static Any _0x727AB6F008BB9F29() { return Native::Invoke<Any>(0x727AB6F008BB9F29); }
	static Any _0xFBD137BF0EC50FC9() { return Native::Invoke<Any>(0xFBD137BF0EC50FC9); }
	static Any _0x6A9DF0FCD0C87FF9() { return Native::Invoke<Any>(0x6A9DF0FCD0C87FF9); }
	static Any _0xFC81D7C7A151CFAA() { return Native::Invoke<Any>(0xFC81D7C7A151CFAA); }
	static Any _0xA7309AC0DCF6D950() { return Native::Invoke<Any>(0xA7309AC0DCF6D950); }
	static Any _0xC1F04FB37E3F0E57() { return Native::Invoke<Any>(0xC1F04FB37E3F0E57); }
	static Any _0x2BA1BCC99826CDA2() { return Native::Invoke<Any>(0x2BA1BCC99826CDA2); }
	static Any _0xB395A44A0C7CA615() { return Native::Invoke<Any>(0xB395A44A0C7CA615); }
	static Any _0x85E4D7B225A30ED1() { return Native::Invoke<Any>(0x85E4D7B225A30ED1); }
	static Any _0x8FAF4D262FABA99C() { return Native::Invoke<Any>(0x8FAF4D262FABA99C); }
	static Any _0xB096547D61868254() { return Native::Invoke<Any>(0xB096547D61868254); }
	static Any _0x27D3A0E1FE090A43() { return Native::Invoke<Any>(0x27D3A0E1FE090A43); }
	static Any _0xA9C3B0F746375162() { return Native::Invoke<Any>(0xA9C3B0F746375162); }
	static Any _0x5B53CA0E2AC3FF45() { return Native::Invoke<Any>(0x5B53CA0E2AC3FF45); }
	static Any _0x22D3A61CE053270C() { return Native::Invoke<Any>(0x22D3A61CE053270C); }
	static Any _0xA59D1997ECD99F0A() { return Native::Invoke<Any>(0xA59D1997ECD99F0A); }
	static Any _0x12E981D53B07BF48() { return Native::Invoke<Any>(0x12E981D53B07BF48); }
	static Any _0x2D874BA20E8E1F20() { return Native::Invoke<Any>(0x2D874BA20E8E1F20); }
	static Any _0x8521C2E235558278() { return Native::Invoke<Any>(0x8521C2E235558278); }
	static Any _0x932DB3C05A7465D1() { return Native::Invoke<Any>(0x932DB3C05A7465D1); }
	static Any _0x3F73AED12A5EF0FF() { return Native::Invoke<Any>(0x3F73AED12A5EF0FF); }
	static Any _0x28717806D3BDD0D0() { return Native::Invoke<Any>(0x28717806D3BDD0D0); }
	static Any _0xF8BCC5ECA33AC9C1() { return Native::Invoke<Any>(0xF8BCC5ECA33AC9C1); }
}
namespace BRAIN
{
	static Any REGISTER_OBJECT_SCRIPT_BRAIN() { return Native::Invoke<Any>(N::REGISTER_OBJECT_SCRIPT_BRAIN); }
	static Any _0x4E4507CC5E4DB869() { return Native::Invoke<Any>(0x4E4507CC5E4DB869); }
	static Any _0x6F62FAE266DCFC81() { return Native::Invoke<Any>(0x6F62FAE266DCFC81); }
	static Any _0x6818D1A194E29983() { return Native::Invoke<Any>(0x6818D1A194E29983); }
	static Any _0xA6AC35DB4A7957A8() { return Native::Invoke<Any>(0xA6AC35DB4A7957A8); }
	static Any _0x4AA5EA1EDFB25786() { return Native::Invoke<Any>(0x4AA5EA1EDFB25786); }
	static void ENABLE_SCRIPT_BRAIN_SET(int brainSet) { return Native::Invoke<void, int>(N::ENABLE_SCRIPT_BRAIN_SET, brainSet); }
	static void DISABLE_SCRIPT_BRAIN_SET(int brainSet) { return Native::Invoke<void, int>(N::DISABLE_SCRIPT_BRAIN_SET, brainSet); }
	static void _0xA32B0B05EFF75730() { return Native::Invoke<void>(0xA32B0B05EFF75730); }
	static Any _0x74C333E34DF74E8A() { return Native::Invoke<Any>(0x74C333E34DF74E8A); }
}
namespace CAM
{
	static void RENDER_SCRIPT_CAMS(BOOL render, BOOL ease, int easeTime, BOOL p3, BOOL p4, Any p5) { return Native::Invoke<void, BOOL, BOOL, int, BOOL, BOOL, Any>(N::RENDER_SCRIPT_CAMS, render, ease, easeTime, p3, p4, p5); }
	static void _RENDER_FIRST_PERSON_CAM(BOOL render, float p1, int p2, Any p3, Any p4, Any p5) { return Native::Invoke<void, BOOL, float, int, Any, Any, Any>(N::_RENDER_FIRST_PERSON_CAM, render, p1, p2, p3, p4, p5); }
	static Cam CREATE_CAM(char* camName, BOOL unk) { return Native::Invoke<Cam, char*, BOOL>(N::CREATE_CAM, camName, unk); }
	static Cam CREATE_CAM_WITH_PARAMS(char* camName, float posX, float posY, float posZ, float rotX, float rotY, float rotZ, float fov, BOOL p8, int p9) { return Native::Invoke<Cam, char*, float, float, float, float, float, float, float, BOOL, int>(N::CREATE_CAM_WITH_PARAMS, camName, posX, posY, posZ, rotX, rotY, rotZ, fov, p8, p9); }
	static Cam CREATE_CAMERA(Hash camHash, BOOL p1) { return Native::Invoke<Cam, Hash, BOOL>(N::CREATE_CAMERA, camHash, p1); }
	static Cam CREATE_CAMERA_WITH_PARAMS(Hash camHash, float posX, float posY, float posZ, float rotX, float rotY, float rotZ, float fov, BOOL p8, Any p9) { return Native::Invoke<Cam, Hash, float, float, float, float, float, float, float, BOOL, Any>(N::CREATE_CAMERA_WITH_PARAMS, camHash, posX, posY, posZ, rotX, rotY, rotZ, fov, p8, p9); }
	static void DESTROY_CAM(Cam cam, BOOL thisScriptCheck) { return Native::Invoke<void, Cam, BOOL>(N::DESTROY_CAM, cam, thisScriptCheck); }
	static void DESTROY_ALL_CAMS(BOOL thisScriptCheck) { return Native::Invoke<void, BOOL>(N::DESTROY_ALL_CAMS, thisScriptCheck); }
	static BOOL DOES_CAM_EXIST(Cam cam) { return Native::Invoke<BOOL, Cam>(N::DOES_CAM_EXIST, cam); }
	static void SET_CAM_ACTIVE(Cam cam, BOOL active) { return Native::Invoke<void, Cam, BOOL>(N::SET_CAM_ACTIVE, cam, active); }
	static BOOL IS_CAM_ACTIVE(Cam cam) { return Native::Invoke<BOOL, Cam>(N::IS_CAM_ACTIVE, cam); }
	static BOOL IS_CAM_RENDERING(Cam cam) { return Native::Invoke<BOOL, Cam>(N::IS_CAM_RENDERING, cam); }
	static Cam GET_RENDERING_CAM() { return Native::Invoke<Cam>(N::GET_RENDERING_CAM); }
	static Vector3 GET_CAM_COORD(Cam cam) { return Native::Invoke<Vector3, Cam>(N::GET_CAM_COORD, cam); }
	static Vector3 GET_CAM_ROT(Cam cam, int rotationOrder) { return Native::Invoke<Vector3, Cam, int>(N::GET_CAM_ROT, cam, rotationOrder); }
	static float GET_CAM_FOV(Cam cam) { return Native::Invoke<float, Cam>(N::GET_CAM_FOV, cam); }
	static void SET_CAM_PARAMS(Cam cam, float posX, float posY, float posZ, float rotX, float rotY, float rotZ, float fieldOfView, Any p8, int p9, int p10, int p11, Any p12) { return Native::Invoke<void, Cam, float, float, float, float, float, float, float, Any, int, int, int, Any>(N::SET_CAM_PARAMS, cam, posX, posY, posZ, rotX, rotY, rotZ, fieldOfView, p8, p9, p10, p11, p12); }
	static void SET_CAM_COORD(Cam cam, float posX, float posY, float posZ) { return Native::Invoke<void, Cam, float, float, float>(N::SET_CAM_COORD, cam, posX, posY, posZ); }
	static void SET_CAM_ROT(Cam cam, float pitch, float roll, float yaw, int rotationOrder) { return Native::Invoke<void, Cam, float, float, float, int>(N::SET_CAM_ROT, cam, pitch, roll, yaw, rotationOrder); }
	static void SET_CAM_FOV(Cam cam, float fieldOfView) { return Native::Invoke<void, Cam, float>(N::SET_CAM_FOV, cam, fieldOfView); }
	static void SET_CAM_NEAR_CLIP(Cam cam, float nearClip) { return Native::Invoke<void, Cam, float>(N::SET_CAM_NEAR_CLIP, cam, nearClip); }
	static void SET_CAM_FAR_CLIP(Cam cam, float farClip) { return Native::Invoke<void, Cam, float>(N::SET_CAM_FAR_CLIP, cam, farClip); }
	static void SET_CAM_MOTION_BLUR_STRENGTH(Cam cam, float strength) { return Native::Invoke<void, Cam, float>(N::SET_CAM_MOTION_BLUR_STRENGTH, cam, strength); }
	static void _0xFC3F638BE2B6BB02() { return Native::Invoke<void>(0xFC3F638BE2B6BB02); }
	static void _0xE4B7945EF4F1BFB2(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xE4B7945EF4F1BFB2, p0, p1); }
	static void _0x1FC6C727D30FFDDE(Any p0) { return Native::Invoke<void, Any>(0x1FC6C727D30FFDDE, p0); }
	static void ATTACH_CAM_TO_ENTITY(Cam cam, Entity entity, float xOffset, float yOffset, float zOffset, BOOL isRelative) { return Native::Invoke<void, Cam, Entity, float, float, float, BOOL>(N::ATTACH_CAM_TO_ENTITY, cam, entity, xOffset, yOffset, zOffset, isRelative); }
	static void ATTACH_CAM_TO_PED_BONE(Cam cam, Ped ped, int boneIndex, float x, float y, float z, BOOL heading) { return Native::Invoke<void, Cam, Ped, int, float, float, float, BOOL>(N::ATTACH_CAM_TO_PED_BONE, cam, ped, boneIndex, x, y, z, heading); }
	static void DETACH_CAM(Cam cam) { return Native::Invoke<void, Cam>(N::DETACH_CAM, cam); }
	static void POINT_CAM_AT_COORD(Cam cam, float x, float y, float z) { return Native::Invoke<void, Cam, float, float, float>(N::POINT_CAM_AT_COORD, cam, x, y, z); }
	static void POINT_CAM_AT_ENTITY(Cam cam, Entity entity, float p2, float p3, float p4, BOOL p5) { return Native::Invoke<void, Cam, Entity, float, float, float, BOOL>(N::POINT_CAM_AT_ENTITY, cam, entity, p2, p3, p4, p5); }
	static void STOP_CAM_POINTING(Cam cam) { return Native::Invoke<void, Cam>(N::STOP_CAM_POINTING, cam); }
	static void _0x11F32BB61B756732(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x11F32BB61B756732, p0, p1); }
	static void _0x9F97E85EC142255E(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x9F97E85EC142255E, p0, p1); }
	static void SET_CAM_AFFECTS_AIMING(Cam cam, BOOL toggle) { return Native::Invoke<void, Cam, BOOL>(N::SET_CAM_AFFECTS_AIMING, cam, toggle); }
	static void _0x1B8F3CE5A6001298(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x1B8F3CE5A6001298, p0, p1); }
	static void _0x42ED56B02E05D109(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x42ED56B02E05D109, p0, p1); }
	static void ADD_CAM_SPLINE_NODE(Cam camera, float x, float y, float z, float xRot, float yRot, float zRot, int length, int p8, int transitionType) { return Native::Invoke<void, Cam, float, float, float, float, float, float, int, int, int>(N::ADD_CAM_SPLINE_NODE, camera, x, y, z, xRot, yRot, zRot, length, p8, transitionType); }
	static Any SET_CAM_SPLINE_PHASE() { return Native::Invoke<Any>(N::SET_CAM_SPLINE_PHASE); }
	static float GET_CAM_SPLINE_PHASE(Cam cam) { return Native::Invoke<float, Cam>(N::GET_CAM_SPLINE_PHASE, cam); }
	static void SET_CAM_SPLINE_DURATION(int cam, int timeDuration) { return Native::Invoke<void, int, int>(N::SET_CAM_SPLINE_DURATION, cam, timeDuration); }
	static Any SET_CAM_SPLINE_SMOOTHING_STYLE() { return Native::Invoke<Any>(N::SET_CAM_SPLINE_SMOOTHING_STYLE); }
	static void SET_CAM_ACTIVE_WITH_INTERP(Cam camTo, Cam camFrom, int duration, int easeLocation, int easeRotation) { return Native::Invoke<void, Cam, Cam, int, int, int>(N::SET_CAM_ACTIVE_WITH_INTERP, camTo, camFrom, duration, easeLocation, easeRotation); }
	static BOOL IS_CAM_INTERPOLATING(Cam cam) { return Native::Invoke<BOOL, Cam>(N::IS_CAM_INTERPOLATING, cam); }
	static void SHAKE_CAM(Cam cam, char* type, float amplitude) { return Native::Invoke<void, Cam, char*, float>(N::SHAKE_CAM, cam, type, amplitude); }
	static BOOL IS_CAM_SHAKING(Cam cam) { return Native::Invoke<BOOL, Cam>(N::IS_CAM_SHAKING, cam); }
	static void STOP_CAM_SHAKING(Cam cam, BOOL p1) { return Native::Invoke<void, Cam, BOOL>(N::STOP_CAM_SHAKING, cam, p1); }
	static BOOL PLAY_CAM_ANIM(Cam cam, char* animName, char* animDictionary, float x, float y, float z, float xRot, float yRot, float zRot, BOOL p9, int p10) { return Native::Invoke<BOOL, Cam, char*, char*, float, float, float, float, float, float, BOOL, int>(N::PLAY_CAM_ANIM, cam, animName, animDictionary, x, y, z, xRot, yRot, zRot, p9, p10); }
	static void _0xCF69EA05CD9C33C9() { return Native::Invoke<void>(0xCF69EA05CD9C33C9); }
	static Any _0x20389408F0E93B9A() { return Native::Invoke<Any>(0x20389408F0E93B9A); }
	static BOOL IS_SCREEN_FADED_OUT() { return Native::Invoke<BOOL>(N::IS_SCREEN_FADED_OUT); }
	static BOOL IS_SCREEN_FADED_IN() { return Native::Invoke<BOOL>(N::IS_SCREEN_FADED_IN); }
	static BOOL IS_SCREEN_FADING_OUT() { return Native::Invoke<BOOL>(N::IS_SCREEN_FADING_OUT); }
	static BOOL IS_SCREEN_FADING_IN() { return Native::Invoke<BOOL>(N::IS_SCREEN_FADING_IN); }
	static void DO_SCREEN_FADE_IN(int duration) { return Native::Invoke<void, int>(N::DO_SCREEN_FADE_IN, duration); }
	static void DO_SCREEN_FADE_OUT(int duration) { return Native::Invoke<void, int>(N::DO_SCREEN_FADE_OUT, duration); }
	static Any _0x81DCFD13CF39920E() { return Native::Invoke<Any>(0x81DCFD13CF39920E); }
	static Any _0x69D65E89FFD72313() { return Native::Invoke<Any>(0x69D65E89FFD72313); }
	static void _0xE296208C273BD7F0(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<void, Any, Any, Any, Any>(0xE296208C273BD7F0, p0, p1, p2, p3); }
	static void _0xC64ABC0676AF262B() { return Native::Invoke<void>(0xC64ABC0676AF262B); }
	static Any _0xA2B1C7EF759A63CE() { return Native::Invoke<Any>(0xA2B1C7EF759A63CE); }
	static Any _0x73FF6BE63DC18819() { return Native::Invoke<Any>(0x73FF6BE63DC18819); }
	static Any _0x450769C833D58844() { return Native::Invoke<Any>(0x450769C833D58844); }
	static Any SET_WIDESCREEN_BORDERS() { return Native::Invoke<Any>(N::SET_WIDESCREEN_BORDERS); }
	static Vector3 GET_GAMEPLAY_CAM_COORD() { return Native::Invoke<Vector3>(N::GET_GAMEPLAY_CAM_COORD); }
	static Vector3 GET_GAMEPLAY_CAM_ROT(int rotationOrder) { return Native::Invoke<Vector3, int>(N::GET_GAMEPLAY_CAM_ROT, rotationOrder); }
	static float GET_GAMEPLAY_CAM_FOV() { return Native::Invoke<float>(N::GET_GAMEPLAY_CAM_FOV); }
	static void _0x8459B3E64257B21D(Any p0) { return Native::Invoke<void, Any>(0x8459B3E64257B21D, p0); }
	static float GET_GAMEPLAY_CAM_RELATIVE_HEADING() { return Native::Invoke<float>(N::GET_GAMEPLAY_CAM_RELATIVE_HEADING); }
	static void SET_GAMEPLAY_CAM_RELATIVE_HEADING(float heading, Any p1) { return Native::Invoke<void, float, Any>(N::SET_GAMEPLAY_CAM_RELATIVE_HEADING, heading, p1); }
	static float GET_GAMEPLAY_CAM_RELATIVE_PITCH() { return Native::Invoke<float>(N::GET_GAMEPLAY_CAM_RELATIVE_PITCH); }
	static void SET_GAMEPLAY_CAM_RELATIVE_PITCH(float x, float Value2) { return Native::Invoke<void, float, float>(N::SET_GAMEPLAY_CAM_RELATIVE_PITCH, x, Value2); }
	static void _0x0961B089947BA6D0(Any p0) { return Native::Invoke<void, Any>(0x0961B089947BA6D0, p0); }
	static void _0x04084490CC302CFB() { return Native::Invoke<void>(0x04084490CC302CFB); }
	static Any _0x1DD95A8D6B24A0C9() { return Native::Invoke<Any>(0x1DD95A8D6B24A0C9); }
	static Any _0xD1BA66940E94C547() { return Native::Invoke<Any>(0xD1BA66940E94C547); }
	static void SHAKE_GAMEPLAY_CAM(char* shakeName, float intensity) { return Native::Invoke<void, char*, float>(N::SHAKE_GAMEPLAY_CAM, shakeName, intensity); }
	static Any _0xC3E9E5D4F413B773() { return Native::Invoke<Any>(0xC3E9E5D4F413B773); }
	static BOOL IS_GAMEPLAY_CAM_SHAKING() { return Native::Invoke<BOOL>(N::IS_GAMEPLAY_CAM_SHAKING); }
	static Any _0x0060B31968E60E41(Any p0) { return Native::Invoke<Any, Any>(0x0060B31968E60E41, p0); }
	static void SET_GAMEPLAY_CAM_SHAKE_AMPLITUDE(float amplitude) { return Native::Invoke<void, float>(N::SET_GAMEPLAY_CAM_SHAKE_AMPLITUDE, amplitude); }
	static void _0xFEFDDC6E8FDF8A75(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xFEFDDC6E8FDF8A75, p0, p1); }
	static void STOP_GAMEPLAY_CAM_SHAKING(BOOL p0) { return Native::Invoke<void, BOOL>(N::STOP_GAMEPLAY_CAM_SHAKING, p0); }
	static void _0x4285804FD65D8066(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x4285804FD65D8066, p0, p1); }
	static void _0x82E41D6ADE924FCA(Any p0) { return Native::Invoke<void, Any>(0x82E41D6ADE924FCA, p0); }
	static BOOL IS_GAMEPLAY_CAM_RENDERING() { return Native::Invoke<BOOL>(N::IS_GAMEPLAY_CAM_RENDERING); }
	static Any _0x251241CAEC707106() { return Native::Invoke<Any>(0x251241CAEC707106); }
	static Any _0x43AB9D5A7D415478() { return Native::Invoke<Any>(0x43AB9D5A7D415478); }
	static BOOL IS_GAMEPLAY_CAM_LOOKING_BEHIND() { return Native::Invoke<BOOL>(N::IS_GAMEPLAY_CAM_LOOKING_BEHIND); }
	static void _0xD904F75DBD7AB865(Any p0) { return Native::Invoke<void, Any>(0xD904F75DBD7AB865, p0); }
	static void _0x7E3F546ACFE6C8D9(Any p0) { return Native::Invoke<void, Any>(0x7E3F546ACFE6C8D9, p0); }
	static void _0x39073DA4EDDBC91D(Any p0) { return Native::Invoke<void, Any>(0x39073DA4EDDBC91D, p0); }
	static void _0x70A6658D476C6187() { return Native::Invoke<void>(0x70A6658D476C6187); }
	static void _0x18C3DFAC458783BB() { return Native::Invoke<void>(0x18C3DFAC458783BB); }
	static void _0xF1A6FEEDF3776EF9() { return Native::Invoke<void>(0xF1A6FEEDF3776EF9); }
	static void _0xE6F364DE6C2FDEFE() { return Native::Invoke<void>(0xE6F364DE6C2FDEFE); }
	static void _0x0F1FFEF5D54AE832() { return Native::Invoke<void>(0x0F1FFEF5D54AE832); }
	static void _0x3C8F74E8FE751614() { return Native::Invoke<void>(0x3C8F74E8FE751614); }
	static void _0x06557F6D96C86881() { return Native::Invoke<void>(0x06557F6D96C86881); }
	static BOOL IS_SPHERE_VISIBLE(float x, float y, float z, float radius) { return Native::Invoke<BOOL, float, float, float, float>(N::IS_SPHERE_VISIBLE, x, y, z, radius); }
	static Any _0x190F7DA1AC09A8EF() { return Native::Invoke<Any>(0x190F7DA1AC09A8EF); }
	static void _0xBCDA0BA8762FACB9(Any p0) { return Native::Invoke<void, Any>(0xBCDA0BA8762FACB9, p0); }
	static void _0x6C1053C433A573CF(Any p0) { return Native::Invoke<void, Any>(0x6C1053C433A573CF, p0); }
	static void _0x449995EA846D3FC2(Any p0) { return Native::Invoke<void, Any>(0x449995EA846D3FC2, p0); }
	static Any _CLAMP_GAMEPLAY_CAM_YAW(float minimum, float maximum) { return Native::Invoke<Any, float, float>(N::_CLAMP_GAMEPLAY_CAM_YAW, minimum, maximum); }
	static Any _CLAMP_GAMEPLAY_CAM_PITCH(float minimum, float maximum) { return Native::Invoke<Any, float, float>(N::_CLAMP_GAMEPLAY_CAM_PITCH, minimum, maximum); }
	static void _ANIMATE_GAMEPLAY_CAM_ZOOM(float p0, float distance) { return Native::Invoke<void, float, float>(N::_ANIMATE_GAMEPLAY_CAM_ZOOM, p0, distance); }
	static void _0xFA1D5E8D1C3CCD67(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xFA1D5E8D1C3CCD67, p0, p1); }
	static void _DISABLE_FIRST_PERSON_CAM_THIS_FRAME() { return Native::Invoke<void>(N::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME); }
	static Any _0x77D65669A05D1A1A() { return Native::Invoke<Any>(0x77D65669A05D1A1A); }
	static void _0x8910C24B7E0046EC() { return Native::Invoke<void>(0x8910C24B7E0046EC); }
	static Any _0x74F1D22EFA71FAB8() { return Native::Invoke<Any>(0x74F1D22EFA71FAB8); }
	static void _0x718C6ECF5E8CBDD4() { return Native::Invoke<void>(0x718C6ECF5E8CBDD4); }
	static void _0x8370D34BD2E60B73() { return Native::Invoke<void>(0x8370D34BD2E60B73); }
	static void _0x1CFB749AD4317BDE() { return Native::Invoke<void>(0x1CFB749AD4317BDE); }
	static Any _0x90DA5BA5C2635416() { return Native::Invoke<Any>(0x90DA5BA5C2635416); }
	static void _0x05AB44D906738426() { return Native::Invoke<void>(0x05AB44D906738426); }
	static void _0x632BE8D84846FA56() { return Native::Invoke<void>(0x632BE8D84846FA56); }
	static void _0x71D71E08A7ED5BD7(Any p0) { return Native::Invoke<void, Any>(0x71D71E08A7ED5BD7, p0); }
	static BOOL IS_FOLLOW_VEHICLE_CAM_ACTIVE() { return Native::Invoke<BOOL>(N::IS_FOLLOW_VEHICLE_CAM_ACTIVE); }
	static void _0x7E40A01B11398FCB() { return Native::Invoke<void>(0x7E40A01B11398FCB); }
	static BOOL IS_FIRST_PERSON_AIM_CAM_ACTIVE() { return Native::Invoke<BOOL>(N::IS_FIRST_PERSON_AIM_CAM_ACTIVE); }
	static Any _0xA24C1D341C6E0D53(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(0xA24C1D341C6E0D53, p0, p1, p2); }
	static Any _0xDC62CD70658E7A02() { return Native::Invoke<Any>(0xDC62CD70658E7A02); }
	static Any _0x796085220ADCC847() { return Native::Invoke<Any>(0x796085220ADCC847); }
	static float _GET_GAMEPLAY_CAM_ZOOM() { return Native::Invoke<float>(N::_GET_GAMEPLAY_CAM_ZOOM); }
	static void _0x05BD5E4088B30A66(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x05BD5E4088B30A66, p0, p1); }
	static void _SET_FIRST_PERSON_CAM_PITCH_RANGE(float minAngle, float maxAngle) { return Native::Invoke<void, float, float>(N::_SET_FIRST_PERSON_CAM_PITCH_RANGE, minAngle, maxAngle); }
	static void _0xC205B3C54C6A4E37(Any p0) { return Native::Invoke<void, Any>(0xC205B3C54C6A4E37, p0); }
	static Vector3 _GET_GAMEPLAY_CAM_COORDS() { return Native::Invoke<Vector3>(N::_GET_GAMEPLAY_CAM_COORDS); }
	static Vector3 _GET_GAMEPLAY_CAM_ROT(int rotationOrder) { return Native::Invoke<Vector3, int>(N::_GET_GAMEPLAY_CAM_ROT, rotationOrder); }
	static Any _0x04AF77971E508F6A() { return Native::Invoke<Any>(0x04AF77971E508F6A); }
	static void SET_GAMEPLAY_COORD_HINT(float x, float y, float z, int duration, int blendOutDuration, int blendInDuration, int unk) { return Native::Invoke<void, float, float, float, int, int, int, int>(N::SET_GAMEPLAY_COORD_HINT, x, y, z, duration, blendOutDuration, blendInDuration, unk); }
	static void SET_GAMEPLAY_PED_HINT(Ped p0, float x1, float y1, float z1, BOOL p4, Any p5, Any p6, Any p7) { return Native::Invoke<void, Ped, float, float, float, BOOL, Any, Any, Any>(N::SET_GAMEPLAY_PED_HINT, p0, x1, y1, z1, p4, p5, p6, p7); }
	static Any SET_GAMEPLAY_VEHICLE_HINT() { return Native::Invoke<Any>(N::SET_GAMEPLAY_VEHICLE_HINT); }
	static Any SET_GAMEPLAY_OBJECT_HINT() { return Native::Invoke<Any>(N::SET_GAMEPLAY_OBJECT_HINT); }
	static void SET_GAMEPLAY_ENTITY_HINT(Entity entity, float xOffset, float yOffset, float zOffset, BOOL p4, int duration, int fadeInTime, int fadeOutTime, int flags) { return Native::Invoke<void, Entity, float, float, float, BOOL, int, int, int, int>(N::SET_GAMEPLAY_ENTITY_HINT, entity, xOffset, yOffset, zOffset, p4, duration, fadeInTime, fadeOutTime, flags); }
	static BOOL IS_GAMEPLAY_HINT_ACTIVE() { return Native::Invoke<BOOL>(N::IS_GAMEPLAY_HINT_ACTIVE); }
	static void STOP_GAMEPLAY_HINT(BOOL p0) { return Native::Invoke<void, BOOL>(N::STOP_GAMEPLAY_HINT, p0); }
	static void _0x93759A83D0D844E7(Any p0) { return Native::Invoke<void, Any>(0x93759A83D0D844E7, p0); }
	static void _0x88544C0E3291DCAE(Any p0) { return Native::Invoke<void, Any>(0x88544C0E3291DCAE, p0); }
	static void SET_GAMEPLAY_HINT_FOV(float FOV) { return Native::Invoke<void, float>(N::SET_GAMEPLAY_HINT_FOV, FOV); }
	static void _0xDDDC54181868F81F(Any p0) { return Native::Invoke<void, Any>(0xDDDC54181868F81F, p0); }
	static Any _0x421192A2DA48FD01() { return Native::Invoke<Any>(0x421192A2DA48FD01); }
	static Any _0xF86B6F93727C59C9() { return Native::Invoke<Any>(0xF86B6F93727C59C9); }
	static void _0x29E74F819150CC32(Any p0) { return Native::Invoke<void, Any>(0x29E74F819150CC32, p0); }
	static void _0xF48664E9C83825E3(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xF48664E9C83825E3, p0, p1); }
	static void _0x1F6EBD94680252CE(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x1F6EBD94680252CE, p0, p1); }
	static void _0xE28F73212A813E82(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<void, Any, Any, Any, Any>(0xE28F73212A813E82, p0, p1, p2, p3); }
	static void _0x4D2F46D1B28D90FB(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x4D2F46D1B28D90FB, p0, p1); }
	static void _0x65B205BF30C13DDB(Any p0) { return Native::Invoke<void, Any>(0x65B205BF30C13DDB, p0); }
	static void _0x641092322A8852AB() { return Native::Invoke<void>(0x641092322A8852AB); }
	static void _0xDB382FE20C2DA222(Any p0) { return Native::Invoke<void, Any>(0xDB382FE20C2DA222, p0); }
	static void _0x2DD3149DC34A3F4C(Any p0) { return Native::Invoke<void, Any>(0x2DD3149DC34A3F4C, p0); }
	static void _0x027CAB2C3AF27010() { return Native::Invoke<void>(0x027CAB2C3AF27010); }
	static void _0x3C486E334520579D() { return Native::Invoke<void>(0x3C486E334520579D); }
	static Any _0x41E452A3C580D1A7() { return Native::Invoke<Any>(0x41E452A3C580D1A7); }
	static void SET_CINEMATIC_BUTTON_ACTIVE(BOOL p0) { return Native::Invoke<void, BOOL>(N::SET_CINEMATIC_BUTTON_ACTIVE, p0); }
	static BOOL IS_CINEMATIC_CAM_RENDERING() { return Native::Invoke<BOOL>(N::IS_CINEMATIC_CAM_RENDERING); }
	static void _DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME() { return Native::Invoke<void>(N::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME); }
	static Any _0x634F4A0562CF19B8() { return Native::Invoke<Any>(0x634F4A0562CF19B8); }
	static void _0x702B75DC9D3EDE56(Any p0) { return Native::Invoke<void, Any>(0x702B75DC9D3EDE56, p0); }
	static void _0x9AC65A36D3C0C189(Any p0) { return Native::Invoke<void, Any>(0x9AC65A36D3C0C189, p0); }
	static Any _0x975F6EBB62632FE3() { return Native::Invoke<Any>(0x975F6EBB62632FE3); }
	static void SET_CINEMATIC_MODE_ACTIVE(BOOL p0) { return Native::Invoke<void, BOOL>(N::SET_CINEMATIC_MODE_ACTIVE, p0); }
	static Any _0x1811A02277A9E49D() { return Native::Invoke<Any>(0x1811A02277A9E49D); }
	static void _0xE3639DB78B3B5400(Any p0) { return Native::Invoke<void, Any>(0xE3639DB78B3B5400, p0); }
	static void _0x986F7A51EE3E1F92(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x986F7A51EE3E1F92, p0, p1); }
	static void _0x5B637D6F3B67716A(Any p0) { return Native::Invoke<void, Any>(0x5B637D6F3B67716A, p0); }
	static void _0xC252C0CC969AF79A(Any p0) { return Native::Invoke<void, Any>(0xC252C0CC969AF79A, p0); }
	static void _0xE2BB2D6A9FE2ECDE(Any p0) { return Native::Invoke<void, Any>(0xE2BB2D6A9FE2ECDE, p0); }
	static void _0x6E969927CF632608(Any p0) { return Native::Invoke<void, Any>(0x6E969927CF632608, p0); }
	static Any _0x6072B7420A83A03F() { return Native::Invoke<Any>(0x6072B7420A83A03F); }
	static Any _0x1204EB53A5FBC63D() { return Native::Invoke<Any>(0x1204EB53A5FBC63D); }
	static void _0x6519238858AF5479(Any p0) { return Native::Invoke<void, Any>(0x6519238858AF5479, p0); }
	static Any _0x2F994CC29CAA9D22() { return Native::Invoke<Any>(0x2F994CC29CAA9D22); }
	static Any _0xA14D5FE82BCB1D9E() { return Native::Invoke<Any>(0xA14D5FE82BCB1D9E); }
	static Any _0x6DFD37E586D4F44F() { return Native::Invoke<Any>(0x6DFD37E586D4F44F); }
	static Any _0x80D7A3E39B120BC4() { return Native::Invoke<Any>(0x80D7A3E39B120BC4); }
	static Any _0x63E5841A9264D016() { return Native::Invoke<Any>(0x63E5841A9264D016); }
	static void _0x9A92C06ACBAF9731() { return Native::Invoke<void>(0x9A92C06ACBAF9731); }
	static void _0x16E9ABDD34DDD931() { return Native::Invoke<void>(0x16E9ABDD34DDD931); }
	static Any _0x139EFB0A71DD9011() { return Native::Invoke<Any>(0x139EFB0A71DD9011); }
	static Any _0x7CE9DC58E3E4755F() { return Native::Invoke<Any>(0x7CE9DC58E3E4755F); }
	static void _0x3B8E3AD9677CE12B(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0x3B8E3AD9677CE12B, p0, p1, p2); }
	static void _0xDF7F5BE9150E47E4(Any p0) { return Native::Invoke<void, Any>(0xDF7F5BE9150E47E4, p0); }
	static void _0xB85C13E0BF1F2A1C(Any p0) { return Native::Invoke<void, Any>(0xB85C13E0BF1F2A1C, p0); }
	static Any _0x066167C63111D8CF() { return Native::Invoke<Any>(0x066167C63111D8CF); }
	static void _0x0FF7125F07DEB84F(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x0FF7125F07DEB84F, p0, p1); }
	static void _0x6CAB0BA160B168D2() { return Native::Invoke<void>(0x6CAB0BA160B168D2); }
	static void _0x1B3C2D961F5FC0E1(Any p0) { return Native::Invoke<void, Any>(0x1B3C2D961F5FC0E1, p0); }
	static void _0x2412216FCC7B4E3E(Any p0) { return Native::Invoke<void, Any>(0x2412216FCC7B4E3E, p0); }
	static Any _0xAA235E2F2C09E952(Any p0) { return Native::Invoke<Any, Any>(0xAA235E2F2C09E952, p0); }
	static Any _0x595550376B7EA230(Any p0) { return Native::Invoke<Any, Any>(0x595550376B7EA230, p0); }
	static Any _0x465F04F68AD38197(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(0x465F04F68AD38197, p0, p1, p2); }
	static Any _0xEA113BF9B0C0C5D7(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(0xEA113BF9B0C0C5D7, p0, p1, p2); }
	static void _0xBC016635D6A73B31(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0xBC016635D6A73B31, p0, p1, p2); }
	static void _0x02389579A53C3276(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<void, Any, Any, Any, Any>(0x02389579A53C3276, p0, p1, p2, p3); }
	static void _0xA54D643D0773EB65(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0xA54D643D0773EB65, p0, p1, p2); }
	static void _0x6D4D25C2137FF511(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0x6D4D25C2137FF511, p0, p1, p2); }
	static void _0x0E94C95EC3185FA9(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any, Any>(0x0E94C95EC3185FA9, p0, p1, p2, p3, p4, p5, p6); }
	static void _0x6A4D224FC7643941(Any p0) { return Native::Invoke<void, Any>(0x6A4D224FC7643941, p0); }
	static void _0x798BE43C9393632B(Any p0) { return Native::Invoke<void, Any>(0x798BE43C9393632B, p0); }
	static Any _0xDD0B7C5AE58F721D(Any p0) { return Native::Invoke<Any, Any>(0xDD0B7C5AE58F721D, p0); }
	static Any _0xC285FD21294A1C49(Any p0) { return Native::Invoke<Any, Any>(0xC285FD21294A1C49, p0); }
	static void _0xB8B207C34285E978(Any p0) { return Native::Invoke<void, Any>(0xB8B207C34285E978, p0); }
	static void _0x0A5A4F1979ABB40E(Any p0) { return Native::Invoke<void, Any>(0x0A5A4F1979ABB40E, p0); }
	static Any _0x927B810E43E99932(Any p0) { return Native::Invoke<Any, Any>(0x927B810E43E99932, p0); }
	static Any _0x4138EE36BC3DC0A7(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x4138EE36BC3DC0A7, p0, p1); }
	static void _0xFEB8646818294C75(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xFEB8646818294C75, p0, p1); }
	static void _0x29E6655DF3590B0D(Any p0) { return Native::Invoke<void, Any>(0x29E6655DF3590B0D, p0); }
	static void _0xAC77757C05DE9E5A(Any p0) { return Native::Invoke<void, Any>(0xAC77757C05DE9E5A, p0); }
	static void _0x8E036B41C37D0E5F(Any p0) { return Native::Invoke<void, Any>(0x8E036B41C37D0E5F, p0); }
	static void _0x1D9F72DD4FD9A9D7(Any p0) { return Native::Invoke<void, Any>(0x1D9F72DD4FD9A9D7, p0); }
	static void _0x7B0279170961A73F(Any p0) { return Native::Invoke<void, Any>(0x7B0279170961A73F, p0); }
	static void _0x728491FB3DFFEF99(Any p0) { return Native::Invoke<void, Any>(0x728491FB3DFFEF99, p0); }
	static Any _0x14C4A49E36C29E49() { return Native::Invoke<Any>(0x14C4A49E36C29E49); }
	static Any _0xF824530B612FE0CE() { return Native::Invoke<Any>(0xF824530B612FE0CE); }
	static Any _0xEF9A3132A0AA6B19() { return Native::Invoke<Any>(0xEF9A3132A0AA6B19); }
	static Any _0x5060FA977CEA4455() { return Native::Invoke<Any>(0x5060FA977CEA4455); }
	static Any _0x2533BAFFBE737E54() { return Native::Invoke<Any>(0x2533BAFFBE737E54); }
	static Any _0x18FC740FFDCD7454() { return Native::Invoke<Any>(0x18FC740FFDCD7454); }
	static Any _0x4653A741D17F2CD0() { return Native::Invoke<Any>(0x4653A741D17F2CD0); }
	static Any _0x2AB7C81B3F70570C() { return Native::Invoke<Any>(0x2AB7C81B3F70570C); }
	static Any _0x8505E05FC8822843() { return Native::Invoke<Any>(0x8505E05FC8822843); }
}
namespace CLOCK
{
	static void SET_CLOCK_TIME(int hour, int minute, int second) { return Native::Invoke<void, int, int, int>(N::SET_CLOCK_TIME, hour, minute, second); }
	static void PAUSE_CLOCK(BOOL toggle) { return Native::Invoke<void, BOOL>(N::PAUSE_CLOCK, toggle); }
	static void _0x568D998A9FF96774(Any p0) { return Native::Invoke<void, Any>(0x568D998A9FF96774, p0); }
	static void ADVANCE_CLOCK_TIME_TO(int hour, int minute, int second) { return Native::Invoke<void, int, int, int>(N::ADVANCE_CLOCK_TIME_TO, hour, minute, second); }
	static void ADD_TO_CLOCK_TIME(int hours, int minutes, int seconds) { return Native::Invoke<void, int, int, int>(N::ADD_TO_CLOCK_TIME, hours, minutes, seconds); }
	static int GET_CLOCK_HOURS() { return Native::Invoke<int>(N::GET_CLOCK_HOURS); }
	static int GET_CLOCK_MINUTES() { return Native::Invoke<int>(N::GET_CLOCK_MINUTES); }
	static int GET_CLOCK_SECONDS() { return Native::Invoke<int>(N::GET_CLOCK_SECONDS); }
	static void _0x04EEDB3848DACF68(Any p0) { return Native::Invoke<void, Any>(0x04EEDB3848DACF68, p0); }
	static Any _0x78FD8BE812E436B2() { return Native::Invoke<Any>(0x78FD8BE812E436B2); }
	static void SET_CLOCK_DATE(int day, int month, int year) { return Native::Invoke<void, int, int, int>(N::SET_CLOCK_DATE, day, month, year); }
	static int GET_CLOCK_DAY_OF_WEEK() { return Native::Invoke<int>(N::GET_CLOCK_DAY_OF_WEEK); }
	static int GET_CLOCK_DAY_OF_MONTH() { return Native::Invoke<int>(N::GET_CLOCK_DAY_OF_MONTH); }
	static int GET_CLOCK_MONTH() { return Native::Invoke<int>(N::GET_CLOCK_MONTH); }
	static int GET_CLOCK_YEAR() { return Native::Invoke<int>(N::GET_CLOCK_YEAR); }
	static int GET_MILLISECONDS_PER_GAME_MINUTE() { return Native::Invoke<int>(N::GET_MILLISECONDS_PER_GAME_MINUTE); }
	static Any GET_POSIX_TIME() { return Native::Invoke<Any>(N::GET_POSIX_TIME); }
	static Any _0x86A68E84E5884951() { return Native::Invoke<Any>(0x86A68E84E5884951); }
	static Any _0x28EEACE9B43D9597() { return Native::Invoke<Any>(0x28EEACE9B43D9597); }
}
namespace _NAMESPACE11
{
	static Any _0x725D52F21A5E9EF6() { return Native::Invoke<Any>(0x725D52F21A5E9EF6); }
	static Any _0x6052B4DE6657684F(Any p0) { return Native::Invoke<Any, Any>(0x6052B4DE6657684F, p0); }
	static Any _0x922A79CD4A033B8B(Any p0) { return Native::Invoke<Any, Any>(0x922A79CD4A033B8B, p0); }
	static Any _0x1F1DD794908C2BFA(Any p0) { return Native::Invoke<Any, Any>(0x1F1DD794908C2BFA, p0); }
	static Any _0xF83D3DDA4D3C8169(Any p0) { return Native::Invoke<Any, Any>(0xF83D3DDA4D3C8169, p0); }
	static Any _0x9A03F22AD446EEAC(Any p0) { return Native::Invoke<Any, Any>(0x9A03F22AD446EEAC, p0); }
	static void _0x3EA62E56F386C997(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x3EA62E56F386C997, p0, p1); }
	static void _0x398FAB9C96A81924(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x398FAB9C96A81924, p0, p1); }
	static Any _0x62CAB7DB62EAD434(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x62CAB7DB62EAD434, p0, p1); }
	static Any _0x126CBEBBA46693CF(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(0x126CBEBBA46693CF, p0, p1, p2); }
	static Any _0x5461C821D00FE15A(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x5461C821D00FE15A, p0, p1); }
	static Any _0x3A65F4844913A047(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x3A65F4844913A047, p0, p1); }
	static Any _0x33825A7388A6B9F6() { return Native::Invoke<Any>(0x33825A7388A6B9F6); }
	static Any _0x755901C7598B97BC() { return Native::Invoke<Any>(0x755901C7598B97BC); }
	static Any _0xB9020EC89C07DF04() { return Native::Invoke<Any>(0xB9020EC89C07DF04); }
	static Any _0xFC832B06127D8E99() { return Native::Invoke<Any>(0xFC832B06127D8E99); }
	static Any _0x0B6D275D2F242E17() { return Native::Invoke<Any>(0x0B6D275D2F242E17); }
	static Any _0x6BAB7ACED1017204() { return Native::Invoke<Any>(0x6BAB7ACED1017204); }
	static Any _0x93F2E7B5DB85657B(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x93F2E7B5DB85657B, p0, p1); }
	static Any _0xCC644BC1DD655269() { return Native::Invoke<Any>(0xCC644BC1DD655269); }
	static Any _0x9ADEE485726025D4() { return Native::Invoke<Any>(0x9ADEE485726025D4); }
	static Any _0xD52D20B0C76BB26D(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0xD52D20B0C76BB26D, p0, p1); }
	static Any _0x13AAECDA43318BFE(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x13AAECDA43318BFE, p0, p1); }
	static Any _0xEC3959E9950BF56B(Any p0) { return Native::Invoke<Any, Any>(0xEC3959E9950BF56B, p0); }
}
namespace _NAMESPACE12
{
	static void _0xD730281E496621FB(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xD730281E496621FB, p0, p1); }
	static void _0xBF6583E926D13890(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xBF6583E926D13890, p0, p1); }
	static void _0x0A8FD91EDE7B328A(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x0A8FD91EDE7B328A, p0, p1); }
	static void _0x991E3346D788F20F(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x991E3346D788F20F, p0, p1); }
	static void _0xCE27824B5968B79A(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xCE27824B5968B79A, p0, p1); }
	static void _0xF06CBB8CCCA823C0(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xF06CBB8CCCA823C0, p0, p1); }
	static void _0x2917E634206B9E17(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x2917E634206B9E17, p0, p1); }
	static void _0xD428C3F92FC3F6F8(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xD428C3F92FC3F6F8, p0, p1); }
	static void _0xDEB369F6AD168C58(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xDEB369F6AD168C58, p0, p1); }
	static void _0x1740E3DEE0AE4D27(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x1740E3DEE0AE4D27, p0, p1); }
	static void _0x0DE02DA3C0F66955(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x0DE02DA3C0F66955, p0, p1); }
	static void _0x0F1CD8CA9E65D5F6(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x0F1CD8CA9E65D5F6, p0, p1); }
	static Any _0xB7E0590C86E1711F(Any p0) { return Native::Invoke<Any, Any>(0xB7E0590C86E1711F, p0); }
	static void _0xA079FF7CFB9AC8BD(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xA079FF7CFB9AC8BD, p0, p1); }
	static void _0x61BDA07407754A5C(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<void, Any, Any, Any, Any>(0x61BDA07407754A5C, p0, p1, p2, p3); }
	static void _0xD55A871E1CE3481B(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<void, Any, Any, Any, Any>(0xD55A871E1CE3481B, p0, p1, p2, p3); }
	static void _0x0C6A00DAE896614C(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x0C6A00DAE896614C, p0, p1); }
	static void _0x8FB98B719AA0075A(Any p0, Any p1, Any p2, Any p3, Any p4) { return Native::Invoke<void, Any, Any, Any, Any, Any>(0x8FB98B719AA0075A, p0, p1, p2, p3, p4); }
	static void _0x9C902084F48D2E6C(Any p0) { return Native::Invoke<void, Any>(0x9C902084F48D2E6C, p0); }
	static void _0xD747979C053EFA7A(Any p0) { return Native::Invoke<void, Any>(0xD747979C053EFA7A, p0); }
	static void _0x3CAAD93FA5B9579A(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0x3CAAD93FA5B9579A, p0, p1, p2); }
	static void _0x7274F84B1501B523(Any p0) { return Native::Invoke<void, Any>(0x7274F84B1501B523, p0); }
	static Any _0x722FBE08EF5B87BD(Any p0, Any p1, Any p2, Any p3, Any p4) { return Native::Invoke<Any, Any, Any, Any, Any, Any>(0x722FBE08EF5B87BD, p0, p1, p2, p3, p4); }
	static void _0xCBD9EC60495C728C(Any p0) { return Native::Invoke<void, Any>(0xCBD9EC60495C728C, p0); }
	static void _0x72B7F65F11FC8896(Any p0) { return Native::Invoke<void, Any>(0x72B7F65F11FC8896, p0); }
}
namespace _NAMESPACE13
{
	static Any _0x725D52F21A5E9E22(Any p0) { return Native::Invoke<Any, Any>(0x725D52F21A5E9E22, p0); }
	static Any _0x729D52F61A5A9E22(Any p0) { return Native::Invoke<Any, Any>(0x729D52F61A5A9E22, p0); }
	static Any _0x729D52461AEA9E22(Any p0) { return Native::Invoke<Any, Any>(0x729D52461AEA9E22, p0); }
	static Any _0x6C5E5D48E48B4C65(Any p0) { return Native::Invoke<Any, Any>(0x6C5E5D48E48B4C65, p0); }
	static Any _0x729D54121A5E9E20(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<Any, Any, Any, Any, Any>(0x729D54121A5E9E20, p0, p1, p2, p3); }
	static void _0x725D52F26A5E9E10(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x725D52F26A5E9E10, p0, p1); }
	static void _0x725D52F21A5E9E00(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x725D52F21A5E9E00, p0, p1); }
	static Any _0x725D52F21A5E9E81(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x725D52F21A5E9E81, p0, p1); }
	static void _0x725D52F21A5E9E03(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x725D52F21A5E9E03, p0, p1); }
	static void _0x725D52F21A5E9E04(Any p0) { return Native::Invoke<void, Any>(0x725D52F21A5E9E04, p0); }
	static void _0x725D52F21A5E9E05(Any p0) { return Native::Invoke<void, Any>(0x725D52F21A5E9E05, p0); }
	static void _0x725D52F21A5E9E06(Any p0) { return Native::Invoke<void, Any>(0x725D52F21A5E9E06, p0); }
	static void _0x725D52F21A5E9E07(Any p0) { return Native::Invoke<void, Any>(0x725D52F21A5E9E07, p0); }
	static void _0x725D52F21A5E9E08(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x725D52F21A5E9E08, p0, p1); }
	static void _0x725D52F21A5E9E09(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<void, Any, Any, Any, Any>(0x725D52F21A5E9E09, p0, p1, p2, p3); }
	static void _0x725D52F21A5E9E50(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x725D52F21A5E9E50, p0, p1); }
	static void _0x725852D21A2E9E50(Any p0) { return Native::Invoke<void, Any>(0x725852D21A2E9E50, p0); }
	static void _0x725D58F2125E5E50(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x725D58F2125E5E50, p0, p1); }
}
namespace _NAMESPACE14
{
	static Any _0x0FD3ECF9D0C8655F() { return Native::Invoke<Any>(0x0FD3ECF9D0C8655F); }
	static Any _0xCA0BAC376C541978() { return Native::Invoke<Any>(0xCA0BAC376C541978); }
	static Any _0x3A66F1963B223F61() { return Native::Invoke<Any>(0x3A66F1963B223F61); }
	static Any _0x7C680FF55617F82F() { return Native::Invoke<Any>(0x7C680FF55617F82F); }
	static Any _0xD8E3D22AA4F0E0A5() { return Native::Invoke<Any>(0xD8E3D22AA4F0E0A5); }
	static Any _0xA67F0B039D9CD513() { return Native::Invoke<Any>(0xA67F0B039D9CD513); }
	static Any _0xE72E234B30DA7B7A() { return Native::Invoke<Any>(0xE72E234B30DA7B7A); }
	static Any _0x87F005C969EF1563() { return Native::Invoke<Any>(0x87F005C969EF1563); }
	static Any _0x23CCAB8F40B9CBEE() { return Native::Invoke<Any>(0x23CCAB8F40B9CBEE); }
	static Any _0xF0D545C1EEAD614A() { return Native::Invoke<Any>(0xF0D545C1EEAD614A); }
	static Any _0x33C1D63E55FA4284() { return Native::Invoke<Any>(0x33C1D63E55FA4284); }
	static Any _0x4E42CA5BCD45444A() { return Native::Invoke<Any>(0x4E42CA5BCD45444A); }
}
namespace _NAMESPACE15
{
	static Any _0xE532D6811B3A4D2A() { return Native::Invoke<Any>(0xE532D6811B3A4D2A); }
	static Any NETWORK_CLAN_SERVICE_IS_VALID() { return Native::Invoke<Any>(N::NETWORK_CLAN_SERVICE_IS_VALID); }
	static Any NETWORK_CLAN_PLAYER_IS_ACTIVE() { return Native::Invoke<Any>(N::NETWORK_CLAN_PLAYER_IS_ACTIVE); }
	static Any NETWORK_CLAN_PLAYER_GET_DESC() { return Native::Invoke<Any>(N::NETWORK_CLAN_PLAYER_GET_DESC); }
	static Any _NETWORK_CLAN_GET_NUM_MEMBERSHIP_DESC() { return Native::Invoke<Any>(N::_NETWORK_CLAN_GET_NUM_MEMBERSHIP_DESC); }
	static Any NETWORK_CLAN_GET_MEMBERSHIP_DESC() { return Native::Invoke<Any>(N::NETWORK_CLAN_GET_MEMBERSHIP_DESC); }
	static Any _0x58D378AF2C8765B7() { return Native::Invoke<Any>(0x58D378AF2C8765B7); }
	static Any _0xC685B014CE3D988B() { return Native::Invoke<Any>(0xC685B014CE3D988B); }
	static Any _0x8E2143144B8E188D() { return Native::Invoke<Any>(0x8E2143144B8E188D); }
	static Any _0x13518FF1C6B28938() { return Native::Invoke<Any>(0x13518FF1C6B28938); }
	static Any _0xA134777FF7F33331() { return Native::Invoke<Any>(0xA134777FF7F33331); }
	static Any _0x113E6E3E50E286B0() { return Native::Invoke<Any>(0x113E6E3E50E286B0); }
	static Any NETWORK_GET_PRIMARY_CLAN_DATA_CLEAR() { return Native::Invoke<Any>(N::NETWORK_GET_PRIMARY_CLAN_DATA_CLEAR); }
	static Any NETWORK_GET_PRIMARY_CLAN_DATA_START() { return Native::Invoke<Any>(N::NETWORK_GET_PRIMARY_CLAN_DATA_START); }
	static Any NETWORK_GET_PRIMARY_CLAN_DATA_PENDING() { return Native::Invoke<Any>(N::NETWORK_GET_PRIMARY_CLAN_DATA_PENDING); }
	static Any NETWORK_GET_PRIMARY_CLAN_DATA_SUCCESS() { return Native::Invoke<Any>(N::NETWORK_GET_PRIMARY_CLAN_DATA_SUCCESS); }
	static Any NETWORK_GET_PRIMARY_CLAN_DATA_NEW() { return Native::Invoke<Any>(N::NETWORK_GET_PRIMARY_CLAN_DATA_NEW); }
	static Any _0xC080FF658B2E51DA() { return Native::Invoke<Any>(0xC080FF658B2E51DA); }
}
namespace DATABINDING
{
	static Any _GET_DATA_CONTAINER_FROM_PATH(Any p0) { return Native::Invoke<Any, Any>(N::_GET_DATA_CONTAINER_FROM_PATH, p0); }
	static Any _GET_DATA_CONTAINER_FROM_CHILD_INDEX(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(N::_GET_DATA_CONTAINER_FROM_CHILD_INDEX, p0, p1); }
	static Any _0xD7DB94AB78E8EBE4() { return Native::Invoke<Any>(0xD7DB94AB78E8EBE4); }
	static Any _ADD_DATA_CONTAINER_FROM_PATH(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(N::_ADD_DATA_CONTAINER_FROM_PATH, p0, p1); }
	static Any _ADD_DATA_CONTAINER_BY_HASH(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(N::_ADD_DATA_CONTAINER_BY_HASH, p0, p1); }
	static Any _ADD_DATA_CONTAINER(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(N::_ADD_DATA_CONTAINER, p0, p1); }
	static Any _ADD_DATA_BOOL_FROM_PATH(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(N::_ADD_DATA_BOOL_FROM_PATH, p0, p1, p2); }
	static Any _ADD_DATA_BOOL_BY_HASH(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(N::_ADD_DATA_BOOL_BY_HASH, p0, p1, p2); }
	static Any _ADD_DATA_BOOL(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(N::_ADD_DATA_BOOL, p0, p1, p2); }
	static Any _ADD_DATA_INT_BY_HASH(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(N::_ADD_DATA_INT_BY_HASH, p0, p1, p2); }
	static Any _ADD_DATA_INT(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(N::_ADD_DATA_INT, p0, p1, p2); }
	static Any _ADD_DATA_FLOAT(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(N::_ADD_DATA_FLOAT, p0, p1, p2); }
	static Any _ADD_DATA_HASH_BY_HASH(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(N::_ADD_DATA_HASH_BY_HASH, p0, p1, p2); }
	static Any _ADD_DATA_HASH(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(N::_ADD_DATA_HASH, p0, p1, p2); }
	static Any _0xA381DE86EE170C4A() { return Native::Invoke<Any>(0xA381DE86EE170C4A); }
	static Any _ADD_DATA_STRING_BY_HASH(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(N::_ADD_DATA_STRING_BY_HASH, p0, p1, p2); }
	static Any _ADD_DATA_STRING(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(N::_ADD_DATA_STRING, p0, p1, p2); }
	static Any _ADD_DATA_GANG_ID(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(N::_ADD_DATA_GANG_ID, p0, p1, p2); }
	static Any _0x7D0F2014DB28DD01() { return Native::Invoke<Any>(0x7D0F2014DB28DD01); }
	static Any _0x294AF5323F44B053() { return Native::Invoke<Any>(0x294AF5323F44B053); }
	static Any _ADD_UI_ITEM_LIST_FROM_PATH(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(N::_ADD_UI_ITEM_LIST_FROM_PATH, p0, p1); }
	static Any _ADD_UI_ITEM_LIST_BY_HASH(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(N::_ADD_UI_ITEM_LIST_BY_HASH, p0, p1); }
	static Any _ADD_UI_ITEM_LIST(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(N::_ADD_UI_ITEM_LIST, p0, p1); }
	static void _INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<void, Any, Any, Any, Any>(N::_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS, p0, p1, p2, p3); }
	static void _INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_HASH_ALIAS(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<void, Any, Any, Any, Any>(N::_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_HASH_ALIAS, p0, p1, p2, p3); }
	static void _INSERT_UI_ITEM_TO_LIST_FROM_PATH_STRING_ALIAS(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<void, Any, Any, Any, Any>(N::_INSERT_UI_ITEM_TO_LIST_FROM_PATH_STRING_ALIAS, p0, p1, p2, p3); }
	static void _0x6318FB3BE37E11B3(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x6318FB3BE37E11B3, p0, p1); }
	static void _REMOVE_BINDING_ARRAY_ITEM_BY_DATA_CONTEXT_ID(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(N::_REMOVE_BINDING_ARRAY_ITEM_BY_DATA_CONTEXT_ID, p0, p1); }
	static void _CLEAR_BINDING_ARRAY(Any p0) { return Native::Invoke<void, Any>(N::_CLEAR_BINDING_ARRAY, p0); }
	static Any _GET_ITEM_CONTEXT_BY_INDEX(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(N::_GET_ITEM_CONTEXT_BY_INDEX, p0, p1); }
	static void _SET_TEMPLATED_UI_ITEM_LIST_SIZE(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(N::_SET_TEMPLATED_UI_ITEM_LIST_SIZE, p0, p1); }
	static void _SET_TEMPLATED_UI_ITEM_HASH_ALIAS(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(N::_SET_TEMPLATED_UI_ITEM_HASH_ALIAS, p0, p1, p2); }
	static Any _0xD48993A61938C64D() { return Native::Invoke<Any>(0xD48993A61938C64D); }
	static Any _ADD_HASH_ARRAY(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(N::_ADD_HASH_ARRAY, p0, p1); }
	static Any _ADD_STRING_ARRAY(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(N::_ADD_STRING_ARRAY, p0, p1); }
	static Any _0x1919D59E60FD516E() { return Native::Invoke<Any>(0x1919D59E60FD516E); }
	static Any _0x7FC60C94C83C5CD7() { return Native::Invoke<Any>(0x7FC60C94C83C5CD7); }
	static Any _0xC900CEC8A172375B() { return Native::Invoke<Any>(0xC900CEC8A172375B); }
	static Any _0x02B21B6BEEDD83CC() { return Native::Invoke<Any>(0x02B21B6BEEDD83CC); }
	static Any _0xF47E33F8D2523825() { return Native::Invoke<Any>(0xF47E33F8D2523825); }
	static Any _0x3BF0767CF33FCC88() { return Native::Invoke<Any>(0x3BF0767CF33FCC88); }
	static Any _GET_ARRAY_COUNT(Any p0) { return Native::Invoke<Any, Any>(N::_GET_ARRAY_COUNT, p0); }
	static void _WRITE_DATA_SCRIPT_VARIABLES(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any, Any, Any, Any>(N::_WRITE_DATA_SCRIPT_VARIABLES, p0, p1, p2, p3, p4, p5, p6, p7, p8); }
	static void _WRITE_DATA_BOOL(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(N::_WRITE_DATA_BOOL, p0, p1); }
	static void _WRITE_DATA_BOOL_FROM_PARENT(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(N::_WRITE_DATA_BOOL_FROM_PARENT, p0, p1, p2); }
	static Any _0xBFC83DA249BEFCC9() { return Native::Invoke<Any>(0xBFC83DA249BEFCC9); }
	static void _WRITE_DATA_INT(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(N::_WRITE_DATA_INT, p0, p1); }
	static void _WRITE_DATA_INT_FROM_PARENT(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(N::_WRITE_DATA_INT_FROM_PARENT, p0, p1, p2); }
	static void _WRITE_DATA_INT_FROM_PARENT_BY_HASH(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(N::_WRITE_DATA_INT_FROM_PARENT_BY_HASH, p0, p1, p2); }
	static void _WRITE_DATA_FLOAT(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(N::_WRITE_DATA_FLOAT, p0, p1); }
	static Any _0x05AC9E1E02975AFB() { return Native::Invoke<Any>(0x05AC9E1E02975AFB); }
	static void _WRITE_DATA_HASH_STRING(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(N::_WRITE_DATA_HASH_STRING, p0, p1); }
	static void _WRITE_DATA_HASH_STRING_FROM_PARENT(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(N::_WRITE_DATA_HASH_STRING_FROM_PARENT, p0, p1, p2); }
	static void _WRITE_DATA_HASH_STRING_FROM_PARENT_BY_HASH(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(N::_WRITE_DATA_HASH_STRING_FROM_PARENT_BY_HASH, p0, p1, p2); }
	static void _WRITE_DATA_STRING(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(N::_WRITE_DATA_STRING, p0, p1); }
	static void _WRITE_DATA_STRING_FROM_PARENT(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(N::_WRITE_DATA_STRING_FROM_PARENT, p0, p1, p2); }
	static Any _0xA3BD6FF95E713EE5() { return Native::Invoke<Any>(0xA3BD6FF95E713EE5); }
	static Any _0xC70041408E16BE2D() { return Native::Invoke<Any>(0xC70041408E16BE2D); }
	static Any _0xC70041408E16BE2E() { return Native::Invoke<Any>(0xC70041408E16BE2E); }
	static Any _0x422179C7F6AD9304() { return Native::Invoke<Any>(0x422179C7F6AD9304); }
	static Any _READ_DATA_BOOL(Any p0) { return Native::Invoke<Any, Any>(N::_READ_DATA_BOOL, p0); }
	static Any _READ_DATA_BOOL_FROM_PARENT(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(N::_READ_DATA_BOOL_FROM_PARENT, p0, p1); }
	static Any _READ_DATA_BOOL_FROM_PARENT_BY_HASH(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(N::_READ_DATA_BOOL_FROM_PARENT_BY_HASH, p0, p1); }
	static Any _READ_DATA_INT(Any p0) { return Native::Invoke<Any, Any>(N::_READ_DATA_INT, p0); }
	static Any _READ_DATA_INT_FROM_PARENT(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(N::_READ_DATA_INT_FROM_PARENT, p0, p1); }
	static Any _READ_DATA_INT_FROM_PARENT_BY_HASH(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(N::_READ_DATA_INT_FROM_PARENT_BY_HASH, p0, p1); }
	static Any _0x5FE444EB67C70AD4() { return Native::Invoke<Any>(0x5FE444EB67C70AD4); }
	static Any _0x81D7183E7A8ECA72() { return Native::Invoke<Any>(0x81D7183E7A8ECA72); }
	static Any _READ_DATA_HASH_STRING_FROM_PARENT(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(N::_READ_DATA_HASH_STRING_FROM_PARENT, p0, p1); }
	static Any _READ_DATA_HASH_STRING_FROM_PARENT_BY_HASH(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(N::_READ_DATA_HASH_STRING_FROM_PARENT_BY_HASH, p0, p1); }
	static Any _READ_DATA_STRING(Any p0) { return Native::Invoke<Any, Any>(N::_READ_DATA_STRING, p0); }
	static Any _READ_DATA_STRING_FROM_PARENT(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(N::_READ_DATA_STRING_FROM_PARENT, p0, p1); }
	static Any _0x6329C34BEE5BFF4B() { return Native::Invoke<Any>(0x6329C34BEE5BFF4B); }
	static Any _0xE6AAB897120492D6() { return Native::Invoke<Any>(0xE6AAB897120492D6); }
	static Any _0xE6AAB897120492D7() { return Native::Invoke<Any>(0xE6AAB897120492D7); }
	static Any _0xB138CA787F3DD858() { return Native::Invoke<Any>(0xB138CA787F3DD858); }
	static Any _IS_DATA_ID_VALID(Any p0) { return Native::Invoke<Any, Any>(N::_IS_DATA_ID_VALID, p0); }
	static void _REMOVE_DATA_ENTRY(Any p0) { return Native::Invoke<void, Any>(N::_REMOVE_DATA_ENTRY, p0); }
	static void _VIRTUAL_COLLECTION_SET_SIZE(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(N::_VIRTUAL_COLLECTION_SET_SIZE, p0, p1); }
	static void _VIRTUAL_COLLECTION_SET_INTEREST_INDEX(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(N::_VIRTUAL_COLLECTION_SET_INTEREST_INDEX, p0, p1); }
	static void _VIRTUAL_COLLECTION_ADD_ITEM(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<void, Any, Any, Any, Any>(N::_VIRTUAL_COLLECTION_ADD_ITEM, p0, p1, p2, p3); }
	static void _VIRTUAL_COLLECTION_RESET(Any p0) { return Native::Invoke<void, Any>(N::_VIRTUAL_COLLECTION_RESET, p0); }
	static Any _DOES_VIRTUAL_COLLECTION_EXIST(Any p0) { return Native::Invoke<Any, Any>(N::_DOES_VIRTUAL_COLLECTION_EXIST, p0); }
}
namespace DATAFILE
{
	static Any DATAFILE_WATCH_REQUEST_ID() { return Native::Invoke<Any>(N::DATAFILE_WATCH_REQUEST_ID); }
	static Any _0x17279C820464CEE0() { return Native::Invoke<Any>(0x17279C820464CEE0); }
	static Any _0xE60100389E50EADE() { return Native::Invoke<Any>(0xE60100389E50EADE); }
	static Any _0x46102A0989AD80B5() { return Native::Invoke<Any>(0x46102A0989AD80B5); }
	static Any _0x604B8ED1A482F9DF() { return Native::Invoke<Any>(0x604B8ED1A482F9DF); }
	static Any _0xE79C70E77E0973C7() { return Native::Invoke<Any>(0xE79C70E77E0973C7); }
	static Any _0x790EC421078F5C4E() { return Native::Invoke<Any>(0x790EC421078F5C4E); }
	static void DATAFILE_CREATE() { return Native::Invoke<void>(N::DATAFILE_CREATE); }
	static void DATAFILE_DELETE() { return Native::Invoke<void>(N::DATAFILE_DELETE); }
	static char* DATAFILE_GET_FILE_DICT() { return Native::Invoke<char*>(N::DATAFILE_GET_FILE_DICT); }
	static Any _0x4607D57C5F7D332A() { return Native::Invoke<Any>(0x4607D57C5F7D332A); }
	static Any _0xB04B69CF277D15C0() { return Native::Invoke<Any>(0xB04B69CF277D15C0); }
	static Any _OBJECT_VALUE_ADD_INTEGER() { return Native::Invoke<Any>(N::_OBJECT_VALUE_ADD_INTEGER); }
	static Any _OBJECT_VALUE_GET_BOOLEAN() { return Native::Invoke<Any>(N::_OBJECT_VALUE_GET_BOOLEAN); }
	static Any _OBJECT_VALUE_GET_INTEGER() { return Native::Invoke<Any>(N::_OBJECT_VALUE_GET_INTEGER); }
	static Any _OBJECT_VALUE_GET_FLOAT() { return Native::Invoke<Any>(N::_OBJECT_VALUE_GET_FLOAT); }
	static Any _OBJECT_VALUE_GET_STRING() { return Native::Invoke<Any>(N::_OBJECT_VALUE_GET_STRING); }
	static Any _OBJECT_VALUE_GET_VECTOR3() { return Native::Invoke<Any>(N::_OBJECT_VALUE_GET_VECTOR3); }
	static Any _OBJECT_VALUE_GET_OBJECT() { return Native::Invoke<Any>(N::_OBJECT_VALUE_GET_OBJECT); }
	static Any _OBJECT_VALUE_GET_ARRAY() { return Native::Invoke<Any>(N::_OBJECT_VALUE_GET_ARRAY); }
	static Any _OBJECT_VALUE_GET_TYPE() { return Native::Invoke<Any>(N::_OBJECT_VALUE_GET_TYPE); }
	static Any _0xBC0DF006A4952C68() { return Native::Invoke<Any>(0xBC0DF006A4952C68); }
	static Any _0x9F130129EBC31B34() { return Native::Invoke<Any>(0x9F130129EBC31B34); }
	static Any _0x277251C161B4C3F4() { return Native::Invoke<Any>(0x277251C161B4C3F4); }
	static Any _0x1C65CC931C0F946F() { return Native::Invoke<Any>(0x1C65CC931C0F946F); }
	static Any _0x7681B677400C7071() { return Native::Invoke<Any>(0x7681B677400C7071); }
	static Any _ARRAY_VALUE_GET_BOOLEAN() { return Native::Invoke<Any>(N::_ARRAY_VALUE_GET_BOOLEAN); }
	static Any _ARRAY_VALUE_GET_INTEGER() { return Native::Invoke<Any>(N::_ARRAY_VALUE_GET_INTEGER); }
	static Any _ARRAY_VALUE_GET_FLOAT() { return Native::Invoke<Any>(N::_ARRAY_VALUE_GET_FLOAT); }
	static Any _ARRAY_VALUE_GET_STRING() { return Native::Invoke<Any>(N::_ARRAY_VALUE_GET_STRING); }
	static Any _ARRAY_VALUE_GET_VECTOR3() { return Native::Invoke<Any>(N::_ARRAY_VALUE_GET_VECTOR3); }
	static Any _ARRAY_VALUE_GET_OBJECT() { return Native::Invoke<Any>(N::_ARRAY_VALUE_GET_OBJECT); }
	static Any _ARRAY_VALUE_GET_SIZE() { return Native::Invoke<Any>(N::_ARRAY_VALUE_GET_SIZE); }
	static Any _ARRAY_VALUE_GET_TYPE() { return Native::Invoke<Any>(N::_ARRAY_VALUE_GET_TYPE); }
	static Any _0x4F9E3ED7617123AC(Any p0) { return Native::Invoke<Any, Any>(0x4F9E3ED7617123AC, p0); }
	static Any _0xCA56DD6AB7A39F64(Any p0) { return Native::Invoke<Any, Any>(0xCA56DD6AB7A39F64, p0); }
	static Any _0xD97D8D905F1562F2(Any p0) { return Native::Invoke<Any, Any>(0xD97D8D905F1562F2, p0); }
	static void _DATAFILE_UNLOAD(Any p0) { return Native::Invoke<void, Any>(N::_DATAFILE_UNLOAD, p0); }
	static Any _0x7907969497EA92F5(Any p0) { return Native::Invoke<Any, Any>(0x7907969497EA92F5, p0); }
	static Any _0x603AC35FD4602C76(Any p0) { return Native::Invoke<Any, Any>(0x603AC35FD4602C76, p0); }
	static void _0x3168BA5D6DECE323() { return Native::Invoke<void>(0x3168BA5D6DECE323); }
	static Any _DATAFILE_REGISTER_QUERY(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(N::_DATAFILE_REGISTER_QUERY, p0, p1, p2); }
	static Any _DATAFILE_GET_DATA_NODE_INDEX(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(N::_DATAFILE_GET_DATA_NODE_INDEX, p0, p1); }
	static Any _DATAFILE_GET_NUM_NODES(Any p0) { return Native::Invoke<Any, Any>(N::_DATAFILE_GET_NUM_NODES, p0); }
	static Any _0xE13634BB6BAF0734() { return Native::Invoke<Any>(0xE13634BB6BAF0734); }
	static Any _DATAFILE_GET_NUM_CHILDREN(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(N::_DATAFILE_GET_NUM_CHILDREN, p0, p1); }
	static Any _DATAFILE_GET_HASH(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(N::_DATAFILE_GET_HASH, p0, p1); }
	static Any _DATAFILE_GET_STRING(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(N::_DATAFILE_GET_STRING, p0, p1); }
	static Any _DATAFILE_GET_VECTOR(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(N::_DATAFILE_GET_VECTOR, p0, p1); }
	static Any _DATAFILE_GET_FLOAT(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(N::_DATAFILE_GET_FLOAT, p0, p1); }
	static Any _DATAFILE_GET_INT(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(N::_DATAFILE_GET_INT, p0, p1); }
	static Any _DATAFILE_GET_BOOL(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(N::_DATAFILE_GET_BOOL, p0, p1); }
	static void _0x91DED5DD64BB2691(Any p0) { return Native::Invoke<void, Any>(0x91DED5DD64BB2691, p0); }
	static Any _0xED4413CEE1BF142C(Any p0) { return Native::Invoke<Any, Any>(0xED4413CEE1BF142C, p0); }
	static Any _0xB2B42607F7867576() { return Native::Invoke<Any>(0xB2B42607F7867576); }
	static Any _0x52FC26D2D2FC2987(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(0x52FC26D2D2FC2987, p0, p1, p2); }
	static Any _0x44B3A36933AC009C(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(0x44B3A36933AC009C, p0, p1, p2); }
	static Any _0xA63CD20F19B961AB(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(0xA63CD20F19B961AB, p0, p1, p2); }
}
namespace _NAMESPACE18
{
	static Any _0xACF9CB705BEFA8CB() { return Native::Invoke<Any>(0xACF9CB705BEFA8CB); }
	static Any _0xA8D970D8A72640A6() { return Native::Invoke<Any>(0xA8D970D8A72640A6); }
	static Any _0x05A5F662AD35C573() { return Native::Invoke<Any>(0x05A5F662AD35C573); }
}
namespace DECORATOR
{
	static BOOL DECOR_SET_BOOL(Entity entity, char* propertyName, BOOL value) { return Native::Invoke<BOOL, Entity, char*, BOOL>(N::DECOR_SET_BOOL, entity, propertyName, value); }
	static Any DECOR_SET_FLOAT(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(N::DECOR_SET_FLOAT, p0, p1, p2); }
	static BOOL DECOR_SET_INT(Entity entity, char* propertyName, int value) { return Native::Invoke<BOOL, Entity, char*, int>(N::DECOR_SET_INT, entity, propertyName, value); }
	static Any _0x4BDC83150D43772D() { return Native::Invoke<Any>(0x4BDC83150D43772D); }
	static Any _0x0671C1A3FF7AFDFC(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(0x0671C1A3FF7AFDFC, p0, p1, p2); }
	static BOOL DECOR_GET_BOOL(Entity entity, char* propertyName) { return Native::Invoke<BOOL, Entity, char*>(N::DECOR_GET_BOOL, entity, propertyName); }
	static Any DECOR_GET_FLOAT(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(N::DECOR_GET_FLOAT, p0, p1); }
	static int DECOR_GET_INT(Entity entity, char* propertyName) { return Native::Invoke<int, Entity, char*>(N::DECOR_GET_INT, entity, propertyName); }
	static Any _0xB1682B2443F0540B() { return Native::Invoke<Any>(0xB1682B2443F0540B); }
	static BOOL DECOR_EXIST_ON(Entity entity, char* propertyName) { return Native::Invoke<BOOL, Entity, char*>(N::DECOR_EXIST_ON, entity, propertyName); }
	static BOOL DECOR_REMOVE(Entity entity, char* propertyName) { return Native::Invoke<BOOL, Entity, char*>(N::DECOR_REMOVE, entity, propertyName); }
	static Any _0x88942780E0ADEA42(Any p0) { return Native::Invoke<Any, Any>(0x88942780E0ADEA42, p0); }
	static void DECOR_REGISTER(char* propertyName, int type) { return Native::Invoke<void, char*, int>(N::DECOR_REGISTER, propertyName, type); }
	static void _0x4587374F88B7F6C2(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0x4587374F88B7F6C2, p0, p1, p2); }
	static Any DECOR_IS_REGISTERED_AS_TYPE() { return Native::Invoke<Any>(N::DECOR_IS_REGISTERED_AS_TYPE); }
}
namespace DLC
{
	static BOOL IS_DLC_PRESENT(Hash dlcHash) { return Native::Invoke<BOOL, Hash>(N::IS_DLC_PRESENT, dlcHash); }
	static BOOL GET_IS_LOADING_SCREEN_ACTIVE() { return Native::Invoke<BOOL>(N::GET_IS_LOADING_SCREEN_ACTIVE); }
	static Any _0xA16B4FBA7887D7BA() { return Native::Invoke<Any>(0xA16B4FBA7887D7BA); }
	static Any _0x1DB9D61E505AE3FC() { return Native::Invoke<Any>(0x1DB9D61E505AE3FC); }
}
namespace ENTITY
{
	static BOOL DOES_ENTITY_EXIST(Entity entity) { return Native::Invoke<BOOL, Entity>(N::DOES_ENTITY_EXIST, entity); }
	static BOOL DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Entity entity, BOOL p2) { return Native::Invoke<BOOL, Entity, BOOL>(N::DOES_ENTITY_BELONG_TO_THIS_SCRIPT, entity, p2); }
	static BOOL DOES_ENTITY_HAVE_DRAWABLE(Entity entity) { return Native::Invoke<BOOL, Entity>(N::DOES_ENTITY_HAVE_DRAWABLE, entity); }
	static BOOL DOES_ENTITY_HAVE_PHYSICS(Entity entity) { return Native::Invoke<BOOL, Entity>(N::DOES_ENTITY_HAVE_PHYSICS, entity); }
	static BOOL HAS_ENTITY_BEEN_DAMAGED_BY_ANY_OBJECT(Entity entity) { return Native::Invoke<BOOL, Entity>(N::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_OBJECT, entity); }
	static BOOL HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(Entity entity) { return Native::Invoke<BOOL, Entity>(N::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED, entity); }
	static BOOL HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(Entity entity) { return Native::Invoke<BOOL, Entity>(N::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE, entity); }
	static BOOL HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Entity entity1, Entity entity2, BOOL p2, Any p3) { return Native::Invoke<BOOL, Entity, Entity, BOOL, Any>(N::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY, entity1, entity2, p2, p3); }
	static Any _0x3EC28DA1FFAC9DDD(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<Any, Any, Any, Any, Any>(0x3EC28DA1FFAC9DDD, p0, p1, p2, p3); }
	static BOOL HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Entity entity1, Entity entity2, int traceType) { return Native::Invoke<BOOL, Entity, Entity, int>(N::HAS_ENTITY_CLEAR_LOS_TO_ENTITY, entity1, entity2, traceType); }
	static Any _0x0C9DBF48C6BA6E4C(Any p0, Any p1, Any p2, Any p3, Any p4) { return Native::Invoke<Any, Any, Any, Any, Any, Any>(0x0C9DBF48C6BA6E4C, p0, p1, p2, p3, p4); }
	static BOOL HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(Entity entity1, Entity entity2, Any p2) { return Native::Invoke<BOOL, Entity, Entity, Any>(N::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT, entity1, entity2, p2); }
	static BOOL HAS_ENTITY_COLLIDED_WITH_ANYTHING(Entity entity) { return Native::Invoke<BOOL, Entity>(N::HAS_ENTITY_COLLIDED_WITH_ANYTHING, entity); }
	static Any _0x6D58167F62238284(Any p0) { return Native::Invoke<Any, Any>(0x6D58167F62238284, p0); }
	static Any _0xDFC2B226D56D85F6(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0xDFC2B226D56D85F6, p0, p1); }
	static Any GET_ANIM_DURATION(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(N::GET_ANIM_DURATION, p0, p1); }
	static Entity GET_ENTITY_ATTACHED_TO(Entity entity) { return Native::Invoke<Entity, Entity>(N::GET_ENTITY_ATTACHED_TO, entity); }
	static Vector3 GET_ENTITY_COORDS(Entity entity, BOOL alive, Any p2) { return Native::Invoke<Vector3, Entity, BOOL, Any>(N::GET_ENTITY_COORDS, entity, alive, p2); }
	static Vector3 GET_ENTITY_FORWARD_VECTOR(Entity entity) { return Native::Invoke<Vector3, Entity>(N::GET_ENTITY_FORWARD_VECTOR, entity); }
	static float GET_ENTITY_FORWARD_X(Entity entity) { return Native::Invoke<float, Entity>(N::GET_ENTITY_FORWARD_X, entity); }
	static float GET_ENTITY_FORWARD_Y(Entity entity) { return Native::Invoke<float, Entity>(N::GET_ENTITY_FORWARD_Y, entity); }
	static Any _0x935A30AA88FB1014(Any p0) { return Native::Invoke<Any, Any>(0x935A30AA88FB1014, p0); }
	static float GET_ENTITY_HEADING(Entity entity) { return Native::Invoke<float, Entity>(N::GET_ENTITY_HEADING, entity); }
	static int GET_ENTITY_HEALTH(Entity entity) { return Native::Invoke<int, Entity>(N::GET_ENTITY_HEALTH, entity); }
	static Any _0x96C638784DB4C815(Any p0) { return Native::Invoke<Any, Any>(0x96C638784DB4C815, p0); }
	static Any _0x835F131E7DC8F97A(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(0x835F131E7DC8F97A, p0, p1, p2); }
	static int GET_ENTITY_MAX_HEALTH(Entity entity, Any p1) { return Native::Invoke<int, Entity, Any>(N::GET_ENTITY_MAX_HEALTH, entity, p1); }
	static void SET_ENTITY_MAX_HEALTH(Entity entity, int value) { return Native::Invoke<void, Entity, int>(N::SET_ENTITY_MAX_HEALTH, entity, value); }
	static float GET_ENTITY_HEIGHT(Entity entity, float X, float Y, float Z, BOOL atTop, BOOL inWorldCoords) { return Native::Invoke<float, Entity, float, float, float, BOOL, BOOL>(N::GET_ENTITY_HEIGHT, entity, X, Y, Z, atTop, inWorldCoords); }
	static float GET_ENTITY_HEIGHT_ABOVE_GROUND(Entity entity) { return Native::Invoke<float, Entity>(N::GET_ENTITY_HEIGHT_ABOVE_GROUND, entity); }
	static Any _0xF3FDA9A617A15145() { return Native::Invoke<Any>(0xF3FDA9A617A15145); }
	static void GET_ENTITY_MATRIX(Entity entity, Vector3* rightVector, Vector3* forwardVector, Vector3* upVector, Vector3* position) { return Native::Invoke<void, Entity, Vector3*, Vector3*, Vector3*, Vector3*>(N::GET_ENTITY_MATRIX, entity, rightVector, forwardVector, upVector, position); }
	static Hash GET_ENTITY_MODEL(Entity entity) { return Native::Invoke<Hash, Entity>(N::GET_ENTITY_MODEL, entity); }
	static Any _0x964000D355219FC0(Any p0) { return Native::Invoke<Any, Any>(0x964000D355219FC0, p0); }
	static Any _0x9A100F1CF4546629(Any p0) { return Native::Invoke<Any, Any>(0x9A100F1CF4546629, p0); }
	static Any _0xC346A546612C49A9(Any p0) { return Native::Invoke<Any, Any>(0xC346A546612C49A9, p0); }
	static Any _0x5594AFE9DE0C01B7(Any p0) { return Native::Invoke<Any, Any>(0x5594AFE9DE0C01B7, p0); }
	static Vector3 GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Entity entity, float posX, float posY, float posZ) { return Native::Invoke<Vector3, Entity, float, float, float>(N::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS, entity, posX, posY, posZ); }
	static Vector3 GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Entity entity, float offsetX, float offsetY, float offsetZ) { return Native::Invoke<Vector3, Entity, float, float, float>(N::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS, entity, offsetX, offsetY, offsetZ); }
	static Any GET_ENTITY_PITCH() { return Native::Invoke<Any>(N::GET_ENTITY_PITCH); }
	static float GET_ENTITY_ROLL(Entity entity) { return Native::Invoke<float, Entity>(N::GET_ENTITY_ROLL, entity); }
	static Vector3 GET_ENTITY_ROTATION(Entity entity, int rotationOrder) { return Native::Invoke<Vector3, Entity, int>(N::GET_ENTITY_ROTATION, entity, rotationOrder); }
	static Any _0x2A08A32B6D49906F(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x2A08A32B6D49906F, p0, p1); }
	static float GET_ENTITY_SPEED(Entity entity) { return Native::Invoke<float, Entity>(N::GET_ENTITY_SPEED, entity); }
	static Any GET_ENTITY_SPEED_VECTOR() { return Native::Invoke<Any>(N::GET_ENTITY_SPEED_VECTOR); }
	static float GET_ENTITY_UPRIGHT_VALUE(Entity entity) { return Native::Invoke<float, Entity>(N::GET_ENTITY_UPRIGHT_VALUE, entity); }
	static Vector3 GET_ENTITY_VELOCITY(Entity entity, Any p1) { return Native::Invoke<Vector3, Entity, Any>(N::GET_ENTITY_VELOCITY, entity, p1); }
	static Object GET_OBJECT_INDEX_FROM_ENTITY_INDEX(Entity entity) { return Native::Invoke<Object, Entity>(N::GET_OBJECT_INDEX_FROM_ENTITY_INDEX, entity); }
	static Ped GET_PED_INDEX_FROM_ENTITY_INDEX(Entity entity) { return Native::Invoke<Ped, Entity>(N::GET_PED_INDEX_FROM_ENTITY_INDEX, entity); }
	static Vehicle GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(Entity entity) { return Native::Invoke<Vehicle, Entity>(N::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX, entity); }
	static Vector3 GET_WORLD_POSITION_OF_ENTITY_BONE(Entity entity, int boneIndex) { return Native::Invoke<Vector3, Entity, int>(N::GET_WORLD_POSITION_OF_ENTITY_BONE, entity, boneIndex); }
	static Any _0x5E214112806591EA() { return Native::Invoke<Any>(0x5E214112806591EA); }
	static Any _0x3AB3A77672F6473F() { return Native::Invoke<Any>(0x3AB3A77672F6473F); }
	static Any GET_NEAREST_PLAYER_TO_ENTITY() { return Native::Invoke<Any>(N::GET_NEAREST_PLAYER_TO_ENTITY); }
	static Any GET_NEAREST_PLAYER_TO_ENTITY_ON_TEAM() { return Native::Invoke<Any>(N::GET_NEAREST_PLAYER_TO_ENTITY_ON_TEAM); }
	static Any _0x6888A43C35A5F630() { return Native::Invoke<Any>(0x6888A43C35A5F630); }
	static Any _0x9587913B9E772D29(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x9587913B9E772D29, p0, p1); }
	static int GET_ENTITY_TYPE(Entity entity) { return Native::Invoke<int, Entity>(N::GET_ENTITY_TYPE, entity); }
	static Any GET_ENTITY_POPULATION_TYPE(Any p0) { return Native::Invoke<Any, Any>(N::GET_ENTITY_POPULATION_TYPE, p0); }
	static BOOL IS_AN_ENTITY(int handle) { return Native::Invoke<BOOL, int>(N::IS_AN_ENTITY, handle); }
	static BOOL IS_ENTITY_A_PED(Entity entity) { return Native::Invoke<BOOL, Entity>(N::IS_ENTITY_A_PED, entity); }
	static BOOL IS_ENTITY_A_MISSION_ENTITY(Entity entity) { return Native::Invoke<BOOL, Entity>(N::IS_ENTITY_A_MISSION_ENTITY, entity); }
	static BOOL IS_ENTITY_A_VEHICLE(Entity entity) { return Native::Invoke<BOOL, Entity>(N::IS_ENTITY_A_VEHICLE, entity); }
	static BOOL IS_ENTITY_AN_OBJECT(Player* entity) { return Native::Invoke<BOOL, Player*>(N::IS_ENTITY_AN_OBJECT, entity); }
	static BOOL IS_ENTITY_AT_COORD(Entity entity, float xPos, float yPos, float zPos, float xSize, float ySize, float zSize, BOOL p7, BOOL p8, int p9) { return Native::Invoke<BOOL, Entity, float, float, float, float, float, float, BOOL, BOOL, int>(N::IS_ENTITY_AT_COORD, entity, xPos, yPos, zPos, xSize, ySize, zSize, p7, p8, p9); }
	static BOOL IS_ENTITY_AT_ENTITY(Entity entity1, Entity entity2, float xSize, float ySize, float zSize, BOOL p5, BOOL p6, int p7) { return Native::Invoke<BOOL, Entity, Entity, float, float, float, BOOL, BOOL, int>(N::IS_ENTITY_AT_ENTITY, entity1, entity2, xSize, ySize, zSize, p5, p6, p7); }
	static BOOL IS_ENTITY_ATTACHED(Entity entity) { return Native::Invoke<BOOL, Entity>(N::IS_ENTITY_ATTACHED, entity); }
	static BOOL IS_ENTITY_ATTACHED_TO_ANY_OBJECT(Entity entity) { return Native::Invoke<BOOL, Entity>(N::IS_ENTITY_ATTACHED_TO_ANY_OBJECT, entity); }
	static BOOL IS_ENTITY_ATTACHED_TO_ANY_PED(Entity entity) { return Native::Invoke<BOOL, Entity>(N::IS_ENTITY_ATTACHED_TO_ANY_PED, entity); }
	static BOOL IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(Entity entity) { return Native::Invoke<BOOL, Entity>(N::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE, entity); }
	static BOOL IS_ENTITY_ATTACHED_TO_ENTITY(Entity from, Entity to) { return Native::Invoke<BOOL, Entity, Entity>(N::IS_ENTITY_ATTACHED_TO_ENTITY, from, to); }
	static Any _0xA7E51B53309EAC97(Any p0) { return Native::Invoke<Any, Any>(0xA7E51B53309EAC97, p0); }
	static BOOL IS_ENTITY_DEAD(Entity entity) { return Native::Invoke<BOOL, Entity>(N::IS_ENTITY_DEAD, entity); }
	static BOOL IS_ENTITY_IN_AIR(Entity entity, Any p1) { return Native::Invoke<BOOL, Entity, Any>(N::IS_ENTITY_IN_AIR, entity, p1); }
	static BOOL IS_ENTITY_IN_ANGLED_AREA(Entity entity, float originX, float originY, float originZ, float edgeX, float edgeY, float edgeZ, float angle, BOOL p8, BOOL p9, Any p10) { return Native::Invoke<BOOL, Entity, float, float, float, float, float, float, float, BOOL, BOOL, Any>(N::IS_ENTITY_IN_ANGLED_AREA, entity, originX, originY, originZ, edgeX, edgeY, edgeZ, angle, p8, p9, p10); }
	static BOOL IS_ENTITY_IN_AREA(Entity entity, float x1, float y1, float z1, float x2, float y2, float z2, BOOL p7, BOOL p8, Any p9) { return Native::Invoke<BOOL, Entity, float, float, float, float, float, float, BOOL, BOOL, Any>(N::IS_ENTITY_IN_AREA, entity, x1, y1, z1, x2, y2, z2, p7, p8, p9); }
	static Any _0x5A5526BC09C06623(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<Any, Any, Any, Any, Any>(0x5A5526BC09C06623, p0, p1, p2, p3); }
	static BOOL IS_ENTITY_IN_WATER(Entity entity) { return Native::Invoke<BOOL, Entity>(N::IS_ENTITY_IN_WATER, entity); }
	static Any _0xD4E5C1E93C466127(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0xD4E5C1E93C466127, p0, p1); }
	static float GET_ENTITY_SUBMERGED_LEVEL(Entity entity) { return Native::Invoke<float, Entity>(N::GET_ENTITY_SUBMERGED_LEVEL, entity); }
	static void _0x850C940EE3E7B8B5(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x850C940EE3E7B8B5, p0, p1); }
	static void _0x7A49D40DE437BC8D(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x7A49D40DE437BC8D, p0, p1); }
	static void _0x978AA2323ED32209(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x978AA2323ED32209, p0, p1); }
	static void _0x002AAC783ED323ED(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x002AAC783ED323ED, p0, p1); }
	static void _0x007AAC783ED323ED(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0x007AAC783ED323ED, p0, p1, p2); }
	static BOOL IS_ENTITY_ON_SCREEN(Entity entity) { return Native::Invoke<BOOL, Entity>(N::IS_ENTITY_ON_SCREEN, entity); }
	static BOOL IS_ENTITY_PLAYING_ANIM(Entity entity, char* animDict, char* animName, int taskFlag) { return Native::Invoke<BOOL, Entity, char*, char*, int>(N::IS_ENTITY_PLAYING_ANIM, entity, animDict, animName, taskFlag); }
	static Any _0x0B7CB1300CBFE19C(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x0B7CB1300CBFE19C, p0, p1); }
	static BOOL IS_ENTITY_STATIC(Entity entity) { return Native::Invoke<BOOL, Entity>(N::IS_ENTITY_STATIC, entity); }
	static BOOL IS_ENTITY_TOUCHING_ENTITY(Entity entity, Entity targetEntity) { return Native::Invoke<BOOL, Entity, Entity>(N::IS_ENTITY_TOUCHING_ENTITY, entity, targetEntity); }
	static BOOL IS_ENTITY_TOUCHING_MODEL(Entity entity, Hash modelHash) { return Native::Invoke<BOOL, Entity, Hash>(N::IS_ENTITY_TOUCHING_MODEL, entity, modelHash); }
	static BOOL IS_ENTITY_UPRIGHT(Entity entity, float angle) { return Native::Invoke<BOOL, Entity, float>(N::IS_ENTITY_UPRIGHT, entity, angle); }
	static BOOL IS_ENTITY_UPSIDEDOWN(Entity entity) { return Native::Invoke<BOOL, Entity>(N::IS_ENTITY_UPSIDEDOWN, entity); }
	static BOOL IS_ENTITY_VISIBLE(Entity entity) { return Native::Invoke<BOOL, Entity>(N::IS_ENTITY_VISIBLE, entity); }
	static Any _0xFF9965C47FA404DA() { return Native::Invoke<Any>(0xFF9965C47FA404DA); }
	static BOOL IS_ENTITY_VISIBLE_TO_SCRIPT(Entity entity) { return Native::Invoke<BOOL, Entity>(N::IS_ENTITY_VISIBLE_TO_SCRIPT, entity); }
	static void _0x3F08C6163A4AB1D6(Any p0) { return Native::Invoke<void, Any>(0x3F08C6163A4AB1D6, p0); }
	static void _0x0DB41D59E0F1502B(Any p0) { return Native::Invoke<void, Any>(0x0DB41D59E0F1502B, p0); }
	static Any _0xC8CCDB712FBCBA92(Any p0) { return Native::Invoke<Any, Any>(0xC8CCDB712FBCBA92, p0); }
	static BOOL IS_ENTITY_OCCLUDED(Entity entity) { return Native::Invoke<BOOL, Entity>(N::IS_ENTITY_OCCLUDED, entity); }
	static BOOL WOULD_ENTITY_BE_OCCLUDED(Hash entityModelHash, float x, float y, float z, BOOL p4) { return Native::Invoke<BOOL, Hash, float, float, float, BOOL>(N::WOULD_ENTITY_BE_OCCLUDED, entityModelHash, x, y, z, p4); }
	static BOOL IS_ENTITY_WAITING_FOR_WORLD_COLLISION(Entity entity) { return Native::Invoke<BOOL, Entity>(N::IS_ENTITY_WAITING_FOR_WORLD_COLLISION, entity); }
	static Any _0x857ACB0AB4BD0D55(Any p0) { return Native::Invoke<Any, Any>(0x857ACB0AB4BD0D55, p0); }
	static void _0xCDB682BB47C02F0A(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xCDB682BB47C02F0A, p0, p1); }
	static void _0xE19035EB65AB2932(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xE19035EB65AB2932, p0, p1); }
	static Any _0x8C03CD6B5E0E85E8(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x8C03CD6B5E0E85E8, p0, p1); }
	static Any _0x1E804EA9B12030A4() { return Native::Invoke<Any>(0x1E804EA9B12030A4); }
	static Any _0xA88E215CEB0435C0(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return Native::Invoke<Any, Any, Any, Any, Any, Any, Any>(0xA88E215CEB0435C0, p0, p1, p2, p3, p4, p5); }
	static Any _0xE31FC20319874CB3(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(0xE31FC20319874CB3, p0, p1, p2); }
	static Any _0x582F73ACFE969571(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(0x582F73ACFE969571, p0, p1, p2); }
	static Any _0xBA2A089E60ED1163(Any p0, Any p1, Any p2, Any p3, Any p4) { return Native::Invoke<Any, Any, Any, Any, Any, Any>(0xBA2A089E60ED1163, p0, p1, p2, p3, p4); }
	static Any _0x61914209C36EFDDB(Any p0) { return Native::Invoke<Any, Any>(0x61914209C36EFDDB, p0); }
	static Any _0xD46BF94C4C66FAB0(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<Any, Any, Any, Any, Any>(0xD46BF94C4C66FAB0, p0, p1, p2, p3); }
	static Any _0x34F008A7E48C496B(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x34F008A7E48C496B, p0, p1); }
	static Any _0xD21C7418C590BB40(Any p0) { return Native::Invoke<Any, Any>(0xD21C7418C590BB40, p0); }
	static Any _0x0FD25587BB306C86(Any p0) { return Native::Invoke<Any, Any>(0x0FD25587BB306C86, p0); }
	static Any _0x5AFFA9DDC87846F8(Any p0) { return Native::Invoke<Any, Any>(0x5AFFA9DDC87846F8, p0); }
	static Any _0x31FEF6A20F00B963(Any p0) { return Native::Invoke<Any, Any>(0x31FEF6A20F00B963, p0); }
	static void _0x399657ED871B3A6C(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x399657ED871B3A6C, p0, p1); }
	static Any _0x2A77EF9BEC8518F4() { return Native::Invoke<Any>(0x2A77EF9BEC8518F4); }
	static void _0x0D0DB2B6AF19A987(Any p0) { return Native::Invoke<void, Any>(0x0D0DB2B6AF19A987, p0); }
	static Any _0x8DE41E9902E85756(Any p0) { return Native::Invoke<Any, Any>(0x8DE41E9902E85756, p0); }
	static void _0x6BCF5F3D8FFE988D(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x6BCF5F3D8FFE988D, p0, p1); }
	static Any _0xEF2D9ED7CE684F08(Any p0) { return Native::Invoke<Any, Any>(0xEF2D9ED7CE684F08, p0); }
	static Any _0x0CCEFC6C2C95DA2A(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<Any, Any, Any, Any, Any>(0x0CCEFC6C2C95DA2A, p0, p1, p2, p3); }
	static Any _0x383F64263F946E45(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return Native::Invoke<Any, Any, Any, Any, Any, Any, Any>(0x383F64263F946E45, p0, p1, p2, p3, p4, p5); }
	static Any _0x8E10DF0FFA63FB65(Any p0, Any p1, Any p2, Any p3, Any p4) { return Native::Invoke<Any, Any, Any, Any, Any, Any>(0x8E10DF0FFA63FB65, p0, p1, p2, p3, p4); }
	static Any _0x808077647856DE62(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x808077647856DE62, p0, p1); }
	static void _0x18FF3110CF47115D(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0x18FF3110CF47115D, p0, p1, p2); }
	static void _0xC3ABCFBC7D74AFA5(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0xC3ABCFBC7D74AFA5, p0, p1, p2); }
	static void _0xA48E4801DEBDF7E4(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xA48E4801DEBDF7E4, p0, p1); }
	static Any _0x255B6DB4E3AD3C3E(Any p0) { return Native::Invoke<Any, Any>(0x255B6DB4E3AD3C3E, p0); }
	static Any _0xF59FDE7B4D31A630(Any p0) { return Native::Invoke<Any, Any>(0xF59FDE7B4D31A630, p0); }
	static Any _0x120376C23F019C6C(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x120376C23F019C6C, p0, p1); }
	static Any _0x5744562E973E33CD(Any p0, Any p1, Any p2, Any p3, Any p4) { return Native::Invoke<Any, Any, Any, Any, Any, Any>(0x5744562E973E33CD, p0, p1, p2, p3, p4); }
	static void _0xDD03FC2089AD093C(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<void, Any, Any, Any, Any>(0xDD03FC2089AD093C, p0, p1, p2, p3); }
	static Any _0xB16C780C51E51E2B(Any p0) { return Native::Invoke<Any, Any>(0xB16C780C51E51E2B, p0); }
	static void _0xEF259AA1E097E0AD(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xEF259AA1E097E0AD, p0, p1); }
	static Any _0xBD94CECFB2D65119() { return Native::Invoke<Any>(0xBD94CECFB2D65119); }
	static Any _0x482D17E45665DA44() { return Native::Invoke<Any>(0x482D17E45665DA44); }
	static Any _0xE75EEA8DB59A9F39() { return Native::Invoke<Any>(0xE75EEA8DB59A9F39); }
	static Any _0x188736456D1DEDE6() { return Native::Invoke<Any>(0x188736456D1DEDE6); }
	static void APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(Entity entity, int forceType, float x, float y, float z, BOOL p5, BOOL isDirectionRel, BOOL isForceRel, BOOL p8) { return Native::Invoke<void, Entity, int, float, float, float, BOOL, BOOL, BOOL, BOOL>(N::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS, entity, forceType, x, y, z, p5, isDirectionRel, isForceRel, p8); }
	static void APPLY_FORCE_TO_ENTITY(Entity entity, int forceFlags, float x, float y, float z, float offX, float offY, float offZ, int boneIndex, BOOL isDirectionRel, BOOL ignoreUpVec, BOOL isForceRel, BOOL p12, BOOL p13) { return Native::Invoke<void, Entity, int, float, float, float, float, float, float, int, BOOL, BOOL, BOOL, BOOL, BOOL>(N::APPLY_FORCE_TO_ENTITY, entity, forceFlags, x, y, z, offX, offY, offZ, boneIndex, isDirectionRel, ignoreUpVec, isForceRel, p12, p13); }
	static void ATTACH_ENTITY_TO_ENTITY(Entity entity1, Entity entity2, int boneIndex, float xPos, float yPos, float zPos, float xRot, float yRot, float zRot, BOOL p9, BOOL useSoftPinning, BOOL collision, BOOL isPed, int vertexIndex, BOOL fixedRot, Any p15, Any p16) { return Native::Invoke<void, Entity, Entity, int, float, float, float, float, float, float, BOOL, BOOL, BOOL, BOOL, int, BOOL, Any, Any>(N::ATTACH_ENTITY_TO_ENTITY, entity1, entity2, boneIndex, xPos, yPos, zPos, xRot, yRot, zRot, p9, useSoftPinning, collision, isPed, vertexIndex, fixedRot, p15, p16); }
	static void ATTACH_ENTITY_TO_ENTITY_PHYSICALLY(Entity entity1, Entity entity2, int boneIndex1, int boneIndex2, float xPos1, float yPos1, float zPos1, float xPos2, float yPos2, float zPos2, float xRot, float yRot, float zRot, float breakForce, BOOL fixedRot, BOOL p15, BOOL collision, BOOL teleport, int p18, Any p19, Any p20, Any p21) { return Native::Invoke<void, Entity, Entity, int, int, float, float, float, float, float, float, float, float, float, float, BOOL, BOOL, BOOL, BOOL, int, Any, Any, Any>(N::ATTACH_ENTITY_TO_ENTITY_PHYSICALLY, entity1, entity2, boneIndex1, boneIndex2, xPos1, yPos1, zPos1, xPos2, yPos2, zPos2, xRot, yRot, zRot, breakForce, fixedRot, p15, collision, teleport, p18, p19, p20, p21); }
	static void _0x445D7D8EA66E373E(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12, Any p13, Any p14, Any p15) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any>(0x445D7D8EA66E373E, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15); }
	static void _0x16908E859C3AB698(Any p0, Any p1, Any p2, Any p3, Any p4) { return Native::Invoke<void, Any, Any, Any, Any, Any>(0x16908E859C3AB698, p0, p1, p2, p3, p4); }
	static int GET_ENTITY_BONE_INDEX_BY_NAME(Entity entity, char* boneName) { return Native::Invoke<int, Entity, char*>(N::GET_ENTITY_BONE_INDEX_BY_NAME, entity, boneName); }
	static Any CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Entity entity) { return Native::Invoke<Any, Entity>(N::CLEAR_ENTITY_LAST_DAMAGE_ENTITY, entity); }
	static void DELETE_ENTITY(Entity* entity) { return Native::Invoke<void, Entity*>(N::DELETE_ENTITY, entity); }
	static Any _0x5E94EA09E7207C16() { return Native::Invoke<Any>(0x5E94EA09E7207C16); }
	static void DETACH_ENTITY(Entity entity, BOOL p1, BOOL collision) { return Native::Invoke<void, Entity, BOOL, BOOL>(N::DETACH_ENTITY, entity, p1, collision); }
	static Any _0x083D497D57B7400F(Any p0) { return Native::Invoke<Any, Any>(0x083D497D57B7400F, p0); }
	static void FREEZE_ENTITY_POSITION(Entity entity, BOOL toggle) { return Native::Invoke<void, Entity, BOOL>(N::FREEZE_ENTITY_POSITION, entity, toggle); }
	static void _SET_ENTITY_SOMETHING(Entity entity, BOOL toggle) { return Native::Invoke<void, Entity, BOOL>(N::_SET_ENTITY_SOMETHING, entity, toggle); }
	static void SET_ENTITY_AS_MISSION_ENTITY(Entity entity, BOOL p1, BOOL p2) { return Native::Invoke<void, Entity, BOOL, BOOL>(N::SET_ENTITY_AS_MISSION_ENTITY, entity, p1, p2); }
	static void SET_ENTITY_AS_NO_LONGER_NEEDED(Entity* entity) { return Native::Invoke<void, Entity*>(N::SET_ENTITY_AS_NO_LONGER_NEEDED, entity); }
	static void SET_PED_AS_NO_LONGER_NEEDED(Ped* ped) { return Native::Invoke<void, Ped*>(N::SET_PED_AS_NO_LONGER_NEEDED, ped); }
	static void SET_VEHICLE_AS_NO_LONGER_NEEDED(Vehicle* vehicle) { return Native::Invoke<void, Vehicle*>(N::SET_VEHICLE_AS_NO_LONGER_NEEDED, vehicle); }
	static void SET_OBJECT_AS_NO_LONGER_NEEDED(Object* object) { return Native::Invoke<void, Object*>(N::SET_OBJECT_AS_NO_LONGER_NEEDED, object); }
	static void _0x20FAEE47427A4497() { return Native::Invoke<void>(0x20FAEE47427A4497); }
	static Any _0x88AD6CC10D8D35B2(Any p0) { return Native::Invoke<Any, Any>(0x88AD6CC10D8D35B2, p0); }
	static void _0x56E0735D6273B227(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x56E0735D6273B227, p0, p1); }
	static Any _0xC0EDEF16D90661EE() { return Native::Invoke<Any>(0xC0EDEF16D90661EE); }
	static Any _0x0FD7D7C232876E72() { return Native::Invoke<Any>(0x0FD7D7C232876E72); }
	static Any _0x0939E773925C4719() { return Native::Invoke<Any>(0x0939E773925C4719); }
	static void SET_ENTITY_CAN_BE_DAMAGED(Entity entity, BOOL toggle) { return Native::Invoke<void, Entity, BOOL>(N::SET_ENTITY_CAN_BE_DAMAGED, entity, toggle); }
	static Any _0x75DF9E73F2F005FD(Any p0) { return Native::Invoke<Any, Any>(0x75DF9E73F2F005FD, p0); }
	static void SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(Entity entity, BOOL bCanBeDamaged, int relGroup) { return Native::Invoke<void, Entity, BOOL, int>(N::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP, entity, bCanBeDamaged, relGroup); }
	static Any _0xFF83AF534156B399() { return Native::Invoke<Any>(0xFF83AF534156B399); }
	static void SET_ENTITY_CAN_BE_TARGETED_WITHOUT_LOS(Entity entity, BOOL toggle) { return Native::Invoke<void, Entity, BOOL>(N::SET_ENTITY_CAN_BE_TARGETED_WITHOUT_LOS, entity, toggle); }
	static Any GET_ENTITY_COLLISION_DISABLED(Any p0) { return Native::Invoke<Any, Any>(N::GET_ENTITY_COLLISION_DISABLED, p0); }
	static void SET_ENTITY_COLLISION(Entity entity, BOOL toggle, BOOL keepPhysics) { return Native::Invoke<void, Entity, BOOL, BOOL>(N::SET_ENTITY_COLLISION, entity, toggle, keepPhysics); }
	static void SET_ENTITY_COMPLETELY_DISABLE_COLLISION(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(N::SET_ENTITY_COMPLETELY_DISABLE_COLLISION, p0, p1, p2); }
	static void SET_ENTITY_COORDS(Entity entity, float xPos, float yPos, float zPos, BOOL xAxis, BOOL yAxis, BOOL zAxis, BOOL clearArea) { return Native::Invoke<void, Entity, float, float, float, BOOL, BOOL, BOOL, BOOL>(N::SET_ENTITY_COORDS, entity, xPos, yPos, zPos, xAxis, yAxis, zAxis, clearArea); }
	static void SET_ENTITY_COORDS_NO_OFFSET(Entity entity, float xPos, float yPos, float zPos, BOOL xAxis, BOOL yAxis, BOOL zAxis) { return Native::Invoke<void, Entity, float, float, float, BOOL, BOOL, BOOL>(N::SET_ENTITY_COORDS_NO_OFFSET, entity, xPos, yPos, zPos, xAxis, yAxis, zAxis); }
	static void SET_ENTITY_DYNAMIC(Entity entity, BOOL toggle) { return Native::Invoke<void, Entity, BOOL>(N::SET_ENTITY_DYNAMIC, entity, toggle); }
	static void SET_ENTITY_HEADING(Entity entity, float heading) { return Native::Invoke<void, Entity, float>(N::SET_ENTITY_HEADING, entity, heading); }
	static void _0x203BEFFDBE12E96A(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any, Any, Any>(0x203BEFFDBE12E96A, p0, p1, p2, p3, p4, p5, p6, p7); }
	static void _0x0918E3565C20F03C(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any, Any>(0x0918E3565C20F03C, p0, p1, p2, p3, p4, p5, p6); }
	static void _0xAC2767ED8BDFAB15(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0xAC2767ED8BDFAB15, p0, p1, p2); }
	static void SET_ENTITY_INVINCIBLE(Entity entity, BOOL toggle) { return Native::Invoke<void, Entity, BOOL>(N::SET_ENTITY_INVINCIBLE, entity, toggle); }
	static void _0xAF7F3099B9FEB535(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<void, Any, Any, Any, Any>(0xAF7F3099B9FEB535, p0, p1, p2, p3); }
	static void SET_ENTITY_IS_TARGET_PRIORITY(Entity entity, BOOL p1, float p2) { return Native::Invoke<void, Entity, BOOL, float>(N::SET_ENTITY_IS_TARGET_PRIORITY, entity, p1, p2); }
	static Any _0xB38A29CCD5447783() { return Native::Invoke<Any>(0xB38A29CCD5447783); }
	static void _0x4B436BAC8CBE9B07(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0x4B436BAC8CBE9B07, p0, p1, p2); }
	static Any _0xE12F56CB25D9CE23() { return Native::Invoke<Any>(0xE12F56CB25D9CE23); }
	static void _0x2D40BCBFE9305DEA(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x2D40BCBFE9305DEA, p0, p1); }
	static void _0xEBDC12861D079ABA(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xEBDC12861D079ABA, p0, p1); }
	static void SET_ENTITY_LOAD_COLLISION_FLAG(Entity entity, BOOL toggle) { return Native::Invoke<void, Entity, BOOL>(N::SET_ENTITY_LOAD_COLLISION_FLAG, entity, toggle); }
	static BOOL HAS_COLLISION_LOADED_AROUND_ENTITY(Entity entity) { return Native::Invoke<BOOL, Entity>(N::HAS_COLLISION_LOADED_AROUND_ENTITY, entity); }
	static Any _0x6BFBDC46139C45AB(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(0x6BFBDC46139C45AB, p0, p1, p2); }
	static void SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Entity entity, BOOL toggle) { return Native::Invoke<void, Entity, BOOL>(N::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER, entity, toggle); }
	static void SET_ENTITY_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP(Entity entity, BOOL p1, Hash relationshipHash) { return Native::Invoke<void, Entity, BOOL, Hash>(N::SET_ENTITY_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP, entity, p1, relationshipHash); }
	static void SET_ENTITY_PROOFS(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(N::SET_ENTITY_PROOFS, p0, p1, p2); }
	static Any _0x6CF0DAD7FA1088EA() { return Native::Invoke<Any>(0x6CF0DAD7FA1088EA); }
	static void SET_ENTITY_QUATERNION(Entity entity, float x, float y, float z, float w) { return Native::Invoke<void, Entity, float, float, float, float>(N::SET_ENTITY_QUATERNION, entity, x, y, z, w); }
	static void SET_ENTITY_ROTATION(Entity entity, float pitch, float roll, float yaw, int rotationOrder, BOOL p5) { return Native::Invoke<void, Entity, float, float, float, int, BOOL>(N::SET_ENTITY_ROTATION, entity, pitch, roll, yaw, rotationOrder, p5); }
	static void _0xD45BB89B53FC0CFD(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any, Any, Any>(0xD45BB89B53FC0CFD, p0, p1, p2, p3, p4, p5, p6, p7); }
	static void SET_ENTITY_VISIBLE(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(N::SET_ENTITY_VISIBLE, p0, p1); }
	static void _0x80FDEB3A9E9AA578(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x80FDEB3A9E9AA578, p0, p1); }
	static void SET_ENTITY_VELOCITY(Entity entity, float x, float y, float z) { return Native::Invoke<void, Entity, float, float, float>(N::SET_ENTITY_VELOCITY, entity, x, y, z); }
	static void SET_ENTITY_HAS_GRAVITY(Entity entity, BOOL toggle) { return Native::Invoke<void, Entity, BOOL>(N::SET_ENTITY_HAS_GRAVITY, entity, toggle); }
	static void SET_ENTITY_LOD_DIST(Entity entity, int value) { return Native::Invoke<void, Entity, int>(N::SET_ENTITY_LOD_DIST, entity, value); }
	static int GET_ENTITY_LOD_DIST(Entity entity) { return Native::Invoke<int, Entity>(N::GET_ENTITY_LOD_DIST, entity); }
	static void SET_ENTITY_ALPHA(Entity entity, int alphaLevel, BOOL unk) { return Native::Invoke<void, Entity, int, BOOL>(N::SET_ENTITY_ALPHA, entity, alphaLevel, unk); }
	static int GET_ENTITY_ALPHA(Entity entity) { return Native::Invoke<int, Entity>(N::GET_ENTITY_ALPHA, entity); }
	static Any RESET_ENTITY_ALPHA(Entity entity) { return Native::Invoke<Any, Entity>(N::RESET_ENTITY_ALPHA, entity); }
	static void _0xA91E6CF94404E8C9(Any p0) { return Native::Invoke<void, Any>(0xA91E6CF94404E8C9, p0); }
	static void SET_ENTITY_ALWAYS_PRERENDER(Entity entity, BOOL toggle) { return Native::Invoke<void, Entity, BOOL>(N::SET_ENTITY_ALWAYS_PRERENDER, entity, toggle); }
	static Any SET_ENTITY_RENDER_SCORCHED() { return Native::Invoke<Any>(N::SET_ENTITY_RENDER_SCORCHED); }
	static Any _0x37B01666BAE8F7EF() { return Native::Invoke<Any>(0x37B01666BAE8F7EF); }
	static void _0xA9E6D8F2DDFC4DB9(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xA9E6D8F2DDFC4DB9, p0, p1); }
	static void CREATE_MODEL_SWAP(float x, float y, float z, float radius, Hash originalModel, Hash newModel, BOOL p6) { return Native::Invoke<void, float, float, float, float, Hash, Hash, BOOL>(N::CREATE_MODEL_SWAP, x, y, z, radius, originalModel, newModel, p6); }
	static void REMOVE_MODEL_SWAP(float x, float y, float z, float radius, Hash originalModel, Hash newModel, BOOL p6) { return Native::Invoke<void, float, float, float, float, Hash, Hash, BOOL>(N::REMOVE_MODEL_SWAP, x, y, z, radius, originalModel, newModel, p6); }
	static void CREATE_MODEL_HIDE(float x, float y, float z, float radius, Hash model, BOOL p5) { return Native::Invoke<void, float, float, float, float, Hash, BOOL>(N::CREATE_MODEL_HIDE, x, y, z, radius, model, p5); }
	static void CREATE_MODEL_HIDE_EXCLUDING_SCRIPT_OBJECTS(float x, float y, float z, float radius, Hash model, BOOL p5) { return Native::Invoke<void, float, float, float, float, Hash, BOOL>(N::CREATE_MODEL_HIDE_EXCLUDING_SCRIPT_OBJECTS, x, y, z, radius, model, p5); }
	static void REMOVE_MODEL_HIDE(float x, float y, float z, float radius, Hash model, BOOL p5) { return Native::Invoke<void, float, float, float, float, Hash, BOOL>(N::REMOVE_MODEL_HIDE, x, y, z, radius, model, p5); }
	static Any _0xD4636C2EDB0DEA8A() { return Native::Invoke<Any>(0xD4636C2EDB0DEA8A); }
	static void CREATE_FORCED_OBJECT(float x, float y, float z, Any p3, Hash modelHash, BOOL p5) { return Native::Invoke<void, float, float, float, Any, Hash, BOOL>(N::CREATE_FORCED_OBJECT, x, y, z, p3, modelHash, p5); }
	static void REMOVE_FORCED_OBJECT(float posX, float posY, float posZ, float unk, Hash modelHash) { return Native::Invoke<void, float, float, float, float, Hash>(N::REMOVE_FORCED_OBJECT, posX, posY, posZ, unk, modelHash); }
	static void SET_ENTITY_NO_COLLISION_ENTITY(Entity entity1, Entity entity2, BOOL unknown) { return Native::Invoke<void, Entity, Entity, BOOL>(N::SET_ENTITY_NO_COLLISION_ENTITY, entity1, entity2, unknown); }
	static void SET_ENTITY_MOTION_BLUR(Entity entity, BOOL toggle) { return Native::Invoke<void, Entity, BOOL>(N::SET_ENTITY_MOTION_BLUR, entity, toggle); }
	static void _0x80646744FA88F9D7(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x80646744FA88F9D7, p0, p1); }
	static void _0x24AED2A608F93C4C(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x24AED2A608F93C4C, p0, p1); }
	static void _0xC64E597783BE9A1D(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xC64E597783BE9A1D, p0, p1); }
	static Any _0x59B57C4B06531E1E(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return Native::Invoke<Any, Any, Any, Any, Any, Any, Any>(0x59B57C4B06531E1E, p0, p1, p2, p3, p4, p5); }
	static Any _0x84CCF9A12942C83D(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return Native::Invoke<Any, Any, Any, Any, Any, Any, Any>(0x84CCF9A12942C83D, p0, p1, p2, p3, p4, p5); }
	static Any _0x886171A12F400B89(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(0x886171A12F400B89, p0, p1, p2); }
	static Any _0x66B2B83B94B22458(Any p0) { return Native::Invoke<Any, Any>(0x66B2B83B94B22458, p0); }
	static Any _0xC2E71D7E0A7B4C89(Any p0) { return Native::Invoke<Any, Any>(0xC2E71D7E0A7B4C89, p0); }
	static void _0x6C31B06E91518269(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x6C31B06E91518269, p0, p1); }
	static void _0x119A5714578F4E05(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x119A5714578F4E05, p0, p1); }
	static Any _0xF7424890E4A094C0(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0xF7424890E4A094C0, p0, p1); }
	static BOOL FIND_ANIM_EVENT_PHASE(char* animDictionary, char* animName, char* p2, Any* p3, Any* p4) { return Native::Invoke<BOOL, char*, char*, char*, Any*, Any*>(N::FIND_ANIM_EVENT_PHASE, animDictionary, animName, p2, p3, p4); }
	static void FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Entity entity, Any p1) { return Native::Invoke<void, Entity, Any>(N::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE, entity, p1); }
	static Any _0x627520389E288A73(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(0x627520389E288A73, p0, p1, p2); }
	static Any _0x8E46E18AA828334F(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(0x8E46E18AA828334F, p0, p1, p2); }
	static Any _0xDF8E49EA89A01DB1(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(0xDF8E49EA89A01DB1, p0, p1, p2); }
	static BOOL HAS_ANIM_EVENT_FIRED(Entity entity, Hash actionHash) { return Native::Invoke<BOOL, Entity, Hash>(N::HAS_ANIM_EVENT_FIRED, entity, actionHash); }
	static BOOL HAS_ENTITY_ANIM_FINISHED(Entity entity, char* animDict, char* animName, int p3) { return Native::Invoke<BOOL, Entity, char*, char*, int>(N::HAS_ENTITY_ANIM_FINISHED, entity, animDict, animName, p3); }
	static BOOL PLAY_ENTITY_ANIM(Entity entity, char* animName, char* animDict, float p3, BOOL loop, BOOL stayInAnim, BOOL p6, float delta, Any bitset) { return Native::Invoke<BOOL, Entity, char*, char*, float, BOOL, BOOL, BOOL, float, Any>(N::PLAY_ENTITY_ANIM, entity, animName, animDict, p3, loop, stayInAnim, p6, delta, bitset); }
	static void _0x11CDABDC7783B2BC(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<void, Any, Any, Any, Any>(0x11CDABDC7783B2BC, p0, p1, p2, p3); }
	static void _0xEAA885BA3CEA4E4A(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<void, Any, Any, Any, Any>(0xEAA885BA3CEA4E4A, p0, p1, p2, p3); }
	static Any STOP_ENTITY_ANIM(Entity entity, char* animation, char* animGroup, float p3) { return Native::Invoke<Any, Entity, char*, char*, float>(N::STOP_ENTITY_ANIM, entity, animation, animGroup, p3); }
	static void _0x669655FFB29EF1A9(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<void, Any, Any, Any, Any>(0x669655FFB29EF1A9, p0, p1, p2, p3); }
	static void _0x1AD922AB5038DEF3(Any p0) { return Native::Invoke<void, Any>(0x1AD922AB5038DEF3, p0); }
	static void _0x5826EFD6D73C4DE5(Any p0) { return Native::Invoke<void, Any>(0x5826EFD6D73C4DE5, p0); }
	static void _0x36EB4D34D4A092C5(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x36EB4D34D4A092C5, p0, p1); }
	static Any _0x29BA9F78321E5A6C(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11) { return Native::Invoke<Any, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any>(0x29BA9F78321E5A6C, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); }
	static void _0xC76E94A78127412B(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0xC76E94A78127412B, p0, p1, p2); }
	static Any _0x7F20092547B4DDEA() { return Native::Invoke<Any>(0x7F20092547B4DDEA); }
	static Any _0xF41E2979D5BC5370() { return Native::Invoke<Any>(0xF41E2979D5BC5370); }
	static Any _0xAAACB74442C1BED3(Any p0) { return Native::Invoke<Any, Any>(0xAAACB74442C1BED3, p0); }
	static Any _0x6F3068258A499E52(Any p0, Any p1, Any p2, Any p3, Any p4) { return Native::Invoke<Any, Any, Any, Any, Any, Any>(0x6F3068258A499E52, p0, p1, p2, p3, p4); }
	static void _0xD2B9C78537ED5759(Any p0) { return Native::Invoke<void, Any>(0xD2B9C78537ED5759, p0); }
	static Any _0x1FF441D7954F8709(Any p0) { return Native::Invoke<Any, Any>(0x1FF441D7954F8709, p0); }
	static Any _0x4735E2A4BB83D9DA(Any p0) { return Native::Invoke<Any, Any>(0x4735E2A4BB83D9DA, p0); }
	static void _0xEAB3D91D30A344F1(Any p0) { return Native::Invoke<void, Any>(0xEAB3D91D30A344F1, p0); }
	static void _0x37CEB637BA3B1A47(Any p0) { return Native::Invoke<void, Any>(0x37CEB637BA3B1A47, p0); }
	static Any _0x350E9211074955AF(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x350E9211074955AF, p0, p1); }
	static void _0x898586729DB5221D(Any p0) { return Native::Invoke<void, Any>(0x898586729DB5221D, p0); }
	static Any _0xE9E7A0BAC7F57746() { return Native::Invoke<Any>(0xE9E7A0BAC7F57746); }
}
namespace EVENT
{
	static void SET_DECISION_MAKER(Ped ped, Hash name) { return Native::Invoke<void, Ped, Hash>(N::SET_DECISION_MAKER, ped, name); }
	static void _0x6B9C5C38838FB6E6(Any p0) { return Native::Invoke<void, Any>(0x6B9C5C38838FB6E6, p0); }
	static Any _0xCA1315C33B9A2847(Any p0) { return Native::Invoke<Any, Any>(0xCA1315C33B9A2847, p0); }
	static ScrHandle ADD_SHOCKING_EVENT_AT_POSITION(int type, float x, float y, float z, float duration, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10) { return Native::Invoke<ScrHandle, int, float, float, float, float, Any, Any, Any, Any, Any, Any>(N::ADD_SHOCKING_EVENT_AT_POSITION, type, x, y, z, duration, p5, p6, p7, p8, p9, p10); }
	static ScrHandle ADD_SHOCKING_EVENT_FOR_ENTITY(int type, Entity entity, float duration, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11) { return Native::Invoke<ScrHandle, int, Entity, float, Any, Any, Any, Any, Any, Any, Any, Any, Any>(N::ADD_SHOCKING_EVENT_FOR_ENTITY, type, entity, duration, p3, p4, p5, p6, p7, p8, p9, p10, p11); }
	static BOOL IS_SHOCKING_EVENT_IN_SPHERE(int type, float x, float y, float z, float radius) { return Native::Invoke<BOOL, int, float, float, float, float>(N::IS_SHOCKING_EVENT_IN_SPHERE, type, x, y, z, radius); }
	static BOOL REMOVE_SHOCKING_EVENT(ScrHandle event) { return Native::Invoke<BOOL, ScrHandle>(N::REMOVE_SHOCKING_EVENT, event); }
	static void REMOVE_ALL_SHOCKING_EVENTS(BOOL p0) { return Native::Invoke<void, BOOL>(N::REMOVE_ALL_SHOCKING_EVENTS, p0); }
	static void _0xB4C71BA9CAB097BD(Any p0, Any p1, Any p2, Any p3, Any p4) { return Native::Invoke<void, Any, Any, Any, Any, Any>(0xB4C71BA9CAB097BD, p0, p1, p2, p3, p4); }
	static void _0x6A648D42BF271DC7(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any>(0x6A648D42BF271DC7, p0, p1, p2, p3, p4, p5); }
	static void _0x118873DD538490B4(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x118873DD538490B4, p0, p1); }
	static void REMOVE_SHOCKING_EVENT_SPAWN_BLOCKING_AREAS() { return Native::Invoke<void>(N::REMOVE_SHOCKING_EVENT_SPAWN_BLOCKING_AREAS); }
	static Any _0x36D0F2BA2C0D9BDE(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x36D0F2BA2C0D9BDE, p0, p1); }
	static void _0x7C511E91738A0828(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<void, Any, Any, Any, Any>(0x7C511E91738A0828, p0, p1, p2, p3); }
	static void SUPPRESS_SHOCKING_EVENTS_NEXT_FRAME() { return Native::Invoke<void>(N::SUPPRESS_SHOCKING_EVENTS_NEXT_FRAME); }
	static void _0xB6F4825153920582() { return Native::Invoke<void>(0xB6F4825153920582); }
	static void _0x4B2B1A891D437CA7(Any p0) { return Native::Invoke<void, Any>(0x4B2B1A891D437CA7, p0); }
	static void _0x9520175B35E2268D(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x9520175B35E2268D, p0, p1); }
	static Any _0x18E93EBFC1FCFA48(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(0x18E93EBFC1FCFA48, p0, p1, p2); }
	static void _0x56B3410626A473E7(Any p0) { return Native::Invoke<void, Any>(0x56B3410626A473E7, p0); }
	static void _0x608AD36A644A97FE(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0x608AD36A644A97FE, p0, p1, p2); }
	static void _0x4465C3D1475BD3FD(Any p0) { return Native::Invoke<void, Any>(0x4465C3D1475BD3FD, p0); }
	static Any _0x2DD42FAD06E6F19E(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(0x2DD42FAD06E6F19E, p0, p1, p2); }
	static void _0xA86B0EE9B39D15D6(Any p0) { return Native::Invoke<void, Any>(0xA86B0EE9B39D15D6, p0); }
	static Any _0x26054EB81AC0893B(Any p0) { return Native::Invoke<Any, Any>(0x26054EB81AC0893B, p0); }
	static void _0xBB1E41DD3D3C6250(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0xBB1E41DD3D3C6250, p0, p1, p2); }
	static Any _0xAD17A18215DD23D6(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(0xAD17A18215DD23D6, p0, p1, p2); }
	static Any _0xC6A7DC546E94FED5(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<Any, Any, Any, Any, Any>(0xC6A7DC546E94FED5, p0, p1, p2, p3); }
	static Any _0x796EECFF0C6D39BE(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(0x796EECFF0C6D39BE, p0, p1, p2); }
	static Any _0x797B3D4D92E56094() { return Native::Invoke<Any>(0x797B3D4D92E56094); }
	static Any _0x822A001BCEA5BD81(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<Any, Any, Any, Any, Any>(0x822A001BCEA5BD81, p0, p1, p2, p3); }
	static Any _0x38497F139981C5C9(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<Any, Any, Any, Any, Any>(0x38497F139981C5C9, p0, p1, p2, p3); }
	static Any _0x1D1B448D719415AB(Any p0) { return Native::Invoke<Any, Any>(0x1D1B448D719415AB, p0); }
	static Any _0x83D43F0FD5276E4D(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x83D43F0FD5276E4D, p0, p1); }
	static void _0x1A5C5D350068A673(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x1A5C5D350068A673, p0, p1); }
	static Any _0xAD8F2424C6E1E3A8() { return Native::Invoke<Any>(0xAD8F2424C6E1E3A8); }
	static void _0xE2C2FBB7825FFC66() { return Native::Invoke<void>(0xE2C2FBB7825FFC66); }
}
namespace FIRE
{
	static Hash START_SCRIPT_FIRE(float X, float Y, float Z, int maxChildren, BOOL isGasFire, Any p5, Any p6, Any p7, Any p8) { return Native::Invoke<Hash, float, float, float, int, BOOL, Any, Any, Any, Any>(N::START_SCRIPT_FIRE, X, Y, Z, maxChildren, isGasFire, p5, p6, p7, p8); }
	static void REMOVE_SCRIPT_FIRE(int fireHandle) { return Native::Invoke<void, int>(N::REMOVE_SCRIPT_FIRE, fireHandle); }
	static Ped START_ENTITY_FIRE(Ped entity, Any p1, Any p2, Any p3) { return Native::Invoke<Ped, Ped, Any, Any, Any>(N::START_ENTITY_FIRE, entity, p1, p2, p3); }
	static void STOP_ENTITY_FIRE(Entity entity, Any p1) { return Native::Invoke<void, Entity, Any>(N::STOP_ENTITY_FIRE, entity, p1); }
	static BOOL IS_ENTITY_ON_FIRE(Entity entity) { return Native::Invoke<BOOL, Entity>(N::IS_ENTITY_ON_FIRE, entity); }
	static Any _0x754937C28271BC65() { return Native::Invoke<Any>(0x754937C28271BC65); }
	static int GET_NUMBER_OF_FIRES_IN_RANGE(float x, float y, float z, float radius) { return Native::Invoke<int, float, float, float, float>(N::GET_NUMBER_OF_FIRES_IN_RANGE, x, y, z, radius); }
	static void STOP_FIRE_IN_RANGE(float x, float y, float z, float radius) { return Native::Invoke<void, float, float, float, float>(N::STOP_FIRE_IN_RANGE, x, y, z, radius); }
	static Any _0xB7C7BDC375AEA9A4() { return Native::Invoke<Any>(0xB7C7BDC375AEA9A4); }
	static BOOL GET_CLOSEST_FIRE_POS(Vector3* outPosition, float x, float y, float z) { return Native::Invoke<BOOL, Vector3*, float, float, float>(N::GET_CLOSEST_FIRE_POS, outPosition, x, y, z); }
	static Any _0xA4454592DCF7C992(Any p0) { return Native::Invoke<Any, Any>(0xA4454592DCF7C992, p0); }
	static Any _0xCDC25355C0D65963(Any p0) { return Native::Invoke<Any, Any>(0xCDC25355C0D65963, p0); }
	static void ADD_EXPLOSION(float x, float y, float z, int explosionType, float damageScale, BOOL isAudible, BOOL isInvisible, float cameraShake) { return Native::Invoke<void, float, float, float, int, float, BOOL, BOOL, float>(N::ADD_EXPLOSION, x, y, z, explosionType, damageScale, isAudible, isInvisible, cameraShake); }
	static void ADD_OWNED_EXPLOSION(Ped ped, float x, float y, float z, int explosionType, float damageScale, BOOL isAudible, BOOL isInvisible, float cameraShake) { return Native::Invoke<void, Ped, float, float, float, int, float, BOOL, BOOL, float>(N::ADD_OWNED_EXPLOSION, ped, x, y, z, explosionType, damageScale, isAudible, isInvisible, cameraShake); }
	static void _0xB7DF150605EEDC9B(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any>(0xB7DF150605EEDC9B, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); }
	static void ADD_EXPLOSION_WITH_USER_VFX(Entity x, Entity y, Entity z, int explosionType, Hash explosionFx, float damageScale, BOOL isAudible, BOOL isInvisible, float cameraShake) { return Native::Invoke<void, Entity, Entity, Entity, int, Hash, float, BOOL, BOOL, float>(N::ADD_EXPLOSION_WITH_USER_VFX, x, y, z, explosionType, explosionFx, damageScale, isAudible, isInvisible, cameraShake); }
	static void _0x34AE85C7CA4857AA(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any>(0x34AE85C7CA4857AA, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); }
	static BOOL IS_EXPLOSION_IN_AREA(int explosionType, float x1, float y1, float z1, float x2, float y2, float z2) { return Native::Invoke<BOOL, int, float, float, float, float, float, float>(N::IS_EXPLOSION_IN_AREA, explosionType, x1, y1, z1, x2, y2, z2); }
	static Any IS_EXPLOSION_ACTIVE_IN_AREA(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return Native::Invoke<Any, Any, Any, Any, Any, Any, Any, Any>(N::IS_EXPLOSION_ACTIVE_IN_AREA, p0, p1, p2, p3, p4, p5, p6); }
	static BOOL IS_EXPLOSION_IN_SPHERE(int explosionType, float x, float y, float z, float radius) { return Native::Invoke<BOOL, int, float, float, float, float>(N::IS_EXPLOSION_IN_SPHERE, explosionType, x, y, z, radius); }
	static Any IS_EXPLOSION_IN_ANGLED_AREA() { return Native::Invoke<Any>(N::IS_EXPLOSION_IN_ANGLED_AREA); }
	static Any _0xE24822A4CFC9107A(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0xE24822A4CFC9107A, p0, p1); }
	static Any _GET_ENTITY_INSIDE_EXPLOSION_AREA(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { return Native::Invoke<Any, Any, Any, Any, Any, Any, Any, Any, Any>(N::_GET_ENTITY_INSIDE_EXPLOSION_AREA, p0, p1, p2, p3, p4, p5, p6, p7); }
	static void _0x68F6A75FDF5A70D6(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<void, Any, Any, Any, Any>(0x68F6A75FDF5A70D6, p0, p1, p2, p3); }
	static void _0x24DB6B9F2B719043(Any p0) { return Native::Invoke<void, Any>(0x24DB6B9F2B719043, p0); }
}
namespace _NAMESPACE24
{
	static Any _0xE108489621422F91(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(0xE108489621422F91, p0, p1, p2); }
	static void _0x963240B6C252BA49(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<void, Any, Any, Any, Any>(0x963240B6C252BA49, p0, p1, p2, p3); }
	static void _0x6D1D94C2459B42EE(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<void, Any, Any, Any, Any>(0x6D1D94C2459B42EE, p0, p1, p2, p3); }
	static Any _0x4BC3ECFDA0297E27(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x4BC3ECFDA0297E27, p0, p1); }
	static void _0xCBDA22C87977244F(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0xCBDA22C87977244F, p0, p1, p2); }
	static Any _0x1C1993824A396603(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x1C1993824A396603, p0, p1); }
	static void _0x9FF1E042FA597187(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0x9FF1E042FA597187, p0, p1, p2); }
	static Any _0x8049B17BEC937662(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return Native::Invoke<Any, Any, Any, Any, Any, Any, Any, Any>(0x8049B17BEC937662, p0, p1, p2, p3, p4, p5, p6); }
	static Any _0xE93415B3307208E5(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { return Native::Invoke<Any, Any, Any, Any, Any, Any, Any, Any, Any, Any>(0xE93415B3307208E5, p0, p1, p2, p3, p4, p5, p6, p7, p8); }
	static Any _0x19870C40C7EE15BE(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x19870C40C7EE15BE, p0, p1); }
	static void _0x0816C31480764AB0(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<void, Any, Any, Any, Any>(0x0816C31480764AB0, p0, p1, p2, p3); }
	static void _0xC3D581A34BC0A1F0(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xC3D581A34BC0A1F0, p0, p1); }
	static void _0xF2CCA7B68CFAB2B9(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12, Any p13) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any>(0xF2CCA7B68CFAB2B9, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13); }
	static void _0xFB16F08F47B83B4C(Any p0) { return Native::Invoke<void, Any>(0xFB16F08F47B83B4C, p0); }
	static Any _0x3B005FF0538ED2A9(Any p0) { return Native::Invoke<Any, Any>(0x3B005FF0538ED2A9, p0); }
	static void _0xAEB97D84CDF3C00B(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xAEB97D84CDF3C00B, p0, p1); }
	static Any _0xF8B48A361DC388AE(Any p0) { return Native::Invoke<Any, Any>(0xF8B48A361DC388AE, p0); }
	static void _0x8B6F0F59B1B99801(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x8B6F0F59B1B99801, p0, p1); }
	static void _0xFF1E339CE40EAAAF(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xFF1E339CE40EAAAF, p0, p1); }
	static Any _0x8D913E493BAFE0A3(Any p0) { return Native::Invoke<Any, Any>(0x8D913E493BAFE0A3, p0); }
	static Any _0xCB4EF7EDAE2E16F1() { return Native::Invoke<Any>(0xCB4EF7EDAE2E16F1); }
	static void _0xE0961AED72642B80(Any p0) { return Native::Invoke<void, Any>(0xE0961AED72642B80, p0); }
	static void _0x933E5D31A7D13069(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x933E5D31A7D13069, p0, p1); }
	static void _0x408D1149C5E39C1E(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x408D1149C5E39C1E, p0, p1); }
	static Any _0x9E13ACC38BA8F9C3(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x9E13ACC38BA8F9C3, p0, p1); }
	static Any _0x34B9C4D86DF2C2F3(Any p0) { return Native::Invoke<Any, Any>(0x34B9C4D86DF2C2F3, p0); }
	static Any _0x1DA6CB02071055D5(Any p0) { return Native::Invoke<Any, Any>(0x1DA6CB02071055D5, p0); }
	static void _0xC95611869E14F8AF(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<void, Any, Any, Any, Any>(0xC95611869E14F8AF, p0, p1, p2, p3); }
	static Any _0x09EE00B8F858E0BE(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return Native::Invoke<Any, Any, Any, Any, Any, Any, Any, Any>(0x09EE00B8F858E0BE, p0, p1, p2, p3, p4, p5, p6); }
	static void _0xE36D2CB540597EF7(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any, Any, Any>(0xE36D2CB540597EF7, p0, p1, p2, p3, p4, p5, p6, p7); }
	static Any _0xD95F04A4E73BE85E(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0xD95F04A4E73BE85E, p0, p1); }
	static void _0x17E3E5C46ECCD308(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0x17E3E5C46ECCD308, p0, p1, p2); }
	static void _0xC72CE37081DAE625(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<void, Any, Any, Any, Any>(0xC72CE37081DAE625, p0, p1, p2, p3); }
	static void _0x67A43EA3F6FE0076(Any p0) { return Native::Invoke<void, Any>(0x67A43EA3F6FE0076, p0); }
	static Any _0x36486AF7DA93A464(Any p0) { return Native::Invoke<Any, Any>(0x36486AF7DA93A464, p0); }
	static void _0x6C57BEA886A20C6B(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x6C57BEA886A20C6B, p0, p1); }
	static void _0x1520626FFAFFFA8F(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x1520626FFAFFFA8F, p0, p1); }
	static void _0xFA821997794F48E7(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0xFA821997794F48E7, p0, p1, p2); }
	static void _0xCC6B5AAFC87BFC7B(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0xCC6B5AAFC87BFC7B, p0, p1, p2); }
	static void _0xFDB008B3BCF5992F(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0xFDB008B3BCF5992F, p0, p1, p2); }
	static void _0x2DF3D457D86F8E57(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x2DF3D457D86F8E57, p0, p1); }
	static void _0x706B434FEFAD6A24(Any p0) { return Native::Invoke<void, Any>(0x706B434FEFAD6A24, p0); }
	static void _0xA881F5C77A560906(Any p0) { return Native::Invoke<void, Any>(0xA881F5C77A560906, p0); }
	static Any _0x53187E563F938E76(Any p0) { return Native::Invoke<Any, Any>(0x53187E563F938E76, p0); }
}
namespace GRAPHICS
{
	static Any _0x7DFF8F94937D2659() { return Native::Invoke<Any>(0x7DFF8F94937D2659); }
	static Any _0x84F0BA7462FF8D58() { return Native::Invoke<Any>(0x84F0BA7462FF8D58); }
	static Any _0xC71B50AE58D07369() { return Native::Invoke<Any>(0xC71B50AE58D07369); }
	static Any _0xA15BFFC0A01B34E1() { return Native::Invoke<Any>(0xA15BFFC0A01B34E1); }
	static Any _0x4A3DA74C3CCB1725() { return Native::Invoke<Any>(0x4A3DA74C3CCB1725); }
	static void _0xD45547D8396F002A() { return Native::Invoke<void>(0xD45547D8396F002A); }
	static void _0x2705D18C11B61046(Any p0) { return Native::Invoke<void, Any>(0x2705D18C11B61046, p0); }
	static Any _0x8E6AFF353C09652E() { return Native::Invoke<Any>(0x8E6AFF353C09652E); }
	static Any _0x564837D4A9EDE296() { return Native::Invoke<Any>(0x564837D4A9EDE296); }
	static Any _0xFA91736933AB3D93() { return Native::Invoke<Any>(0xFA91736933AB3D93); }
	static Any _0x8B3296278328B5EB() { return Native::Invoke<Any>(0x8B3296278328B5EB); }
	static void _0xD1031B83AC093BC7(Any p0) { return Native::Invoke<void, Any>(0xD1031B83AC093BC7, p0); }
	static void _0x9937FACBBF267244(Any p0) { return Native::Invoke<void, Any>(0x9937FACBBF267244, p0); }
	static void _0x8952E857696B8A79(Any p0) { return Native::Invoke<void, Any>(0x8952E857696B8A79, p0); }
	static Any _0x57639FD876B68A91(Any p0) { return Native::Invoke<Any, Any>(0x57639FD876B68A91, p0); }
	static Any _0xD6663EC374092383() { return Native::Invoke<Any>(0xD6663EC374092383); }
	static Any _0x494A9874F17A7D50(Any p0) { return Native::Invoke<Any, Any>(0x494A9874F17A7D50, p0); }
	static Any _0x13430D3D5A45F14B(Any p0) { return Native::Invoke<Any, Any>(0x13430D3D5A45F14B, p0); }
	static void _0x614682E715ADBAAC() { return Native::Invoke<void>(0x614682E715ADBAAC); }
	static void _0xF1142E5D64B47802(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xF1142E5D64B47802, p0, p1); }
	static Any _0x8E587FCD30E05592() { return Native::Invoke<Any>(0x8E587FCD30E05592); }
	static Any _0x78C56B8A7B1D000C() { return Native::Invoke<Any>(0x78C56B8A7B1D000C); }
	static Any _0xA42EDF1E88734A7E() { return Native::Invoke<Any>(0xA42EDF1E88734A7E); }
	static Any _0xB28894CD7408BD0C() { return Native::Invoke<Any>(0xB28894CD7408BD0C); }
	static void DRAW_LIGHT_WITH_RANGE(float posX, float posY, float posZ, int colorR, int colorG, int colorB, float range, float intensity) { return Native::Invoke<void, float, float, float, int, int, int, float, float>(N::DRAW_LIGHT_WITH_RANGE, posX, posY, posZ, colorR, colorG, colorB, range, intensity); }
	static void _UPDATE_ENTITY_SHIT_OR_SOMETHING(Any p0) { return Native::Invoke<void, Any>(N::_UPDATE_ENTITY_SHIT_OR_SOMETHING, p0); }
	static void _0x6EC2A67962296F49(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<void, Any, Any, Any, Any>(0x6EC2A67962296F49, p0, p1, p2, p3); }
	static void _0x07C0F87AAC57F2E4(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x07C0F87AAC57F2E4, p0, p1); }
	static void _0xAB72C67163DC4DB4(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xAB72C67163DC4DB4, p0, p1); }
	static Any _0x2A32FAA57B937173() { return Native::Invoke<Any>(0x2A32FAA57B937173); }
	static Any _0x175668836B44CBB0() { return Native::Invoke<Any>(0x175668836B44CBB0); }
	static Any _0x4C11CCACB7C02B6E() { return Native::Invoke<Any>(0x4C11CCACB7C02B6E); }
	static Any SET_CHECKPOINT_RGBA() { return Native::Invoke<Any>(N::SET_CHECKPOINT_RGBA); }
	static Any _SET_CHECKPOINT_ICON_RGBA() { return Native::Invoke<Any>(N::_SET_CHECKPOINT_ICON_RGBA); }
	static Any _0xCC3B787E73E64160() { return Native::Invoke<Any>(0xCC3B787E73E64160); }
	static Any _0x171C18E994C1A395() { return Native::Invoke<Any>(0x171C18E994C1A395); }
	static Any DELETE_CHECKPOINT() { return Native::Invoke<Any>(N::DELETE_CHECKPOINT); }
	static void DRAW_RECT(float x, float y, float width, float height, int r, int g, int b, int a, Any p8) { return Native::Invoke<void, float, float, float, float, int, int, int, int, Any>(N::DRAW_RECT, x, y, width, height, r, g, b, a, p8); }
	static Any SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU() { return Native::Invoke<Any>(N::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU); }
	static void SET_SCRIPT_GFX_DRAW_ORDER(Any p0) { return Native::Invoke<void, Any>(N::SET_SCRIPT_GFX_DRAW_ORDER, p0); }
	static void DRAW_SPRITE(char* textureDict, char* textureName, float screenX, float screenY, float width, float height, float heading, int red, int green, int blue, int alpha, Any p11) { return Native::Invoke<void, char*, char*, float, float, float, float, float, int, int, int, int, Any>(N::DRAW_SPRITE, textureDict, textureName, screenX, screenY, width, height, heading, red, green, blue, alpha, p11); }
	static void ATTACH_TV_AUDIO_TO_ENTITY(Entity entity) { return Native::Invoke<void, Entity>(N::ATTACH_TV_AUDIO_TO_ENTITY, entity); }
	static void SET_TV_AUDIO_FRONTEND(BOOL toggle) { return Native::Invoke<void, BOOL>(N::SET_TV_AUDIO_FRONTEND, toggle); }
	static void GET_SCREEN_RESOLUTION(int* x, int* y) { return Native::Invoke<void, int*, int*>(N::GET_SCREEN_RESOLUTION, x, y); }
	static void _0xA04EF43030593ABC(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xA04EF43030593ABC, p0, p1); }
	static void _0xA21AF60C9F99CCC5() { return Native::Invoke<void>(0xA21AF60C9F99CCC5); }
	static Any _0xC28F62AC9774FC1B() { return Native::Invoke<Any>(0xC28F62AC9774FC1B); }
	static void _0xEB48CE48EEC41FD4(Any p0) { return Native::Invoke<void, Any>(0xEB48CE48EEC41FD4, p0); }
	static BOOL GET_SCREEN_COORD_FROM_WORLD_COORD(float worldX, float worldY, float worldZ, float* screenX, float* screenY) { return Native::Invoke<BOOL, float, float, float, float*, float*>(N::GET_SCREEN_COORD_FROM_WORLD_COORD, worldX, worldY, worldZ, screenX, screenY); }
	static Any _0xA2A51869BDED733B() { return Native::Invoke<Any>(0xA2A51869BDED733B); }
	static Any SET_ARTIFICIAL_LIGHTS_STATE() { return Native::Invoke<Any>(N::SET_ARTIFICIAL_LIGHTS_STATE); }
	static void _0x98A7CD5EA379A854() { return Native::Invoke<void>(0x98A7CD5EA379A854); }
	static Any _0x1A9F09AB458D49C6() { return Native::Invoke<Any>(0x1A9F09AB458D49C6); }
	static int CREATE_TRACKED_POINT() { return Native::Invoke<int>(N::CREATE_TRACKED_POINT); }
	static void SET_TRACKED_POINT_INFO(int point, float x, float y, float z, float radius) { return Native::Invoke<void, int, float, float, float, float>(N::SET_TRACKED_POINT_INFO, point, x, y, z, radius); }
	static BOOL IS_TRACKED_POINT_VISIBLE(int point) { return Native::Invoke<BOOL, int>(N::IS_TRACKED_POINT_VISIBLE, point); }
	static Any _0xDFE332A5DA6FE7C9(Any p0) { return Native::Invoke<Any, Any>(0xDFE332A5DA6FE7C9, p0); }
	static void DESTROY_TRACKED_POINT(int point) { return Native::Invoke<void, int>(N::DESTROY_TRACKED_POINT, point); }
	static Any _0xF2FDDCC8C6BAE1B3(Any p0) { return Native::Invoke<Any, Any>(0xF2FDDCC8C6BAE1B3, p0); }
	static Any _0x27219300C36A8D40(Any p0, Any p1, Any p2, Any p3, Any p4) { return Native::Invoke<Any, Any, Any, Any, Any, Any>(0x27219300C36A8D40, p0, p1, p2, p3, p4); }
	static void _0xAE7BF7CA9E4BA48D(Any p0) { return Native::Invoke<void, Any>(0xAE7BF7CA9E4BA48D, p0); }
	static Any _0xBD3324281E8B9933(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<Any, Any, Any, Any, Any>(0xBD3324281E8B9933, p0, p1, p2, p3); }
	static Any _0xFA50F79257745E74(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return Native::Invoke<Any, Any, Any, Any, Any, Any, Any, Any>(0xFA50F79257745E74, p0, p1, p2, p3, p4, p5, p6); }
	static void _0x9CF1836C03FB67A2(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x9CF1836C03FB67A2, p0, p1); }
	static void _0xDFEA23EC90113657(Any p0) { return Native::Invoke<void, Any>(0xDFEA23EC90113657, p0); }
	static void _0xDD0BC0EDCB2162F6(Any p0) { return Native::Invoke<void, Any>(0xDD0BC0EDCB2162F6, p0); }
	static Any _0xDE9BAD3292AA6D5E(Any p0) { return Native::Invoke<Any, Any>(0xDE9BAD3292AA6D5E, p0); }
	static void _0xEC3F7F24EEEB3BA3() { return Native::Invoke<void>(0xEC3F7F24EEEB3BA3); }
	static void _0x9F158A49B0D84C3C(Any p0) { return Native::Invoke<void, Any>(0x9F158A49B0D84C3C, p0); }
	static void _0x910E260AEAD855DE() { return Native::Invoke<void>(0x910E260AEAD855DE); }
	static Any _0x3D084D5568FB4028(Any p0) { return Native::Invoke<Any, Any>(0x3D084D5568FB4028, p0); }
	static void _0xDAD7FB8402651654() { return Native::Invoke<void>(0xDAD7FB8402651654); }
	static Any _0x646ED1A1D28487DF() { return Native::Invoke<Any>(0x646ED1A1D28487DF); }
	static void _0x160921255327C591(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<void, Any, Any, Any, Any>(0x160921255327C591, p0, p1, p2, p3); }
	static void _0xD9EDB2E4512D563E(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any, Any, Any>(0xD9EDB2E4512D563E, p0, p1, p2, p3, p4, p5, p6, p7); }
	static void _SET_FAR_SHADOWS_SUPPRESSED(BOOL toggle) { return Native::Invoke<void, BOOL>(N::_SET_FAR_SHADOWS_SUPPRESSED, toggle); }
	static Any _CASCADESHADOWS_SET_TYPE() { return Native::Invoke<Any>(N::_CASCADESHADOWS_SET_TYPE); }
	static Any _CASCADESHADOWS_RESET_TYPE() { return Native::Invoke<Any>(N::_CASCADESHADOWS_RESET_TYPE); }
	static void _0x503941F65DBA24EC(Any p0) { return Native::Invoke<void, Any>(0x503941F65DBA24EC, p0); }
	static Any _0x815653A42C5ABE76() { return Native::Invoke<Any>(0x815653A42C5ABE76); }
	static Any _0xFF8018C778349234() { return Native::Invoke<Any>(0xFF8018C778349234); }
	static void _0x297B72E2AF094742(Any p0) { return Native::Invoke<void, Any>(0x297B72E2AF094742, p0); }
	static void TOGGLE_PAUSED_RENDERPHASES(Any p0) { return Native::Invoke<void, Any>(N::TOGGLE_PAUSED_RENDERPHASES, p0); }
	static Any GET_TOGGLE_PAUSED_RENDERPHASES_STATUS() { return Native::Invoke<Any>(N::GET_TOGGLE_PAUSED_RENDERPHASES_STATUS); }
	static Any _0xCCD9AAD85E1B559E() { return Native::Invoke<Any>(0xCCD9AAD85E1B559E); }
	static Any _0xCC23AA1A7CBFE840() { return Native::Invoke<Any>(0xCC23AA1A7CBFE840); }
	static void _0x21F00E08CBB5F37B(Any p0) { return Native::Invoke<void, Any>(0x21F00E08CBB5F37B, p0); }
	static void _0x5AC6E0FA028369DE() { return Native::Invoke<void>(0x5AC6E0FA028369DE); }
	static Any _0xEC3D8C228FE553D7() { return Native::Invoke<Any>(0xEC3D8C228FE553D7); }
	static Any _0xF5793BB386E1FF9C() { return Native::Invoke<Any>(0xF5793BB386E1FF9C); }
	static Any _0xC8D0611D9A0CF5D3() { return Native::Invoke<Any>(0xC8D0611D9A0CF5D3); }
	static Any _0x06C0D8BB6B04A709() { return Native::Invoke<Any>(0x06C0D8BB6B04A709); }
	static Any _0x62B9F9A1272AED80() { return Native::Invoke<Any>(0x62B9F9A1272AED80); }
	static Any _0x98F4154989B81EC6() { return Native::Invoke<Any>(0x98F4154989B81EC6); }
	static int START_PARTICLE_FX_NON_LOOPED_AT_COORD(char* effectName, float xPos, float yPos, float zPos, float xRot, float yRot, float zRot, float scale, BOOL xAxis, BOOL yAxis, BOOL zAxis) { return Native::Invoke<int, char*, float, float, float, float, float, float, float, BOOL, BOOL, BOOL>(N::START_PARTICLE_FX_NON_LOOPED_AT_COORD, effectName, xPos, yPos, zPos, xRot, yRot, zRot, scale, xAxis, yAxis, zAxis); }
	static BOOL START_NETWORKED_PARTICLE_FX_NON_LOOPED_AT_COORD(char* effectName, float xPos, float yPos, float zPos, float xRot, float yRot, float zRot, float scale, BOOL xAxis, BOOL yAxis, BOOL zAxis) { return Native::Invoke<BOOL, char*, float, float, float, float, float, float, float, BOOL, BOOL, BOOL>(N::START_NETWORKED_PARTICLE_FX_NON_LOOPED_AT_COORD, effectName, xPos, yPos, zPos, xRot, yRot, zRot, scale, xAxis, yAxis, zAxis); }
	static BOOL START_PARTICLE_FX_NON_LOOPED_ON_PED_BONE(char* effectName, Ped ped, float offsetX, float offsetY, float offsetZ, float rotX, float rotY, float rotZ, int boneIndex, float scale, BOOL axisX, BOOL axisY, BOOL axisZ) { return Native::Invoke<BOOL, char*, Ped, float, float, float, float, float, float, int, float, BOOL, BOOL, BOOL>(N::START_PARTICLE_FX_NON_LOOPED_ON_PED_BONE, effectName, ped, offsetX, offsetY, offsetZ, rotX, rotY, rotZ, boneIndex, scale, axisX, axisY, axisZ); }
	static BOOL START_PARTICLE_FX_NON_LOOPED_ON_ENTITY(char* effectName, Entity entity, float offsetX, float offsetY, float offsetZ, float rotX, float rotY, float rotZ, float scale, BOOL axisX, BOOL axisY, BOOL axisZ) { return Native::Invoke<BOOL, char*, Entity, float, float, float, float, float, float, float, BOOL, BOOL, BOOL>(N::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY, effectName, entity, offsetX, offsetY, offsetZ, rotX, rotY, rotZ, scale, axisX, axisY, axisZ); }
	static Any START_NETWORKED_PARTICLE_FX_NON_LOOPED_ON_ENTITY() { return Native::Invoke<Any>(N::START_NETWORKED_PARTICLE_FX_NON_LOOPED_ON_ENTITY); }
	static Any _0xC695870B8A149B96(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12) { return Native::Invoke<Any, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any>(0xC695870B8A149B96, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); }
	static void SET_PARTICLE_FX_NON_LOOPED_COLOUR(float r, float g, float b) { return Native::Invoke<void, float, float, float>(N::SET_PARTICLE_FX_NON_LOOPED_COLOUR, r, g, b); }
	static int START_PARTICLE_FX_LOOPED_AT_COORD(char* effectName, float x, float y, float z, float xRot, float yRot, float zRot, float scale, BOOL xAxis, BOOL yAxis, BOOL zAxis, BOOL p11) { return Native::Invoke<int, char*, float, float, float, float, float, float, float, BOOL, BOOL, BOOL, BOOL>(N::START_PARTICLE_FX_LOOPED_AT_COORD, effectName, x, y, z, xRot, yRot, zRot, scale, xAxis, yAxis, zAxis, p11); }
	static int START_PARTICLE_FX_LOOPED_ON_PED_BONE(char* effectName, Ped ped, float xOffset, float yOffset, float zOffset, float xRot, float yRot, float zRot, int boneIndex, float scale, BOOL xAxis, BOOL yAxis, BOOL zAxis) { return Native::Invoke<int, char*, Ped, float, float, float, float, float, float, int, float, BOOL, BOOL, BOOL>(N::START_PARTICLE_FX_LOOPED_ON_PED_BONE, effectName, ped, xOffset, yOffset, zOffset, xRot, yRot, zRot, boneIndex, scale, xAxis, yAxis, zAxis); }
	static int START_PARTICLE_FX_LOOPED_ON_ENTITY(char* effectName, Entity entity, float xOffset, float yOffset, float zOffset, float xRot, float yRot, float zRot, float scale, BOOL xAxis, BOOL yAxis, BOOL zAxis) { return Native::Invoke<int, char*, Entity, float, float, float, float, float, float, float, BOOL, BOOL, BOOL>(N::START_PARTICLE_FX_LOOPED_ON_ENTITY, effectName, entity, xOffset, yOffset, zOffset, xRot, yRot, zRot, scale, xAxis, yAxis, zAxis); }
	static Any START_PARTICLE_FX_LOOPED_ON_ENTITY_BONE(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12) { return Native::Invoke<Any, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any>(N::START_PARTICLE_FX_LOOPED_ON_ENTITY_BONE, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); }
	static int START_NETWORKED_PARTICLE_FX_LOOPED_ON_ENTITY(char* effectName, Entity entity, float xOffset, float yOffset, float zOffset, float xRot, float yRot, float zRot, float scale, BOOL xAxis, BOOL yAxis, BOOL zAxis) { return Native::Invoke<int, char*, Entity, float, float, float, float, float, float, float, BOOL, BOOL, BOOL>(N::START_NETWORKED_PARTICLE_FX_LOOPED_ON_ENTITY, effectName, entity, xOffset, yOffset, zOffset, xRot, yRot, zRot, scale, xAxis, yAxis, zAxis); }
	static Any START_NETWORKED_PARTICLE_FX_LOOPED_ON_ENTITY_BONE(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12) { return Native::Invoke<Any, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any>(N::START_NETWORKED_PARTICLE_FX_LOOPED_ON_ENTITY_BONE, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); }
	static void STOP_PARTICLE_FX_LOOPED(int ptfxHandle, BOOL p1) { return Native::Invoke<void, int, BOOL>(N::STOP_PARTICLE_FX_LOOPED, ptfxHandle, p1); }
	static BOOL DOES_PARTICLE_FX_LOOPED_EXIST(int ptfxHandle) { return Native::Invoke<BOOL, int>(N::DOES_PARTICLE_FX_LOOPED_EXIST, ptfxHandle); }
	static void SET_PARTICLE_FX_LOOPED_OFFSETS(int ptfxHandle, float x, float y, float z, float rotX, float rotY, float rotZ) { return Native::Invoke<void, int, float, float, float, float, float, float>(N::SET_PARTICLE_FX_LOOPED_OFFSETS, ptfxHandle, x, y, z, rotX, rotY, rotZ); }
	static void SET_PARTICLE_FX_LOOPED_EVOLUTION(int ptfxHandle, char* propertyName, float amount, BOOL Id) { return Native::Invoke<void, int, char*, float, BOOL>(N::SET_PARTICLE_FX_LOOPED_EVOLUTION, ptfxHandle, propertyName, amount, Id); }
	static void SET_PARTICLE_FX_LOOPED_COLOUR(int ptfxHandle, float r, float g, float b, BOOL p4) { return Native::Invoke<void, int, float, float, float, BOOL>(N::SET_PARTICLE_FX_LOOPED_COLOUR, ptfxHandle, r, g, b, p4); }
	static void SET_PARTICLE_FX_LOOPED_ALPHA(int ptfxHandle, float alpha) { return Native::Invoke<void, int, float>(N::SET_PARTICLE_FX_LOOPED_ALPHA, ptfxHandle, alpha); }
	static void SET_PARTICLE_FX_LOOPED_SCALE(int ptfxHandle, float scale) { return Native::Invoke<void, int, float>(N::SET_PARTICLE_FX_LOOPED_SCALE, ptfxHandle, scale); }
	static void SET_PARTICLE_FX_LOOPED_FAR_CLIP_DIST(int ptfxHandle, float dist) { return Native::Invoke<void, int, float>(N::SET_PARTICLE_FX_LOOPED_FAR_CLIP_DIST, ptfxHandle, dist); }
	static void _0x9DDC222D85D5AF2A(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x9DDC222D85D5AF2A, p0, p1); }
	static void REMOVE_PARTICLE_FX(int ptfxHandle, BOOL p1) { return Native::Invoke<void, int, BOOL>(N::REMOVE_PARTICLE_FX, ptfxHandle, p1); }
	static void REMOVE_PARTICLE_FX_FROM_ENTITY(Entity entity) { return Native::Invoke<void, Entity>(N::REMOVE_PARTICLE_FX_FROM_ENTITY, entity); }
	static void REMOVE_PARTICLE_FX_IN_RANGE(float X, float Y, float Z, float radius) { return Native::Invoke<void, float, float, float, float>(N::REMOVE_PARTICLE_FX_IN_RANGE, X, Y, Z, radius); }
	static void USE_PARTICLE_FX_ASSET(char* name) { return Native::Invoke<void, char*>(N::USE_PARTICLE_FX_ASSET, name); }
	static void SET_PARTICLE_FX_OVERRIDE(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(N::SET_PARTICLE_FX_OVERRIDE, p0, p1); }
	static void RESET_PARTICLE_FX_OVERRIDE(Any p0) { return Native::Invoke<void, Any>(N::RESET_PARTICLE_FX_OVERRIDE, p0); }
	static Any _0x4D14AF567FC02885() { return Native::Invoke<Any>(0x4D14AF567FC02885); }
	static void _0x4FB67D172C4476F3(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<void, Any, Any, Any, Any>(0x4FB67D172C4476F3, p0, p1, p2, p3); }
	static Any _0x3C61B52B00848C26() { return Native::Invoke<Any>(0x3C61B52B00848C26); }
	static void _0x453D16D41FC51D3E(Any p0) { return Native::Invoke<void, Any>(0x453D16D41FC51D3E, p0); }
	static void _0xA53C8D7D0F8C74D0(Any p0) { return Native::Invoke<void, Any>(0xA53C8D7D0F8C74D0, p0); }
	static void _0x8DCCC98DC0DBF9E4(Any p0) { return Native::Invoke<void, Any>(0x8DCCC98DC0DBF9E4, p0); }
	static Any _0x6E8EB45A4F4460EB() { return Native::Invoke<Any>(0x6E8EB45A4F4460EB); }
	static void _0x2A1625858887D4E6(Any p0) { return Native::Invoke<void, Any>(0x2A1625858887D4E6, p0); }
	static void _0x4046493D2EEACA0E() { return Native::Invoke<void>(0x4046493D2EEACA0E); }
	static void _0x7DFB49BCDB73089A(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x7DFB49BCDB73089A, p0, p1); }
	static Any _0x50C14328119E1DD1() { return Native::Invoke<Any>(0x50C14328119E1DD1); }
	static Any _0x0552AA3FFC5B87AA() { return Native::Invoke<Any>(0x0552AA3FFC5B87AA); }
	static Any _0x7C348310A6E2FB91() { return Native::Invoke<Any>(0x7C348310A6E2FB91); }
	static Any _0x72E30372E7CC4415() { return Native::Invoke<Any>(0x72E30372E7CC4415); }
	static void REMOVE_DECALS_IN_RANGE(float x, float y, float z, float range) { return Native::Invoke<void, float, float, float, float>(N::REMOVE_DECALS_IN_RANGE, x, y, z, range); }
	static void REMOVE_DECALS_FROM_OBJECT(Object obj) { return Native::Invoke<void, Object>(N::REMOVE_DECALS_FROM_OBJECT, obj); }
	static Object ADD_DECAL(int decalType, float posX, float posY, float posZ, float p4, float p5, float p6, float p7, float p8, float p9, float width, float height, float rCoef, float gCoef, float bCoef, float opacity, float timeout, BOOL p17, BOOL p18, BOOL p19, Any p20, Any p21) { return Native::Invoke<Object, int, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, BOOL, BOOL, BOOL, Any, Any>(N::ADD_DECAL, decalType, posX, posY, posZ, p4, p5, p6, p7, p8, p9, width, height, rCoef, gCoef, bCoef, opacity, timeout, p17, p18, p19, p20, p21); }
	static void _0xFA2ECC78A6014D4F(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<void, Any, Any, Any, Any>(0xFA2ECC78A6014D4F, p0, p1, p2, p3); }
	static void _0xF708298675ABDC6A(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any, Any, Any, Any>(0xF708298675ABDC6A, p0, p1, p2, p3, p4, p5, p6, p7, p8); }
	static void _0xDFCE8CE9F3EBE93F(Any p0) { return Native::Invoke<void, Any>(0xDFCE8CE9F3EBE93F, p0); }
	static void _0xC349EE1E6EFA494B(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<void, Any, Any, Any, Any>(0xC349EE1E6EFA494B, p0, p1, p2, p3); }
	static void START_PETROL_TRAIL_DECALS(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(N::START_PETROL_TRAIL_DECALS, p0, p1); }
	static void ADD_PETROL_TRAIL_DECAL_INFO(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<void, Any, Any, Any, Any>(N::ADD_PETROL_TRAIL_DECAL_INFO, p0, p1, p2, p3); }
	static void END_PETROL_TRAIL_DECALS() { return Native::Invoke<void>(N::END_PETROL_TRAIL_DECALS); }
	static Any _0xE63D68F455CA0B47(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return Native::Invoke<Any, Any, Any, Any, Any, Any, Any, Any>(0xE63D68F455CA0B47, p0, p1, p2, p3, p4, p5, p6); }
	static void REMOVE_DECAL(Object decal) { return Native::Invoke<void, Object>(N::REMOVE_DECAL, decal); }
	static BOOL IS_DECAL_ALIVE(Object decal) { return Native::Invoke<BOOL, Object>(N::IS_DECAL_ALIVE, decal); }
	static void _0xB032C085D9A03907() { return Native::Invoke<void>(0xB032C085D9A03907); }
	static Any _0xFB680A9B33D0EDBE() { return Native::Invoke<Any>(0xFB680A9B33D0EDBE); }
	static void _0x41F88A85A579A61D(Any p0) { return Native::Invoke<void, Any>(0x41F88A85A579A61D, p0); }
	static Any _0xB9C92616929CC25D() { return Native::Invoke<Any>(0xB9C92616929CC25D); }
	static void _0xDD9DC1AB63D513CE(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0xDD9DC1AB63D513CE, p0, p1, p2); }
	static void _0x812C1563185C6FB2() { return Native::Invoke<void>(0x812C1563185C6FB2); }
	static void _0x4BD66B4E3427689B(Any p0) { return Native::Invoke<void, Any>(0x4BD66B4E3427689B, p0); }
	static void _0xF5E45CB1CF965D2D(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0xF5E45CB1CF965D2D, p0, p1, p2); }
	static void _0xF2F543D48F319A3A() { return Native::Invoke<void>(0xF2F543D48F319A3A); }
	static void _0x1460B644397453EB() { return Native::Invoke<void>(0x1460B644397453EB); }
	static void _0xCD284E2F6AC27EE9(Any p0) { return Native::Invoke<void, Any>(0xCD284E2F6AC27EE9, p0); }
	static void SET_TIMECYCLE_MODIFIER(char* modifierName) { return Native::Invoke<void, char*>(N::SET_TIMECYCLE_MODIFIER, modifierName); }
	static void SET_TIMECYCLE_MODIFIER_STRENGTH(float strength) { return Native::Invoke<void, float>(N::SET_TIMECYCLE_MODIFIER_STRENGTH, strength); }
	static void SET_TRANSITION_TIMECYCLE_MODIFIER(char* modifierName, float transition) { return Native::Invoke<void, char*, float>(N::SET_TRANSITION_TIMECYCLE_MODIFIER, modifierName, transition); }
	static void _0xBB6C707F20D955D4(Any p0) { return Native::Invoke<void, Any>(0xBB6C707F20D955D4, p0); }
	static void CLEAR_TIMECYCLE_MODIFIER() { return Native::Invoke<void>(N::CLEAR_TIMECYCLE_MODIFIER); }
	static int GET_TIMECYCLE_MODIFIER_INDEX() { return Native::Invoke<int>(N::GET_TIMECYCLE_MODIFIER_INDEX); }
	static Any GET_TIMECYCLE_TRANSITION_MODIFIER_INDEX() { return Native::Invoke<Any>(N::GET_TIMECYCLE_TRANSITION_MODIFIER_INDEX); }
	static void _0x67B0778C62E74423(Any p0) { return Native::Invoke<void, Any>(0x67B0778C62E74423, p0); }
	static void _0x6C03118E9E5C1A14(Any p0) { return Native::Invoke<void, Any>(0x6C03118E9E5C1A14, p0); }
	static Any _0x25CA89B2A39DCC69() { return Native::Invoke<Any>(0x25CA89B2A39DCC69); }
	static void _SET_EXTRA_TIMECYCLE_MODIFIER_STRENGTH(Any p0) { return Native::Invoke<void, Any>(N::_SET_EXTRA_TIMECYCLE_MODIFIER_STRENGTH, p0); }
	static void SET_TV_CHANNEL(int channel) { return Native::Invoke<void, int>(N::SET_TV_CHANNEL, channel); }
	static int GET_TV_CHANNEL() { return Native::Invoke<int>(N::GET_TV_CHANNEL); }
	static void SET_TV_VOLUME(float volume) { return Native::Invoke<void, float>(N::SET_TV_VOLUME, volume); }
	static void DRAW_TV_CHANNEL(float xPos, float yPos, float xScale, float yScale, float rotation, int red, int green, int blue, int alpha) { return Native::Invoke<void, float, float, float, float, float, int, int, int, int>(N::DRAW_TV_CHANNEL, xPos, yPos, xScale, yScale, rotation, red, green, blue, alpha); }
	static void SET_TV_CHANNEL_PLAYLIST(int channel, char* playlist, BOOL fromBeginning) { return Native::Invoke<void, int, char*, BOOL>(N::SET_TV_CHANNEL_PLAYLIST, channel, playlist, fromBeginning); }
	static BOOL _IS_TV_PLAYLIST_ITEM_PLAYING(Hash videoClip) { return Native::Invoke<BOOL, Hash>(N::_IS_TV_PLAYLIST_ITEM_PLAYING, videoClip); }
	static Any _0x5C674EB487891F6B() { return Native::Invoke<Any>(0x5C674EB487891F6B); }
	static Any ENABLE_MOVIE_SUBTITLES() { return Native::Invoke<Any>(N::ENABLE_MOVIE_SUBTITLES); }
	static void _0x32DE2BFFDA43E62A() { return Native::Invoke<void>(0x32DE2BFFDA43E62A); }
	static Any _0xD543487A1F12828F() { return Native::Invoke<Any>(0xD543487A1F12828F); }
	static Any _0xD9BC98B55BCFAA9B() { return Native::Invoke<Any>(0xD9BC98B55BCFAA9B); }
	static Any _0x735762E8D7573E42() { return Native::Invoke<Any>(0x735762E8D7573E42); }
	static Any _0x981C7D863980FA51() { return Native::Invoke<Any>(0x981C7D863980FA51); }
	static void _0x5199405EABFBD7F0(Any p0) { return Native::Invoke<void, Any>(0x5199405EABFBD7F0, p0); }
	static Any _0xBF2DD155B2ADCD0A(Any p0) { return Native::Invoke<Any, Any>(0xBF2DD155B2ADCD0A, p0); }
	static void _0x37D7BDBA89F13959(Any p0) { return Native::Invoke<void, Any>(0x37D7BDBA89F13959, p0); }
	static void ANIMPOSTFX_PLAY(Any p0) { return Native::Invoke<void, Any>(N::ANIMPOSTFX_PLAY, p0); }
	static Any _0x3A9A281FF71249E9() { return Native::Invoke<Any>(0x3A9A281FF71249E9); }
	static void ANIMPOSTFX_STOP(char* effectName) { return Native::Invoke<void, char*>(N::ANIMPOSTFX_STOP, effectName); }
	static Any _0x26DD2FB0A88CC412() { return Native::Invoke<Any>(0x26DD2FB0A88CC412); }
	static void _0xC5CB91D65852ED7E(Any p0) { return Native::Invoke<void, Any>(0xC5CB91D65852ED7E, p0); }
	static BOOL ANIMPOSTFX_IS_RUNNING(char* effectName) { return Native::Invoke<BOOL, char*>(N::ANIMPOSTFX_IS_RUNNING, effectName); }
	static Any _0x2D4F9C852CE8A253() { return Native::Invoke<Any>(0x2D4F9C852CE8A253); }
	static void ANIMPOSTFX_STOP_ALL() { return Native::Invoke<void>(N::ANIMPOSTFX_STOP_ALL); }
	static Any _0xAD74C22A541AB987() { return Native::Invoke<Any>(0xAD74C22A541AB987); }
	static void _0xCAB4DD2D5B2B7246(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xCAB4DD2D5B2B7246, p0, p1); }
	static void _0xF972F0AB16DC5260(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0xF972F0AB16DC5260, p0, p1, p2); }
	static Any _0xB958D97A0DFAA0C2(Any p0) { return Native::Invoke<Any, Any>(0xB958D97A0DFAA0C2, p0); }
	static void _0xA201A3D0AC087C37(Any p0) { return Native::Invoke<void, Any>(0xA201A3D0AC087C37, p0); }
	static Any _0xFBF161FCFEC8589E(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<Any, Any, Any, Any, Any>(0xFBF161FCFEC8589E, p0, p1, p2, p3); }
	static Any _0x842CCC9491FFCD9B(Any p0) { return Native::Invoke<Any, Any>(0x842CCC9491FFCD9B, p0); }
	static Any _0xF3E039322BFBD4D8() { return Native::Invoke<Any>(0xF3E039322BFBD4D8); }
	static Any _0x59EA80079B86D8C7() { return Native::Invoke<Any>(0x59EA80079B86D8C7); }
	static Any _0x38D9D50F2085E9B3() { return Native::Invoke<Any>(0x38D9D50F2085E9B3); }
	static void _0x9B8D5D4CB8AF58B3(Any p0) { return Native::Invoke<void, Any>(0x9B8D5D4CB8AF58B3, p0); }
	static Any _0xC76FC4C2FC5F4405() { return Native::Invoke<Any>(0xC76FC4C2FC5F4405); }
	static Any _0xEDA5CBECF56E1386() { return Native::Invoke<Any>(0xEDA5CBECF56E1386); }
	static Any _0xEEF83A759AE06A27() { return Native::Invoke<Any>(0xEEF83A759AE06A27); }
	static Any _0xE75CDDEBF618C8FF() { return Native::Invoke<Any>(0xE75CDDEBF618C8FF); }
	static Any _0x71845905BCCDE781() { return Native::Invoke<Any>(0x71845905BCCDE781); }
	static Any _0x9AB192A9EF980EED() { return Native::Invoke<Any>(0x9AB192A9EF980EED); }
	static Any _0xFF584F097C17FA8F() { return Native::Invoke<Any>(0xFF584F097C17FA8F); }
	static Any _0x3DA7A10583A4BEC0() { return Native::Invoke<Any>(0x3DA7A10583A4BEC0); }
	static Any _0xC37792A3F9C90771() { return Native::Invoke<Any>(0xC37792A3F9C90771); }
	static void _0xA0F4D12D6042F6D5(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xA0F4D12D6042F6D5, p0, p1); }
	static void _0x8996FA6AD9FE4E90(Any p0) { return Native::Invoke<void, Any>(0x8996FA6AD9FE4E90, p0); }
	static void _0xC38B4952B728397A(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xC38B4952B728397A, p0, p1); }
	static Any _0xAF6E67D073D2DCE2() { return Native::Invoke<Any>(0xAF6E67D073D2DCE2); }
	static Any _0xFD05B1DDE83749FA(Any p0) { return Native::Invoke<Any, Any>(0xFD05B1DDE83749FA, p0); }
	static void _0xC2B8164C3BE871A4() { return Native::Invoke<void>(0xC2B8164C3BE871A4); }
	static void _0x3E2FDDBE435A8787() { return Native::Invoke<void>(0x3E2FDDBE435A8787); }
	static void _0x55285F885F662169() { return Native::Invoke<void>(0x55285F885F662169); }
	static Any _0xD9C24F53631F2372(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(0xD9C24F53631F2372, p0, p1, p2); }
	static void _0x196D3ACBEBA4A44B(Any p0) { return Native::Invoke<void, Any>(0x196D3ACBEBA4A44B, p0); }
	static void _0xA1A86055792FB249(Any p0) { return Native::Invoke<void, Any>(0xA1A86055792FB249, p0); }
	static Any _0x402E1A61D2587FCD(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return Native::Invoke<Any, Any, Any, Any, Any, Any, Any, Any>(0x402E1A61D2587FCD, p0, p1, p2, p3, p4, p5, p6); }
	static Any _0x5C9C3A466B3296A8(Any p0) { return Native::Invoke<Any, Any>(0x5C9C3A466B3296A8, p0); }
	static Any _0xA15CCAB8AD038291(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<Any, Any, Any, Any, Any>(0xA15CCAB8AD038291, p0, p1, p2, p3); }
	static Any _0x285438C26C732F9D() { return Native::Invoke<Any>(0x285438C26C732F9D); }
	static void _0xBFCB17895BB99E4E(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xBFCB17895BB99E4E, p0, p1); }
	static Any _0x113857D66A9CABE6(Any p0) { return Native::Invoke<Any, Any>(0x113857D66A9CABE6, p0); }
	static Any _0x5D1C5D8E62E8EE1C(Any p0) { return Native::Invoke<Any, Any>(0x5D1C5D8E62E8EE1C, p0); }
	static void _0x9D1B0B5066205692() { return Native::Invoke<void>(0x9D1B0B5066205692); }
	static void _0xC489FE31AC726512(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xC489FE31AC726512, p0, p1); }
	static void _0xB8C984C0D47F4F07(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0xB8C984C0D47F4F07, p0, p1, p2); }
	static void _0xFE7966DF01452F32(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0xFE7966DF01452F32, p0, p1, p2); }
	static void _0x10C1767B93257480(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0x10C1767B93257480, p0, p1, p2); }
	static void _0xC332C91388F5580B(Any p0) { return Native::Invoke<void, Any>(0xC332C91388F5580B, p0); }
	static void _0x085C5B61A0114F32(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x085C5B61A0114F32, p0, p1); }
	static void _0x1FF8731BE1DFC0C0(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x1FF8731BE1DFC0C0, p0, p1); }
	static Any _0xFC9B53C072F418E0() { return Native::Invoke<Any>(0xFC9B53C072F418E0); }
	static void _0x94B261F1F35293E1(Any p0) { return Native::Invoke<void, Any>(0x94B261F1F35293E1, p0); }
	static void _0xFAAD23DE7A54FC14() { return Native::Invoke<void>(0xFAAD23DE7A54FC14); }
	static void _0x5C9978A2A3DC3D0D() { return Native::Invoke<void>(0x5C9978A2A3DC3D0D); }
	static void _0xC6F81FCD15350323(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xC6F81FCD15350323, p0, p1); }
	static Any _0x958DEBD9353C0935() { return Native::Invoke<Any>(0x958DEBD9353C0935); }
	static void _0x56A786E87FF53478(Any p0) { return Native::Invoke<void, Any>(0x56A786E87FF53478, p0); }
	static Any _0xE8A8378BF651079C() { return Native::Invoke<Any>(0xE8A8378BF651079C); }
	static Any _0xE92012611461A42A() { return Native::Invoke<Any>(0xE92012611461A42A); }
	static Any _0x249CD6B7285536F2() { return Native::Invoke<Any>(0x249CD6B7285536F2); }
	static Any _0xAF4D239B8903FCBE() { return Native::Invoke<Any>(0xAF4D239B8903FCBE); }
	static void _0xF02A9C330BBFC5C7(Any p0) { return Native::Invoke<void, Any>(0xF02A9C330BBFC5C7, p0); }
	static void _0x1C6306E5BC25C29C() { return Native::Invoke<void>(0x1C6306E5BC25C29C); }
}
namespace _NAMESPACE26
{
	static Any _0xD6F6ACF4392187FB(Any p0) { return Native::Invoke<Any, Any>(0xD6F6ACF4392187FB, p0); }
	static Any _0x93A91A351A07360E() { return Native::Invoke<Any>(0x93A91A351A07360E); }
	static Any _0x0F99F6436528A089(Any p0) { return Native::Invoke<Any, Any>(0x0F99F6436528A089, p0); }
	static Any _0xFCF96CCBD81B24C8() { return Native::Invoke<Any>(0xFCF96CCBD81B24C8); }
	static Any _0x9970AE8C3D706139() { return Native::Invoke<Any>(0x9970AE8C3D706139); }
	static Any _0xD1A226F2E05E58FC() { return Native::Invoke<Any>(0xD1A226F2E05E58FC); }
	static Any _0xC5BF29F4035277C2() { return Native::Invoke<Any>(0xC5BF29F4035277C2); }
	static void _0x0A04A07BC3074EDB(Any p0) { return Native::Invoke<void, Any>(0x0A04A07BC3074EDB, p0); }
	static Any _0xCD9E2D9BC52FD80F() { return Native::Invoke<Any>(0xCD9E2D9BC52FD80F); }
	static Any _0xC0474C8BCF6787AD(Any p0) { return Native::Invoke<Any, Any>(0xC0474C8BCF6787AD, p0); }
	static Any _0x424B17A7DC5C90BC(Any p0) { return Native::Invoke<Any, Any>(0x424B17A7DC5C90BC, p0); }
	static Any _0x9BE7DCB22D32CCBE(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x9BE7DCB22D32CCBE, p0, p1); }
	static Any _0x3F59FE6F37869576() { return Native::Invoke<Any>(0x3F59FE6F37869576); }
	static Any _0x81FB74C83C2ED69F(Any p0) { return Native::Invoke<Any, Any>(0x81FB74C83C2ED69F, p0); }
	static Any _0x149A2751AB66AC02() { return Native::Invoke<Any>(0x149A2751AB66AC02); }
	static Any _0x853B0FA4D8732C57() { return Native::Invoke<Any>(0x853B0FA4D8732C57); }
	static Any _0x833D8268D51B4522() { return Native::Invoke<Any>(0x833D8268D51B4522); }
	static Any _0x901E0DC25080C8B9(Any p0) { return Native::Invoke<Any, Any>(0x901E0DC25080C8B9, p0); }
	static Any _0xD1BF325C8252A982() { return Native::Invoke<Any>(0xD1BF325C8252A982); }
	static Any _0xDA801F7F6A5278D3() { return Native::Invoke<Any>(0xDA801F7F6A5278D3); }
	static Any _0x2F7EB8B6F6AFE79C() { return Native::Invoke<Any>(0x2F7EB8B6F6AFE79C); }
	static Any _0x53A94294FDDCF98C() { return Native::Invoke<Any>(0x53A94294FDDCF98C); }
	static Any _0x4BE6C13A45CCA8EC(Any p0) { return Native::Invoke<Any, Any>(0x4BE6C13A45CCA8EC, p0); }
	static Any _0xCE88A261DCBBA0D9() { return Native::Invoke<Any>(0xCE88A261DCBBA0D9); }
	static Any _0x6102830F764B3DE1() { return Native::Invoke<Any>(0x6102830F764B3DE1); }
	static Any _0xB38C256498748413() { return Native::Invoke<Any>(0xB38C256498748413); }
	static Any _0xE4C64CD37CB176AA() { return Native::Invoke<Any>(0xE4C64CD37CB176AA); }
	static Any _0x7BAA30C9BBE8AEE7() { return Native::Invoke<Any>(0x7BAA30C9BBE8AEE7); }
	static Any _0x0E5C9FB9ED5DFF1C() { return Native::Invoke<Any>(0x0E5C9FB9ED5DFF1C); }
	static Any _0xB22B1D9F74095382() { return Native::Invoke<Any>(0xB22B1D9F74095382); }
	static Any _0xEE4F20004D0288B7() { return Native::Invoke<Any>(0xEE4F20004D0288B7); }
	static Any _0xAD22AB64FA428DF3() { return Native::Invoke<Any>(0xAD22AB64FA428DF3); }
	static Any _0x48D82C83987E18E4() { return Native::Invoke<Any>(0x48D82C83987E18E4); }
	static Any _0xA9CEAE8D6637FBAD() { return Native::Invoke<Any>(0xA9CEAE8D6637FBAD); }
	static Any _0x51C5EF47086AA0D7() { return Native::Invoke<Any>(0x51C5EF47086AA0D7); }
	static Any _0x644E02F24F9D4E98() { return Native::Invoke<Any>(0x644E02F24F9D4E98); }
	static Any _0x3ADC71A66356D706() { return Native::Invoke<Any>(0x3ADC71A66356D706); }
	static Any _0xFA7C5B7E087A4CEB() { return Native::Invoke<Any>(0xFA7C5B7E087A4CEB); }
	static Any _0x1F11702DDBD915C6() { return Native::Invoke<Any>(0x1F11702DDBD915C6); }
	static Any _0x7933754F260B428A() { return Native::Invoke<Any>(0x7933754F260B428A); }
	static Any _0xAFD3599A3CC5637D() { return Native::Invoke<Any>(0xAFD3599A3CC5637D); }
	static Any _0xC81A9E2C8EFD28D5() { return Native::Invoke<Any>(0xC81A9E2C8EFD28D5); }
}
namespace GOOGLE_ANALYTICS
{
	static void _GOOGLE_ANALYTICS_PUSH_PAGE(Any p0) { return Native::Invoke<void, Any>(N::_GOOGLE_ANALYTICS_PUSH_PAGE, p0); }
	static void _GOOGLE_ANALYTICS_POP_PAGE(Any p0) { return Native::Invoke<void, Any>(N::_GOOGLE_ANALYTICS_POP_PAGE, p0); }
}
namespace HUD
{
	static void _0x26F6BBEA2CE3E3DC() { return Native::Invoke<void>(0x26F6BBEA2CE3E3DC); }
	static void _0xC5C7A2F6567FCCBC() { return Native::Invoke<void>(0xC5C7A2F6567FCCBC); }
	static void _0xC9CAEAEEC1256E54(Any p0) { return Native::Invoke<void, Any>(0xC9CAEAEEC1256E54, p0); }
	static void _0x4CC5F2FC1332577F(Any p0) { return Native::Invoke<void, Any>(0x4CC5F2FC1332577F, p0); }
	static void _0x8BC7C1F929D07BF3(Any p0) { return Native::Invoke<void, Any>(0x8BC7C1F929D07BF3, p0); }
	static Any _0x7EC0D68233E391AC(Any p0) { return Native::Invoke<Any, Any>(0x7EC0D68233E391AC, p0); }
	static void _0x7F78CD75CC4539E4(Any p0) { return Native::Invoke<void, Any>(0x7F78CD75CC4539E4, p0); }
	static void BUSYSPINNER_OFF() { return Native::Invoke<void>(N::BUSYSPINNER_OFF); }
	static Any BUSYSPINNER_IS_ON() { return Native::Invoke<Any>(N::BUSYSPINNER_IS_ON); }
	static void _0xD79334A4BB99BAD1(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0xD79334A4BB99BAD1, p0, p1, p2); }
	static Any _GET_TEXT_SUBSTRING() { return Native::Invoke<Any>(N::_GET_TEXT_SUBSTRING); }
	static Any _GET_LABEL_TEXT() { return Native::Invoke<Any>(N::_GET_LABEL_TEXT); }
	static void CLEAR_ALL_HELP_MESSAGES() { return Native::Invoke<void>(N::CLEAR_ALL_HELP_MESSAGES); }
	static Any _0xD0976CC34002DB57(Any p0) { return Native::Invoke<Any, Any>(0xD0976CC34002DB57, p0); }
	static Any _0x3CF96E16265B7DC8(Any p0) { return Native::Invoke<Any, Any>(0x3CF96E16265B7DC8, p0); }
	static Any _0xF66090013DE648D5(Any p0) { return Native::Invoke<Any, Any>(0xF66090013DE648D5, p0); }
	static void _0xAA03F130A637D923(Any p0) { return Native::Invoke<void, Any>(0xAA03F130A637D923, p0); }
	static Any _0x2C729F2B94CEA911(Any p0) { return Native::Invoke<Any, Any>(0x2C729F2B94CEA911, p0); }
	static BOOL DOES_TEXT_LABEL_EXIST(char* gxt) { return Native::Invoke<BOOL, char*>(N::DOES_TEXT_LABEL_EXIST, gxt); }
	static char* _GET_LABEL_TEXT(char* labelName) { return Native::Invoke<char*, char*>(N::_GET_LABEL_TEXT, labelName); }
	static Any _0xD8402B858F4DDD88(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0xD8402B858F4DDD88, p0, p1); }
	static Any _0x806862E5D266CF38(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(0x806862E5D266CF38, p0, p1, p2); }
	static int GET_LENGTH_OF_LITERAL_STRING(char* string) { return Native::Invoke<int, char*>(N::GET_LENGTH_OF_LITERAL_STRING, string); }
	static Any GET_LENGTH_OF_LITERAL_STRING_IN_BYTES() { return Native::Invoke<Any>(N::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES); }
	static Any _0xBD5DD5EAE2B6CE14(Any p0) { return Native::Invoke<Any, Any>(0xBD5DD5EAE2B6CE14, p0); }
	static BOOL IS_RADAR_PREFERENCE_SWITCHED_ON() { return Native::Invoke<BOOL>(N::IS_RADAR_PREFERENCE_SWITCHED_ON); }
	static void DISPLAY_HUD(BOOL toggle) { return Native::Invoke<void, BOOL>(N::DISPLAY_HUD, toggle); }
	static BOOL IS_HUD_HIDDEN() { return Native::Invoke<BOOL>(N::IS_HUD_HIDDEN); }
	static BOOL IS_RADAR_HIDDEN() { return Native::Invoke<BOOL>(N::IS_RADAR_HIDDEN); }
	static Any _0x66F35DD9D2B58579() { return Native::Invoke<Any>(0x66F35DD9D2B58579); }
	static Any _0xB981DD2DFAF9B1C9() { return Native::Invoke<Any>(0xB981DD2DFAF9B1C9); }
	static void SET_TEXT_SCALE(float unk, float scale) { return Native::Invoke<void, float, float>(N::SET_TEXT_SCALE, unk, scale); }
	static void _0x50A41AD966910F03(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<void, Any, Any, Any, Any>(0x50A41AD966910F03, p0, p1, p2, p3); }
	static Any SET_TEXT_CENTRE() { return Native::Invoke<Any>(N::SET_TEXT_CENTRE); }
	static Any SET_TEXT_DROPSHADOW() { return Native::Invoke<Any>(N::SET_TEXT_DROPSHADOW); }
	static void SET_TEXT_RENDER_ID(int renderId) { return Native::Invoke<void, int>(N::SET_TEXT_RENDER_ID, renderId); }
	static BOOL REGISTER_NAMED_RENDERTARGET(char* p0, BOOL p1) { return Native::Invoke<BOOL, char*, BOOL>(N::REGISTER_NAMED_RENDERTARGET, p0, p1); }
	static BOOL IS_NAMED_RENDERTARGET_REGISTERED(char* p0) { return Native::Invoke<BOOL, char*>(N::IS_NAMED_RENDERTARGET_REGISTERED, p0); }
	static BOOL RELEASE_NAMED_RENDERTARGET(Any* p0) { return Native::Invoke<BOOL, Any*>(N::RELEASE_NAMED_RENDERTARGET, p0); }
	static void LINK_NAMED_RENDERTARGET(Hash hash) { return Native::Invoke<void, Hash>(N::LINK_NAMED_RENDERTARGET, hash); }
	static Any GET_NAMED_RENDERTARGET_RENDER_ID(char* p0) { return Native::Invoke<Any, char*>(N::GET_NAMED_RENDERTARGET_RENDER_ID, p0); }
	static BOOL IS_NAMED_RENDERTARGET_LINKED(Hash hash) { return Native::Invoke<BOOL, Hash>(N::IS_NAMED_RENDERTARGET_LINKED, hash); }
	static void _0x9D37EB5003E0F2CF(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x9D37EB5003E0F2CF, p0, p1); }
	static void HIDE_LOADING_ON_FADE_THIS_FRAME() { return Native::Invoke<void>(N::HIDE_LOADING_ON_FADE_THIS_FRAME); }
	static void _0x052D4AC0922AF91A(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x052D4AC0922AF91A, p0, p1); }
	static void HIDE_HUD_AND_RADAR_THIS_FRAME() { return Native::Invoke<void>(N::HIDE_HUD_AND_RADAR_THIS_FRAME); }
	static void _0x8A59D44189AF2BC5(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x8A59D44189AF2BC5, p0, p1); }
	static void _0x160825DADF1B04B3() { return Native::Invoke<void>(0x160825DADF1B04B3); }
	static Any _0x9C409BBC492CB5B1() { return Native::Invoke<Any>(0x9C409BBC492CB5B1); }
	static Any _0x0501D52D24EA8934(Any p0) { return Native::Invoke<Any, Any>(0x0501D52D24EA8934, p0); }
	static Any _0xF1AD3DD218E6558A() { return Native::Invoke<Any>(0xF1AD3DD218E6558A); }
	static Any _0x100157D6D7FE32CA() { return Native::Invoke<Any>(0x100157D6D7FE32CA); }
	static Any _0x28AE29D909C8FDCE() { return Native::Invoke<Any>(0x28AE29D909C8FDCE); }
	static void _0x2F7BB105144ACF30() { return Native::Invoke<void>(0x2F7BB105144ACF30); }
	static void _0xBFFF81E12A745A5F() { return Native::Invoke<void>(0xBFFF81E12A745A5F); }
	static void SET_MISSION_NAME(BOOL p0, char* name) { return Native::Invoke<void, BOOL, char*>(N::SET_MISSION_NAME, p0, name); }
	static Any _SET_MISSION_NAME_2() { return Native::Invoke<Any>(N::_SET_MISSION_NAME_2); }
	static Any _0xCE0D2F5586627CCE() { return Native::Invoke<Any>(0xCE0D2F5586627CCE); }
	static Any GET_HUD_SCREEN_POSITION_FROM_WORLD_POSITION(Any p0, Any p1, Any p2, Any p3, Any p4) { return Native::Invoke<Any, Any, Any, Any, Any, Any>(N::GET_HUD_SCREEN_POSITION_FROM_WORLD_POSITION, p0, p1, p2, p3, p4); }
	static void _0xBF4F34A85CA2970D() { return Native::Invoke<void>(0xBF4F34A85CA2970D); }
	static void DISABLE_FRONTEND_THIS_FRAME() { return Native::Invoke<void>(N::DISABLE_FRONTEND_THIS_FRAME); }
	static void _0x5651516D947ABC53() { return Native::Invoke<void>(0x5651516D947ABC53); }
	static Any _ALLOW_PAUSE_MENU_WHEN_DEAD_THIS_FRAME() { return Native::Invoke<Any>(N::_ALLOW_PAUSE_MENU_WHEN_DEAD_THIS_FRAME); }
	static void SET_FRONTEND_ACTIVE(BOOL active) { return Native::Invoke<void, BOOL>(N::SET_FRONTEND_ACTIVE, active); }
	static BOOL IS_PAUSE_MENU_ACTIVE() { return Native::Invoke<BOOL>(N::IS_PAUSE_MENU_ACTIVE); }
	static Any _FORCE_CLOSE_TEXT_INPUT_BOX() { return Native::Invoke<Any>(N::_FORCE_CLOSE_TEXT_INPUT_BOX); }
	static Any _IS_MULTIPLAYER_CHAT_ACTIVE() { return Native::Invoke<Any>(N::_IS_MULTIPLAYER_CHAT_ACTIVE); }
	static void _0x50C803A4CD5932C5(Any p0) { return Native::Invoke<void, Any>(0x50C803A4CD5932C5, p0); }
	static void _0xD4EE21B7CC7FD350(Any p0) { return Native::Invoke<void, Any>(0xD4EE21B7CC7FD350, p0); }
	static void _0x3FE4FB41EF7D2196(Any p0) { return Native::Invoke<void, Any>(0x3FE4FB41EF7D2196, p0); }
	static void _JOURNAL_WRITE_ENTRY(Any p0) { return Native::Invoke<void, Any>(N::_JOURNAL_WRITE_ENTRY, p0); }
	static Any _JOURNAL_CAN_WRITE_ENTRY(Any p0) { return Native::Invoke<Any, Any>(N::_JOURNAL_CAN_WRITE_ENTRY, p0); }
	static Any _JOURNAL_GET_ENTRY_COUNT() { return Native::Invoke<Any>(N::_JOURNAL_GET_ENTRY_COUNT); }
	static Any _JOURNAL_GET_ENTRY_AT_INDEX(Any p0) { return Native::Invoke<Any, Any>(N::_JOURNAL_GET_ENTRY_AT_INDEX, p0); }
	static Any _JOURNAL_GET_GRIME_AT_INDEX(Any p0) { return Native::Invoke<Any, Any>(N::_JOURNAL_GET_GRIME_AT_INDEX, p0); }
	static Any _JOURNAL_GET_ENTRY_INFO(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(N::_JOURNAL_GET_ENTRY_INFO, p0, p1); }
	static Any _JORUNAL_GET_TEXTURE_WITH_LAYOUT(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(N::_JORUNAL_GET_TEXTURE_WITH_LAYOUT, p0, p1, p2); }
	static void _JORUNAL_MARK_READ(Any p0) { return Native::Invoke<void, Any>(N::_JORUNAL_MARK_READ, p0); }
	static void _JORUNAL_CLEAR_ALL_PROGRESS() { return Native::Invoke<void>(N::_JORUNAL_CLEAR_ALL_PROGRESS); }
	static Any _0xB6857100F8FD433C(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0xB6857100F8FD433C, p0, p1); }
	static void _0xF1E6979C0B779985(Any p0) { return Native::Invoke<void, Any>(0xF1E6979C0B779985, p0); }
	static Any _0xBE1067CD1C9570F6(Any p0) { return Native::Invoke<Any, Any>(0xBE1067CD1C9570F6, p0); }
	static void _0x51DE09A2196BD951(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x51DE09A2196BD951, p0, p1); }
	static Any _CREATE_PROMPT(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return Native::Invoke<Any, Any, Any, Any, Any, Any, Any>(N::_CREATE_PROMPT, p0, p1, p2, p3, p4, p5); }
	static Any _BEGIN_REGISTER_PROMPT() { return Native::Invoke<Any>(N::_BEGIN_REGISTER_PROMPT); }
	static void _END_REGISTER_PROMPT(Any p0) { return Native::Invoke<void, Any>(N::_END_REGISTER_PROMPT, p0); }
	static void _PROMPT_SET_PRIORITY(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(N::_PROMPT_SET_PRIORITY, p0, p1); }
	static Any _PROMPT_SET_CONTROL_ACTION(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(N::_PROMPT_SET_CONTROL_ACTION, p0, p1); }
	static void _PROMPT_SET_ALLOWED_ACTION(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(N::_PROMPT_SET_ALLOWED_ACTION, p0, p1); }
	static void _PROMPT_SET_STANDARD_MODE(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(N::_PROMPT_SET_STANDARD_MODE, p0, p1); }
	static Any _PROMPT_HAS_STANDARD_MODE_COMPLETED(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(N::_PROMPT_HAS_STANDARD_MODE_COMPLETED, p0, p1); }
	static void _PROMPT_SET_PRESSED_TIMED_MODE(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(N::_PROMPT_SET_PRESSED_TIMED_MODE, p0, p1); }
	static Any _PROMPT_HAS_PRESSED_TIMED_MODE_COMPLETED(Any p0) { return Native::Invoke<Any, Any>(N::_PROMPT_HAS_PRESSED_TIMED_MODE_COMPLETED, p0); }
	static Any _PROMPT_HAS_PRESSED_TIMED_MODE_FAILED(Any p0) { return Native::Invoke<Any, Any>(N::_PROMPT_HAS_PRESSED_TIMED_MODE_FAILED, p0); }
	static void _PROMPT_SET_HOLD_MODE(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(N::_PROMPT_SET_HOLD_MODE, p0, p1); }
	static void _PROMPT_SET_STANDARDIZED_HOLD_MODE(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(N::_PROMPT_SET_STANDARDIZED_HOLD_MODE, p0, p1); }
	static void _PROMPT_SET_HOLD_INDEFINITELY_MODE(Any p0) { return Native::Invoke<void, Any>(N::_PROMPT_SET_HOLD_INDEFINITELY_MODE, p0); }
	static void _PROMPT_SET_HOLD_AUTO_FILL_MODE(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(N::_PROMPT_SET_HOLD_AUTO_FILL_MODE, p0, p1, p2); }
	static Any _0xA3F2149AA24F3D8E() { return Native::Invoke<Any>(0xA3F2149AA24F3D8E); }
	static Any _PROMPT_HAS_HOLD_AUTO_FILL_MODE(Any p0) { return Native::Invoke<Any, Any>(N::_PROMPT_HAS_HOLD_AUTO_FILL_MODE, p0); }
	static Any _0xB60C9F9ED47ABB76(Any p0) { return Native::Invoke<Any, Any>(0xB60C9F9ED47ABB76, p0); }
	static Any _PROMPT_IS_HOLD_MODE_RUNNING(Any p0) { return Native::Invoke<Any, Any>(N::_PROMPT_IS_HOLD_MODE_RUNNING, p0); }
	static Any _PROMPT_HAS_HOLD_MODE_COMPLETED(Any p0) { return Native::Invoke<Any, Any>(N::_PROMPT_HAS_HOLD_MODE_COMPLETED, p0); }
	static Any _0x81801291806DBC50(Any p0) { return Native::Invoke<Any, Any>(0x81801291806DBC50, p0); }
	static void _PROMPT_SET_MASH_MODE(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(N::_PROMPT_SET_MASH_MODE, p0, p1); }
	static void _PROMPT_SET_MASH_INDEFINITELY_MODE(Any p0) { return Native::Invoke<void, Any>(N::_PROMPT_SET_MASH_INDEFINITELY_MODE, p0); }
	static void _PROMPT_SET_MASH_WITH_RESISTANCE_MODE(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<void, Any, Any, Any, Any>(N::_PROMPT_SET_MASH_WITH_RESISTANCE_MODE, p0, p1, p2, p3); }
	static void _PROMPT_SET_MASH_WITH_RESISTANCE_CAN_FAIL_MODE(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<void, Any, Any, Any, Any>(N::_PROMPT_SET_MASH_WITH_RESISTANCE_CAN_FAIL_MODE, p0, p1, p2, p3); }
	static void _PROMPT_SET_MASH_AUTO_FILL_MODE(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(N::_PROMPT_SET_MASH_AUTO_FILL_MODE, p0, p1, p2); }
	static void _PROMPT_SET_MASH_MANUAL_MODE(Any p0, Any p1, Any p2, Any p3, Any p4) { return Native::Invoke<void, Any, Any, Any, Any, Any>(N::_PROMPT_SET_MASH_MANUAL_MODE, p0, p1, p2, p3, p4); }
	static void _PROMPT_SET_MASH_MANUAL_CAN_FAIL_MODE(Any p0, Any p1, Any p2, Any p3, Any p4) { return Native::Invoke<void, Any, Any, Any, Any, Any>(N::_PROMPT_SET_MASH_MANUAL_CAN_FAIL_MODE, p0, p1, p2, p3, p4); }
	static Any _0xA6C6A4ADB3BAC409(Any p0) { return Native::Invoke<Any, Any>(0xA6C6A4ADB3BAC409, p0); }
	static Any _0xCD072523791DDC1B(Any p0) { return Native::Invoke<Any, Any>(0xCD072523791DDC1B, p0); }
	static Any _0xB0E8599243B3F568(Any p0) { return Native::Invoke<Any, Any>(0xB0E8599243B3F568, p0); }
	static Any _PROMPT_HAS_MASH_MODE_COMPLETED(Any p0) { return Native::Invoke<Any, Any>(N::_PROMPT_HAS_MASH_MODE_COMPLETED, p0); }
	static Any _PROMPT_HAS_MASH_MODE_FAILED(Any p0) { return Native::Invoke<Any, Any>(N::_PROMPT_HAS_MASH_MODE_FAILED, p0); }
	static Any _PROMPT_GET_MASH_MODE_PROGRESS(Any p0) { return Native::Invoke<Any, Any>(N::_PROMPT_GET_MASH_MODE_PROGRESS, p0); }
	static void _PROMPT_SET_MASH_MANUAL_MODE_INCREASE_PER_PRESS(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(N::_PROMPT_SET_MASH_MANUAL_MODE_INCREASE_PER_PRESS, p0, p1); }
	static void _PROMPT_SET_MASH_MANUAL_MODE_DECAY_SPEED(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(N::_PROMPT_SET_MASH_MANUAL_MODE_DECAY_SPEED, p0, p1); }
	static void _PROMPT_SET_MASH_MANUAL_MODE_PRESSED_GROWTH_SPEED(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(N::_PROMPT_SET_MASH_MANUAL_MODE_PRESSED_GROWTH_SPEED, p0, p1); }
	static void _PROMPT_SET_ROTATE_MODE(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(N::_PROMPT_SET_ROTATE_MODE, p0, p1, p2); }
	static void _PROMPT_SET_TARGET_MODE(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<void, Any, Any, Any, Any>(N::_PROMPT_SET_TARGET_MODE, p0, p1, p2, p3); }
	static void _PROMPT_SET_TARGET_MODE_TARGET(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(N::_PROMPT_SET_TARGET_MODE_TARGET, p0, p1, p2); }
	static void _PROMPT_SET_TARGET_MODE_PROGRESS(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(N::_PROMPT_SET_TARGET_MODE_PROGRESS, p0, p1); }
	static void _PROMPT_SET_BEAT_MODE(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(N::_PROMPT_SET_BEAT_MODE, p0, p1); }
	static Any _PROMPT_WAS_BEAT_MODE_PRESSED_IN_TIME_WINDOW(Any p0) { return Native::Invoke<Any, Any>(N::_PROMPT_WAS_BEAT_MODE_PRESSED_IN_TIME_WINDOW, p0); }
	static void _PROMPT_SET_BEAT_MODE_GRAYED_OUT(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(N::_PROMPT_SET_BEAT_MODE_GRAYED_OUT, p0, p1); }
	static void _PROMPT_RESTART_MODES(Any p0) { return Native::Invoke<void, Any>(N::_PROMPT_RESTART_MODES, p0); }
	static void _PROMPT_SET_SPINNER_SPEED(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(N::_PROMPT_SET_SPINNER_SPEED, p0, p1); }
	static void _PROMPT_SET_SPINNER_POSITION(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(N::_PROMPT_SET_SPINNER_POSITION, p0, p1); }
	static void _PROMPT_SET_URGENT_PULSING_ENABLED(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(N::_PROMPT_SET_URGENT_PULSING_ENABLED, p0, p1); }
	static Any _PROMPT_GET_URGENT_PULSING_ENABLED(Any p0) { return Native::Invoke<Any, Any>(N::_PROMPT_GET_URGENT_PULSING_ENABLED, p0); }
	static void _PROMPT_SET_TAG(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(N::_PROMPT_SET_TAG, p0, p1); }
	static Any _PROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(Any p0) { return Native::Invoke<Any, Any>(N::_PROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY, p0); }
	static Any _PROMPT_GET_GROUP_ID_FOR_SCENARIO_POINT(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(N::_PROMPT_GET_GROUP_ID_FOR_SCENARIO_POINT, p0, p1); }
	static void _PROMPT_SET_GROUP(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(N::_PROMPT_SET_GROUP, p0, p1, p2); }
	static void _PROMPT_REMOVE_GROUP(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(N::_PROMPT_REMOVE_GROUP, p0, p1); }
	static Any _PROMPT_SET_ACTIVE_GROUP_THIS_FRAME(Any p0, Any p1, Any p2, Any p3, Any p4) { return Native::Invoke<Any, Any, Any, Any, Any, Any>(N::_PROMPT_SET_ACTIVE_GROUP_THIS_FRAME, p0, p1, p2, p3, p4); }
	static Any _PROMPT_GET_GROUP_ACTIVE_PAGE(Any p0) { return Native::Invoke<Any, Any>(N::_PROMPT_GET_GROUP_ACTIVE_PAGE, p0); }
	static Any _PROMPT_SET_AMBIENT_GROUP_THIS_FRAME(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return Native::Invoke<Any, Any, Any, Any, Any, Any, Any, Any>(N::_PROMPT_SET_AMBIENT_GROUP_THIS_FRAME, p0, p1, p2, p3, p4, p5, p6); }
	static Any _PROMPT_DOES_AMBIENT_GROUP_EXIST(Any p0) { return Native::Invoke<Any, Any>(N::_PROMPT_DOES_AMBIENT_GROUP_EXIST, p0); }
	static void _PROMPT_ADD_GROUP_LINK(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(N::_PROMPT_ADD_GROUP_LINK, p0, p1, p2); }
	static void _PROMPT_ADD_GROUP_RETURN_LINK(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(N::_PROMPT_ADD_GROUP_RETURN_LINK, p0, p1); }
	static void _PROMPT_SET_TRANSPORT_MODE(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(N::_PROMPT_SET_TRANSPORT_MODE, p0, p1); }
	static Any _0xF1622CE88A1946FB() { return Native::Invoke<Any>(0xF1622CE88A1946FB); }
	static void _PROMPT_DELETE(Any p0) { return Native::Invoke<void, Any>(N::_PROMPT_DELETE, p0); }
	static Any _PROMPT_IS_VALID(Any p0) { return Native::Invoke<Any, Any>(N::_PROMPT_IS_VALID, p0); }
	static Any _PROMPT_IS_ACTIVE(Any p0) { return Native::Invoke<Any, Any>(N::_PROMPT_IS_ACTIVE, p0); }
	static void _PROMPT_SET_VISIBLE(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(N::_PROMPT_SET_VISIBLE, p0, p1); }
	static void _PROMPT_SET_ENABLED(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(N::_PROMPT_SET_ENABLED, p0, p1); }
	static void _PROMPT_SET_TEXT(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(N::_PROMPT_SET_TEXT, p0, p1); }
	static void _PROMPT_SET_ATTRIBUTE(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(N::_PROMPT_SET_ATTRIBUTE, p0, p1, p2); }
	static void _0xF4A5C4509BF923B1(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xF4A5C4509BF923B1, p0, p1); }
	static void _0x53CE46C01A089DA1(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x53CE46C01A089DA1, p0, p1); }
	static void _0xA520C7B05FA4EB2A(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xA520C7B05FA4EB2A, p0, p1); }
	static void _0x4D107406667423BE(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x4D107406667423BE, p0, p1); }
	static void _PROMPT_SET_POSITION(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<void, Any, Any, Any, Any>(N::_PROMPT_SET_POSITION, p0, p1, p2, p3); }
	static void _0x0C718001B77CA468(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x0C718001B77CA468, p0, p1); }
	static Any _PROMPT_IS_PRESSED(Any p0) { return Native::Invoke<Any, Any>(N::_PROMPT_IS_PRESSED, p0); }
	static Any _PROMPT_IS_JUST_PRESSED(Any p0) { return Native::Invoke<Any, Any>(N::_PROMPT_IS_JUST_PRESSED, p0); }
	static Any _PROMPT_IS_JUST_RELEASED(Any p0) { return Native::Invoke<Any, Any>(N::_PROMPT_IS_JUST_RELEASED, p0); }
	static Any _PROMPT_IS_RELEASED(Any p0) { return Native::Invoke<Any, Any>(N::_PROMPT_IS_RELEASED, p0); }
	static void _PROMPT_GLOBAL_ENABLE_PROMPT_TYPE_THIS_FRAME(Any p0) { return Native::Invoke<void, Any>(N::_PROMPT_GLOBAL_ENABLE_PROMPT_TYPE_THIS_FRAME, p0); }
	static void _PROMPT_GLOBAL_DISABLE_PROMPT_TYPE_THIS_FRAME(Any p0) { return Native::Invoke<void, Any>(N::_PROMPT_GLOBAL_DISABLE_PROMPT_TYPE_THIS_FRAME, p0); }
	static void _PROMPT_GLOBAL_FILTER_CLEAR() { return Native::Invoke<void>(N::_PROMPT_GLOBAL_FILTER_CLEAR); }
	static void _PROMPT_GLOBAL_SET_FAVOURED_PED_FOR_CONFLICT_RESOLUTION(Any p0) { return Native::Invoke<void, Any>(N::_PROMPT_GLOBAL_SET_FAVOURED_PED_FOR_CONFLICT_RESOLUTION, p0); }
	static void _PROMPT_GLOBAL_CLEAR_FAVOURED_PED_FOR_CONFLICT_RESOLUTION() { return Native::Invoke<void>(N::_PROMPT_GLOBAL_CLEAR_FAVOURED_PED_FOR_CONFLICT_RESOLUTION); }
	static Any _PROMPT_IS_ENABLED(Any p0) { return Native::Invoke<Any, Any>(N::_PROMPT_IS_ENABLED, p0); }
	static Any _0x1BE19185B8AFE299() { return Native::Invoke<Any>(0x1BE19185B8AFE299); }
	static Any _0xD6BD313CFA41E57A() { return Native::Invoke<Any>(0xD6BD313CFA41E57A); }
	static Any _0xD9459157EB22C895() { return Native::Invoke<Any>(0xD9459157EB22C895); }
	static Any _0x6095358C4142932A() { return Native::Invoke<Any>(0x6095358C4142932A); }
	static void _PROMPT_SET_ORDERING_AS_INPUT_TYPE(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(N::_PROMPT_SET_ORDERING_AS_INPUT_TYPE, p0, p1); }
	static Any _0xD877AF112AD2B41B() { return Native::Invoke<Any>(0xD877AF112AD2B41B); }
	static Any CREATE_FAKE_MP_GAMER_TAG() { return Native::Invoke<Any>(N::CREATE_FAKE_MP_GAMER_TAG); }
	static Any _0xE961BF23EAB76B12() { return Native::Invoke<Any>(0xE961BF23EAB76B12); }
	static void REMOVE_MP_GAMER_TAG(int gamerTagId) { return Native::Invoke<void, int>(N::REMOVE_MP_GAMER_TAG, gamerTagId); }
	static BOOL IS_MP_GAMER_TAG_ACTIVE(int gamerTagId) { return Native::Invoke<BOOL, int>(N::IS_MP_GAMER_TAG_ACTIVE, gamerTagId); }
	static Any _0x502E1591A504F843() { return Native::Invoke<Any>(0x502E1591A504F843); }
	static Any _0x93171DDDAB274EB8() { return Native::Invoke<Any>(0x93171DDDAB274EB8); }
	static void _0x25B9C78A25105C35(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x25B9C78A25105C35, p0, p1); }
	static Any _0x84BD27DDF9575816() { return Native::Invoke<Any>(0x84BD27DDF9575816); }
	static Any _0xEF7AB1A0E8C86170() { return Native::Invoke<Any>(0xEF7AB1A0E8C86170); }
	static Any SET_MP_GAMER_TAG_NAME() { return Native::Invoke<Any>(N::SET_MP_GAMER_TAG_NAME); }
	static Any _0x1EA716E0628A6F44() { return Native::Invoke<Any>(0x1EA716E0628A6F44); }
	static Any SET_MP_GAMER_TAG_BIG_TEXT() { return Native::Invoke<Any>(N::SET_MP_GAMER_TAG_BIG_TEXT); }
	static void _0x5F57522BC1EB9D9D(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x5F57522BC1EB9D9D, p0, p1); }
	static void _0x95384C6CE1526EFF(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x95384C6CE1526EFF, p0, p1); }
	static Any _0xFFF6579CF0139FCE() { return Native::Invoke<Any>(0xFFF6579CF0139FCE); }
	static Any _0x1F9A64C2804B3471() { return Native::Invoke<Any>(0x1F9A64C2804B3471); }
}
namespace _NAMESPACE29
{
	static void _0x66F9EB44342BB4C5(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x66F9EB44342BB4C5, p0, p1); }
	static void _0x0B9F7A01EC50448D(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x0B9F7A01EC50448D, p0, p1); }
	static void _0x0EABF182FBB63D72(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0x0EABF182FBB63D72, p0, p1, p2); }
	static Any _0x6098139150DCC745(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x6098139150DCC745, p0, p1); }
	static void _0x873C792E07A32C8B(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x873C792E07A32C8B, p0, p1); }
}
namespace _NAMESPACE30
{
	static Any _SET_MOUSE_CURSOR_ACTIVE_THIS_FRAME() { return Native::Invoke<Any>(N::_SET_MOUSE_CURSOR_ACTIVE_THIS_FRAME); }
	static Any _SET_MOUSE_CURSOR_SPRITE() { return Native::Invoke<Any>(N::_SET_MOUSE_CURSOR_SPRITE); }
	static Any _0x61CAE9D1FD055E44() { return Native::Invoke<Any>(0x61CAE9D1FD055E44); }
	static Any _0xF7F51A57349739F2() { return Native::Invoke<Any>(0xF7F51A57349739F2); }
}
namespace INTERIOR
{
	static BOOL IS_VALID_INTERIOR(int interiorID) { return Native::Invoke<BOOL, int>(N::IS_VALID_INTERIOR, interiorID); }
	static void _0x8451E87D3C2B0286(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0x8451E87D3C2B0286, p0, p1, p2); }
	static Any _0x3039BE60B3749716(Any p0) { return Native::Invoke<Any, Any>(0x3039BE60B3749716, p0); }
	static Any _0x2C9746D0CA15BE1C(Any p0) { return Native::Invoke<Any, Any>(0x2C9746D0CA15BE1C, p0); }
	static BOOL IS_INTERIOR_SCENE() { return Native::Invoke<BOOL>(N::IS_INTERIOR_SCENE); }
	static void CLEAR_ROOM_FOR_ENTITY(Entity entity) { return Native::Invoke<void, Entity>(N::CLEAR_ROOM_FOR_ENTITY, entity); }
	static void FORCE_ROOM_FOR_ENTITY(Entity entity, int interiorID, Hash roomHashKey) { return Native::Invoke<void, Entity, int, Hash>(N::FORCE_ROOM_FOR_ENTITY, entity, interiorID, roomHashKey); }
	static Hash GET_ROOM_KEY_FROM_ENTITY(Entity entity) { return Native::Invoke<Hash, Entity>(N::GET_ROOM_KEY_FROM_ENTITY, entity); }
	static Hash GET_KEY_FOR_ENTITY_IN_ROOM(Entity entity) { return Native::Invoke<Hash, Entity>(N::GET_KEY_FOR_ENTITY_IN_ROOM, entity); }
	static int GET_INTERIOR_FROM_ENTITY(Entity entity) { return Native::Invoke<int, Entity>(N::GET_INTERIOR_FROM_ENTITY, entity); }
	static void _0x5BD616735F16BF5C(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x5BD616735F16BF5C, p0, p1); }
	static Any FORCE_ROOM_FOR_GAME_VIEWPORT() { return Native::Invoke<Any>(N::FORCE_ROOM_FOR_GAME_VIEWPORT); }
	static void CLEAR_ROOM_FOR_GAME_VIEWPORT() { return Native::Invoke<void>(N::CLEAR_ROOM_FOR_GAME_VIEWPORT); }
	static Any _0xBC8A281FF125C655() { return Native::Invoke<Any>(0xBC8A281FF125C655); }
	static int GET_INTERIOR_AT_COORDS(float x, float y, float z) { return Native::Invoke<int, float, float, float>(N::GET_INTERIOR_AT_COORDS, x, y, z); }
	static void PIN_INTERIOR_IN_MEMORY(Any p0) { return Native::Invoke<void, Any>(N::PIN_INTERIOR_IN_MEMORY, p0); }
	static void UNPIN_INTERIOR(int interiorID) { return Native::Invoke<void, int>(N::UNPIN_INTERIOR, interiorID); }
	static BOOL IS_INTERIOR_READY(int interiorID) { return Native::Invoke<BOOL, int>(N::IS_INTERIOR_READY, interiorID); }
	static Any _0xB5EF6FEF2DC9EBED() { return Native::Invoke<Any>(0xB5EF6FEF2DC9EBED); }
	static int GET_INTERIOR_AT_COORDS_WITH_TYPE(float x, float y, float z, char* interiorType) { return Native::Invoke<int, float, float, float, char*>(N::GET_INTERIOR_AT_COORDS_WITH_TYPE, x, y, z, interiorType); }
	static Any GET_INTERIOR_AT_COORDS_WITH_TYPEHASH(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<Any, Any, Any, Any, Any>(N::GET_INTERIOR_AT_COORDS_WITH_TYPEHASH, p0, p1, p2, p3); }
	static BOOL _ARE_COORDS_COLLIDING_WITH_EXTERIOR(float x, float y, float z) { return Native::Invoke<BOOL, float, float, float>(N::_ARE_COORDS_COLLIDING_WITH_EXTERIOR, x, y, z); }
	static int GET_INTERIOR_FROM_COLLISION(float x, float y, float z) { return Native::Invoke<int, float, float, float>(N::GET_INTERIOR_FROM_COLLISION, x, y, z); }
	static void ACTIVATE_INTERIOR_ENTITY_SET(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(N::ACTIVATE_INTERIOR_ENTITY_SET, p0, p1, p2); }
	static void DEACTIVATE_INTERIOR_ENTITY_SET(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(N::DEACTIVATE_INTERIOR_ENTITY_SET, p0, p1, p2); }
	static Any IS_INTERIOR_ENTITY_SET_ACTIVE(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(N::IS_INTERIOR_ENTITY_SET_ACTIVE, p0, p1); }
	static Any _0xD56FF170710FC826(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0xD56FF170710FC826, p0, p1); }
	static void DISABLE_INTERIOR(int interiorID, BOOL toggle) { return Native::Invoke<void, int, BOOL>(N::DISABLE_INTERIOR, interiorID, toggle); }
	static void _0x2533F2AB0EB9C6F9(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x2533F2AB0EB9C6F9, p0, p1); }
	static void _0xFE2B3D5500B1B2E4(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xFE2B3D5500B1B2E4, p0, p1); }
}
namespace _NAMESPACE32
{
	static Any _0x13D234A2A3F66E63(Any p0) { return Native::Invoke<Any, Any>(0x13D234A2A3F66E63, p0); }
	static Any _0xADDD1E7C0ECF7D95(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0xADDD1E7C0ECF7D95, p0, p1); }
	static Any _0xE80E50BEE276A54A(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0xE80E50BEE276A54A, p0, p1); }
	static Any _0x112BCA290D2EB53C(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { return Native::Invoke<Any, Any, Any, Any, Any, Any, Any, Any, Any>(0x112BCA290D2EB53C, p0, p1, p2, p3, p4, p5, p6, p7); }
	static void _0x46743BBFEDBC859E(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0x46743BBFEDBC859E, p0, p1, p2); }
	static void _0x65A5F70F4A292EBE(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0x65A5F70F4A292EBE, p0, p1, p2); }
	static void _0x9A113C660AEA3832(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0x9A113C660AEA3832, p0, p1, p2); }
	static Any _0xD740F11FBC8AEF43() { return Native::Invoke<Any>(0xD740F11FBC8AEF43); }
	static Any _0xF9933164965533B7() { return Native::Invoke<Any>(0xF9933164965533B7); }
	static Any _0x4AEF1FB5B9011D75(Any p0) { return Native::Invoke<Any, Any>(0x4AEF1FB5B9011D75, p0); }
	static Any _0xA4550FE9C512E3DD(Any p0) { return Native::Invoke<Any, Any>(0xA4550FE9C512E3DD, p0); }
	static Any _0x245D07651B1D183B(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x245D07651B1D183B, p0, p1); }
	static Any _0x2BAE4880DCDD560B(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x2BAE4880DCDD560B, p0, p1); }
	static Any _0x2E1CDC1FF3B8473E(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x2E1CDC1FF3B8473E, p0, p1); }
	static Any _0x0C093C1787F18519(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x0C093C1787F18519, p0, p1); }
	static Any _0xAB5F12746A099A0E(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0xAB5F12746A099A0E, p0, p1); }
	static Any _0x0FBBFFC891A97C81(Any p0) { return Native::Invoke<Any, Any>(0x0FBBFFC891A97C81, p0); }
	static Any _0xB881CA836CC4B6D4(Any p0) { return Native::Invoke<Any, Any>(0xB881CA836CC4B6D4, p0); }
	static Any _0x4C543D5DFCD2DAFD(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x4C543D5DFCD2DAFD, p0, p1); }
	static Any _0x886DFD3E185C8A89(Any p0, Any p1, Any p2, Any p3, Any p4) { return Native::Invoke<Any, Any, Any, Any, Any, Any>(0x886DFD3E185C8A89, p0, p1, p2, p3, p4); }
	static Any _0x751A7E0EAEDAD0D3() { return Native::Invoke<Any>(0x751A7E0EAEDAD0D3); }
	static Any _0x5D6182F3BCE1333B(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x5D6182F3BCE1333B, p0, p1); }
	static Any _0x9700E8EFC4AB9089(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<Any, Any, Any, Any, Any>(0x9700E8EFC4AB9089, p0, p1, p2, p3); }
	static Any _0x025A1B1FB03FBF61(Any p0, Any p1, Any p2, Any p3, Any p4) { return Native::Invoke<Any, Any, Any, Any, Any, Any>(0x025A1B1FB03FBF61, p0, p1, p2, p3, p4); }
	static Any _0xCD9A485F2B383B44(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<Any, Any, Any, Any, Any>(0xCD9A485F2B383B44, p0, p1, p2, p3); }
	static Any _0xCB5D11F9508A928D(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return Native::Invoke<Any, Any, Any, Any, Any, Any, Any, Any>(0xCB5D11F9508A928D, p0, p1, p2, p3, p4, p5, p6); }
	static Any _0xD80A8854DB5CFBA5(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<Any, Any, Any, Any, Any>(0xD80A8854DB5CFBA5, p0, p1, p2, p3); }
	static Any _0x3E4E811480B3AE79(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<Any, Any, Any, Any, Any>(0x3E4E811480B3AE79, p0, p1, p2, p3); }
	static Any _0xB4158C8C9A3B5DCE(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<Any, Any, Any, Any, Any>(0xB4158C8C9A3B5DCE, p0, p1, p2, p3); }
	static Any _0xDCCAA7C3BFD88862(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return Native::Invoke<Any, Any, Any, Any, Any, Any, Any>(0xDCCAA7C3BFD88862, p0, p1, p2, p3, p4, p5); }
	static Any _0xF2753D691BCDA314(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(0xF2753D691BCDA314, p0, p1, p2); }
	static Any _0x80D78BDC9D88EF07(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<Any, Any, Any, Any, Any>(0x80D78BDC9D88EF07, p0, p1, p2, p3); }
	static Any _0x640F890C3E5A3FFD(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(0x640F890C3E5A3FFD, p0, p1, p2); }
	static Any _0x82FA24C3D3FCD9B7(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(0x82FA24C3D3FCD9B7, p0, p1, p2); }
	static Any _0x42A2F33A1942E865(Any p0) { return Native::Invoke<Any, Any>(0x42A2F33A1942E865, p0); }
	static Any _0x734311E2852760D0(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(0x734311E2852760D0, p0, p1, p2); }
	static Any _0x22E590F108289A9D(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<Any, Any, Any, Any, Any>(0x22E590F108289A9D, p0, p1, p2, p3); }
	static Any _0x88B58B83A43A8CAB() { return Native::Invoke<Any>(0x88B58B83A43A8CAB); }
	static Any _0xD08685BA892DBFAB(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<Any, Any, Any, Any, Any>(0xD08685BA892DBFAB, p0, p1, p2, p3); }
	static void _0x0349404A22736740(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0x0349404A22736740, p0, p1, p2); }
	static Any _0x6D2F987736A42D4C() { return Native::Invoke<Any>(0x6D2F987736A42D4C); }
	static void _0x766315A564594401(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0x766315A564594401, p0, p1, p2); }
	static void _0x6A564540FAC12211(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x6A564540FAC12211, p0, p1); }
	static Any _0x3D10D7179D7034AF(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(0x3D10D7179D7034AF, p0, p1, p2); }
	static Any _0x227522FD59DDB7E8(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(0x227522FD59DDB7E8, p0, p1, p2); }
	static Any _0xC97E0D2302382211(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0xC97E0D2302382211, p0, p1); }
	static Any _0xE787F05DFC977BDE(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0xE787F05DFC977BDE, p0, p1); }
	static Any _0xE843D21A8E2498AA(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0xE843D21A8E2498AA, p0, p1); }
	static Any _0x033EE4B89F3AC545(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(0x033EE4B89F3AC545, p0, p1, p2); }
	static Any _0xBE012571B25F5ACA(Any p0, Any p1, Any p2, Any p3, Any p4) { return Native::Invoke<Any, Any, Any, Any, Any, Any>(0xBE012571B25F5ACA, p0, p1, p2, p3, p4); }
	static Any _0x780C5B9AE2819807(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x780C5B9AE2819807, p0, p1); }
	static Any _0x6452B1D357D81742(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x6452B1D357D81742, p0, p1); }
	static Any _0xB991FE166FAF84FD() { return Native::Invoke<Any>(0xB991FE166FAF84FD); }
	static Any _0x9AC53CB6907B4428(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(0x9AC53CB6907B4428, p0, p1, p2); }
	static Any _0x9D21B185ABC2DBC4(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<Any, Any, Any, Any, Any>(0x9D21B185ABC2DBC4, p0, p1, p2, p3); }
	static void _0x75CFAC49301E134F(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0x75CFAC49301E134F, p0, p1, p2); }
	static Any _0x9D21B185ABC2DBC5(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<Any, Any, Any, Any, Any>(0x9D21B185ABC2DBC5, p0, p1, p2, p3); }
	static void _0x75CFAC49301E134E(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0x75CFAC49301E134E, p0, p1, p2); }
	static Any _0x46DB71883EE9D5AF(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<Any, Any, Any, Any, Any>(0x46DB71883EE9D5AF, p0, p1, p2, p3); }
	static void _0x951847CEF3D829FF(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0x951847CEF3D829FF, p0, p1, p2); }
	static Any _0x6862E4D93F64CF01(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<Any, Any, Any, Any, Any>(0x6862E4D93F64CF01, p0, p1, p2, p3); }
	static Any _0x597F571DDEE3FFAC() { return Native::Invoke<Any>(0x597F571DDEE3FFAC); }
	static Any _0xA6AA9F56BC6CFF58() { return Native::Invoke<Any>(0xA6AA9F56BC6CFF58); }
	static Any _0x644CCB76A76CFBD6() { return Native::Invoke<Any>(0x644CCB76A76CFBD6); }
	static Any _0x3112ADB9D5F3426B() { return Native::Invoke<Any>(0x3112ADB9D5F3426B); }
	static void _0xE36D4A38D28D9CFB(Any p0) { return Native::Invoke<void, Any>(0xE36D4A38D28D9CFB, p0); }
	static Any _0x7C7E4AB748EA3B07() { return Native::Invoke<Any>(0x7C7E4AB748EA3B07); }
	static Any _0xFC7563F482781A3D() { return Native::Invoke<Any>(0xFC7563F482781A3D); }
	static void _0xC04F47D488EF9EBA(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<void, Any, Any, Any, Any>(0xC04F47D488EF9EBA, p0, p1, p2, p3); }
	static void _0x9E58207B194488AC(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x9E58207B194488AC, p0, p1); }
	static void _0xFD41D1D4350F6413(Any p0) { return Native::Invoke<void, Any>(0xFD41D1D4350F6413, p0); }
	static void _0x9B4E793B1CB6550A() { return Native::Invoke<void>(0x9B4E793B1CB6550A); }
	static Any _0xF666EF30F4F0AC4E() { return Native::Invoke<Any>(0xF666EF30F4F0AC4E); }
	static void _0xD5D72F1624F3BA7C(Any p0) { return Native::Invoke<void, Any>(0xD5D72F1624F3BA7C, p0); }
	static void _0xE3A46370F70F3607(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xE3A46370F70F3607, p0, p1); }
	static void _0xE1F45A67A9F0DCBC(Any p0) { return Native::Invoke<void, Any>(0xE1F45A67A9F0DCBC, p0); }
	static void _0x6968CE7AC32F6788(Any p0) { return Native::Invoke<void, Any>(0x6968CE7AC32F6788, p0); }
}
namespace ITEMDATABASE
{
	static Any _ITEM_DATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(N::_ITEM_DATABASE_CAN_EQUIP_ITEM_ON_CATEGORY, p0, p1, p2); }
	static Any _ITEM_DATABASE_GET_FITS_SLOT_COUNT(Any p0) { return Native::Invoke<Any, Any>(N::_ITEM_DATABASE_GET_FITS_SLOT_COUNT, p0); }
	static Any _ITEM_DATABASE_GET_FITS_SLOT_INFO(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(N::_ITEM_DATABASE_GET_FITS_SLOT_INFO, p0, p1, p2); }
	static Any _ITEM_DATABASE_GET_HAS_SLOT_COUNT(Any p0) { return Native::Invoke<Any, Any>(N::_ITEM_DATABASE_GET_HAS_SLOT_COUNT, p0); }
	static Any _ITEM_DATABASE_GET_HAS_SLOT_INFO(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(N::_ITEM_DATABASE_GET_HAS_SLOT_INFO, p0, p1, p2); }
	static Any _0x2A610BEE7D341CC4() { return Native::Invoke<Any>(0x2A610BEE7D341CC4); }
	static Any _ITEM_DATABASE_FILLOUT_ITEM_INFO(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(N::_ITEM_DATABASE_FILLOUT_ITEM_INFO, p0, p1); }
	static Any _ITEM_DATABASE_FILLOUT_ACQUIRE_COST(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(N::_ITEM_DATABASE_FILLOUT_ACQUIRE_COST, p0, p1, p2); }
	static Any _ITEM_DATABASE_FILLOUT_SELL_PRICE(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(N::_ITEM_DATABASE_FILLOUT_SELL_PRICE, p0, p1, p2); }
	static Any _ITEM_DATABASE_FILLOUT_SATCHEL_DATA(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(N::_ITEM_DATABASE_FILLOUT_SATCHEL_DATA, p0, p1); }
	static Any _ITEM_DATABASE_FILLOUT_UI_DATA(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(N::_ITEM_DATABASE_FILLOUT_UI_DATA, p0, p1); }
	static Any _0x74C3B1093728D263() { return Native::Invoke<Any>(0x74C3B1093728D263); }
	static Any _ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_IDS(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(N::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_IDS, p0, p1); }
	static Any _ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_ID_INFO(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(N::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_ID_INFO, p0, p1); }
	static Any _ITEM_DATABASE_FILLOUT_TAG_DATA(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<Any, Any, Any, Any, Any>(N::_ITEM_DATABASE_FILLOUT_TAG_DATA, p0, p1, p2, p3); }
	static Any _ITEM_DATABASE_GET_ACQUIRE_COSTS_COUNT(Any p0) { return Native::Invoke<Any, Any>(N::_ITEM_DATABASE_GET_ACQUIRE_COSTS_COUNT, p0); }
	static Any _ITEM_DATABASE_GET_ACQUIRE_COST(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(N::_ITEM_DATABASE_GET_ACQUIRE_COST, p0, p1, p2); }
	static Any _ITEM_DATABASE_CREATE_ITEM_COLLECTION(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(N::_ITEM_DATABASE_CREATE_ITEM_COLLECTION, p0, p1, p2); }
	static Any _0xD389A2549C4EFB30(Any p0) { return Native::Invoke<Any, Any>(0xD389A2549C4EFB30, p0); }
	static Any _0x8750F69A720C2E41(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(0x8750F69A720C2E41, p0, p1, p2); }
	static Any _0xCBB7B6EDFA933ADE(Any p0) { return Native::Invoke<Any, Any>(0xCBB7B6EDFA933ADE, p0); }
	static Any _ITEM_DATABASE_IS_INTRINSIC_ITEM(Any p0) { return Native::Invoke<Any, Any>(N::_ITEM_DATABASE_IS_INTRINSIC_ITEM, p0); }
	static Any _ITEM_DATABASE_IS_OVERPOWERED_ITEM(Any p0) { return Native::Invoke<Any, Any>(N::_ITEM_DATABASE_IS_OVERPOWERED_ITEM, p0); }
	static Any _ITEM_DATABASE_IS_KEY_VALID(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(N::_ITEM_DATABASE_IS_KEY_VALID, p0, p1); }
	static Any _ITEM_DATABASE_GET_BUNDLE_ID(Any p0) { return Native::Invoke<Any, Any>(N::_ITEM_DATABASE_GET_BUNDLE_ID, p0); }
	static Any _ITEM_DATABASE_GET_BUNDLE_ITEM_COUNT(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(N::_ITEM_DATABASE_GET_BUNDLE_ITEM_COUNT, p0, p1); }
	static Any _ITEM_DATABASE_GET_BUNDLE_ITEM_INFO(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<Any, Any, Any, Any, Any>(N::_ITEM_DATABASE_GET_BUNDLE_ITEM_INFO, p0, p1, p2, p3); }
	static Any _0x4308812A6E9CA62E() { return Native::Invoke<Any>(0x4308812A6E9CA62E); }
	static Any _0xA97EE5E4589FCF5A() { return Native::Invoke<Any>(0xA97EE5E4589FCF5A); }
	static Any _0x7A35A72A692BE9DB() { return Native::Invoke<Any>(0x7A35A72A692BE9DB); }
	static Any _0x3A0B667ABFF87F6E() { return Native::Invoke<Any>(0x3A0B667ABFF87F6E); }
	static Any _ITEM_DATABASE_IS_SHOP_KEY_VALID(Any p0) { return Native::Invoke<Any, Any>(N::_ITEM_DATABASE_IS_SHOP_KEY_VALID, p0); }
	static Any _ITEM_DATABASE_GET_SHOP_INVENTORIES_ITEMS_COUNT(Any p0) { return Native::Invoke<Any, Any>(N::_ITEM_DATABASE_GET_SHOP_INVENTORIES_ITEMS_COUNT, p0); }
	static Any _ITEM_DATABASE_GET_SHOP_INVENTORIES_ITEM_INFO(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(N::_ITEM_DATABASE_GET_SHOP_INVENTORIES_ITEM_INFO, p0, p1, p2); }
	static Any _ITEM_DATABASE_GET_SHOP_INVENTORIES_ITEM_INFO_BY_KEY(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(N::_ITEM_DATABASE_GET_SHOP_INVENTORIES_ITEM_INFO_BY_KEY, p0, p1, p2); }
	static Any _ITEM_DATABASE_GET_SHOP_INVENTORIES_REQUIREMENT_GROUP_INFO(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<Any, Any, Any, Any, Any>(N::_ITEM_DATABASE_GET_SHOP_INVENTORIES_REQUIREMENT_GROUP_INFO, p0, p1, p2, p3); }
	static Any _ITEM_DATABASE_GET_SHOP_INVENTORIES_REQUIREMENT_INFO(Any p0, Any p1, Any p2, Any p3, Any p4) { return Native::Invoke<Any, Any, Any, Any, Any, Any>(N::_ITEM_DATABASE_GET_SHOP_INVENTORIES_REQUIREMENT_INFO, p0, p1, p2, p3, p4); }
	static Any _0x17721003A66C72BF() { return Native::Invoke<Any>(0x17721003A66C72BF); }
	static Any _ITEM_DATABASE_IS_SHOP_LAYOUT_KEY_VALID(Any p0) { return Native::Invoke<Any, Any>(N::_ITEM_DATABASE_IS_SHOP_LAYOUT_KEY_VALID, p0); }
	static Any _ITEM_DATABASE_GET_SHOP_LAYOUT_INFO(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(N::_ITEM_DATABASE_GET_SHOP_LAYOUT_INFO, p0, p1); }
	static Any _ITEM_DATABASE_GET_SHOP_LAYOUT_ROOT_MENU_INFO(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(N::_ITEM_DATABASE_GET_SHOP_LAYOUT_ROOT_MENU_INFO, p0, p1, p2); }
	static Any _ITEM_DATABASE_GET_SHOP_LAYOUT_MENU_INFO_BY_ID(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(N::_ITEM_DATABASE_GET_SHOP_LAYOUT_MENU_INFO_BY_ID, p0, p1, p2); }
	static Any _ITEM_DATABASE_GET_SHOP_LAYOUT_MENU_INFO_BY_INDEX(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<Any, Any, Any, Any, Any>(N::_ITEM_DATABASE_GET_SHOP_LAYOUT_MENU_INFO_BY_INDEX, p0, p1, p2, p3); }
	static Any _ITEM_DATABASE_GET_SHOP_LAYOUT_MENU_PAGE_KEY(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<Any, Any, Any, Any, Any>(N::_ITEM_DATABASE_GET_SHOP_LAYOUT_MENU_PAGE_KEY, p0, p1, p2, p3); }
	static Any _ITEM_DATABASE_GET_SHOP_LAYOUT_PAGE_INFO_BY_KEY(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(N::_ITEM_DATABASE_GET_SHOP_LAYOUT_PAGE_INFO_BY_KEY, p0, p1, p2); }
	static Any _ITEM_DATABASE_GET_SHOP_LAYOUT_PAGE_ITEM_KEY(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return Native::Invoke<Any, Any, Any, Any, Any, Any, Any>(N::_ITEM_DATABASE_GET_SHOP_LAYOUT_PAGE_ITEM_KEY, p0, p1, p2, p3, p4, p5); }
	static Any _ITEM_DATABASE_IS_BUY_AWARD_KEY_VALID(Any p0) { return Native::Invoke<Any, Any>(N::_ITEM_DATABASE_IS_BUY_AWARD_KEY_VALID, p0); }
	static Any _ITEM_DATABASE_FILLOUT_BUY_AWARD_ACQUIRE_COSTS(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<Any, Any, Any, Any, Any>(N::_ITEM_DATABASE_FILLOUT_BUY_AWARD_ACQUIRE_COSTS, p0, p1, p2, p3); }
	static Any _0xF8D09EF8CE61D7BF() { return Native::Invoke<Any>(0xF8D09EF8CE61D7BF); }
	static Any _ITEM_DATABASE_GET_ITEM_PRICE_MODIFIERS(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(N::_ITEM_DATABASE_GET_ITEM_PRICE_MODIFIERS, p0, p1); }
	static Any _ITEM_DATABASE_FILLOUT_PRICE_MODIFIER_BY_KEY(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(N::_ITEM_DATABASE_FILLOUT_PRICE_MODIFIER_BY_KEY, p0, p1); }
	static Any _ITEM_DATABASE_GET_NUMBER_OF_MODIFIED_PRICES(Any p0) { return Native::Invoke<Any, Any>(N::_ITEM_DATABASE_GET_NUMBER_OF_MODIFIED_PRICES, p0); }
	static Any _ITEM_DATABASE_GET_MODIFIED_PRICE(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(N::_ITEM_DATABASE_GET_MODIFIED_PRICE, p0, p1); }
	static Any _ITEM_DATABASE_GET_NUMBER_OF_MODIFIERS(Any p0) { return Native::Invoke<Any, Any>(N::_ITEM_DATABASE_GET_NUMBER_OF_MODIFIERS, p0); }
	static Any _ITEM_DATABASE_FILLOUT_MODIFIER(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(N::_ITEM_DATABASE_FILLOUT_MODIFIER, p0, p1, p2); }
	static Any _0xEF254F1A4C08B7E6() { return Native::Invoke<Any>(0xEF254F1A4C08B7E6); }
	static Any _0x3FAA928A79591761() { return Native::Invoke<Any>(0x3FAA928A79591761); }
	static Any _0x48229CE0C7938237() { return Native::Invoke<Any>(0x48229CE0C7938237); }
	static Any _0x121D2005DD64496B() { return Native::Invoke<Any>(0x121D2005DD64496B); }
	static Any _0x8D029948CA29409B() { return Native::Invoke<Any>(0x8D029948CA29409B); }
	static Any _ITEM_DATABASE_DOES_ITEM_HAVE_TAG(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(N::_ITEM_DATABASE_DOES_ITEM_HAVE_TAG, p0, p1, p2); }
	static Any _0x99C6EA66DFE73757() { return Native::Invoke<Any>(0x99C6EA66DFE73757); }
	static Any _ITEM_DATABASE_GET_ITEM_TAG_TYPE(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(N::_ITEM_DATABASE_GET_ITEM_TAG_TYPE, p0, p1); }
	static Any _ITEM_DATABASE_LOCALIZATION_GET_NUM_LABEL_TYPES(Any p0) { return Native::Invoke<Any, Any>(N::_ITEM_DATABASE_LOCALIZATION_GET_NUM_LABEL_TYPES, p0); }
	static Any _ITEM_DATABASE_LOCALIZATION_GET_NUM_VALUES(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(N::_ITEM_DATABASE_LOCALIZATION_GET_NUM_VALUES, p0, p1); }
	static Any _ITEM_DATABASE_LOCALIZATION_GET_TYPE(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(N::_ITEM_DATABASE_LOCALIZATION_GET_TYPE, p0, p1); }
	static Any _ITEM_DATABASE_LOCALIZATION_GET_VALUE(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(N::_ITEM_DATABASE_LOCALIZATION_GET_VALUE, p0, p1, p2); }
	static Any _0xF4452CE83118C738() { return Native::Invoke<Any>(0xF4452CE83118C738); }
}
namespace ITEMSET
{
	static Vehicle CREATE_ITEMSET(Vehicle distri) { return Native::Invoke<Vehicle, Vehicle>(N::CREATE_ITEMSET, distri); }
	static void DESTROY_ITEMSET(Any p0) { return Native::Invoke<void, Any>(N::DESTROY_ITEMSET, p0); }
	static BOOL IS_ITEMSET_VALID(Any p0) { return Native::Invoke<BOOL, Any>(N::IS_ITEMSET_VALID, p0); }
	static BOOL ADD_TO_ITEMSET(Any p0, Any p1) { return Native::Invoke<BOOL, Any, Any>(N::ADD_TO_ITEMSET, p0, p1); }
	static void REMOVE_FROM_ITEMSET(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(N::REMOVE_FROM_ITEMSET, p0, p1); }
	static Any GET_ITEMSET_SIZE(ScrHandle x) { return Native::Invoke<Any, ScrHandle>(N::GET_ITEMSET_SIZE, x); }
	static Any GET_INDEXED_ITEM_IN_ITEMSET(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(N::GET_INDEXED_ITEM_IN_ITEMSET, p0, p1); }
	static Any _0x9FC3CDB5CE815901(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x9FC3CDB5CE815901, p0, p1); }
	static BOOL IS_IN_ITEMSET(Any p0, Any p1) { return Native::Invoke<BOOL, Any, Any>(N::IS_IN_ITEMSET, p0, p1); }
	static void CLEAN_ITEMSET(Any p0) { return Native::Invoke<void, Any>(N::CLEAN_ITEMSET, p0); }
	static void _0x20A4BF0E09BEE146(Any p0) { return Native::Invoke<void, Any>(0x20A4BF0E09BEE146, p0); }
}
namespace _NAMESPACE35
{
	static void _0xF60386770878A98F(Any p0, Any p1, Any p2, Any p3, Any p4) { return Native::Invoke<void, Any, Any, Any, Any, Any>(0xF60386770878A98F, p0, p1, p2, p3, p4); }
	static void _0x785177E4D57D7389(Any p0, Any p1, Any p2, Any p3, Any p4) { return Native::Invoke<void, Any, Any, Any, Any, Any>(0x785177E4D57D7389, p0, p1, p2, p3, p4); }
	static Any _0xC08E804C91F47C80() { return Native::Invoke<Any>(0xC08E804C91F47C80); }
	static Any _0xFFEBE5AA96BC2E4E(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(0xFFEBE5AA96BC2E4E, p0, p1, p2); }
	static void _0x15ABD5004CAD2D99(Any p0) { return Native::Invoke<void, Any>(0x15ABD5004CAD2D99, p0); }
	static Any _0xF611DE44AEB36A1D() { return Native::Invoke<Any>(0xF611DE44AEB36A1D); }
	static Any _0x3D2674828A4E6B3C() { return Native::Invoke<Any>(0x3D2674828A4E6B3C); }
	static void _0xC5EB2755FA25F1E9(Any p0) { return Native::Invoke<void, Any>(0xC5EB2755FA25F1E9, p0); }
	static Any _0x54310AAB97B92816(Any p0) { return Native::Invoke<Any, Any>(0x54310AAB97B92816, p0); }
	static void _0x0E3BDEED21BEB945(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x0E3BDEED21BEB945, p0, p1); }
	static void _0x093A9D1F72DF0D19(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x093A9D1F72DF0D19, p0, p1); }
	static Any _0xC76F252371150D9A() { return Native::Invoke<Any>(0xC76F252371150D9A); }
	static Any _0xDD5FD601481F648B(Any p0) { return Native::Invoke<Any, Any>(0xDD5FD601481F648B, p0); }
	static void _0xA80FF73F772ACF6A(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xA80FF73F772ACF6A, p0, p1); }
	static void _0x062B4A4A3396351D(Any p0) { return Native::Invoke<void, Any>(0x062B4A4A3396351D, p0); }
	static void _0x331D349E0380B097(Any p0) { return Native::Invoke<void, Any>(0x331D349E0380B097, p0); }
	static void _0x292AD61A33A7A485() { return Native::Invoke<void>(0x292AD61A33A7A485); }
	static void _0x07E8B8B20570271C(Any p0) { return Native::Invoke<void, Any>(0x07E8B8B20570271C, p0); }
	static void _0x22741652985C84D0(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x22741652985C84D0, p0, p1); }
	static void _0x9C4352134B2835FB(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x9C4352134B2835FB, p0, p1); }
	static Any _0x9EF07CFBB19A9733() { return Native::Invoke<Any>(0x9EF07CFBB19A9733); }
	static void _0x8DE82BC774F3B862(Any p0) { return Native::Invoke<void, Any>(0x8DE82BC774F3B862, p0); }
	static void _0x956510F8C36B5C64() { return Native::Invoke<void>(0x956510F8C36B5C64); }
	static void _0x4752F68EB7F2D280(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0x4752F68EB7F2D280, p0, p1, p2); }
	static void _0x5E6F375CA101C108(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x5E6F375CA101C108, p0, p1); }
	static void _0x9BBDCB8DF789EBC1(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x9BBDCB8DF789EBC1, p0, p1); }
	static Any _0xAD401C63158ACBAA(Any p0) { return Native::Invoke<Any, Any>(0xAD401C63158ACBAA, p0); }
	static Any _0x148E7AC8141C9E64(Any p0) { return Native::Invoke<Any, Any>(0x148E7AC8141C9E64, p0); }
	static void _0xEDFC6C1FD1C964F5(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any, Any, Any, Any>(0xEDFC6C1FD1C964F5, p0, p1, p2, p3, p4, p5, p6, p7, p8); }
	static Any _0xF0B67BAD53C35BD9(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return Native::Invoke<Any, Any, Any, Any, Any, Any, Any, Any>(0xF0B67BAD53C35BD9, p0, p1, p2, p3, p4, p5, p6); }
	static Any _0x018F30D762E62DF8(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x018F30D762E62DF8, p0, p1); }
	static Any _0x318F0F9A4426CFA2(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x318F0F9A4426CFA2, p0, p1); }
	static Any _0x95878B13E272EF1F(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return Native::Invoke<Any, Any, Any, Any, Any, Any, Any, Any>(0x95878B13E272EF1F, p0, p1, p2, p3, p4, p5, p6); }
	static void _0x10827B5A0AAC56A7(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0x10827B5A0AAC56A7, p0, p1, p2); }
	static void _0xD7494DED50C6EF52(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0xD7494DED50C6EF52, p0, p1, p2); }
	static Any _0x69E181772886F48B(Any p0) { return Native::Invoke<Any, Any>(0x69E181772886F48B, p0); }
	static Any _0x0BB6DE7D23C60626(Any p0) { return Native::Invoke<Any, Any>(0x0BB6DE7D23C60626, p0); }
	static Any _0xF0FBFB9AB15F7734(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(0xF0FBFB9AB15F7734, p0, p1, p2); }
	static void _0x522F74636DF10201(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x522F74636DF10201, p0, p1); }
	static void _0xDA1A9ADC4E3D4B16(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0xDA1A9ADC4E3D4B16, p0, p1, p2); }
	static void _0xC805EB785824F712(Any p0) { return Native::Invoke<void, Any>(0xC805EB785824F712, p0); }
	static void _0x710448D44A64C213(Any p0) { return Native::Invoke<void, Any>(0x710448D44A64C213, p0); }
	static Any _0xECE3C34B270428D5() { return Native::Invoke<Any>(0xECE3C34B270428D5); }
	static Any _0xA22C46F16359471C() { return Native::Invoke<Any>(0xA22C46F16359471C); }
	static Any _0x82F11E1296996574() { return Native::Invoke<Any>(0x82F11E1296996574); }
	static void _0x3852237A3D9DF145(Any p0) { return Native::Invoke<void, Any>(0x3852237A3D9DF145, p0); }
	static Any _0x0EAF918F751F27BA(Any p0) { return Native::Invoke<Any, Any>(0x0EAF918F751F27BA, p0); }
	static Any _0xC0DF161950FB101E(Any p0) { return Native::Invoke<Any, Any>(0xC0DF161950FB101E, p0); }
	static Any _0xE4D6E45F491A66CB(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0xE4D6E45F491A66CB, p0, p1); }
	static Any _0xE9EB79CBF9C0F58A(Any p0) { return Native::Invoke<Any, Any>(0xE9EB79CBF9C0F58A, p0); }
	static void _0x21213B833EF4DAE7(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0x21213B833EF4DAE7, p0, p1, p2); }
	static void _0x61B98367D93F012F(Any p0) { return Native::Invoke<void, Any>(0x61B98367D93F012F, p0); }
	static void _0x6ABC50979655BEE7(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0x6ABC50979655BEE7, p0, p1, p2); }
	static void _0x390710D2DAFA6BFF(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x390710D2DAFA6BFF, p0, p1); }
	static Any _0x35E5E21F9159849C(Any p0) { return Native::Invoke<Any, Any>(0x35E5E21F9159849C, p0); }
	static Any _0xDAEFDFDB2AEECE37(Any p0) { return Native::Invoke<Any, Any>(0xDAEFDFDB2AEECE37, p0); }
	static Any _0x259CE340A8738814(Any p0) { return Native::Invoke<Any, Any>(0x259CE340A8738814, p0); }
	static Any _0xE083BEDA81709891() { return Native::Invoke<Any>(0xE083BEDA81709891); }
	static Any _0x89E005B1662F6E48(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(0x89E005B1662F6E48, p0, p1, p2); }
	static Any _0x3738B784DDD35CC6() { return Native::Invoke<Any>(0x3738B784DDD35CC6); }
	static Any _0x0BDFEBCF40A5F7E3() { return Native::Invoke<Any>(0x0BDFEBCF40A5F7E3); }
	static Any _0x009CF9A29972C298() { return Native::Invoke<Any>(0x009CF9A29972C298); }
	static Any _0x75CBF20BA47E4F89(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<Any, Any, Any, Any, Any>(0x75CBF20BA47E4F89, p0, p1, p2, p3); }
	static void _0x55F37F5F3F2475E1() { return Native::Invoke<void>(0x55F37F5F3F2475E1); }
	static void _0xBD944A3D36E992DE() { return Native::Invoke<void>(0xBD944A3D36E992DE); }
	static void _0x987BE590FB9D41E5(Any p0) { return Native::Invoke<void, Any>(0x987BE590FB9D41E5, p0); }
	static void _0xDCF12B89624AAC96(Any p0) { return Native::Invoke<void, Any>(0xDCF12B89624AAC96, p0); }
	static Any _0xDDCE8E960D1DE240() { return Native::Invoke<Any>(0xDDCE8E960D1DE240); }
	static void _0xDEA083C16BB91345() { return Native::Invoke<void>(0xDEA083C16BB91345); }
	static void _0x9C8A2BF37E966464(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x9C8A2BF37E966464, p0, p1); }
	static Any _0x9D5C9A5A3321B128(Any p0) { return Native::Invoke<Any, Any>(0x9D5C9A5A3321B128, p0); }
	static Any _0x0F230DE0DDBE3649(Any p0) { return Native::Invoke<Any, Any>(0x0F230DE0DDBE3649, p0); }
	static Any _0x9945A3E2528A02E8(Any p0) { return Native::Invoke<Any, Any>(0x9945A3E2528A02E8, p0); }
	static Any _0x717DA2281DF90855(Any p0) { return Native::Invoke<Any, Any>(0x717DA2281DF90855, p0); }
	static void _0x9B4C564BFA7CFF37(Any p0) { return Native::Invoke<void, Any>(0x9B4C564BFA7CFF37, p0); }
	static void _0x4B52BF96E225D230(Any p0) { return Native::Invoke<void, Any>(0x4B52BF96E225D230, p0); }
	static Any _0x2728C77FBC4B9796() { return Native::Invoke<Any>(0x2728C77FBC4B9796); }
	static Any _0x856CE8FDE2416602(Any p0) { return Native::Invoke<Any, Any>(0x856CE8FDE2416602, p0); }
	static Any _0x7351DA734F989F4E(Any p0) { return Native::Invoke<Any, Any>(0x7351DA734F989F4E, p0); }
	static Any _0x76CF93D4B416B288(Any p0) { return Native::Invoke<Any, Any>(0x76CF93D4B416B288, p0); }
	static void _0xF19706B1F8FFA88F(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xF19706B1F8FFA88F, p0, p1); }
	static void _0x2001687F9562FD9D(Any p0) { return Native::Invoke<void, Any>(0x2001687F9562FD9D, p0); }
	static void _0xC61EDEBF16CD9668(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0xC61EDEBF16CD9668, p0, p1, p2); }
	static void _0xE9AC8466ABE484BB(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xE9AC8466ABE484BB, p0, p1); }
	static Any _0x40851BCC33ACD9AB(Any p0) { return Native::Invoke<Any, Any>(0x40851BCC33ACD9AB, p0); }
	static Any _0xF46108C50A22B029() { return Native::Invoke<Any>(0xF46108C50A22B029); }
	static void _0x7803436E68C32B26() { return Native::Invoke<void>(0x7803436E68C32B26); }
	static void _0xC310239ACCCF5579() { return Native::Invoke<void>(0xC310239ACCCF5579); }
	static void _0x29CD4896ECB66C12() { return Native::Invoke<void>(0x29CD4896ECB66C12); }
	static void _0xE94B5E938619712E() { return Native::Invoke<void>(0xE94B5E938619712E); }
	static Any _0x7FC667F6DDFBCDCC(Any p0) { return Native::Invoke<Any, Any>(0x7FC667F6DDFBCDCC, p0); }
	static void _0x9C5BD8C562565CE6(Any p0) { return Native::Invoke<void, Any>(0x9C5BD8C562565CE6, p0); }
	static Any _0xCBFB4951F2E3934C() { return Native::Invoke<Any>(0xCBFB4951F2E3934C); }
	static void _0x819ADD5EF1742F47(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x819ADD5EF1742F47, p0, p1); }
	static void _0x00DB0BC05E3FAA4E(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x00DB0BC05E3FAA4E, p0, p1); }
	static void _0x0C392DB374655176(Any p0, Any p1, Any p2, Any p3, Any p4) { return Native::Invoke<void, Any, Any, Any, Any, Any>(0x0C392DB374655176, p0, p1, p2, p3, p4); }
	static Any _0xC687A23E166DCF68(Any p0) { return Native::Invoke<Any, Any>(0xC687A23E166DCF68, p0); }
	static Any _0x002BABE0B7D53136() { return Native::Invoke<Any>(0x002BABE0B7D53136); }
	static Any _0x26934083D3F2579C(Any p0) { return Native::Invoke<Any, Any>(0x26934083D3F2579C, p0); }
	static Any _0x532C5FDDB986EE5C(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(0x532C5FDDB986EE5C, p0, p1, p2); }
	static Any _0xB527099D1E1EED49(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(0xB527099D1E1EED49, p0, p1, p2); }
	static void _0xBCC6DC59E32A2BDC(Any p0) { return Native::Invoke<void, Any>(0xBCC6DC59E32A2BDC, p0); }
	static void _0xE0FA74AA3CCE650B(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xE0FA74AA3CCE650B, p0, p1); }
	static void _0x73BAD7B2F2DB50DE(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x73BAD7B2F2DB50DE, p0, p1); }
	static void _0xD6C0A8C7C0B2F82C(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xD6C0A8C7C0B2F82C, p0, p1); }
	static void _0xFEC85339AACA2A35(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xFEC85339AACA2A35, p0, p1); }
	static void _0x7EF2A2FE38D74456(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x7EF2A2FE38D74456, p0, p1); }
	static Any _0xC7DC5A0A7DF608CB(Any p0) { return Native::Invoke<Any, Any>(0xC7DC5A0A7DF608CB, p0); }
	static void _0xDE5FAA741A781F73(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xDE5FAA741A781F73, p0, p1); }
	static void _0x362086B911657B1A(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x362086B911657B1A, p0, p1); }
	static void _0x8F9DE75680275C9F(Any p0) { return Native::Invoke<void, Any>(0x8F9DE75680275C9F, p0); }
	static void _0x67EBDD958835956C(Any p0) { return Native::Invoke<void, Any>(0x67EBDD958835956C, p0); }
	static void _0x9772395CC73E8D1F(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x9772395CC73E8D1F, p0, p1); }
	static void _0x26D558692B25DD95(Any p0) { return Native::Invoke<void, Any>(0x26D558692B25DD95, p0); }
	static Any _0x0DBACA9C38C9A686(Any p0) { return Native::Invoke<Any, Any>(0x0DBACA9C38C9A686, p0); }
	static Any _0xD743C4293F47AFAD() { return Native::Invoke<Any>(0xD743C4293F47AFAD); }
	static void _0x8C598A930F471938(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x8C598A930F471938, p0, p1); }
	static void _0x35815F372D43E1E5(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x35815F372D43E1E5, p0, p1); }
	static void _0xA1B0E6301E2E02A6(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xA1B0E6301E2E02A6, p0, p1); }
	static void _0xAD3E07C37A7C1ADC(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xAD3E07C37A7C1ADC, p0, p1); }
	static void _0xA8A74AA79FB67159(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xA8A74AA79FB67159, p0, p1); }
	static void _0x7E7BF59F89FC6C6D(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<void, Any, Any, Any, Any>(0x7E7BF59F89FC6C6D, p0, p1, p2, p3); }
	static Any _0x2F9005E2EA4E5EE4() { return Native::Invoke<Any>(0x2F9005E2EA4E5EE4); }
}
namespace LOCALIZATION
{
	static Any _GET_SYSTEM_LANGUAGE() { return Native::Invoke<Any>(N::_GET_SYSTEM_LANGUAGE); }
	static Any GET_CURRENT_LANGUAGE() { return Native::Invoke<Any>(N::GET_CURRENT_LANGUAGE); }
	static Any _0x45D50415E4D885FF() { return Native::Invoke<Any>(0x45D50415E4D885FF); }
	static Any _LOCALIZATION_GET_USER_LANGUAGE() { return Native::Invoke<Any>(N::_LOCALIZATION_GET_USER_LANGUAGE); }
}
namespace MAP
{
	static Blip GET_BLIP_FROM_ENTITY(Entity entity) { return Native::Invoke<Blip, Entity>(N::GET_BLIP_FROM_ENTITY, entity); }
	static Blip GET_MAIN_PLAYER_BLIP_ID() { return Native::Invoke<Blip>(N::GET_MAIN_PLAYER_BLIP_ID); }
	static Any _0x3E593DF9C2962EC6(Any p0) { return Native::Invoke<Any, Any>(0x3E593DF9C2962EC6, p0); }
	static Any _0x554D9D53F696D002(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<Any, Any, Any, Any, Any>(0x554D9D53F696D002, p0, p1, p2, p3); }
	static Any _0x23F74C2FDA6E7C61(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x23F74C2FDA6E7C61, p0, p1); }
	static Any _0xA486008892065FB9() { return Native::Invoke<Any>(0xA486008892065FB9); }
	static Any _0x45F13B7E0A15C880(Any p0, Any p1, Any p2, Any p3, Any p4) { return Native::Invoke<Any, Any, Any, Any, Any, Any>(0x45F13B7E0A15C880, p0, p1, p2, p3, p4); }
	static Any _0xEC174ADBCB611ECC(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { return Native::Invoke<Any, Any, Any, Any, Any, Any, Any, Any, Any>(0xEC174ADBCB611ECC, p0, p1, p2, p3, p4, p5, p6, p7); }
	static Any _0xA6EF0C54A3443E70(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0xA6EF0C54A3443E70, p0, p1); }
	static Any _0xEDD964B7984AC291(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0xEDD964B7984AC291, p0, p1); }
	static Any _0xBD62D98799A3DAF0(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0xBD62D98799A3DAF0, p0, p1); }
	static Any _0x662D364ABF16DE2F(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x662D364ABF16DE2F, p0, p1); }
	static Any _0xB059D7BD3D78C16F(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0xB059D7BD3D78C16F, p0, p1); }
	static void _0x250C75EB1728CC0D(Any p0) { return Native::Invoke<void, Any>(0x250C75EB1728CC0D, p0); }
	static void SET_BLIP_FLASH_TIMER(Blip blip, int duration, Any p2) { return Native::Invoke<void, Blip, int, Any>(N::SET_BLIP_FLASH_TIMER, blip, duration, p2); }
	static void SET_BLIP_FLASHES(Blip blip, BOOL toggle, Any p2) { return Native::Invoke<void, Blip, BOOL, Any>(N::SET_BLIP_FLASHES, blip, toggle, p2); }
	static void TRIGGER_SONAR_BLIP(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<void, Any, Any, Any, Any>(N::TRIGGER_SONAR_BLIP, p0, p1, p2, p3); }
	static void _0x0C7A2289A5C4D7C9(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x0C7A2289A5C4D7C9, p0, p1); }
	static void _0x6E6E64788C07D2E0(Any p0) { return Native::Invoke<void, Any>(0x6E6E64788C07D2E0, p0); }
	static void SET_BLIP_COORDS(Blip blip, float posX, float posY, float posZ) { return Native::Invoke<void, Blip, float, float, float>(N::SET_BLIP_COORDS, blip, posX, posY, posZ); }
	static Vector3 GET_BLIP_COORDS(Blip blip) { return Native::Invoke<Vector3, Blip>(N::GET_BLIP_COORDS, blip); }
	static void SET_BLIP_SPRITE(Blip blip, int spriteId, Any p2) { return Native::Invoke<void, Blip, int, Any>(N::SET_BLIP_SPRITE, blip, spriteId, p2); }
	static Any _0x01B928CA2E198B01(Any p0) { return Native::Invoke<Any, Any>(0x01B928CA2E198B01, p0); }
	static void SET_BLIP_NAME_FROM_TEXT_FILE(Blip blip, char* gxtEntry) { return Native::Invoke<void, Blip, char*>(N::SET_BLIP_NAME_FROM_TEXT_FILE, blip, gxtEntry); }
	static void _0x9CB1A1623062F402(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x9CB1A1623062F402, p0, p1); }
	static Any SET_BLIP_NAME_TO_PLAYER_NAME() { return Native::Invoke<Any>(N::SET_BLIP_NAME_TO_PLAYER_NAME); }
	static void SET_BLIP_ROTATION(Blip blip, int rotation) { return Native::Invoke<void, Blip, int>(N::SET_BLIP_ROTATION, blip, rotation); }
	static void SET_BLIP_SCALE(Blip blip, float scale) { return Native::Invoke<void, Blip, float>(N::SET_BLIP_SCALE, blip, scale); }
	static void REMOVE_BLIP(Blip* blip) { return Native::Invoke<void, Blip*>(N::REMOVE_BLIP, blip); }
	static BOOL DOES_BLIP_EXIST(Blip blip) { return Native::Invoke<BOOL, Blip>(N::DOES_BLIP_EXIST, blip); }
	static Any _0x9FA00E2FC134A9D0(Any p0) { return Native::Invoke<Any, Any>(0x9FA00E2FC134A9D0, p0); }
	static void SET_RADAR_ZOOM(int zoomLevel) { return Native::Invoke<void, int>(N::SET_RADAR_ZOOM, zoomLevel); }
	static Any _0xDEEDE7C41742E011() { return Native::Invoke<Any>(0xDEEDE7C41742E011); }
	static Any _0xE9F676788F8D5E1E(Any p0) { return Native::Invoke<Any, Any>(0xE9F676788F8D5E1E, p0); }
	static BOOL IS_BLIP_ON_MINIMAP(Blip blip) { return Native::Invoke<BOOL, Blip>(N::IS_BLIP_ON_MINIMAP, blip); }
	static Any FORCE_SONAR_BLIPS_THIS_FRAME() { return Native::Invoke<Any>(N::FORCE_SONAR_BLIPS_THIS_FRAME); }
	static void SET_GPS_FLAGS(int p0, float p1) { return Native::Invoke<void, int, float>(N::SET_GPS_FLAGS, p0, p1); }
	static void CLEAR_GPS_FLAGS() { return Native::Invoke<void>(N::CLEAR_GPS_FLAGS); }
	static void SET_GPS_CUSTOM_ROUTE_RENDER(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(N::SET_GPS_CUSTOM_ROUTE_RENDER, p0, p1, p2); }
	static void CLEAR_GPS_CUSTOM_ROUTE() { return Native::Invoke<void>(N::CLEAR_GPS_CUSTOM_ROUTE); }
	static void START_GPS_MULTI_ROUTE(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(N::START_GPS_MULTI_ROUTE, p0, p1, p2); }
	static void ADD_POINT_TO_GPS_MULTI_ROUTE(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<void, Any, Any, Any, Any>(N::ADD_POINT_TO_GPS_MULTI_ROUTE, p0, p1, p2, p3); }
	static void SET_GPS_MULTI_ROUTE_RENDER(Any p0) { return Native::Invoke<void, Any>(N::SET_GPS_MULTI_ROUTE_RENDER, p0); }
	static void CLEAR_GPS_MULTI_ROUTE() { return Native::Invoke<void>(N::CLEAR_GPS_MULTI_ROUTE); }
	static void _0x6B44F13D888F770D(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any>(0x6B44F13D888F770D, p0, p1, p2, p3, p4, p5); }
	static void CLEAR_GPS_PLAYER_WAYPOINT() { return Native::Invoke<void>(N::CLEAR_GPS_PLAYER_WAYPOINT); }
	static void _0xD3F58E9316B7FC2A(Any p0) { return Native::Invoke<void, Any>(0xD3F58E9316B7FC2A, p0); }
	static void SET_WAYPOINT_OFF() { return Native::Invoke<void>(N::SET_WAYPOINT_OFF); }
	static BOOL IS_WAYPOINT_ACTIVE() { return Native::Invoke<BOOL>(N::IS_WAYPOINT_ACTIVE); }
	static Any _0x29B30D07C3F7873B() { return Native::Invoke<Any>(0x29B30D07C3F7873B); }
	static Any _0xF08E42BFA46BDFF8() { return Native::Invoke<Any>(0xF08E42BFA46BDFF8); }
	static Any _0xA1B4052C2A3DCC1E() { return Native::Invoke<Any>(0xA1B4052C2A3DCC1E); }
	static Any _0x3FBB838AEA30C1D8() { return Native::Invoke<Any>(0x3FBB838AEA30C1D8); }
	static Any _0xF47A1EB2A538A3A3() { return Native::Invoke<Any>(0xF47A1EB2A538A3A3); }
	static Any _0x3FDA2B79AEEE351C(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<Any, Any, Any, Any, Any>(0x3FDA2B79AEEE351C, p0, p1, p2, p3); }
	static Any DISPLAY_RADAR(BOOL Toggle) { return Native::Invoke<Any, BOOL>(N::DISPLAY_RADAR, Toggle); }
	static void _0x9C113883487FD53C(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x9C113883487FD53C, p0, p1); }
	static void _0x1392105DA88BBFFB(Any p0, Any p1, Any p2, Any p3, Any p4) { return Native::Invoke<void, Any, Any, Any, Any, Any>(0x1392105DA88BBFFB, p0, p1, p2, p3, p4); }
	static void _0xE057FEA9A22EB3EE(Any p0) { return Native::Invoke<void, Any>(0xE057FEA9A22EB3EE, p0); }
	static void SET_RADAR_AS_EXTERIOR_THIS_FRAME() { return Native::Invoke<void>(N::SET_RADAR_AS_EXTERIOR_THIS_FRAME); }
	static void _SET_MINIMAP_REVEALED(BOOL toggle) { return Native::Invoke<void, BOOL>(N::_SET_MINIMAP_REVEALED, toggle); }
	static void _0x63E7279D04160477(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x63E7279D04160477, p0, p1); }
	static Any _0xE5A7F70B7C0F3271() { return Native::Invoke<Any>(0xE5A7F70B7C0F3271); }
	static void _0x632AA10BF7EA53D3(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x632AA10BF7EA53D3, p0, p1); }
	static void _0x73348402566ECB6E(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<void, Any, Any, Any, Any>(0x73348402566ECB6E, p0, p1, p2, p3); }
	static Any _0x63CBBD6CA6F321F9() { return Native::Invoke<Any>(0x63CBBD6CA6F321F9); }
	static void _0xEB3CB3386C775D72(Any p0) { return Native::Invoke<void, Any>(0xEB3CB3386C775D72, p0); }
	static void _0xF8096DF9B87246E3(Any p0) { return Native::Invoke<void, Any>(0xF8096DF9B87246E3, p0); }
	static void _0xA657EC9DBC6CC900(Any p0) { return Native::Invoke<void, Any>(0xA657EC9DBC6CC900, p0); }
	static void LOCK_MINIMAP_ANGLE(int angle) { return Native::Invoke<void, int>(N::LOCK_MINIMAP_ANGLE, angle); }
	static void UNLOCK_MINIMAP_ANGLE() { return Native::Invoke<void>(N::UNLOCK_MINIMAP_ANGLE); }
	static void _0x563FCB6620523917(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x563FCB6620523917, p0, p1); }
	static void _0x6786D7AFAC3162B3(Any p0) { return Native::Invoke<void, Any>(0x6786D7AFAC3162B3, p0); }
	static Any _0xE38450DBCBC70E3D(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0xE38450DBCBC70E3D, p0, p1); }
	static void _0xD8C7162AB2E2AF45(Any p0) { return Native::Invoke<void, Any>(0xD8C7162AB2E2AF45, p0); }
	static void _0xDA98246C7A3C2189(Any p0) { return Native::Invoke<void, Any>(0xDA98246C7A3C2189, p0); }
	static Any _0x3F81EA4275D39D6F(Any p0) { return Native::Invoke<Any, Any>(0x3F81EA4275D39D6F, p0); }
	static void _0xE0884C184728C75B(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<void, Any, Any, Any, Any>(0xE0884C184728C75B, p0, p1, p2, p3); }
	static void _0x44813684F72B563C(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x44813684F72B563C, p0, p1); }
	static void _0x97F6F158CC5B5CA2(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x97F6F158CC5B5CA2, p0, p1); }
	static void _0xBB68D4D3CA3DE402(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xBB68D4D3CA3DE402, p0, p1); }
	static Any _0x3CB8859F04763C78(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x3CB8859F04763C78, p0, p1); }
	static void _0x7563CBCA99253D1A(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x7563CBCA99253D1A, p0, p1); }
	static Any _0x1726963E6049DB53() { return Native::Invoke<Any>(0x1726963E6049DB53); }
}
namespace MINIGAME
{
	static void _0x6480723D3BE535B6(Any p0) { return Native::Invoke<void, Any>(0x6480723D3BE535B6, p0); }
	static void _0x3DF7EE3A76185108() { return Native::Invoke<void>(0x3DF7EE3A76185108); }
	static Any _0xE1F365C4C8F259D8(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(0xE1F365C4C8F259D8, p0, p1, p2); }
	static Any _0xE53A308AC35877A8() { return Native::Invoke<Any>(0xE53A308AC35877A8); }
	static Any _0x580F34C726387226(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x580F34C726387226, p0, p1); }
	static void _0x0876326238914A3F() { return Native::Invoke<void>(0x0876326238914A3F); }
	static Any _0x3FFE60DD8A936551() { return Native::Invoke<Any>(0x3FFE60DD8A936551); }
	static Any _0x18A0D48DF9211C07() { return Native::Invoke<Any>(0x18A0D48DF9211C07); }
	static Any _MINIGAME_IS_CONNECTED_TO_SERVER(Any p0) { return Native::Invoke<Any, Any>(N::_MINIGAME_IS_CONNECTED_TO_SERVER, p0); }
	static Any _0x39654E1F68B78287() { return Native::Invoke<Any>(0x39654E1F68B78287); }
	static Any _0x3EECAADAB0D9FE29() { return Native::Invoke<Any>(0x3EECAADAB0D9FE29); }
	static Any _0xD39D32EB3B52DD83() { return Native::Invoke<Any>(0xD39D32EB3B52DD83); }
	static Any _0x8593A8CB0ED2C3B4() { return Native::Invoke<Any>(0x8593A8CB0ED2C3B4); }
	static Any _0xF6AC6085D8D6C004() { return Native::Invoke<Any>(0xF6AC6085D8D6C004); }
	static Any _MINIGAME_LEAVE_TABLE(Any p0) { return Native::Invoke<Any, Any>(N::_MINIGAME_LEAVE_TABLE, p0); }
	static Any _MINIGAME_GET_NEXT_EVENT_TYPE() { return Native::Invoke<Any>(N::_MINIGAME_GET_NEXT_EVENT_TYPE); }
	static Any _MINIGAME_GET_NEXT_EVENT(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(N::_MINIGAME_GET_NEXT_EVENT, p0, p1); }
	static void _MINIGAME_POP_NEXT_EVENT() { return Native::Invoke<void>(N::_MINIGAME_POP_NEXT_EVENT); }
	static Any _0x3B31732FADE5BAF3() { return Native::Invoke<Any>(0x3B31732FADE5BAF3); }
	static Any _0x578907F59BA01B6D() { return Native::Invoke<Any>(0x578907F59BA01B6D); }
	static Any _0xDF728C5AE137FC14() { return Native::Invoke<Any>(0xDF728C5AE137FC14); }
	static Any _MINIGAME_IS_REQUEST_PENDING(Any p0) { return Native::Invoke<Any, Any>(N::_MINIGAME_IS_REQUEST_PENDING, p0); }
	static Any _0x644439B5387EE57E(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x644439B5387EE57E, p0, p1); }
	static Any _0x15E90B6A993017AA() { return Native::Invoke<Any>(0x15E90B6A993017AA); }
	static Any _0x10342CC82E8356E9() { return Native::Invoke<Any>(0x10342CC82E8356E9); }
	static Any _0x32A7C216344D623B(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(0x32A7C216344D623B, p0, p1, p2); }
	static Any _0xEC819D612038EF4B(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { return Native::Invoke<Any, Any, Any, Any, Any, Any, Any, Any, Any>(0xEC819D612038EF4B, p0, p1, p2, p3, p4, p5, p6, p7); }
	static Any _POKER_GET_GAME_SETTINGS_FOR_ID(Any p0) { return Native::Invoke<Any, Any>(N::_POKER_GET_GAME_SETTINGS_FOR_ID, p0); }
	static Any _POKER_BUY_IN(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(N::_POKER_BUY_IN, p0, p1); }
	static Any _POKER_CALL(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(N::_POKER_CALL, p0, p1); }
	static Any _POKER_CHECK(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(N::_POKER_CHECK, p0, p1); }
	static Any _POKER_FOLD(Any p0) { return Native::Invoke<Any, Any>(N::_POKER_FOLD, p0); }
	static Any _POKER_RAISE(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(N::_POKER_RAISE, p0, p1); }
	static Any _POKER_REVEAL(Any p0) { return Native::Invoke<Any, Any>(N::_POKER_REVEAL, p0); }
	static void _0x58521E6DCDE97D74(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0x58521E6DCDE97D74, p0, p1, p2); }
	static void _0xF6DE98516FD3AC9B() { return Native::Invoke<void>(0xF6DE98516FD3AC9B); }
	static Any _0x3F4FD4BED07AB8C4(Any p0) { return Native::Invoke<Any, Any>(0x3F4FD4BED07AB8C4, p0); }
	static Any _0x3AE451860F03CA8A(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x3AE451860F03CA8A, p0, p1); }
	static Any _0x012027C28F421F46(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x012027C28F421F46, p0, p1); }
	static void _0x455ECCA0715C507F() { return Native::Invoke<void>(0x455ECCA0715C507F); }
	static Any _DOMINOES_BUY_IN(Any p0) { return Native::Invoke<Any, Any>(N::_DOMINOES_BUY_IN, p0); }
	static Any _DOMINOES_PLACE_DOMINO(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(N::_DOMINOES_PLACE_DOMINO, p0, p1); }
	static Any _DOMINOES_REQUEST_VALID_PLACEMENTS(Any p0) { return Native::Invoke<Any, Any>(N::_DOMINOES_REQUEST_VALID_PLACEMENTS, p0); }
	static Any _0xA2DB3C6270C122E3() { return Native::Invoke<Any>(0xA2DB3C6270C122E3); }
	static Any _0x398066F893149856() { return Native::Invoke<Any>(0x398066F893149856); }
	static Any _0xBEA7D3CB47E1479C() { return Native::Invoke<Any>(0xBEA7D3CB47E1479C); }
	static Any _0x910B088E51A511AC() { return Native::Invoke<Any>(0x910B088E51A511AC); }
	static Any _0x9DD95B405AB4983E() { return Native::Invoke<Any>(0x9DD95B405AB4983E); }
}
namespace MISC
{
	static Any GET_NUMBER_OF_FREE_STACKS_OF_THIS_SIZE(Any p0) { return Native::Invoke<Any, Any>(N::GET_NUMBER_OF_FREE_STACKS_OF_THIS_SIZE, p0); }
	static Any _0x72904D3D62AF5839() { return Native::Invoke<Any>(0x72904D3D62AF5839); }
	static Any _0xC43CD2668B204419() { return Native::Invoke<Any>(0xC43CD2668B204419); }
	static Any _0x5FC9357C26DAEFCE() { return Native::Invoke<Any>(0x5FC9357C26DAEFCE); }
	static void SET_RANDOM_SEED(int time) { return Native::Invoke<void, int>(N::SET_RANDOM_SEED, time); }
	static void SET_TIME_SCALE(float time) { return Native::Invoke<void, float>(N::SET_TIME_SCALE, time); }
	static void SET_MISSION_FLAG(BOOL toggle) { return Native::Invoke<void, BOOL>(N::SET_MISSION_FLAG, toggle); }
	static BOOL GET_MISSION_FLAG() { return Native::Invoke<BOOL>(N::GET_MISSION_FLAG); }
	static Any _0x5801BE2DF2AF07EC() { return Native::Invoke<Any>(0x5801BE2DF2AF07EC); }
	static void SET_RANDOM_EVENT_FLAG(BOOL p0) { return Native::Invoke<void, BOOL>(N::SET_RANDOM_EVENT_FLAG, p0); }
	static BOOL GET_RANDOM_EVENT_FLAG() { return Native::Invoke<BOOL>(N::GET_RANDOM_EVENT_FLAG); }
	static void _0x9BF2C0C568C61641(Any p0) { return Native::Invoke<void, Any>(0x9BF2C0C568C61641, p0); }
	static void _0xCC7FC854B956A128(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xCC7FC854B956A128, p0, p1); }
	static void _0x9935F76407C32539(Any p0) { return Native::Invoke<void, Any>(0x9935F76407C32539, p0); }
	static Any _0xFF252E2BAFB7330F() { return Native::Invoke<Any>(0xFF252E2BAFB7330F); }
	static void _0x91D657230BC208D2(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x91D657230BC208D2, p0, p1); }
	static void _0x1694A053DFB61A34(Any p0) { return Native::Invoke<void, Any>(0x1694A053DFB61A34, p0); }
	static Any _0xAF530E56505D1BD6(Any p0) { return Native::Invoke<Any, Any>(0xAF530E56505D1BD6, p0); }
	static void _0xB16FC7B364D86585() { return Native::Invoke<void>(0xB16FC7B364D86585); }
	static Any _0xF81C53561D15F330() { return Native::Invoke<Any>(0xF81C53561D15F330); }
	static void _0x1096603B519C905F(Any p0) { return Native::Invoke<void, Any>(0x1096603B519C905F, p0); }
	static void _0xCC3EDC5614B03F61(Any p0) { return Native::Invoke<void, Any>(0xCC3EDC5614B03F61, p0); }
	static Any _0x708DF841B8F27AA2() { return Native::Invoke<Any>(0x708DF841B8F27AA2); }
	static void _0xDA4D8EB04E8E2928(Any p0) { return Native::Invoke<void, Any>(0xDA4D8EB04E8E2928, p0); }
	static void _0xB08C4FA25BC29DB9(Any p0) { return Native::Invoke<void, Any>(0xB08C4FA25BC29DB9, p0); }
	static Any _0x4BEB42AEBCA732E9() { return Native::Invoke<Any>(0x4BEB42AEBCA732E9); }
	static Any _0x51021D36F62AAA83() { return Native::Invoke<Any>(0x51021D36F62AAA83); }
	static void _0x0730E518486DEEC3(Any p0) { return Native::Invoke<void, Any>(0x0730E518486DEEC3, p0); }
	static void _0x59174F1AFE095B5A(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any>(0x59174F1AFE095B5A, p0, p1, p2, p3, p4, p5); }
	static void _0x2C6A07AF9AEDABD8(Any p0, Any p1, Any p2, Any p3, Any p4) { return Native::Invoke<void, Any, Any, Any, Any, Any>(0x2C6A07AF9AEDABD8, p0, p1, p2, p3, p4); }
	static Any _0x7F4CE164D9A11DFE() { return Native::Invoke<Any>(0x7F4CE164D9A11DFE); }
	static Any _0x1359C181BC625503() { return Native::Invoke<Any>(0x1359C181BC625503); }
	static void SET_RANDOM_WEATHER_TYPE(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(N::SET_RANDOM_WEATHER_TYPE, p0, p1); }
	static void CLEAR_WEATHER_TYPE_PERSIST() { return Native::Invoke<void>(N::CLEAR_WEATHER_TYPE_PERSIST); }
	static Any _0xCE7690C0A0D1C36D() { return Native::Invoke<Any>(0xCE7690C0A0D1C36D); }
	static void _GET_WEATHER_TYPE_TRANSITION(Hash* weatherType1, Hash* weatherType2, float* percentWeather2) { return Native::Invoke<void, Hash*, Hash*, float*>(N::_GET_WEATHER_TYPE_TRANSITION, weatherType1, weatherType2, percentWeather2); }
	static void _SET_WEATHER_TYPE_TRANSITION(Hash weatherType1, Hash weatherType2, float percentWeather2, Any p3) { return Native::Invoke<void, Hash, Hash, float, Any>(N::_SET_WEATHER_TYPE_TRANSITION, weatherType1, weatherType2, percentWeather2, p3); }
	static void _0xD74ACDF7DB8114AF(Any p0) { return Native::Invoke<void, Any>(0xD74ACDF7DB8114AF, p0); }
	static void _0xDD560ABEF5D3784C(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xDD560ABEF5D3784C, p0, p1); }
	static void _0x2916B30DC6C41179(Any p0) { return Native::Invoke<void, Any>(0x2916B30DC6C41179, p0); }
	static void _0xD3F943B88F55376A(Any p0) { return Native::Invoke<void, Any>(0xD3F943B88F55376A, p0); }
	static void _0x243CEDE8F916B994() { return Native::Invoke<void>(0x243CEDE8F916B994); }
	static Any _0xBE83CAE8ED77A94F() { return Native::Invoke<Any>(0xBE83CAE8ED77A94F); }
	static void CLEAR_OVERRIDE_WEATHER() { return Native::Invoke<void>(N::CLEAR_OVERRIDE_WEATHER); }
	static void _0x3373779BAF7CAF48(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x3373779BAF7CAF48, p0, p1); }
	static void _0x0E71C80FA4EC8147(Any p0) { return Native::Invoke<void, Any>(0x0E71C80FA4EC8147, p0); }
	static void _0x55123D5A7D9D3C42(Any p0) { return Native::Invoke<void, Any>(0x55123D5A7D9D3C42, p0); }
	static void _0xF06C5B66DE20B2B8(Any p0) { return Native::Invoke<void, Any>(0xF06C5B66DE20B2B8, p0); }
	static Any _0xB98B78C3768AF6E0(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(0xB98B78C3768AF6E0, p0, p1, p2); }
	static void SET_WIND_SPEED(float speed) { return Native::Invoke<void, float>(N::SET_WIND_SPEED, speed); }
	static float GET_WIND_SPEED() { return Native::Invoke<float>(N::GET_WIND_SPEED); }
	static void SET_WIND_DIRECTION(float direction) { return Native::Invoke<void, float>(N::SET_WIND_DIRECTION, direction); }
	static Vector3 GET_WIND_DIRECTION() { return Native::Invoke<Vector3>(N::GET_WIND_DIRECTION); }
	static void _SET_RAIN_FX_INTENSITY(float intensity) { return Native::Invoke<void, float>(N::_SET_RAIN_FX_INTENSITY, intensity); }
	static float GET_RAIN_LEVEL() { return Native::Invoke<float>(N::GET_RAIN_LEVEL); }
	static void _0x745808BB01CEC6B9(Any p0) { return Native::Invoke<void, Any>(0x745808BB01CEC6B9, p0); }
	static void _0xF6BEE7E80EC5CA40(Any p0) { return Native::Invoke<void, Any>(0xF6BEE7E80EC5CA40, p0); }
	static float GET_SNOW_LEVEL() { return Native::Invoke<float>(N::GET_SNOW_LEVEL); }
	static void FORCE_LIGHTNING_FLASH() { return Native::Invoke<void>(N::FORCE_LIGHTNING_FLASH); }
	static void _0x67943537D179597C(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0x67943537D179597C, p0, p1, p2); }
	static void _0xA9342743B634A462(Any p0) { return Native::Invoke<void, Any>(0xA9342743B634A462, p0); }
	static int GET_GAME_TIMER() { return Native::Invoke<int>(N::GET_GAME_TIMER); }
	static Any _0x483B8C542103AD72() { return Native::Invoke<Any>(0x483B8C542103AD72); }
	static Any _GET_SYSTEM_TIME() { return Native::Invoke<Any>(N::_GET_SYSTEM_TIME); }
	static Any _GET_NUMBER_OF_MICROSECONDS_SINCE_LAST_CALL() { return Native::Invoke<Any>(N::_GET_NUMBER_OF_MICROSECONDS_SINCE_LAST_CALL); }
	static Any _GET_SCRIPT_TIME_WITHIN_FRAME_IN_MICROSECONDS() { return Native::Invoke<Any>(N::_GET_SCRIPT_TIME_WITHIN_FRAME_IN_MICROSECONDS); }
	static void _RESET_SCRIPT_TIME_WITHIN_FRAME() { return Native::Invoke<void>(N::_RESET_SCRIPT_TIME_WITHIN_FRAME); }
	static float GET_FRAME_TIME() { return Native::Invoke<float>(N::GET_FRAME_TIME); }
	static float _GET_BENCHMARK_TIME() { return Native::Invoke<float>(N::_GET_BENCHMARK_TIME); }
	static int GET_FRAME_COUNT() { return Native::Invoke<int>(N::GET_FRAME_COUNT); }
	static Any _0x6BED40493A1AFDB8() { return Native::Invoke<Any>(0x6BED40493A1AFDB8); }
	static Any _0xD2C9126410DFA1B2() { return Native::Invoke<Any>(0xD2C9126410DFA1B2); }
	static float GET_RANDOM_FLOAT_IN_RANGE(float startRange, float endRange) { return Native::Invoke<float, float, float>(N::GET_RANDOM_FLOAT_IN_RANGE, startRange, endRange); }
	static int GET_RANDOM_INT_IN_RANGE(int startRange, int endRange) { return Native::Invoke<int, int, int>(N::GET_RANDOM_INT_IN_RANGE, startRange, endRange); }
	static BOOL GET_GROUND_Z_FOR_3D_COORD(float x, float y, float z, float* groundZ, BOOL unk) { return Native::Invoke<BOOL, float, float, float, float*, BOOL>(N::GET_GROUND_Z_FOR_3D_COORD, x, y, z, groundZ, unk); }
	static Any GET_GROUND_Z_AND_NORMAL_FOR_3D_COORD(Any p0, Any p1, Any p2, Any p3, Any p4) { return Native::Invoke<Any, Any, Any, Any, Any, Any>(N::GET_GROUND_Z_AND_NORMAL_FOR_3D_COORD, p0, p1, p2, p3, p4); }
	static Any _0xBBE5B63EFFB08E68(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return Native::Invoke<Any, Any, Any, Any, Any, Any, Any, Any>(0xBBE5B63EFFB08E68, p0, p1, p2, p3, p4, p5, p6); }
	static float ASIN(float p0) { return Native::Invoke<float, float>(N::ASIN, p0); }
	static float ACOS(float p0) { return Native::Invoke<float, float>(N::ACOS, p0); }
	static float TAN(float p0) { return Native::Invoke<float, float>(N::TAN, p0); }
	static float ATAN(float p0) { return Native::Invoke<float, float>(N::ATAN, p0); }
	static float ATAN2(float p0, float p1) { return Native::Invoke<float, float, float>(N::ATAN2, p0, p1); }
	static float GET_DISTANCE_BETWEEN_COORDS(float x1, float y1, float z1, float x2, float y2, float z2, BOOL useZ) { return Native::Invoke<float, float, float, float, float, float, float, BOOL>(N::GET_DISTANCE_BETWEEN_COORDS, x1, y1, z1, x2, y2, z2, useZ); }
	static float GET_ANGLE_BETWEEN_2D_VECTORS(float x1, float y1, float x2, float y2) { return Native::Invoke<float, float, float, float, float>(N::GET_ANGLE_BETWEEN_2D_VECTORS, x1, y1, x2, y2); }
	static float GET_HEADING_FROM_VECTOR_2D(float dx, float dy) { return Native::Invoke<float, float, float>(N::GET_HEADING_FROM_VECTOR_2D, dx, dy); }
	static Any _0x83ACC65D9ACEC5EF(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9) { return Native::Invoke<Any, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any>(0x83ACC65D9ACEC5EF, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); }
	static Any _0xAB6A04CEC428258B(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12) { return Native::Invoke<Any, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any>(0xAB6A04CEC428258B, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); }
	static void SET_BIT(int* address, int offset) { return Native::Invoke<void, int*, int>(N::SET_BIT, address, offset); }
	static void CLEAR_BIT(int* address, int offset) { return Native::Invoke<void, int*, int>(N::CLEAR_BIT, address, offset); }
	static Any _0x8F4F050054005C27(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x8F4F050054005C27, p0, p1); }
	static Any _0x80E9C316EF84DD81() { return Native::Invoke<Any>(0x80E9C316EF84DD81); }
	static void _0xE84AAC1B22A73E99(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xE84AAC1B22A73E99, p0, p1); }
	static void _0xB909149F2BB5F6DA(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xB909149F2BB5F6DA, p0, p1); }
	static Any _0xD2D74F89DF844A50() { return Native::Invoke<Any>(0xD2D74F89DF844A50); }
	static Hash GET_HASH_KEY(char* string) { return Native::Invoke<Hash, char*>(N::GET_HASH_KEY, string); }
	static Any _0xEF50E344A8F93784(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<Any, Any, Any, Any, Any>(0xEF50E344A8F93784, p0, p1, p2, p3); }
	static BOOL IS_POSITION_OCCUPIED(float x, float y, float z, float range, BOOL p4, BOOL p5, BOOL p6, BOOL p7, BOOL p8, Any p9, BOOL p10) { return Native::Invoke<BOOL, float, float, float, float, BOOL, BOOL, BOOL, BOOL, BOOL, Any, BOOL>(N::IS_POSITION_OCCUPIED, x, y, z, range, p4, p5, p6, p7, p8, p9, p10); }
	static void CLEAR_AREA(Any p0, Any p1, Any p2, Any p3, Any p4) { return Native::Invoke<void, Any, Any, Any, Any, Any>(N::CLEAR_AREA, p0, p1, p2, p3, p4); }
	static void _0x2FCD528A397E5C88(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x2FCD528A397E5C88, p0, p1); }
	static void CLEAR_ANGLED_AREA_OF_VEHICLES(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any, Any, Any>(N::CLEAR_ANGLED_AREA_OF_VEHICLES, p0, p1, p2, p3, p4, p5, p6, p7); }
	static void SET_CREDITS_ACTIVE(BOOL toggle) { return Native::Invoke<void, BOOL>(N::SET_CREDITS_ACTIVE, toggle); }
	static void NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME() { return Native::Invoke<void>(N::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME); }
	static void PAUSE_DEATH_ARREST_RESTART(Any p0) { return Native::Invoke<void, Any>(N::PAUSE_DEATH_ARREST_RESTART, p0); }
	static void IGNORE_NEXT_RESTART(BOOL toggle) { return Native::Invoke<void, BOOL>(N::IGNORE_NEXT_RESTART, toggle); }
	static void SET_FADE_IN_AFTER_DEATH_ARREST(BOOL toggle) { return Native::Invoke<void, BOOL>(N::SET_FADE_IN_AFTER_DEATH_ARREST, toggle); }
	static void SET_FADE_IN_AFTER_LOAD(BOOL toggle) { return Native::Invoke<void, BOOL>(N::SET_FADE_IN_AFTER_LOAD, toggle); }
	static BOOL OVERRIDE_SAVE_HOUSE(BOOL p0, float p1, float p2, float p3, float p4, BOOL p5, float p6, float p7) { return Native::Invoke<BOOL, BOOL, float, float, float, float, BOOL, float, float>(N::OVERRIDE_SAVE_HOUSE, p0, p1, p2, p3, p4, p5, p6, p7); }
	static void SHOOT_SINGLE_BULLET_BETWEEN_COORDS(float x1, float y1, float z1, float x2, float y2, float z2, int damage, BOOL p7, Hash weaponHash, Ped ownerPed, BOOL isAudible, BOOL isInvisible, float speed, Any p13) { return Native::Invoke<void, float, float, float, float, float, float, int, BOOL, Hash, Ped, BOOL, BOOL, float, Any>(N::SHOOT_SINGLE_BULLET_BETWEEN_COORDS, x1, y1, z1, x2, y2, z2, damage, p7, weaponHash, ownerPed, isAudible, isInvisible, speed, p13); }
	static void _0xCBC9A21F6A2A679C(Any p0) { return Native::Invoke<void, Any>(0xCBC9A21F6A2A679C, p0); }
	static void GET_MODEL_DIMENSIONS(Hash modelHash, Vector3* minimum, Vector3* maximum) { return Native::Invoke<void, Hash, Vector3*, Vector3*>(N::GET_MODEL_DIMENSIONS, modelHash, minimum, maximum); }
	static BOOL IS_BIT_SET(int* address, int offset) { return Native::Invoke<BOOL, int*, int>(N::IS_BIT_SET, address, offset); }
	static Any _0x0A487CC74A517FB5() { return Native::Invoke<Any>(0x0A487CC74A517FB5); }
	static BOOL IS_MINIGAME_IN_PROGRESS() { return Native::Invoke<BOOL>(N::IS_MINIGAME_IN_PROGRESS); }
	static Any SHOULD_USE_METRIC_MEASUREMENTS() { return Native::Invoke<Any>(N::SHOULD_USE_METRIC_MEASUREMENTS); }
	static Any _0x58BCDC75BA52110A() { return Native::Invoke<Any>(0x58BCDC75BA52110A); }
	static Any _0xFF4AAF3275BAAB4F() { return Native::Invoke<Any>(0xFF4AAF3275BAAB4F); }
	static Any _0x8F24157FEDB85EA2() { return Native::Invoke<Any>(0x8F24157FEDB85EA2); }
	static Any _0x0177CF20345F44DD() { return Native::Invoke<Any>(0x0177CF20345F44DD); }
	static int COMPARE_STRINGS(char* str1, char* str2, BOOL matchCase, int maxLength) { return Native::Invoke<int, char*, char*, BOOL, int>(N::COMPARE_STRINGS, str1, str2, matchCase, maxLength); }
	static int ABSI(int value) { return Native::Invoke<int, int>(N::ABSI, value); }
	static float ABSF(float value) { return Native::Invoke<float, float>(N::ABSF, value); }
	static BOOL IS_PROJECTILE_IN_AREA(float x1, float y1, float z1, float x2, float y2, float z2, BOOL ownedByPlayer) { return Native::Invoke<BOOL, float, float, float, float, float, float, BOOL>(N::IS_PROJECTILE_IN_AREA, x1, y1, z1, x2, y2, z2, ownedByPlayer); }
	static BOOL IS_PROJECTILE_TYPE_IN_AREA(float x1, float y1, float z1, float x2, float y2, float z2, int type, BOOL p7) { return Native::Invoke<BOOL, float, float, float, float, float, float, int, BOOL>(N::IS_PROJECTILE_TYPE_IN_AREA, x1, y1, z1, x2, y2, z2, type, p7); }
	static BOOL IS_PROJECTILE_TYPE_IN_ANGLED_AREA(float p0, float p1, float p2, float p3, float p4, float p5, float p6, Any p7, BOOL p8) { return Native::Invoke<BOOL, float, float, float, float, float, float, float, Any, BOOL>(N::IS_PROJECTILE_TYPE_IN_ANGLED_AREA, p0, p1, p2, p3, p4, p5, p6, p7, p8); }
	static Any _IS_PROJECTILE_TYPE_IN_RADIUS(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return Native::Invoke<Any, Any, Any, Any, Any, Any, Any>(N::_IS_PROJECTILE_TYPE_IN_RADIUS, p0, p1, p2, p3, p4, p5); }
	static BOOL _GET_PROJECTILE_NEAR_PED_COORDS(Ped ped, Hash projHash, float radius, Vector3* projPos, BOOL ownedByPlayer, Any p5) { return Native::Invoke<BOOL, Ped, Hash, float, Vector3*, BOOL, Any>(N::_GET_PROJECTILE_NEAR_PED_COORDS, ped, projHash, radius, projPos, ownedByPlayer, p5); }
	static BOOL _GET_PROJECTILE_NEAR_PED(Ped ped, Hash projHash, float radius, Vector3* projPos, Entity* projEnt, BOOL ownedByPlayer, Any p6) { return Native::Invoke<BOOL, Ped, Hash, float, Vector3*, Entity*, BOOL, Any>(N::_GET_PROJECTILE_NEAR_PED, ped, projHash, radius, projPos, projEnt, ownedByPlayer, p6); }
	static BOOL IS_BULLET_IN_ANGLED_AREA(float p0, float p1, float p2, float p3, float p4, float p5, float p6, BOOL p7) { return Native::Invoke<BOOL, float, float, float, float, float, float, float, BOOL>(N::IS_BULLET_IN_ANGLED_AREA, p0, p1, p2, p3, p4, p5, p6, p7); }
	static BOOL IS_BULLET_IN_AREA(float p0, float p1, float p2, float p3, BOOL p4) { return Native::Invoke<BOOL, float, float, float, float, BOOL>(N::IS_BULLET_IN_AREA, p0, p1, p2, p3, p4); }
	static BOOL IS_BULLET_IN_BOX(float p0, float p1, float p2, float p3, float p4, float p5, BOOL p6) { return Native::Invoke<BOOL, float, float, float, float, float, float, BOOL>(N::IS_BULLET_IN_BOX, p0, p1, p2, p3, p4, p5, p6); }
	static BOOL HAS_BULLET_IMPACTED_IN_AREA(float x, float y, float z, float p3, BOOL p4, BOOL p5) { return Native::Invoke<BOOL, float, float, float, float, BOOL, BOOL>(N::HAS_BULLET_IMPACTED_IN_AREA, x, y, z, p3, p4, p5); }
	static BOOL HAS_BULLET_IMPACTED_IN_BOX(float p0, float p1, float p2, float p3, float p4, float p5, BOOL p6, BOOL p7) { return Native::Invoke<BOOL, float, float, float, float, float, float, BOOL, BOOL>(N::HAS_BULLET_IMPACTED_IN_BOX, p0, p1, p2, p3, p4, p5, p6, p7); }
	static Any _0x7A76104CC2CC69E8(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(0x7A76104CC2CC69E8, p0, p1, p2); }
	static Any _0xDC416CA762BC4F43(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return Native::Invoke<Any, Any, Any, Any, Any, Any, Any>(0xDC416CA762BC4F43, p0, p1, p2, p3, p4, p5); }
	static Any _0x970339EFA4FDE518(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(0x970339EFA4FDE518, p0, p1, p2); }
	static BOOL IS_ORBIS_VERSION() { return Native::Invoke<BOOL>(N::IS_ORBIS_VERSION); }
	static BOOL IS_DURANGO_VERSION() { return Native::Invoke<BOOL>(N::IS_DURANGO_VERSION); }
	static BOOL IS_PC_VERSION() { return Native::Invoke<BOOL>(N::IS_PC_VERSION); }
	static Any _0x268AB8420A9E4ED7() { return Native::Invoke<Any>(0x268AB8420A9E4ED7); }
	static BOOL IS_STRING_NULL(char* string) { return Native::Invoke<BOOL, char*>(N::IS_STRING_NULL, string); }
	static BOOL IS_STRING_NULL_OR_EMPTY(char* string) { return Native::Invoke<BOOL, char*>(N::IS_STRING_NULL_OR_EMPTY, string); }
	static Any _0x375F5870A7B8BEC1(Any p0) { return Native::Invoke<Any, Any>(0x375F5870A7B8BEC1, p0); }
	static BOOL ARE_STRINGS_EQUAL(char* string1, char* string2) { return Native::Invoke<BOOL, char*, char*>(N::ARE_STRINGS_EQUAL, string1, string2); }
	static Any _DOES_STRING_EXIST_IN_STRING(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(N::_DOES_STRING_EXIST_IN_STRING, p0, p1); }
	static void _0x3C3C7B1B5EC08764() { return Native::Invoke<void>(0x3C3C7B1B5EC08764); }
	static Any _0x94E8CA3DEE952789(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x94E8CA3DEE952789, p0, p1); }
	static Any _0x5B4A8121A47D844D(Any p0) { return Native::Invoke<Any, Any>(0x5B4A8121A47D844D, p0); }
	static Any STRING_TO_INT() { return Native::Invoke<Any>(N::STRING_TO_INT); }
	static void _STRING_FORMAT_INT(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(N::_STRING_FORMAT_INT, p0, p1, p2); }
	static Any _0x74ACA66484CEBAF0() { return Native::Invoke<Any>(0x74ACA66484CEBAF0); }
	static void _0x49C44FE78A135A1D(Any p0) { return Native::Invoke<void, Any>(0x49C44FE78A135A1D, p0); }
	static Any _0x2B6846401D68E563(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x2B6846401D68E563, p0, p1); }
	static Any _0x6C4DBF553885F9EB() { return Native::Invoke<Any>(0x6C4DBF553885F9EB); }
	static Any _0xF216F74101968DB0() { return Native::Invoke<Any>(0xF216F74101968DB0); }
	static Any _CREATE_VAR_STRING(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(N::_CREATE_VAR_STRING, p0, p1, p2); }
	static Any _0xBCC2CFADEA1AEA6C(Any p0) { return Native::Invoke<Any, Any>(0xBCC2CFADEA1AEA6C, p0); }
	static void SET_BITS_IN_RANGE(int* var, int rangeStart, int rangeEnd, int p3) { return Native::Invoke<void, int*, int, int, int>(N::SET_BITS_IN_RANGE, var, rangeStart, rangeEnd, p3); }
	static int GET_BITS_IN_RANGE(int var, int rangeStart, int rangeEnd) { return Native::Invoke<int, int, int, int>(N::GET_BITS_IN_RANGE, var, rangeStart, rangeEnd); }
	static void SET_GAME_PAUSED(BOOL toggle) { return Native::Invoke<void, BOOL>(N::SET_GAME_PAUSED, toggle); }
	static void SET_THIS_SCRIPT_CAN_BE_PAUSED(BOOL toggle) { return Native::Invoke<void, BOOL>(N::SET_THIS_SCRIPT_CAN_BE_PAUSED, toggle); }
	static void SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(BOOL toggle) { return Native::Invoke<void, BOOL>(N::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT, toggle); }
	static void _0xD4958E8CF0DE0DD0(Any p0) { return Native::Invoke<void, Any>(0xD4958E8CF0DE0DD0, p0); }
	static Any _0xB711EB4BC8D06013() { return Native::Invoke<Any>(0xB711EB4BC8D06013); }
	static void POPULATE_NOW() { return Native::Invoke<void>(N::POPULATE_NOW); }
	static Any _0xF9E7DBB39080640B() { return Native::Invoke<Any>(0xF9E7DBB39080640B); }
	static Any _0x279B0696DA4657EB(Any p0) { return Native::Invoke<Any, Any>(0x279B0696DA4657EB, p0); }
	static Any _0x1B065A2BF7953815(Any p0) { return Native::Invoke<Any, Any>(0x1B065A2BF7953815, p0); }
	static Any _0x6C7B68D3CE60E8DE(Any p0) { return Native::Invoke<Any, Any>(0x6C7B68D3CE60E8DE, p0); }
	static Any _0x627B68D9CE6EE8DE(Any p0) { return Native::Invoke<Any, Any>(0x627B68D9CE6EE8DE, p0); }
	static Any _0x7CF96F1250EF3221(Any p0) { return Native::Invoke<Any, Any>(0x7CF96F1250EF3221, p0); }
	static void _COPY_MEMORY(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(N::_COPY_MEMORY, p0, p1, p2); }
	static void ENABLE_DISPATCH_SERVICE(int dispatchService, BOOL toggle) { return Native::Invoke<void, int, BOOL>(N::ENABLE_DISPATCH_SERVICE, dispatchService, toggle); }
	static void BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(N::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION, p0, p1); }
	static BOOL CREATE_INCIDENT(int incidentType, float x, float y, float z, int p5, float radius, int* outIncidentID, Any p7, Any p8) { return Native::Invoke<BOOL, int, float, float, float, int, float, int*, Any, Any>(N::CREATE_INCIDENT, incidentType, x, y, z, p5, radius, outIncidentID, p7, p8); }
	static Any _0xAB3D3F45436DB1D8(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return Native::Invoke<Any, Any, Any, Any, Any, Any, Any, Any>(0xAB3D3F45436DB1D8, p0, p1, p2, p3, p4, p5, p6); }
	static void DELETE_INCIDENT(int incidentId) { return Native::Invoke<void, int>(N::DELETE_INCIDENT, incidentId); }
	static BOOL IS_INCIDENT_VALID(int incidentId) { return Native::Invoke<BOOL, int>(N::IS_INCIDENT_VALID, incidentId); }
	static void _0x9617B6E5F6537B63(Any p0) { return Native::Invoke<void, Any>(0x9617B6E5F6537B63, p0); }
	static Any ADD_POP_MULTIPLIER_AREA() { return Native::Invoke<Any>(N::ADD_POP_MULTIPLIER_AREA); }
	static Any DOES_POP_MULTIPLIER_AREA_EXIST() { return Native::Invoke<Any>(N::DOES_POP_MULTIPLIER_AREA_EXIST); }
	static Any REMOVE_POP_MULTIPLIER_AREA() { return Native::Invoke<Any>(N::REMOVE_POP_MULTIPLIER_AREA); }
	static Any _0x3233C4EC0514C7EC() { return Native::Invoke<Any>(0x3233C4EC0514C7EC); }
	static Any _0x39D6DACE323A20B6() { return Native::Invoke<Any>(0x39D6DACE323A20B6); }
	static Any _0xBD090F5B1DB82189() { return Native::Invoke<Any>(0xBD090F5B1DB82189); }
	static void _0xF569E33FB72ED28E() { return Native::Invoke<void>(0xF569E33FB72ED28E); }
	static void RESET_DISPATCH_IDEAL_SPAWN_DISTANCE() { return Native::Invoke<void>(N::RESET_DISPATCH_IDEAL_SPAWN_DISTANCE); }
	static void SET_DISPATCH_IDEAL_SPAWN_DISTANCE(float p0) { return Native::Invoke<void, float>(N::SET_DISPATCH_IDEAL_SPAWN_DISTANCE, p0); }
	static void _0x96498D922D8D0D0A() { return Native::Invoke<void>(0x96498D922D8D0D0A); }
	static void _0x27A1B170AA8AF84C(Any p0) { return Native::Invoke<void, Any>(0x27A1B170AA8AF84C, p0); }
	static void _0x54EC7B6BC72BAD69() { return Native::Invoke<void>(0x54EC7B6BC72BAD69); }
	static void _0x89314FB3463E28DE(Any p0) { return Native::Invoke<void, Any>(0x89314FB3463E28DE, p0); }
	static void _0x4B0501A468B749F8() { return Native::Invoke<void>(0x4B0501A468B749F8); }
	static void _0x6BCF7B5CD338281A(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0x6BCF7B5CD338281A, p0, p1, p2); }
	static Any _0xA2D5A26208421426() { return Native::Invoke<Any>(0xA2D5A26208421426); }
	static Any REMOVE_DISPATCH_SPAWN_BLOCKING_AREA() { return Native::Invoke<Any>(N::REMOVE_DISPATCH_SPAWN_BLOCKING_AREA); }
	static void _0xEF42F56F69877125() { return Native::Invoke<void>(0xEF42F56F69877125); }
	static void _0xE4EE55E63FA9AF45(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<void, Any, Any, Any, Any>(0xE4EE55E63FA9AF45, p0, p1, p2, p3); }
	static void _0xD93B6516C6878267() { return Native::Invoke<void>(0xD93B6516C6878267); }
	static void DISPLAY_ONSCREEN_KEYBOARD(int p0, char* windowTitle, char* p2, char* defaultText, char* defaultConcat1, char* defaultConcat2, char* defaultConcat3, int maxInputLength) { return Native::Invoke<void, int, char*, char*, char*, char*, char*, char*, int>(N::DISPLAY_ONSCREEN_KEYBOARD, p0, windowTitle, p2, defaultText, defaultConcat1, defaultConcat2, defaultConcat3, maxInputLength); }
	static int UPDATE_ONSCREEN_KEYBOARD() { return Native::Invoke<int>(N::UPDATE_ONSCREEN_KEYBOARD); }
	static char* GET_ONSCREEN_KEYBOARD_RESULT() { return Native::Invoke<char*>(N::GET_ONSCREEN_KEYBOARD_RESULT); }
	static Any _CANCEL_ONSCREEN_KEYBOARD() { return Native::Invoke<Any>(N::_CANCEL_ONSCREEN_KEYBOARD); }
	static Any _0x5CB71EAA1429A358() { return Native::Invoke<Any>(0x5CB71EAA1429A358); }
	static void _REMOVE_STEALTH_KILL(Hash hash, BOOL p1) { return Native::Invoke<void, Hash, BOOL>(N::_REMOVE_STEALTH_KILL, hash, p1); }
	static Any _0xFD0759658268FD8E(Any p0) { return Native::Invoke<Any, Any>(0xFD0759658268FD8E, p0); }
	static Any _0x2E036F0480B8BF02() { return Native::Invoke<Any>(0x2E036F0480B8BF02); }
	static Any SET_SUPER_JUMP_THIS_FRAME() { return Native::Invoke<Any>(N::SET_SUPER_JUMP_THIS_FRAME); }
	static Any _0x8AE059F47158417E() { return Native::Invoke<Any>(0x8AE059F47158417E); }
	static Any _0x334CE0DA4FAF330C() { return Native::Invoke<Any>(0x334CE0DA4FAF330C); }
	static Any _0xBA62B4D80FA66BD6() { return Native::Invoke<Any>(0xBA62B4D80FA66BD6); }
	static Any _0x769E848C66E3C2BB() { return Native::Invoke<Any>(0x769E848C66E3C2BB); }
	static Any _START_BENCHMARK_RECORDING() { return Native::Invoke<Any>(N::_START_BENCHMARK_RECORDING); }
	static Any _STOP_BENCHMARK_RECORDING() { return Native::Invoke<Any>(N::_STOP_BENCHMARK_RECORDING); }
	static Any _RESET_BENCHMARK_RECORDING() { return Native::Invoke<Any>(N::_RESET_BENCHMARK_RECORDING); }
	static Any _SAVE_BENCHMARK_RECORDING() { return Native::Invoke<Any>(N::_SAVE_BENCHMARK_RECORDING); }
	static Any _UI_IS_SINGLEPLAYER_PAUSE_MENU_ACTIVE() { return Native::Invoke<Any>(N::_UI_IS_SINGLEPLAYER_PAUSE_MENU_ACTIVE); }
	static Any _GET_BENCHMARK_ITERATIONS_FROM_COMMAND_LINE() { return Native::Invoke<Any>(N::_GET_BENCHMARK_ITERATIONS_FROM_COMMAND_LINE); }
	static Any _GET_BENCHMARK_PASS_FROM_COMMAND_LINE() { return Native::Invoke<Any>(N::_GET_BENCHMARK_PASS_FROM_COMMAND_LINE); }
	static Any _0xDC057B86FC157031() { return Native::Invoke<Any>(0xDC057B86FC157031); }
	static Any _0x9A252AA23D7098F2() { return Native::Invoke<Any>(0x9A252AA23D7098F2); }
	static Any _0xBDC6E364C9C78178(Any p0) { return Native::Invoke<Any, Any>(0xBDC6E364C9C78178, p0); }
	static Any _0xDC8D2FF478DF9553(Any p0) { return Native::Invoke<Any, Any>(0xDC8D2FF478DF9553, p0); }
	static Any _0x716F17F8A0419F95(Any p0) { return Native::Invoke<Any, Any>(0x716F17F8A0419F95, p0); }
	static Any _0xFEC1D4B5C82C176F(Any p0) { return Native::Invoke<Any, Any>(0xFEC1D4B5C82C176F, p0); }
	static void _0x553D67295DDD2309(Any p0) { return Native::Invoke<void, Any>(0x553D67295DDD2309, p0); }
	static Any _0xF18AF483DF70BBDE() { return Native::Invoke<Any>(0xF18AF483DF70BBDE); }
	static Any _0xEE04C0AFD4EFAF0E(Any p0) { return Native::Invoke<Any, Any>(0xEE04C0AFD4EFAF0E, p0); }
	static Any _0x3FFB15534067DCD4(Any p0) { return Native::Invoke<Any, Any>(0x3FFB15534067DCD4, p0); }
	static Any _0xE578C8AE173719B3(Any p0) { return Native::Invoke<Any, Any>(0xE578C8AE173719B3, p0); }
	static Any _0x18013392501CE5DC(Any p0) { return Native::Invoke<Any, Any>(0x18013392501CE5DC, p0); }
	static Any _0x33982467B1E349EF(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return Native::Invoke<Any, Any, Any, Any, Any, Any, Any, Any>(0x33982467B1E349EF, p0, p1, p2, p3, p4, p5, p6); }
	static Any _0x8314FC2013ECE2DA(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(0x8314FC2013ECE2DA, p0, p1, p2); }
	static void _0x4D5C9CC7E7E23E09() { return Native::Invoke<void>(0x4D5C9CC7E7E23E09); }
	static Any _0x870708A6E147A9AD(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9) { return Native::Invoke<Any, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any>(0x870708A6E147A9AD, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); }
	static Any _0xE98D55C5983F2509(Any p0) { return Native::Invoke<Any, Any>(0xE98D55C5983F2509, p0); }
	static void _0xFC6ECB9170145ECE() { return Native::Invoke<void>(0xFC6ECB9170145ECE); }
	static Any _0x35165C658077CD0B() { return Native::Invoke<Any>(0x35165C658077CD0B); }
	static Any _0x4B101DBCC9482F2D(Any p0) { return Native::Invoke<Any, Any>(0x4B101DBCC9482F2D, p0); }
	static Any _0xF236C84C6ADFCB2F() { return Native::Invoke<Any>(0xF236C84C6ADFCB2F); }
	static void _0xA3A8926951471C82() { return Native::Invoke<void>(0xA3A8926951471C82); }
	static void _0x88BC5F4AEF77FC4E(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x88BC5F4AEF77FC4E, p0, p1); }
	static Any _0xFDF38E2B711BF78E(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0xFDF38E2B711BF78E, p0, p1); }
	static void _0xEB946B9E579729AD(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xEB946B9E579729AD, p0, p1); }
	static void _0x6AC4AF46A6B8DFB2(Any p0) { return Native::Invoke<void, Any>(0x6AC4AF46A6B8DFB2, p0); }
	static Any _0x8DB104CCEBCD58C5(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x8DB104CCEBCD58C5, p0, p1); }
	static void _0x68319452C5064ABA(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x68319452C5064ABA, p0, p1); }
	static void _0xDE2C3B74D2B3705C(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xDE2C3B74D2B3705C, p0, p1); }
	static void _0x49F3241C28EBBFBC(Any p0) { return Native::Invoke<void, Any>(0x49F3241C28EBBFBC, p0); }
	static void _0x183672FE838A661B(Any p0) { return Native::Invoke<void, Any>(0x183672FE838A661B, p0); }
	static void _0x38C0C9CAE1544500(Any p0) { return Native::Invoke<void, Any>(0x38C0C9CAE1544500, p0); }
	static void _0x154340E87D8CC178(Any p0) { return Native::Invoke<void, Any>(0x154340E87D8CC178, p0); }
	static void _0x94FCADCF9F0C368E(Any p0) { return Native::Invoke<void, Any>(0x94FCADCF9F0C368E, p0); }
	static Any _0x0D0AE5081F88CFE1(Any p0) { return Native::Invoke<Any, Any>(0x0D0AE5081F88CFE1, p0); }
	static void _0xAF3A84C7DE6A1DC5(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xAF3A84C7DE6A1DC5, p0, p1); }
	static void _0x48E4D50F87A96AA5(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any>(0x48E4D50F87A96AA5, p0, p1, p2, p3, p4, p5); }
	static Any _0xB1F6665AA54DCD5C(Any p0) { return Native::Invoke<Any, Any>(0xB1F6665AA54DCD5C, p0); }
	static Any _0x8BB99B85444544D9(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x8BB99B85444544D9, p0, p1); }
	static Any _0x6F02B5E50511721E(Any p0) { return Native::Invoke<Any, Any>(0x6F02B5E50511721E, p0); }
	static Any _0xCC1BAF72D571DB8D(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(0xCC1BAF72D571DB8D, p0, p1, p2); }
	static Any _0x5170DDA6D63ACAAA(Any p0) { return Native::Invoke<Any, Any>(0x5170DDA6D63ACAAA, p0); }
	static void _0x674B90BE1115846D(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x674B90BE1115846D, p0, p1); }
	static void _0xAB26DEEE120FD3FD(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xAB26DEEE120FD3FD, p0, p1); }
	static void _0x082C043C7AFC3747(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x082C043C7AFC3747, p0, p1); }
	static void _0x40D72189F46D2E15(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x40D72189F46D2E15, p0, p1); }
	static void _0xBB282CF5D2333FB8(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xBB282CF5D2333FB8, p0, p1); }
	static Any _0xAD44856A1CD29635() { return Native::Invoke<Any>(0xAD44856A1CD29635); }
	static Any _0x38C2BF94D15F464D(Any p0) { return Native::Invoke<Any, Any>(0x38C2BF94D15F464D, p0); }
	static void _0x3A87FDA8F1B6CDFB(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0x3A87FDA8F1B6CDFB, p0, p1, p2); }
	static void _0x4647842FE8F31C1E(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x4647842FE8F31C1E, p0, p1); }
	static Any _0xF9B91C5129EABC08(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0xF9B91C5129EABC08, p0, p1); }
	static void _0x9B47971234169990(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x9B47971234169990, p0, p1); }
	static void _0xF63FA29D4A9ACA86(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xF63FA29D4A9ACA86, p0, p1); }
	static Any _0x8C0F6A3D7236DEEB() { return Native::Invoke<Any>(0x8C0F6A3D7236DEEB); }
	static void _0x7FA58CED69405F9A(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x7FA58CED69405F9A, p0, p1); }
	static void _0xA08111B053D84B4D(Any p0) { return Native::Invoke<void, Any>(0xA08111B053D84B4D, p0); }
	static Any _0xACB7E1418A8B6E32(Any p0) { return Native::Invoke<Any, Any>(0xACB7E1418A8B6E32, p0); }
	static void _0xE97240065406CB80(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xE97240065406CB80, p0, p1); }
	static Any _0x4CABE596D632E4B0(Any p0) { return Native::Invoke<Any, Any>(0x4CABE596D632E4B0, p0); }
	static void _0xAFF2FD8ADD927585() { return Native::Invoke<void>(0xAFF2FD8ADD927585); }
	static Any _0xFAED234C7F53ABEB() { return Native::Invoke<Any>(0xFAED234C7F53ABEB); }
	static Any _0x0358B8A41916C613(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<Any, Any, Any, Any, Any>(0x0358B8A41916C613, p0, p1, p2, p3); }
	static Any _0xA565FAC215CBC77D() { return Native::Invoke<Any>(0xA565FAC215CBC77D); }
}
namespace _NAMESPACE40
{
	static Any _0xE54DC27571D5EDC5() { return Native::Invoke<Any>(0xE54DC27571D5EDC5); }
	static Any _0x57E798B56C45EE15(Any p0) { return Native::Invoke<Any, Any>(0x57E798B56C45EE15, p0); }
	static Any _0x57E798B57C45EE16(Any p0) { return Native::Invoke<Any, Any>(0x57E798B57C45EE16, p0); }
	static Any _0xE54DC27571D5EDC4() { return Native::Invoke<Any>(0xE54DC27571D5EDC4); }
	static Any _0x57E798B54C45EE1A(Any p0) { return Native::Invoke<Any, Any>(0x57E798B54C45EE1A, p0); }
	static void _0xE824CE7D13FCB300(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xE824CE7D13FCB300, p0, p1); }
	static Any _0xE824CE7D13FCB35E(Any p0) { return Native::Invoke<Any, Any>(0xE824CE7D13FCB35E, p0); }
	static Any _0xE4E2C581F127A11C() { return Native::Invoke<Any>(0xE4E2C581F127A11C); }
	static Any _0x8C32D86E9556ED86() { return Native::Invoke<Any>(0x8C32D86E9556ED86); }
	static Any _0x12F65317708749A5() { return Native::Invoke<Any>(0x12F65317708749A5); }
	static Any _0x3A04F0169DA87A9D() { return Native::Invoke<Any>(0x3A04F0169DA87A9D); }
	static Any _0x9AABABF8313C3516() { return Native::Invoke<Any>(0x9AABABF8313C3516); }
	static void _0x25855B1574BF8CD5(Any p0) { return Native::Invoke<void, Any>(0x25855B1574BF8CD5, p0); }
	static void _0x7F89E15A8FB8DE97() { return Native::Invoke<void>(0x7F89E15A8FB8DE97); }
	static Any _0x7E8F86A4FA33033C() { return Native::Invoke<Any>(0x7E8F86A4FA33033C); }
}
namespace _NAMESPACE41
{
	static Any _0x0C02DABFA3B98176() { return Native::Invoke<Any>(0x0C02DABFA3B98176); }
	static Any _0x466BC8769CF26A7A(Any p0) { return Native::Invoke<Any, Any>(0x466BC8769CF26A7A, p0); }
	static Any _0xBC3422DC91667621(Any p0) { return Native::Invoke<Any, Any>(0xBC3422DC91667621, p0); }
	static Any _0x282D36FF103D78DF() { return Native::Invoke<Any>(0x282D36FF103D78DF); }
	static Any _0xAEC5F0119867E457() { return Native::Invoke<Any>(0xAEC5F0119867E457); }
	static Any _0xA46FD001D1BE896C() { return Native::Invoke<Any>(0xA46FD001D1BE896C); }
	static Any _0x07AD9E43FD478527() { return Native::Invoke<Any>(0x07AD9E43FD478527); }
	static Any _0x8A67120DBC299525() { return Native::Invoke<Any>(0x8A67120DBC299525); }
}
namespace NETSHOPPING
{
	static Any _0xC019112F8995DC1C() { return Native::Invoke<Any>(0xC019112F8995DC1C); }
	static Any _CASH_INVENTORY_TRANSACTION_READY_FOR_TRANSITIONING() { return Native::Invoke<Any>(N::_CASH_INVENTORY_TRANSACTION_READY_FOR_TRANSITIONING); }
	static Any _0x6CE9FB6332B5E46E() { return Native::Invoke<Any>(0x6CE9FB6332B5E46E); }
	static Any _0xD1CE92D1D9BE170A() { return Native::Invoke<Any>(0xD1CE92D1D9BE170A); }
	static Any _CASH_INVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<Any, Any, Any, Any, Any>(N::_CASH_INVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM, p0, p1, p2, p3); }
	static Any _CASH_INVENTORY_TRANSACTION_START(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(N::_CASH_INVENTORY_TRANSACTION_START, p0, p1, p2); }
	static Any _CASH_INVENTORY_TRANSACTION_FIND(Any p0) { return Native::Invoke<Any, Any>(N::_CASH_INVENTORY_TRANSACTION_FIND, p0); }
	static Any _CASH_INVENTORY_TRANSACTION_DELETE(Any p0) { return Native::Invoke<Any, Any>(N::_CASH_INVENTORY_TRANSACTION_DELETE, p0); }
	static Any _0x6C9F12700BCE69F4() { return Native::Invoke<Any>(0x6C9F12700BCE69F4); }
	static Any _CASH_INVENTORY_TRANSACTION_ADD_ITEM_WITH_INGREDIENTS(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(N::_CASH_INVENTORY_TRANSACTION_ADD_ITEM_WITH_INGREDIENTS, p0, p1, p2); }
	static Any _0xF65D2D35037BF5EC() { return Native::Invoke<Any>(0xF65D2D35037BF5EC); }
	static Any _0x52BDE32F21BA3B6D() { return Native::Invoke<Any>(0x52BDE32F21BA3B6D); }
	static Any _0x7616B5F0895C2D99() { return Native::Invoke<Any>(0x7616B5F0895C2D99); }
	static Any _CASH_INVENTORY_TRANSACTION_GET_NUMBER_ITEMS(Any p0) { return Native::Invoke<Any, Any>(N::_CASH_INVENTORY_TRANSACTION_GET_NUMBER_ITEMS, p0); }
	static Any _0xBD2D520C51CCFF52(Any p0) { return Native::Invoke<Any, Any>(0xBD2D520C51CCFF52, p0); }
	static Any _CASH_INVENTORY_TRANSACTION_CHECKOUT(Any p0) { return Native::Invoke<Any, Any>(N::_CASH_INVENTORY_TRANSACTION_CHECKOUT, p0); }
	static Any _CASH_INVENTORY_TRANSACTION_CHECKOUT_STATUS(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(N::_CASH_INVENTORY_TRANSACTION_CHECKOUT_STATUS, p0, p1); }
	static Any _0xB6F4557060EF0FB4() { return Native::Invoke<Any>(0xB6F4557060EF0FB4); }
	static Any _0x98412398BBE73F61() { return Native::Invoke<Any>(0x98412398BBE73F61); }
	static Any _0xCE54C9ABE6FBC6DB() { return Native::Invoke<Any>(0xCE54C9ABE6FBC6DB); }
	static Any _0xA0B7094629724974() { return Native::Invoke<Any>(0xA0B7094629724974); }
	static Any _0x92A32BA29622763F() { return Native::Invoke<Any>(0x92A32BA29622763F); }
	static Any _0x3FA09DD57B93C0DE() { return Native::Invoke<Any>(0x3FA09DD57B93C0DE); }
	static Any _0xD1555FBC96C88444() { return Native::Invoke<Any>(0xD1555FBC96C88444); }
}
namespace NETWORK
{
	static BOOL NETWORK_IS_SIGNED_ONLINE() { return Native::Invoke<BOOL>(N::NETWORK_IS_SIGNED_ONLINE); }
	static Any _0x74FB3E29E6D10FA9() { return Native::Invoke<Any>(0x74FB3E29E6D10FA9); }
	static BOOL _NETWORK_ARE_ROS_AVAILABLE() { return Native::Invoke<BOOL>(N::_NETWORK_ARE_ROS_AVAILABLE); }
	static BOOL NETWORK_IS_CLOUD_AVAILABLE() { return Native::Invoke<BOOL>(N::NETWORK_IS_CLOUD_AVAILABLE); }
	static Any _0x67A5589628E0CFF6() { return Native::Invoke<Any>(0x67A5589628E0CFF6); }
	static BOOL NETWORK_IS_HOST() { return Native::Invoke<BOOL>(N::NETWORK_IS_HOST); }
	static BOOL NETWORK_HAVE_ONLINE_PRIVILEGES() { return Native::Invoke<BOOL>(N::NETWORK_HAVE_ONLINE_PRIVILEGES); }
	static Any _0x595F028698072DD9(Any p0) { return Native::Invoke<Any, Any>(0x595F028698072DD9, p0); }
	static Any _0x83F28CE49FBBFFBA() { return Native::Invoke<Any>(0x83F28CE49FBBFFBA); }
	static Any _0x246545C37C27A717() { return Native::Invoke<Any>(0x246545C37C27A717); }
	static Any _0xF23A6D6C11D8EC15() { return Native::Invoke<Any>(0xF23A6D6C11D8EC15); }
	static Any _0x3E8CCE6769DB5F34() { return Native::Invoke<Any>(0x3E8CCE6769DB5F34); }
	static Any _0x83FE8D7229593017() { return Native::Invoke<Any>(0x83FE8D7229593017); }
	static Any _0x8FF6059DA26E688A() { return Native::Invoke<Any>(0x8FF6059DA26E688A); }
	static Any _0x78A9535AF83715C6() { return Native::Invoke<Any>(0x78A9535AF83715C6); }
	static Any _0xDA4B1A479C414FB2() { return Native::Invoke<Any>(0xDA4B1A479C414FB2); }
	static Any _0xFC6FCF4C03F1BBF6() { return Native::Invoke<Any>(0xFC6FCF4C03F1BBF6); }
	static Any _0x160F0CE6D76A39C9() { return Native::Invoke<Any>(0x160F0CE6D76A39C9); }
	static Any _0x2FB53C631A49BE92() { return Native::Invoke<Any>(0x2FB53C631A49BE92); }
	static void _0xE5FF65CFF5160752() { return Native::Invoke<void>(0xE5FF65CFF5160752); }
	static BOOL NETWORK_CAN_ACCESS_MULTIPLAYER(int* loadingState) { return Native::Invoke<BOOL, int*>(N::NETWORK_CAN_ACCESS_MULTIPLAYER, loadingState); }
	static Any _0x2A8112A974DE1EF6() { return Native::Invoke<Any>(0x2A8112A974DE1EF6); }
	static Any _0xDD7806FD0543BC3D() { return Native::Invoke<Any>(0xDD7806FD0543BC3D); }
	static Any _0xA95470DA137587F5() { return Native::Invoke<Any>(0xA95470DA137587F5); }
	static Any _0xBB697756309D77EE(Any p0) { return Native::Invoke<Any, Any>(0xBB697756309D77EE, p0); }
	static Any _0xDD73C9838CE7181D() { return Native::Invoke<Any>(0xDD73C9838CE7181D); }
	static Any _0x2C5BD9A43987AA27(Any p0) { return Native::Invoke<Any, Any>(0x2C5BD9A43987AA27, p0); }
	static Any _0x86FD10251A7118A4() { return Native::Invoke<Any>(0x86FD10251A7118A4); }
	static void _0x3E74A687A73979C6(Any p0) { return Native::Invoke<void, Any>(0x3E74A687A73979C6, p0); }
	static BOOL NETWORK_SESSION_IS_PRIVATE() { return Native::Invoke<BOOL>(N::NETWORK_SESSION_IS_PRIVATE); }
	static Any _0x04019AE4956D4393() { return Native::Invoke<Any>(0x04019AE4956D4393); }
	static Any _0x2989E131FDE37E97() { return Native::Invoke<Any>(0x2989E131FDE37E97); }
	static Any _0x309BBEBEA8A3986C() { return Native::Invoke<Any>(0x309BBEBEA8A3986C); }
	static Any _0x39A8EF7AF29A192C() { return Native::Invoke<Any>(0x39A8EF7AF29A192C); }
	static Any _0x23D9C1F2E4098EDC() { return Native::Invoke<Any>(0x23D9C1F2E4098EDC); }
	static Any _0x2F54B146D3EDCE4D() { return Native::Invoke<Any>(0x2F54B146D3EDCE4D); }
	static Any _0xF0C0C94B404206FA() { return Native::Invoke<Any>(0xF0C0C94B404206FA); }
	static Any _0x1413B6BF27AB7A95() { return Native::Invoke<Any>(0x1413B6BF27AB7A95); }
	static Any _0xBAFFDE5F953720D9() { return Native::Invoke<Any>(0xBAFFDE5F953720D9); }
	static Any _0xAFA14F98327791CE() { return Native::Invoke<Any>(0xAFA14F98327791CE); }
	static Any _0x8FB7C254CFCBF78E(Any p0) { return Native::Invoke<Any, Any>(0x8FB7C254CFCBF78E, p0); }
	static Any _0x9E762A595CF88E4A() { return Native::Invoke<Any>(0x9E762A595CF88E4A); }
	static Any _0xE72E5C1289BD1F40(Any p0) { return Native::Invoke<Any, Any>(0xE72E5C1289BD1F40, p0); }
	static Any _0xA6F1BAABFF6AD7B9() { return Native::Invoke<Any>(0xA6F1BAABFF6AD7B9); }
	static Any _0x0DD051B1BF4B8BD6() { return Native::Invoke<Any>(0x0DD051B1BF4B8BD6); }
	static Any _0xCCF878D50F8AB10D() { return Native::Invoke<Any>(0xCCF878D50F8AB10D); }
	static Any _0xF20B18A330E6DB5C() { return Native::Invoke<Any>(0xF20B18A330E6DB5C); }
	static Any _0x0F44A5C78D114922() { return Native::Invoke<Any>(0x0F44A5C78D114922); }
	static Any _0xECE6A0C1B59CD8BE() { return Native::Invoke<Any>(0xECE6A0C1B59CD8BE); }
	static Any _0x17C21B7319A05047() { return Native::Invoke<Any>(0x17C21B7319A05047); }
	static Any _0xF2CBC969C4F090C7() { return Native::Invoke<Any>(0xF2CBC969C4F090C7); }
	static void _0xFD4272A137703449() { return Native::Invoke<void>(0xFD4272A137703449); }
	static Any _0x236905C700FDB54D() { return Native::Invoke<Any>(0x236905C700FDB54D); }
	static Any _0x71FA2D1880C48032() { return Native::Invoke<Any>(0x71FA2D1880C48032); }
	static Any _NETWORK_GET_SERVER_TIME() { return Native::Invoke<Any>(N::_NETWORK_GET_SERVER_TIME); }
	static void NETWORK_CLEAR_CLOCK_TIME_OVERRIDE() { return Native::Invoke<void>(N::NETWORK_CLEAR_CLOCK_TIME_OVERRIDE); }
	static BOOL NETWORK_IS_CLOCK_TIME_OVERRIDDEN() { return Native::Invoke<BOOL>(N::NETWORK_IS_CLOCK_TIME_OVERRIDDEN); }
	static Any _0x11A7ADCD629E170F() { return Native::Invoke<Any>(0x11A7ADCD629E170F); }
	static Any _0x669E223E64B1903C() { return Native::Invoke<Any>(0x669E223E64B1903C); }
	static Any _0xE28C13ECC36FF14E() { return Native::Invoke<Any>(0xE28C13ECC36FF14E); }
	static Any _0x65F040D91001ED4B() { return Native::Invoke<Any>(0x65F040D91001ED4B); }
	static Any _0x0E54D4DA6018FF8E() { return Native::Invoke<Any>(0x0E54D4DA6018FF8E); }
	static BOOL NETWORK_IS_FINDING_GAMERS() { return Native::Invoke<BOOL>(N::NETWORK_IS_FINDING_GAMERS); }
	static Any _0xF9B83B77929D8863() { return Native::Invoke<Any>(0xF9B83B77929D8863); }
	static Any _0x7BCA0A3972708436() { return Native::Invoke<Any>(0x7BCA0A3972708436); }
	static void NETWORK_CLEAR_FOUND_GAMERS() { return Native::Invoke<void>(N::NETWORK_CLEAR_FOUND_GAMERS); }
	static Any _0xFBDFE1C1356E12E8() { return Native::Invoke<Any>(0xFBDFE1C1356E12E8); }
	static Any _0x25189F9908E9CD65() { return Native::Invoke<Any>(0x25189F9908E9CD65); }
	static Any _0x5AE17C6B0134B7F1() { return Native::Invoke<Any>(0x5AE17C6B0134B7F1); }
	static Any _0xDDAEB478E58F8DEA() { return Native::Invoke<Any>(0xDDAEB478E58F8DEA); }
	static Any NETWORK_CLEAR_GET_GAMER_STATUS() { return Native::Invoke<Any>(N::NETWORK_CLEAR_GET_GAMER_STATUS); }
	static void _0x7AC752103856FB20(Any p0) { return Native::Invoke<void, Any>(0x7AC752103856FB20, p0); }
	static BOOL NETWORK_IS_GAME_IN_PROGRESS() { return Native::Invoke<BOOL>(N::NETWORK_IS_GAME_IN_PROGRESS); }
	static BOOL NETWORK_IS_SESSION_ACTIVE() { return Native::Invoke<BOOL>(N::NETWORK_IS_SESSION_ACTIVE); }
	static BOOL NETWORK_IS_IN_SESSION() { return Native::Invoke<BOOL>(N::NETWORK_IS_IN_SESSION); }
	static Any _0xC5196C42DE19F646() { return Native::Invoke<Any>(0xC5196C42DE19F646); }
	static BOOL NETWORK_IS_SESSION_STARTED() { return Native::Invoke<BOOL>(N::NETWORK_IS_SESSION_STARTED); }
	static BOOL NETWORK_CAN_SESSION_END() { return Native::Invoke<BOOL>(N::NETWORK_CAN_SESSION_END); }
	static Any _0x225640E09EFFDC3F() { return Native::Invoke<Any>(0x225640E09EFFDC3F); }
	static Any _0xE546BDA1B3E288EE() { return Native::Invoke<Any>(0xE546BDA1B3E288EE); }
	static Any _0x78335E12DB0BF961() { return Native::Invoke<Any>(0x78335E12DB0BF961); }
	static Any _0x51F33DBC1A41CBFD() { return Native::Invoke<Any>(0x51F33DBC1A41CBFD); }
	static Any _0x0AE241A4A9ADEEEC() { return Native::Invoke<Any>(0x0AE241A4A9ADEEEC); }
	static Any _0x3215BBE34D3418C5() { return Native::Invoke<Any>(0x3215BBE34D3418C5); }
	static Any _0x8DC9AA3B508B1A85() { return Native::Invoke<Any>(0x8DC9AA3B508B1A85); }
	static Any _0xD3A3C8B9F3BDEF81() { return Native::Invoke<Any>(0xD3A3C8B9F3BDEF81); }
	static Any _0x18B94666CF610AEB() { return Native::Invoke<Any>(0x18B94666CF610AEB); }
	static Any _0x981146E5C9CE9250() { return Native::Invoke<Any>(0x981146E5C9CE9250); }
	static Any _0xBF8276E51761F9DA() { return Native::Invoke<Any>(0xBF8276E51761F9DA); }
	static Any _0xDCA4A74135E1DEA5() { return Native::Invoke<Any>(0xDCA4A74135E1DEA5); }
	static Any _0xD0498AD30E16B6BD() { return Native::Invoke<Any>(0xD0498AD30E16B6BD); }
	static Any _0xF23D6475640D29EB() { return Native::Invoke<Any>(0xF23D6475640D29EB); }
	static void _0x704F92B3AF20D857(Any p0) { return Native::Invoke<void, Any>(0x704F92B3AF20D857, p0); }
	static Any _0xF342F6BD0A8287D5() { return Native::Invoke<Any>(0xF342F6BD0A8287D5); }
	static Any _0xD39A72AE5EBD57E5() { return Native::Invoke<Any>(0xD39A72AE5EBD57E5); }
	static Any _0xE47001B7CB8B98AE() { return Native::Invoke<Any>(0xE47001B7CB8B98AE); }
	static Any _0xD1FFB246F4E088AC() { return Native::Invoke<Any>(0xD1FFB246F4E088AC); }
	static Any _0x27B1AE4D8C652F08(Any p0) { return Native::Invoke<Any, Any>(0x27B1AE4D8C652F08, p0); }
	static Any _0x6C27442A225A241A() { return Native::Invoke<Any>(0x6C27442A225A241A); }
	static Any _0xE59F4924BD3A718D(Any p0) { return Native::Invoke<Any, Any>(0xE59F4924BD3A718D, p0); }
	static Any _0x16EFB123C4451032(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x16EFB123C4451032, p0, p1); }
	static Any _0xE79BA3BC265895DA(Any p0) { return Native::Invoke<Any, Any>(0xE79BA3BC265895DA, p0); }
	static Any _0xC0CFFDA87C2C163D(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(0xC0CFFDA87C2C163D, p0, p1, p2); }
	static Any _0x5ED39DA62BEB1330(Any p0) { return Native::Invoke<Any, Any>(0x5ED39DA62BEB1330, p0); }
	static Any _0xB2CEA5105AAC8DDE(Any p0) { return Native::Invoke<Any, Any>(0xB2CEA5105AAC8DDE, p0); }
	static Any _0x3AA0CDC63696166D(Any p0) { return Native::Invoke<Any, Any>(0x3AA0CDC63696166D, p0); }
	static Any _0xE483BB6BE686F632() { return Native::Invoke<Any>(0xE483BB6BE686F632); }
	static Any _0xE8E633215471BB5D() { return Native::Invoke<Any>(0xE8E633215471BB5D); }
	static Any _0xA2837A5E21FB5A58() { return Native::Invoke<Any>(0xA2837A5E21FB5A58); }
	static Any _0xE39600E50D608693() { return Native::Invoke<Any>(0xE39600E50D608693); }
	static Any _0xD7BAD4062074B9C1() { return Native::Invoke<Any>(0xD7BAD4062074B9C1); }
	static Any _0xCA58D4FD20D70F24() { return Native::Invoke<Any>(0xCA58D4FD20D70F24); }
	static Any _0xC028B3F52C707C49() { return Native::Invoke<Any>(0xC028B3F52C707C49); }
	static Any _0xFC4165C9165C166F() { return Native::Invoke<Any>(0xFC4165C9165C166F); }
	static Any _0x5B9C6AC118FD4774() { return Native::Invoke<Any>(0x5B9C6AC118FD4774); }
	static Any _0x9BCF28FB5D65A9BE() { return Native::Invoke<Any>(0x9BCF28FB5D65A9BE); }
	static Any _0x3B82ACC3F4B6240C() { return Native::Invoke<Any>(0x3B82ACC3F4B6240C); }
	static void _0xA4484173759749B1() { return Native::Invoke<void>(0xA4484173759749B1); }
	static Any _0x603469298A4308AF() { return Native::Invoke<Any>(0x603469298A4308AF); }
	static Any _0xF5C5929E07512F80() { return Native::Invoke<Any>(0xF5C5929E07512F80); }
	static Any NETWORK_IS_IN_PLATFORM_PARTY() { return Native::Invoke<Any>(N::NETWORK_IS_IN_PLATFORM_PARTY); }
	static Any _0x11820D1AE80DEA39() { return Native::Invoke<Any>(0x11820D1AE80DEA39); }
	static Any _0xFD8B834A8BA05048() { return Native::Invoke<Any>(0xFD8B834A8BA05048); }
	static Any _0xF1B84178F8674195() { return Native::Invoke<Any>(0xF1B84178F8674195); }
	static Any NETWORK_GET_RANDOM_INT_RANGED() { return Native::Invoke<Any>(N::NETWORK_GET_RANDOM_INT_RANGED); }
	static void NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(int lobbySize, BOOL p1, int instanceId) { return Native::Invoke<void, int, BOOL, int>(N::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT, lobbySize, p1, instanceId); }
	static BOOL NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT() { return Native::Invoke<BOOL>(N::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT); }
	static int _NETWORK_GET_NUM_PARTICIPANTS_HOST() { return Native::Invoke<int>(N::_NETWORK_GET_NUM_PARTICIPANTS_HOST); }
	static int NETWORK_GET_NUM_PARTICIPANTS() { return Native::Invoke<int>(N::NETWORK_GET_NUM_PARTICIPANTS); }
	static int NETWORK_GET_SCRIPT_STATUS() { return Native::Invoke<int>(N::NETWORK_GET_SCRIPT_STATUS); }
	static Any NETWORK_REGISTER_HOST_BROADCAST_VARIABLES() { return Native::Invoke<Any>(N::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES); }
	static Any _0xBA24095EA96DFE17() { return Native::Invoke<Any>(0xBA24095EA96DFE17); }
	static Any NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES() { return Native::Invoke<Any>(N::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES); }
	static Any _0x690806BC83BC8CA2() { return Native::Invoke<Any>(0x690806BC83BC8CA2); }
	static Any _0x5D10B3795F3FC886() { return Native::Invoke<Any>(0x5D10B3795F3FC886); }
	static Any NETWORK_GET_PLAYER_INDEX() { return Native::Invoke<Any>(N::NETWORK_GET_PLAYER_INDEX); }
	static Any NETWORK_GET_PARTICIPANT_INDEX() { return Native::Invoke<Any>(N::NETWORK_GET_PARTICIPANT_INDEX); }
	static Any NETWORK_GET_PLAYER_INDEX_FROM_PED() { return Native::Invoke<Any>(N::NETWORK_GET_PLAYER_INDEX_FROM_PED); }
	static int NETWORK_GET_NUM_CONNECTED_PLAYERS() { return Native::Invoke<int>(N::NETWORK_GET_NUM_CONNECTED_PLAYERS); }
	static Any NETWORK_IS_PLAYER_CONNECTED() { return Native::Invoke<Any>(N::NETWORK_IS_PLAYER_CONNECTED); }
	static Any NETWORK_GET_TOTAL_NUM_PLAYERS() { return Native::Invoke<Any>(N::NETWORK_GET_TOTAL_NUM_PLAYERS); }
	static Any NETWORK_IS_PARTICIPANT_ACTIVE() { return Native::Invoke<Any>(N::NETWORK_IS_PARTICIPANT_ACTIVE); }
	static BOOL NETWORK_IS_PLAYER_ACTIVE(Player player) { return Native::Invoke<BOOL, Player>(N::NETWORK_IS_PLAYER_ACTIVE, player); }
	static BOOL NETWORK_IS_PLAYER_A_PARTICIPANT(Player playerId) { return Native::Invoke<BOOL, Player>(N::NETWORK_IS_PLAYER_A_PARTICIPANT, playerId); }
	static BOOL NETWORK_IS_HOST_OF_THIS_SCRIPT() { return Native::Invoke<BOOL>(N::NETWORK_IS_HOST_OF_THIS_SCRIPT); }
	static Any _0xB4A25351D79B444C() { return Native::Invoke<Any>(0xB4A25351D79B444C); }
	static void NETWORK_SET_MISSION_FINISHED() { return Native::Invoke<void>(N::NETWORK_SET_MISSION_FINISHED); }
	static BOOL NETWORK_IS_SCRIPT_ACTIVE(char* scriptName, int instanceId, BOOL unk, int positionHash) { return Native::Invoke<BOOL, char*, int, BOOL, int>(N::NETWORK_IS_SCRIPT_ACTIVE, scriptName, instanceId, unk, positionHash); }
	static Any _0x1B89BC43B6E69107() { return Native::Invoke<Any>(0x1B89BC43B6E69107); }
	static Any _0x31DAD2CD6D49546E() { return Native::Invoke<Any>(0x31DAD2CD6D49546E); }
	static Any _0xFB9ECED5B68F3B78() { return Native::Invoke<Any>(0xFB9ECED5B68F3B78); }
	static Any NETWORK_GET_NUM_SCRIPT_PARTICIPANTS() { return Native::Invoke<Any>(N::NETWORK_GET_NUM_SCRIPT_PARTICIPANTS); }
	static Any _0x638A3A81733086DB() { return Native::Invoke<Any>(0x638A3A81733086DB); }
	static Any _0x1AD5B71586B94820() { return Native::Invoke<Any>(0x1AD5B71586B94820); }
	static Any _0x2302C0264EA58D31() { return Native::Invoke<Any>(0x2302C0264EA58D31); }
	static Any _0x9C725D149622BFDE() { return Native::Invoke<Any>(0x9C725D149622BFDE); }
	static Player PARTICIPANT_ID() { return Native::Invoke<Player>(N::PARTICIPANT_ID); }
	static int PARTICIPANT_ID_TO_INT() { return Native::Invoke<int>(N::PARTICIPANT_ID_TO_INT); }
	static Any NETWORK_GET_DESTROYER_OF_NETWORK_ID() { return Native::Invoke<Any>(N::NETWORK_GET_DESTROYER_OF_NETWORK_ID); }
	static Any _0x6CF82A7F65A5AD5F() { return Native::Invoke<Any>(0x6CF82A7F65A5AD5F); }
	static Any _0x236321F1178A5446() { return Native::Invoke<Any>(0x236321F1178A5446); }
	static Any _NETWORK_GET_DESTROYER_OF_ENTITY() { return Native::Invoke<Any>(N::_NETWORK_GET_DESTROYER_OF_ENTITY); }
	static Any NETWORK_GET_ENTITY_KILLER_OF_PLAYER() { return Native::Invoke<Any>(N::NETWORK_GET_ENTITY_KILLER_OF_PLAYER); }
	static Any NETWORK_RESURRECT_LOCAL_PLAYER() { return Native::Invoke<Any>(N::NETWORK_RESURRECT_LOCAL_PLAYER); }
	static Any _0x4154B7D8C75E5DCF() { return Native::Invoke<Any>(0x4154B7D8C75E5DCF); }
	static Any NETWORK_SET_LOCAL_PLAYER_INVINCIBLE_TIME() { return Native::Invoke<Any>(N::NETWORK_SET_LOCAL_PLAYER_INVINCIBLE_TIME); }
	static Any NETWORK_SET_LOCAL_PLAYER_SYNC_LOOK_AT() { return Native::Invoke<Any>(N::NETWORK_SET_LOCAL_PLAYER_SYNC_LOOK_AT); }
	static Any _0xB07D3185E11657A5() { return Native::Invoke<Any>(0xB07D3185E11657A5); }
	static Any NETWORK_GET_NETWORK_ID_FROM_ENTITY() { return Native::Invoke<Any>(N::NETWORK_GET_NETWORK_ID_FROM_ENTITY); }
	static Any NETWORK_GET_ENTITY_FROM_NETWORK_ID() { return Native::Invoke<Any>(N::NETWORK_GET_ENTITY_FROM_NETWORK_ID); }
	static BOOL NETWORK_GET_ENTITY_IS_NETWORKED(Entity entity) { return Native::Invoke<BOOL, Entity>(N::NETWORK_GET_ENTITY_IS_NETWORKED, entity); }
	static void NETWORK_REGISTER_ENTITY_AS_NETWORKED(Entity entity) { return Native::Invoke<void, Entity>(N::NETWORK_REGISTER_ENTITY_AS_NETWORKED, entity); }
	static BOOL NETWORK_DOES_NETWORK_ID_EXIST(int netID) { return Native::Invoke<BOOL, int>(N::NETWORK_DOES_NETWORK_ID_EXIST, netID); }
	static Any NETWORK_REQUEST_CONTROL_OF_NETWORK_ID() { return Native::Invoke<Any>(N::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID); }
	static Any NETWORK_HAS_CONTROL_OF_NETWORK_ID() { return Native::Invoke<Any>(N::NETWORK_HAS_CONTROL_OF_NETWORK_ID); }
	static BOOL NETWORK_REQUEST_CONTROL_OF_ENTITY(Entity entity) { return Native::Invoke<BOOL, Entity>(N::NETWORK_REQUEST_CONTROL_OF_ENTITY, entity); }
	static Any _0xAAA92B631B13F614() { return Native::Invoke<Any>(0xAAA92B631B13F614); }
	static BOOL NETWORK_HAS_CONTROL_OF_ENTITY(Entity entity) { return Native::Invoke<BOOL, Entity>(N::NETWORK_HAS_CONTROL_OF_ENTITY, entity); }
	static Any NETWORK_HAS_CONTROL_OF_PICKUP() { return Native::Invoke<Any>(N::NETWORK_HAS_CONTROL_OF_PICKUP); }
	static Any _0x26A5C12FACFF8724() { return Native::Invoke<Any>(0x26A5C12FACFF8724); }
	static Any _0xF260AF6F43953316() { return Native::Invoke<Any>(0xF260AF6F43953316); }
	static Any VEH_TO_NET() { return Native::Invoke<Any>(N::VEH_TO_NET); }
	static int PED_TO_NET(Ped ped) { return Native::Invoke<int, Ped>(N::PED_TO_NET, ped); }
	static Any OBJ_TO_NET() { return Native::Invoke<Any>(N::OBJ_TO_NET); }
	static Any _0xE0D73CDDEA79DDCD() { return Native::Invoke<Any>(0xE0D73CDDEA79DDCD); }
	static Any NET_TO_VEH() { return Native::Invoke<Any>(N::NET_TO_VEH); }
	static Ped NET_TO_PED(int netHandle) { return Native::Invoke<Ped, int>(N::NET_TO_PED, netHandle); }
	static Any NET_TO_OBJ() { return Native::Invoke<Any>(N::NET_TO_OBJ); }
	static Any NET_TO_ENT() { return Native::Invoke<Any>(N::NET_TO_ENT); }
	static Any _0xD7F6781A0ABAF6FB() { return Native::Invoke<Any>(0xD7F6781A0ABAF6FB); }
	static Any _0x74F99EF7EF503398() { return Native::Invoke<Any>(0x74F99EF7EF503398); }
	static Any _0xD08066E00D26C448() { return Native::Invoke<Any>(0xD08066E00D26C448); }
	static Any _0x0CC28C08613BA9E5() { return Native::Invoke<Any>(0x0CC28C08613BA9E5); }
	static Any NETWORK_GET_LOCAL_HANDLE() { return Native::Invoke<Any>(N::NETWORK_GET_LOCAL_HANDLE); }
	static void NETWORK_HANDLE_FROM_PLAYER(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(N::NETWORK_HANDLE_FROM_PLAYER, p0, p1); }
	static Any NETWORK_HASH_FROM_PLAYER_HANDLE() { return Native::Invoke<Any>(N::NETWORK_HASH_FROM_PLAYER_HANDLE); }
	static Any NETWORK_HANDLE_FROM_FRIEND() { return Native::Invoke<Any>(N::NETWORK_HANDLE_FROM_FRIEND); }
	static Any NETWORK_GET_GAMERTAG_FROM_HANDLE() { return Native::Invoke<Any>(N::NETWORK_GET_GAMERTAG_FROM_HANDLE); }
	static Any _0xD66C9E72B3CC4982(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0xD66C9E72B3CC4982, p0, p1); }
	static Any _0x58CC181719256197(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(0x58CC181719256197, p0, p1, p2); }
	static Any _0x7FEE4F07C54B6B3C() { return Native::Invoke<Any>(0x7FEE4F07C54B6B3C); }
	static BOOL NETWORK_ARE_HANDLES_THE_SAME(int* netHandle1, int* netHandle2) { return Native::Invoke<BOOL, int*, int*>(N::NETWORK_ARE_HANDLES_THE_SAME, netHandle1, netHandle2); }
	static Any NETWORK_IS_HANDLE_VALID(Any p0) { return Native::Invoke<Any, Any>(N::NETWORK_IS_HANDLE_VALID, p0); }
	static Player NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(int* networkHandle) { return Native::Invoke<Player, int*>(N::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE, networkHandle); }
	static BOOL NETWORK_IS_GAMER_IN_MY_SESSION(int* networkHandle) { return Native::Invoke<BOOL, int*>(N::NETWORK_IS_GAMER_IN_MY_SESSION, networkHandle); }
	static Any NETWORK_SHOW_PROFILE_UI() { return Native::Invoke<Any>(N::NETWORK_SHOW_PROFILE_UI); }
	static Any _0x5759160AC17C13CE() { return Native::Invoke<Any>(0x5759160AC17C13CE); }
	static Any _0xF302AB9D978352EE() { return Native::Invoke<Any>(0xF302AB9D978352EE); }
	static Any _0x4538EE7C321590BC() { return Native::Invoke<Any>(0x4538EE7C321590BC); }
	static Any _0xA47D48D06AA5A188() { return Native::Invoke<Any>(0xA47D48D06AA5A188); }
	static Any _0xDB7ABDD203FA3704() { return Native::Invoke<Any>(0xDB7ABDD203FA3704); }
	static Any _0xA94ECE191D90637A() { return Native::Invoke<Any>(0xA94ECE191D90637A); }
	static Any _0x5CB8B0C846D0F30B() { return Native::Invoke<Any>(0x5CB8B0C846D0F30B); }
	static Any _0xFF36F36B07E69059() { return Native::Invoke<Any>(0xFF36F36B07E69059); }
	static Any _0xA3EEC0A5AFF3FC5B() { return Native::Invoke<Any>(0xA3EEC0A5AFF3FC5B); }
	static Any _0xB389289F031F059A() { return Native::Invoke<Any>(0xB389289F031F059A); }
	static Any _0x1AF5E28E64A76A9F() { return Native::Invoke<Any>(0x1AF5E28E64A76A9F); }
	static Any _0x1F51F367B710A832() { return Native::Invoke<Any>(0x1F51F367B710A832); }
	static Any _0xDA1BFED8582F61F0() { return Native::Invoke<Any>(0xDA1BFED8582F61F0); }
	static Any _0x232E1EB23CDB313C() { return Native::Invoke<Any>(0x232E1EB23CDB313C); }
	static Any _0x3E4A16BC669E71B3() { return Native::Invoke<Any>(0x3E4A16BC669E71B3); }
	static Any _0xE348D1404BD80146() { return Native::Invoke<Any>(0xE348D1404BD80146); }
	static Any _0x665161D250850A9F() { return Native::Invoke<Any>(0x665161D250850A9F); }
	static Any _0x5659D87BE674AB17() { return Native::Invoke<Any>(0x5659D87BE674AB17); }
	static Any NETWORK_IS_FRIEND() { return Native::Invoke<Any>(N::NETWORK_IS_FRIEND); }
	static Any NETWORK_IS_PENDING_FRIEND() { return Native::Invoke<Any>(N::NETWORK_IS_PENDING_FRIEND); }
	static Any NETWORK_ADD_FRIEND() { return Native::Invoke<Any>(N::NETWORK_ADD_FRIEND); }
	static Any _0x55F618F68AB854D3() { return Native::Invoke<Any>(0x55F618F68AB854D3); }
	static Any _0x99ABE9BF9DADA162() { return Native::Invoke<Any>(0x99ABE9BF9DADA162); }
	static Any _0x9C25E8EC4C535FBD() { return Native::Invoke<Any>(0x9C25E8EC4C535FBD); }
	static Any NETWORK_SET_FRIENDLY_FIRE_OPTION() { return Native::Invoke<Any>(N::NETWORK_SET_FRIENDLY_FIRE_OPTION); }
	static void NETWORK_SET_RICH_PRESENCE(int p0, Any p1, Any p2, Any p3) { return Native::Invoke<void, int, Any, Any, Any>(N::NETWORK_SET_RICH_PRESENCE, p0, p1, p2, p3); }
	static int NETWORK_GET_TIMEOUT_TIME() { return Native::Invoke<int>(N::NETWORK_GET_TIMEOUT_TIME); }
	static Any _0xBC7D36946D19E60E() { return Native::Invoke<Any>(0xBC7D36946D19E60E); }
	static Any _0xC964FCD3D1720697() { return Native::Invoke<Any>(0xC964FCD3D1720697); }
	static Any _0xEC089F84A9C16C62() { return Native::Invoke<Any>(0xEC089F84A9C16C62); }
	static Any _0x7182EDDA1EE7DB5A() { return Native::Invoke<Any>(0x7182EDDA1EE7DB5A); }
	static Any _0xE1BC73D6815BA361() { return Native::Invoke<Any>(0xE1BC73D6815BA361); }
	static void _0x02C4C6C2900D84DF(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x02C4C6C2900D84DF, p0, p1); }
	static void _0xD78A26024BB13E08(Any p0) { return Native::Invoke<void, Any>(0xD78A26024BB13E08, p0); }
	static void SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(int netId, BOOL toggle) { return Native::Invoke<void, int, BOOL>(N::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES, netId, toggle); }
	static Any _SET_NETWORK_ID_SYNC_TO_PLAYER() { return Native::Invoke<Any>(N::_SET_NETWORK_ID_SYNC_TO_PLAYER); }
	static Any _0x9ED3108D6847760A() { return Native::Invoke<Any>(0x9ED3108D6847760A); }
	static Any _0xD785864798258032() { return Native::Invoke<Any>(0xD785864798258032); }
	static Any _NETWORK_SET_ENTITY_INVISIBLE_TO_NETWORK() { return Native::Invoke<Any>(N::_NETWORK_SET_ENTITY_INVISIBLE_TO_NETWORK); }
	static Any _0xE31A04513237DC89() { return Native::Invoke<Any>(0xE31A04513237DC89); }
	static Any SET_NETWORK_ID_VISIBLE_IN_CUTSCENE() { return Native::Invoke<Any>(N::SET_NETWORK_ID_VISIBLE_IN_CUTSCENE); }
	static Any _NETWORK_CAN_NETWORK_ID_BE_SEEN() { return Native::Invoke<Any>(N::_NETWORK_CAN_NETWORK_ID_BE_SEEN); }
	static Any _0xA6C0787443C9583E() { return Native::Invoke<Any>(0xA6C0787443C9583E); }
	static void SET_LOCAL_PLAYER_VISIBLE_IN_CUTSCENE(BOOL p0, BOOL p1) { return Native::Invoke<void, BOOL, BOOL>(N::SET_LOCAL_PLAYER_VISIBLE_IN_CUTSCENE, p0, p1); }
	static Any _0x89D803CD48622150() { return Native::Invoke<Any>(0x89D803CD48622150); }
	static Any SET_LOCAL_PLAYER_INVISIBLE_LOCALLY() { return Native::Invoke<Any>(N::SET_LOCAL_PLAYER_INVISIBLE_LOCALLY); }
	static void SET_PLAYER_INVISIBLE_LOCALLY(Player player, BOOL toggle) { return Native::Invoke<void, Player, BOOL>(N::SET_PLAYER_INVISIBLE_LOCALLY, player, toggle); }
	static Any SET_PLAYER_VISIBLE_LOCALLY() { return Native::Invoke<Any>(N::SET_PLAYER_VISIBLE_LOCALLY); }
	static void SET_ENTITY_VISIBLE_IN_CUTSCENE(Any p0, BOOL p1, BOOL p2) { return Native::Invoke<void, Any, BOOL, BOOL>(N::SET_ENTITY_VISIBLE_IN_CUTSCENE, p0, p1, p2); }
	static Any _0x51D99497ABF3F451() { return Native::Invoke<Any>(0x51D99497ABF3F451); }
	static Any _0xC1E1A3D5ED7617B8() { return Native::Invoke<Any>(0xC1E1A3D5ED7617B8); }
	static Any IS_DAMAGE_TRACKER_ACTIVE_ON_NETWORK_ID() { return Native::Invoke<Any>(N::IS_DAMAGE_TRACKER_ACTIVE_ON_NETWORK_ID); }
	static Any ACTIVATE_DAMAGE_TRACKER_ON_NETWORK_ID() { return Native::Invoke<Any>(N::ACTIVATE_DAMAGE_TRACKER_ON_NETWORK_ID); }
	static BOOL IS_SPHERE_VISIBLE_TO_ANOTHER_MACHINE(float p0, float p1, float p2, float p3, Any p4) { return Native::Invoke<BOOL, float, float, float, float, Any>(N::IS_SPHERE_VISIBLE_TO_ANOTHER_MACHINE, p0, p1, p2, p3, p4); }
	static Any IS_SPHERE_VISIBLE_TO_PLAYER() { return Native::Invoke<Any>(N::IS_SPHERE_VISIBLE_TO_PLAYER); }
	static Any RESERVE_NETWORK_MISSION_OBJECTS() { return Native::Invoke<Any>(N::RESERVE_NETWORK_MISSION_OBJECTS); }
	static Any _0xE7DDA8BD3BCF751C() { return Native::Invoke<Any>(0xE7DDA8BD3BCF751C); }
	static void RESERVE_NETWORK_MISSION_PEDS(int amount) { return Native::Invoke<void, int>(N::RESERVE_NETWORK_MISSION_PEDS, amount); }
	static void _0x807E119F80231732(Any p0) { return Native::Invoke<void, Any>(0x807E119F80231732, p0); }
	static Any RESERVE_NETWORK_MISSION_VEHICLES() { return Native::Invoke<Any>(N::RESERVE_NETWORK_MISSION_VEHICLES); }
	static Any _0x9F24A34863FD35DA() { return Native::Invoke<Any>(0x9F24A34863FD35DA); }
	static Any _0x4D40E7D749BC6E6D() { return Native::Invoke<Any>(0x4D40E7D749BC6E6D); }
	static BOOL CAN_REGISTER_MISSION_OBJECTS(int amount) { return Native::Invoke<BOOL, int>(N::CAN_REGISTER_MISSION_OBJECTS, amount); }
	static BOOL CAN_REGISTER_MISSION_PEDS(int amount) { return Native::Invoke<BOOL, int>(N::CAN_REGISTER_MISSION_PEDS, amount); }
	static Any CAN_REGISTER_MISSION_VEHICLES() { return Native::Invoke<Any>(N::CAN_REGISTER_MISSION_VEHICLES); }
	static Any _0xF0460C7BF80011EA() { return Native::Invoke<Any>(0xF0460C7BF80011EA); }
	static Any CAN_REGISTER_MISSION_ENTITIES() { return Native::Invoke<Any>(N::CAN_REGISTER_MISSION_ENTITIES); }
	static Any GET_NUM_RESERVED_MISSION_OBJECTS() { return Native::Invoke<Any>(N::GET_NUM_RESERVED_MISSION_OBJECTS); }
	static Any GET_NUM_RESERVED_MISSION_PEDS() { return Native::Invoke<Any>(N::GET_NUM_RESERVED_MISSION_PEDS); }
	static Any GET_NUM_RESERVED_MISSION_VEHICLES() { return Native::Invoke<Any>(N::GET_NUM_RESERVED_MISSION_VEHICLES); }
	static Any _0x62BE3ECC79FBD004() { return Native::Invoke<Any>(0x62BE3ECC79FBD004); }
	static Any _0x12B6281B6C6706C0() { return Native::Invoke<Any>(0x12B6281B6C6706C0); }
	static Any _0xCB215C4B56A7FAE7() { return Native::Invoke<Any>(0xCB215C4B56A7FAE7); }
	static Any _0x0CD9AB83489430EA() { return Native::Invoke<Any>(0x0CD9AB83489430EA); }
	static Any _0xD2BA051B94CA9BCC() { return Native::Invoke<Any>(0xD2BA051B94CA9BCC); }
	static Any _0x5E71E72A94985214() { return Native::Invoke<Any>(0x5E71E72A94985214); }
	static Any _0xC7BE335216B5EC7C() { return Native::Invoke<Any>(0xC7BE335216B5EC7C); }
	static Any _0x0C1F7D49C39D2289() { return Native::Invoke<Any>(0x0C1F7D49C39D2289); }
	static Any _0x0AFCE529F69B21FF() { return Native::Invoke<Any>(0x0AFCE529F69B21FF); }
	static Any _0xA72835064DD63E4C() { return Native::Invoke<Any>(0xA72835064DD63E4C); }
	static Any _0x75FC34A2BA345BD1() { return Native::Invoke<Any>(0x75FC34A2BA345BD1); }
	static Any _0x979765465A6F25FC() { return Native::Invoke<Any>(0x979765465A6F25FC); }
	static Any _0x5133CF81924F1129() { return Native::Invoke<Any>(0x5133CF81924F1129); }
	static int GET_NETWORK_TIME() { return Native::Invoke<int>(N::GET_NETWORK_TIME); }
	static Any GET_NETWORK_TIME_ACCURATE() { return Native::Invoke<Any>(N::GET_NETWORK_TIME_ACCURATE); }
	static BOOL HAS_NETWORK_TIME_STARTED() { return Native::Invoke<BOOL>(N::HAS_NETWORK_TIME_STARTED); }
	static int GET_TIME_OFFSET(int timeA, int timeB) { return Native::Invoke<int, int, int>(N::GET_TIME_OFFSET, timeA, timeB); }
	static Any IS_TIME_LESS_THAN() { return Native::Invoke<Any>(N::IS_TIME_LESS_THAN); }
	static Any IS_TIME_MORE_THAN() { return Native::Invoke<Any>(N::IS_TIME_MORE_THAN); }
	static int GET_TIME_DIFFERENCE(int timeA, int timeB) { return Native::Invoke<int, int, int>(N::GET_TIME_DIFFERENCE, timeA, timeB); }
	static Any GET_CLOUD_TIME_AS_INT() { return Native::Invoke<Any>(N::GET_CLOUD_TIME_AS_INT); }
	static Any _GET_DATE_AND_TIME_FROM_UNIX_EPOCH() { return Native::Invoke<Any>(N::_GET_DATE_AND_TIME_FROM_UNIX_EPOCH); }
	static Any NETWORK_SET_IN_SPECTATOR_MODE() { return Native::Invoke<Any>(N::NETWORK_SET_IN_SPECTATOR_MODE); }
	static Any _0xFBF1ECFB39A77B5F() { return Native::Invoke<Any>(0xFBF1ECFB39A77B5F); }
	static BOOL NETWORK_IS_IN_SPECTATOR_MODE() { return Native::Invoke<BOOL>(N::NETWORK_IS_IN_SPECTATOR_MODE); }
	static Any _0x5B709519997ECF0F() { return Native::Invoke<Any>(0x5B709519997ECF0F); }
	static void NETWORK_SET_IN_MP_CUTSCENE(BOOL p0, BOOL p1, Any p2, Any p3) { return Native::Invoke<void, BOOL, BOOL, Any, Any>(N::NETWORK_SET_IN_MP_CUTSCENE, p0, p1, p2, p3); }
	static BOOL NETWORK_IS_IN_MP_CUTSCENE() { return Native::Invoke<BOOL>(N::NETWORK_IS_IN_MP_CUTSCENE); }
	static Any NETWORK_IS_PLAYER_IN_MP_CUTSCENE() { return Native::Invoke<Any>(N::NETWORK_IS_PLAYER_IN_MP_CUTSCENE); }
	static Any _0x442B4347B6EC36E8() { return Native::Invoke<Any>(0x442B4347B6EC36E8); }
	static void USE_PLAYER_COLOUR_INSTEAD_OF_TEAM_COLOUR(BOOL toggle) { return Native::Invoke<void, BOOL>(N::USE_PLAYER_COLOUR_INSTEAD_OF_TEAM_COLOUR, toggle); }
	static Any _0x21D04D7BC538C146() { return Native::Invoke<Any>(0x21D04D7BC538C146); }
	static Any _0xDCA6ABDB9288FBE4() { return Native::Invoke<Any>(0xDCA6ABDB9288FBE4); }
	static Any _0xEE5AE9956743BA20() { return Native::Invoke<Any>(0xEE5AE9956743BA20); }
	static Any _0xFA38B52F91B59075() { return Native::Invoke<Any>(0xFA38B52F91B59075); }
	static Any _0x42871327315EDAE8() { return Native::Invoke<Any>(0x42871327315EDAE8); }
	static Any _0xEB1A4DD8352EC828() { return Native::Invoke<Any>(0xEB1A4DD8352EC828); }
	static Any _0xFD1AC0B3858F224C() { return Native::Invoke<Any>(0xFD1AC0B3858F224C); }
	static Any _0xA63E4F050F20021F() { return Native::Invoke<Any>(0xA63E4F050F20021F); }
	static Any _0xEEB7818B1D307212() { return Native::Invoke<Any>(0xEEB7818B1D307212); }
	static Any _0xA35E7BF20FA269E0() { return Native::Invoke<Any>(0xA35E7BF20FA269E0); }
	static Any _0x0BF90CBB6B72977B() { return Native::Invoke<Any>(0x0BF90CBB6B72977B); }
	static Any _0x7B3FF2D193628126() { return Native::Invoke<Any>(0x7B3FF2D193628126); }
	static Any _0x19B52C20B5C4757C() { return Native::Invoke<Any>(0x19B52C20B5C4757C); }
	static Any _0xF94A0D5B254375DF() { return Native::Invoke<Any>(0xF94A0D5B254375DF); }
	static Any _0x6CEE2E30021DAEC6() { return Native::Invoke<Any>(0x6CEE2E30021DAEC6); }
	static Any _0x44D59EC597BBF348() { return Native::Invoke<Any>(0x44D59EC597BBF348); }
	static Any _0xB131E686BD97B3F8() { return Native::Invoke<Any>(0xB131E686BD97B3F8); }
	static Any _0xEB6027FD1B4600D5() { return Native::Invoke<Any>(0xEB6027FD1B4600D5); }
	static Any _0x405DDEFB1F531B18() { return Native::Invoke<Any>(0x405DDEFB1F531B18); }
	static Any _0x43CF999205084B4B() { return Native::Invoke<Any>(0x43CF999205084B4B); }
	static Any _0x13F592FC3BF0EA84() { return Native::Invoke<Any>(0x13F592FC3BF0EA84); }
	static Any _0xCF23AB5BD47B384D() { return Native::Invoke<Any>(0xCF23AB5BD47B384D); }
	static Any _0xE5634491A58C2703() { return Native::Invoke<Any>(0xE5634491A58C2703); }
	static Any _0x59577799F6AE2F34() { return Native::Invoke<Any>(0x59577799F6AE2F34); }
	static Any _0xBDCC671B911040F9() { return Native::Invoke<Any>(0xBDCC671B911040F9); }
	static Any _0x0608326F7B98C08D() { return Native::Invoke<Any>(0x0608326F7B98C08D); }
	static Any _0x5D3C528B7A7DF836() { return Native::Invoke<Any>(0x5D3C528B7A7DF836); }
	static Any _0x2686BD9566B65EDA() { return Native::Invoke<Any>(0x2686BD9566B65EDA); }
	static Any _0xBB1EC8C2EEF33BAA() { return Native::Invoke<Any>(0xBB1EC8C2EEF33BAA); }
	static Any _0x67CCDF74C4DF7169() { return Native::Invoke<Any>(0x67CCDF74C4DF7169); }
	static Any _0xC8B6D18E22484643() { return Native::Invoke<Any>(0xC8B6D18E22484643); }
	static Any _0x97BCE4C4B3191228() { return Native::Invoke<Any>(0x97BCE4C4B3191228); }
	static Any _0x41452E8A3B9C0C4B() { return Native::Invoke<Any>(0x41452E8A3B9C0C4B); }
	static Any _0x89EC2FC89ECB1005() { return Native::Invoke<Any>(0x89EC2FC89ECB1005); }
	static Any _0x61BFBAA795E712AD() { return Native::Invoke<Any>(0x61BFBAA795E712AD); }
	static Any _0x765E60A1DCB8B1CE() { return Native::Invoke<Any>(0x765E60A1DCB8B1CE); }
	static Any _0x691E4DE5309EAEFC() { return Native::Invoke<Any>(0x691E4DE5309EAEFC); }
	static void _0x17E0198B3882C2CB() { return Native::Invoke<void>(0x17E0198B3882C2CB); }
	static void NETWORK_END_TUTORIAL_SESSION() { return Native::Invoke<void>(N::NETWORK_END_TUTORIAL_SESSION); }
	static BOOL NETWORK_IS_IN_TUTORIAL_SESSION() { return Native::Invoke<BOOL>(N::NETWORK_IS_IN_TUTORIAL_SESSION); }
	static Any _0x35F0B98A8387274D() { return Native::Invoke<Any>(0x35F0B98A8387274D); }
	static Any _0x3B39236746714134() { return Native::Invoke<Any>(0x3B39236746714134); }
	static Any _NETWORK_IS_PLAYER_EQUAL_TO_INDEX() { return Native::Invoke<Any>(N::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX); }
	static Any _0x4B05B97BA46F419D() { return Native::Invoke<Any>(0x4B05B97BA46F419D); }
	static Any _0xF3354D6CA46F419D() { return Native::Invoke<Any>(0xF3354D6CA46F419D); }
	static Any _0xDC6AD5C046F33AB4() { return Native::Invoke<Any>(0xDC6AD5C046F33AB4); }
	static Any _0x6C7E04E9DE451789() { return Native::Invoke<Any>(0x6C7E04E9DE451789); }
	static Any _0x007FF852DCF49DA4() { return Native::Invoke<Any>(0x007FF852DCF49DA4); }
	static Any _0xD9267375834C5EAB() { return Native::Invoke<Any>(0xD9267375834C5EAB); }
	static Any NETWORK_CONCEAL_PLAYER() { return Native::Invoke<Any>(N::NETWORK_CONCEAL_PLAYER); }
	static Any NETWORK_IS_PLAYER_CONCEALED() { return Native::Invoke<Any>(N::NETWORK_IS_PLAYER_CONCEALED); }
	static Any NETWORK_IS_TUNABLE_CLOUD_REQUEST_PENDING() { return Native::Invoke<Any>(N::NETWORK_IS_TUNABLE_CLOUD_REQUEST_PENDING); }
	static Any NETWORK_DOES_TUNABLE_EXIST() { return Native::Invoke<Any>(N::NETWORK_DOES_TUNABLE_EXIST); }
	static Any NETWORK_ACCESS_TUNABLE_INT() { return Native::Invoke<Any>(N::NETWORK_ACCESS_TUNABLE_INT); }
	static Any NETWORK_ACCESS_TUNABLE_BOOL() { return Native::Invoke<Any>(N::NETWORK_ACCESS_TUNABLE_BOOL); }
	static Any _0xA25E006B36719774() { return Native::Invoke<Any>(0xA25E006B36719774); }
	static Any _0xA18393089C05E49C() { return Native::Invoke<Any>(0xA18393089C05E49C); }
	static Any _0xB2AD5D29A99D4B26() { return Native::Invoke<Any>(0xB2AD5D29A99D4B26); }
	static Any _0x894B5ECAB45D2342() { return Native::Invoke<Any>(0x894B5ECAB45D2342); }
	static Any _0x407091CF6037118E() { return Native::Invoke<Any>(0x407091CF6037118E); }
	static Any _0x4C61B39930D045DA() { return Native::Invoke<Any>(0x4C61B39930D045DA); }
	static Any _0x3A3D5568AF297CD5() { return Native::Invoke<Any>(0x3A3D5568AF297CD5); }
	static Any _0x02E97CE283648CD9(Any p0) { return Native::Invoke<Any, Any>(0x02E97CE283648CD9, p0); }
	static Any _0x65E65CA6A0FE59D4(Any p0) { return Native::Invoke<Any, Any>(0x65E65CA6A0FE59D4, p0); }
	static Any _0x668AF6E4933AC13F() { return Native::Invoke<Any>(0x668AF6E4933AC13F); }
	static Any _0x782C94DB6469634D() { return Native::Invoke<Any>(0x782C94DB6469634D); }
	static Any _0xC59AB6A04333C502() { return Native::Invoke<Any>(0xC59AB6A04333C502); }
	static Any _0xDFFC15AA63D04AAB() { return Native::Invoke<Any>(0xDFFC15AA63D04AAB); }
	static void _0x966DD84FB6A46017() { return Native::Invoke<void>(0x966DD84FB6A46017); }
	static Any _0xF4AC4FA844FD559A() { return Native::Invoke<Any>(0xF4AC4FA844FD559A); }
	static Any _0xA9EB4D606076615D() { return Native::Invoke<Any>(0xA9EB4D606076615D); }
	static Any _0x0B6009A90B8495F1() { return Native::Invoke<Any>(0x0B6009A90B8495F1); }
	static Any _0xCD53E6CBF609C012() { return Native::Invoke<Any>(0xCD53E6CBF609C012); }
	static Any _0xF40EF49B3099E98E() { return Native::Invoke<Any>(0xF40EF49B3099E98E); }
	static Any _0x8C109958C9BB559D() { return Native::Invoke<Any>(0x8C109958C9BB559D); }
	static Any _0x69D22E183580113F() { return Native::Invoke<Any>(0x69D22E183580113F); }
	static Any _0xE931354FEA710038() { return Native::Invoke<Any>(0xE931354FEA710038); }
	static Any _0xF8F0705E77A0E705() { return Native::Invoke<Any>(0xF8F0705E77A0E705); }
	static Any _0x76160E0396142765() { return Native::Invoke<Any>(0x76160E0396142765); }
	static Any _0xADB56322EEDFBDC9() { return Native::Invoke<Any>(0xADB56322EEDFBDC9); }
	static Any _0xF9F0B3028431967B() { return Native::Invoke<Any>(0xF9F0B3028431967B); }
	static Any _0x2D053EA815702DD1() { return Native::Invoke<Any>(0x2D053EA815702DD1); }
	static Any _0x566CEB0542EF5ECF() { return Native::Invoke<Any>(0x566CEB0542EF5ECF); }
	static Any _0xCAF50048C8D0FBA0() { return Native::Invoke<Any>(0xCAF50048C8D0FBA0); }
	static Any _0xA6BF569956C60A60() { return Native::Invoke<Any>(0xA6BF569956C60A60); }
	static Any _0x409FE0CA6A4D1D49() { return Native::Invoke<Any>(0x409FE0CA6A4D1D49); }
	static Any _0xE0CB4AB15CB32710() { return Native::Invoke<Any>(0xE0CB4AB15CB32710); }
	static Any _0x21A99A72B00D8002() { return Native::Invoke<Any>(0x21A99A72B00D8002); }
	static Any _0x104080CA9E519B00() { return Native::Invoke<Any>(0x104080CA9E519B00); }
	static Any _0x63E9DCBC8B0931ED() { return Native::Invoke<Any>(0x63E9DCBC8B0931ED); }
	static Any _0x97764E8AC6487A9A() { return Native::Invoke<Any>(0x97764E8AC6487A9A); }
	static Any _0x9993F1E11944A3DD() { return Native::Invoke<Any>(0x9993F1E11944A3DD); }
	static Any _0x24CD8FAEA1368379() { return Native::Invoke<Any>(0x24CD8FAEA1368379); }
	static Any _0x5F0E99071582DECA() { return Native::Invoke<Any>(0x5F0E99071582DECA); }
	static Any _0xF794765390A6DCA5() { return Native::Invoke<Any>(0xF794765390A6DCA5); }
	static Any _0x98539FC453AEA639() { return Native::Invoke<Any>(0x98539FC453AEA639); }
	static Any _0x6506BFA755FB209C() { return Native::Invoke<Any>(0x6506BFA755FB209C); }
	static Any UGC_REQUEST_CONTENT_DATA_FROM_PARAMS() { return Native::Invoke<Any>(N::UGC_REQUEST_CONTENT_DATA_FROM_PARAMS); }
	static Any UGC_REQUEST_CACHED_DESCRIPTION() { return Native::Invoke<Any>(N::UGC_REQUEST_CACHED_DESCRIPTION); }
	static Any _0x2D5DC831176D0114() { return Native::Invoke<Any>(0x2D5DC831176D0114); }
	static Any _0xEBFA8D50ADDC54C4() { return Native::Invoke<Any>(0xEBFA8D50ADDC54C4); }
	static Any _0x162C23CA83ED0A62() { return Native::Invoke<Any>(0x162C23CA83ED0A62); }
	static Any _0x40F7E66472DF3E5C() { return Native::Invoke<Any>(0x40F7E66472DF3E5C); }
	static Any _0x5A34CD9C3C5BEC44() { return Native::Invoke<Any>(0x5A34CD9C3C5BEC44); }
	static Any _0x68103E2247887242() { return Native::Invoke<Any>(0x68103E2247887242); }
	static Any _0xF98DDE0A8ED09323() { return Native::Invoke<Any>(0xF98DDE0A8ED09323); }
	static Any _0xF53E48461B71EECB() { return Native::Invoke<Any>(0xF53E48461B71EECB); }
	static Any _0xD4022C7286B0DFA2() { return Native::Invoke<Any>(0xD4022C7286B0DFA2); }
	static Any _0xB72999D3120599DF() { return Native::Invoke<Any>(0xB72999D3120599DF); }
	static Any _0x2A48D9567940598F() { return Native::Invoke<Any>(0x2A48D9567940598F); }
	static Any _0xA21E3BAD0A42D199() { return Native::Invoke<Any>(0xA21E3BAD0A42D199); }
	static Any _0xCC4E72C339461ED1() { return Native::Invoke<Any>(0xCC4E72C339461ED1); }
	static Any _0x356F9FB0698C1FEB() { return Native::Invoke<Any>(0x356F9FB0698C1FEB); }
	static Any _0xCAF4CA2F87779F8F() { return Native::Invoke<Any>(0xCAF4CA2F87779F8F); }
	static Any _0xB5C4B18B12A2AF23() { return Native::Invoke<Any>(0xB5C4B18B12A2AF23); }
	static Any _0xE2C3CEC3C0903A00() { return Native::Invoke<Any>(0xE2C3CEC3C0903A00); }
	static int TEXTURE_DOWNLOAD_REQUEST(int* PlayerHandle, char* FilePath, char* Name, BOOL p3) { return Native::Invoke<int, int*, char*, char*, BOOL>(N::TEXTURE_DOWNLOAD_REQUEST, PlayerHandle, FilePath, Name, p3); }
	static Any _0x9B5DB6CEAFAA10BB() { return Native::Invoke<Any>(0x9B5DB6CEAFAA10BB); }
	static Any UGC_TEXTURE_DOWNLOAD_REQUEST() { return Native::Invoke<Any>(N::UGC_TEXTURE_DOWNLOAD_REQUEST); }
	static Any _0x6E2FD8CF7EB10E53() { return Native::Invoke<Any>(0x6E2FD8CF7EB10E53); }
	static void TEXTURE_DOWNLOAD_RELEASE(int p0) { return Native::Invoke<void, int>(N::TEXTURE_DOWNLOAD_RELEASE, p0); }
	static Any _0x7A17B7981560FFA5() { return Native::Invoke<Any>(0x7A17B7981560FFA5); }
	static char* TEXTURE_DOWNLOAD_GET_NAME(int p0) { return Native::Invoke<char*, int>(N::TEXTURE_DOWNLOAD_GET_NAME, p0); }
	static Any _GET_STATUS_OF_TEXTURE_DOWNLOAD(Any p0) { return Native::Invoke<Any, Any>(N::_GET_STATUS_OF_TEXTURE_DOWNLOAD, p0); }
	static Any _0xCBAC13F065C47596() { return Native::Invoke<Any>(0xCBAC13F065C47596); }
	static Any _0xCD954F330693F5F2() { return Native::Invoke<Any>(0xCD954F330693F5F2); }
	static Any _0xFBC30B70B3CDB87E() { return Native::Invoke<Any>(0xFBC30B70B3CDB87E); }
	static Any _0x814729078AED6D30() { return Native::Invoke<Any>(0x814729078AED6D30); }
	static Any _NETWORK_HAS_PLAYER_BEEN_BANNED() { return Native::Invoke<Any>(N::_NETWORK_HAS_PLAYER_BEEN_BANNED); }
	static Any NETWORK_HAS_ROS_PRIVILEGE() { return Native::Invoke<Any>(N::NETWORK_HAS_ROS_PRIVILEGE); }
	static Any _0xDEB2B99A1AF1A2A6() { return Native::Invoke<Any>(0xDEB2B99A1AF1A2A6); }
	static Any _0x0A428058079EE65C() { return Native::Invoke<Any>(0x0A428058079EE65C); }
	static Any _0xAADED99A6B268A27() { return Native::Invoke<Any>(0xAADED99A6B268A27); }
	static Any _0x63246A24F5747510() { return Native::Invoke<Any>(0x63246A24F5747510); }
	static Any _0xE258570E0C116A66() { return Native::Invoke<Any>(0xE258570E0C116A66); }
	static Any _0x4440FEE3EFE78F54() { return Native::Invoke<Any>(0x4440FEE3EFE78F54); }
	static Any _0xE404BFF0ABA23CDC() { return Native::Invoke<Any>(0xE404BFF0ABA23CDC); }
	static Any _0xC223D299C670413D() { return Native::Invoke<Any>(0xC223D299C670413D); }
	static Any _0xA021095C983F20D8() { return Native::Invoke<Any>(0xA021095C983F20D8); }
	static Any _0x6D87BA8EF15226CD() { return Native::Invoke<Any>(0x6D87BA8EF15226CD); }
	static Any _0x277865A734918AE6() { return Native::Invoke<Any>(0x277865A734918AE6); }
	static Any _0xBB51299166B844F3() { return Native::Invoke<Any>(0xBB51299166B844F3); }
	static void _0x5A91BCEF74944E93(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x5A91BCEF74944E93, p0, p1); }
	static Any _0x0E2C3AEE6CE603B7() { return Native::Invoke<Any>(0x0E2C3AEE6CE603B7); }
	static Any _0x0B6B4507AC5EA8B8() { return Native::Invoke<Any>(0x0B6B4507AC5EA8B8); }
	static Any _0x1BB50CD340A996E6() { return Native::Invoke<Any>(0x1BB50CD340A996E6); }
	static Any _0x101F538C25ABB39A() { return Native::Invoke<Any>(0x101F538C25ABB39A); }
	static void _0xC505036A35AFD01B(Any p0) { return Native::Invoke<void, Any>(0xC505036A35AFD01B, p0); }
	static Any _0x3034C77C79A58880() { return Native::Invoke<Any>(0x3034C77C79A58880); }
	static Any _0x267C78C60E806B9A() { return Native::Invoke<Any>(0x267C78C60E806B9A); }
	static Any _0x6BFF5F84102DF80A() { return Native::Invoke<Any>(0x6BFF5F84102DF80A); }
	static void _0x5C497525F803486B() { return Native::Invoke<void>(0x5C497525F803486B); }
	static Any _0x16D3D49902F697BB() { return Native::Invoke<Any>(0x16D3D49902F697BB); }
	static Any _0xD414BE129BB81B32() { return Native::Invoke<Any>(0xD414BE129BB81B32); }
	static Any _0x0E3A041ED6AC2B45() { return Native::Invoke<Any>(0x0E3A041ED6AC2B45); }
	static Any _0x350C23949E43686C() { return Native::Invoke<Any>(0x350C23949E43686C); }
	static Any _NETWORK_GET_NUM_UNACKED_FOR_PLAYER() { return Native::Invoke<Any>(N::_NETWORK_GET_NUM_UNACKED_FOR_PLAYER); }
	static Any _0x3765C3A3E8192E10() { return Native::Invoke<Any>(0x3765C3A3E8192E10); }
	static Any _NETWORK_GET_OLDEST_RESEND_COUNT_FOR_PLAYER() { return Native::Invoke<Any>(N::_NETWORK_GET_OLDEST_RESEND_COUNT_FOR_PLAYER); }
	static Any _0xAEDF1BC1C133D6E3() { return Native::Invoke<Any>(0xAEDF1BC1C133D6E3); }
	static Any _0x6FD992C4A1C1B986() { return Native::Invoke<Any>(0x6FD992C4A1C1B986); }
	static Any _0x255A5EF65EDA9167(Any p0) { return Native::Invoke<Any, Any>(0x255A5EF65EDA9167, p0); }
	static Any _0xDCC4B7F7112E8AB7() { return Native::Invoke<Any>(0xDCC4B7F7112E8AB7); }
	static Any _0x455156F47DC6B78C() { return Native::Invoke<Any>(0x455156F47DC6B78C); }
	static Any _0xD041A32992A55F84() { return Native::Invoke<Any>(0xD041A32992A55F84); }
	static Any _0x0C8BC052AE87D744() { return Native::Invoke<Any>(0x0C8BC052AE87D744); }
	static Any _0x5CD3AAD8FF9ED121() { return Native::Invoke<Any>(0x5CD3AAD8FF9ED121); }
	static void _0x51951DE06C0D1C40(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x51951DE06C0D1C40, p0, p1); }
	static Any _0xE3AB5EEFCB6671A2() { return Native::Invoke<Any>(0xE3AB5EEFCB6671A2); }
	static Any _0x9B39B0555CC692B5() { return Native::Invoke<Any>(0x9B39B0555CC692B5); }
	static Any _0xFE53B1F8D43F19BF(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0xFE53B1F8D43F19BF, p0, p1); }
	static Any _0x862C5040F4888741() { return Native::Invoke<Any>(0x862C5040F4888741); }
	static Any _0x2CD41AC000E6F611() { return Native::Invoke<Any>(0x2CD41AC000E6F611); }
	static Any _0xACC44768AF229042() { return Native::Invoke<Any>(0xACC44768AF229042); }
	static Any _0x7E300B5B86AB1D1A() { return Native::Invoke<Any>(0x7E300B5B86AB1D1A); }
	static Any _0x07F723401B9D921C() { return Native::Invoke<Any>(0x07F723401B9D921C); }
	static Any _0xE525878A35B9EEBD() { return Native::Invoke<Any>(0xE525878A35B9EEBD); }
	static Any _0x8E7CE19219669AEB() { return Native::Invoke<Any>(0x8E7CE19219669AEB); }
	static Any _0x2C4E98DDA475364F() { return Native::Invoke<Any>(0x2C4E98DDA475364F); }
	static Any _0x3F0ABAE38A0515AD() { return Native::Invoke<Any>(0x3F0ABAE38A0515AD); }
	static Any _0x3F2EE18A3E294801() { return Native::Invoke<Any>(0x3F2EE18A3E294801); }
	static Any _0x777D0571A466B520() { return Native::Invoke<Any>(0x777D0571A466B520); }
	static Any _0xD0541EF28E9C4783() { return Native::Invoke<Any>(0xD0541EF28E9C4783); }
	static Any _0xFBE782B3165AC8EC(Any p0) { return Native::Invoke<Any, Any>(0xFBE782B3165AC8EC, p0); }
	static Any _0x271F95E55C663B8B(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x271F95E55C663B8B, p0, p1); }
	static Any _0x64A36BA85CE01A81() { return Native::Invoke<Any>(0x64A36BA85CE01A81); }
	static Any _0xE10F2D7715ABABEC() { return Native::Invoke<Any>(0xE10F2D7715ABABEC); }
	static Any _0x7A8E8DF782B47EB0() { return Native::Invoke<Any>(0x7A8E8DF782B47EB0); }
	static Any _0x77B299E8799B1332(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(0x77B299E8799B1332, p0, p1, p2); }
	static Any _0x923346025512DFB7() { return Native::Invoke<Any>(0x923346025512DFB7); }
	static Any _0xDB438CC9BC6F4022() { return Native::Invoke<Any>(0xDB438CC9BC6F4022); }
	static Any _0x32C90CDFAF40514C() { return Native::Invoke<Any>(0x32C90CDFAF40514C); }
	static Any _0x29FE035D35B8589C() { return Native::Invoke<Any>(0x29FE035D35B8589C); }
	static Any _0x273E04A3A7AD1F2D() { return Native::Invoke<Any>(0x273E04A3A7AD1F2D); }
	static Any _0x157D8F3DE12B307F() { return Native::Invoke<Any>(0x157D8F3DE12B307F); }
	static Any _0x6D206D383BB5F6B1() { return Native::Invoke<Any>(0x6D206D383BB5F6B1); }
	static Any _0x4664D213A0CCAF40() { return Native::Invoke<Any>(0x4664D213A0CCAF40); }
	static Any _0x12AEB56B489415C5() { return Native::Invoke<Any>(0x12AEB56B489415C5); }
	static Any _0x37A834AEC6A4F74A() { return Native::Invoke<Any>(0x37A834AEC6A4F74A); }
	static Any _0xFEFCC345CE357453() { return Native::Invoke<Any>(0xFEFCC345CE357453); }
	static void _0x49CF17A564918E8D() { return Native::Invoke<void>(0x49CF17A564918E8D); }
	static Any _0xD637D327080CD86E() { return Native::Invoke<Any>(0xD637D327080CD86E); }
	static Any _0x564552C6AF1EEAB1() { return Native::Invoke<Any>(0x564552C6AF1EEAB1); }
	static Any _0x3FE141FDB990E3D1() { return Native::Invoke<Any>(0x3FE141FDB990E3D1); }
	static Any _0x9ADAC065D9F6706F() { return Native::Invoke<Any>(0x9ADAC065D9F6706F); }
	static Any _0xAC6153A0722F524C() { return Native::Invoke<Any>(0xAC6153A0722F524C); }
	static Any _0xA197C35F73AC0F12() { return Native::Invoke<Any>(0xA197C35F73AC0F12); }
}
namespace OBJECT
{
	static Object CREATE_OBJECT(Object modelHash, float x, float y, float z, BOOL isNetwork, BOOL thisScriptCheck, BOOL dynamic, Any p7, Any p8) { return Native::Invoke<Object, Object, float, float, float, BOOL, BOOL, BOOL, Any, Any>(N::CREATE_OBJECT, modelHash, x, y, z, isNetwork, thisScriptCheck, dynamic, p7, p8); }
	static float CREATE_OBJECT_NO_OFFSET(int* modelfwgaHash, float x, float y, float z, BOOL isNetwork, BOOL thisScriptCheck, BOOL dynamic, Any p7) { return Native::Invoke<float, int*, float, float, float, BOOL, BOOL, BOOL, Any>(N::CREATE_OBJECT_NO_OFFSET, modelfwgaHash, x, y, z, isNetwork, thisScriptCheck, dynamic, p7); }
	static void DELETE_OBJECT(Object* object) { return Native::Invoke<void, Object*>(N::DELETE_OBJECT, object); }
	static BOOL PLACE_OBJECT_ON_GROUND_PROPERLY(Object object, Any p1) { return Native::Invoke<BOOL, Object, Any>(N::PLACE_OBJECT_ON_GROUND_PROPERLY, object, p1); }
	static BOOL SLIDE_OBJECT(Object object, float toX, float toY, float toZ, float speedX, float speedY, float speedZ, BOOL collision) { return Native::Invoke<BOOL, Object, float, float, float, float, float, float, BOOL>(N::SLIDE_OBJECT, object, toX, toY, toZ, speedX, speedY, speedZ, collision); }
	static Any SET_OBJECT_TARGETTABLE(Object object, BOOL targettable) { return Native::Invoke<Any, Object, BOOL>(N::SET_OBJECT_TARGETTABLE, object, targettable); }
	static Any _0x581EDBE56E8D62C9() { return Native::Invoke<Any>(0x581EDBE56E8D62C9); }
	static void _0xA22712E8471AA08E(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0xA22712E8471AA08E, p0, p1, p2); }
	static Any _0xF6E88489B4E6EBE5() { return Native::Invoke<Any>(0xF6E88489B4E6EBE5); }
	static void _0xE157A8A336C7F04A(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xE157A8A336C7F04A, p0, p1); }
	static Any _0x46CBCF0E98A4E156() { return Native::Invoke<Any>(0x46CBCF0E98A4E156); }
	static Object GET_CLOSEST_OBJECT_OF_TYPE(float x, float y, float z, float radius, Hash modelHash, BOOL isMission, BOOL p6, BOOL p7) { return Native::Invoke<Object, float, float, float, float, Hash, BOOL, BOOL, BOOL>(N::GET_CLOSEST_OBJECT_OF_TYPE, x, y, z, radius, modelHash, isMission, p6, p7); }
	static BOOL HAS_OBJECT_BEEN_BROKEN(Object object) { return Native::Invoke<BOOL, Object>(N::HAS_OBJECT_BEEN_BROKEN, object); }
	static BOOL HAS_CLOSEST_OBJECT_OF_TYPE_BEEN_BROKEN(float p0, float p1, float p2, float p3, Hash modelHash, Any p5) { return Native::Invoke<BOOL, float, float, float, float, Hash, Any>(N::HAS_CLOSEST_OBJECT_OF_TYPE_BEEN_BROKEN, p0, p1, p2, p3, modelHash, p5); }
	static Vector3 _GET_OBJECT_OFFSET_FROM_COORDS(float xPos, float yPos, float zPos, float heading, float xOffset, float yOffset, float zOffset) { return Native::Invoke<Vector3, float, float, float, float, float, float, float>(N::_GET_OBJECT_OFFSET_FROM_COORDS, xPos, yPos, zPos, heading, xOffset, yOffset, zOffset); }
	static void _0xD99229FE93B46286(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any>(0xD99229FE93B46286, p0, p1, p2, p3, p4, p5); }
	static Any _0xB5DED7B65C604FDF(Any p0) { return Native::Invoke<Any, Any>(0xB5DED7B65C604FDF, p0); }
	static void REMOVE_DOOR_FROM_SYSTEM(Hash doorHash) { return Native::Invoke<void, Hash>(N::REMOVE_DOOR_FROM_SYSTEM, doorHash); }
	static void DOOR_SYSTEM_SET_DOOR_STATE(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(N::DOOR_SYSTEM_SET_DOOR_STATE, p0, p1); }
	static Any DOOR_SYSTEM_GET_DOOR_STATE(Any p0) { return Native::Invoke<Any, Any>(N::DOOR_SYSTEM_GET_DOOR_STATE, p0); }
	static void DOOR_SYSTEM_SET_AUTOMATIC_RATE(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(N::DOOR_SYSTEM_SET_AUTOMATIC_RATE, p0, p1); }
	static void DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(N::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE, p0, p1); }
	static void _0xB3B1546D23DF8DE1(Any p0, Any p1, Any p2, Any p3, Any p4) { return Native::Invoke<void, Any, Any, Any, Any, Any>(0xB3B1546D23DF8DE1, p0, p1, p2, p3, p4); }
	static void DOOR_SYSTEM_SET_OPEN_RATIO(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(N::DOOR_SYSTEM_SET_OPEN_RATIO, p0, p1, p2); }
	static void _0x3A77DAE8B4FD7586(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x3A77DAE8B4FD7586, p0, p1); }
	static void _0x1F1FABFE9B2A1254(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x1F1FABFE9B2A1254, p0, p1); }
	static Any _0x4F89DAD4156BA145() { return Native::Invoke<Any>(0x4F89DAD4156BA145); }
	static Any _0x985767F5FA45BC44() { return Native::Invoke<Any>(0x985767F5FA45BC44); }
	static Any _0x8433E1954BE323FC(Any p0) { return Native::Invoke<Any, Any>(0x8433E1954BE323FC, p0); }
	static Any _0x6E2AA80BB0C03728(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x6E2AA80BB0C03728, p0, p1); }
	static void _0x1BC47A9DEDC8DF5D(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x1BC47A9DEDC8DF5D, p0, p1); }
	static Any DOOR_SYSTEM_GET_OPEN_RATIO(Any p0) { return Native::Invoke<Any, Any>(N::DOOR_SYSTEM_GET_OPEN_RATIO, p0); }
	static void _0x7F458B543006C8FE(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x7F458B543006C8FE, p0, p1); }
	static Any _0xACD4F9831DFAD7F5(Any p0) { return Native::Invoke<Any, Any>(0xACD4F9831DFAD7F5, p0); }
	static void _0x0C0A373D181BF900(Any p0) { return Native::Invoke<void, Any>(0x0C0A373D181BF900, p0); }
	static void _0xA93F925F1942E434(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xA93F925F1942E434, p0, p1); }
	static Any _0x4D8611DFE1126478(Any p0) { return Native::Invoke<Any, Any>(0x4D8611DFE1126478, p0); }
	static void _0x57C242543B7B8FB9(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x57C242543B7B8FB9, p0, p1); }
	static void _0x4AE07EBA3462C5D5(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x4AE07EBA3462C5D5, p0, p1); }
	static void _0x22031584496CFB70(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x22031584496CFB70, p0, p1); }
	static void _0xC07B91B996C1DE89(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xC07B91B996C1DE89, p0, p1); }
	static Any IS_DOOR_REGISTERED_WITH_SYSTEM(Any p0) { return Native::Invoke<Any, Any>(N::IS_DOOR_REGISTERED_WITH_SYSTEM, p0); }
	static BOOL IS_DOOR_CLOSED(Hash door) { return Native::Invoke<BOOL, Hash>(N::IS_DOOR_CLOSED, door); }
	static Any _0x0943113E02322164(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x0943113E02322164, p0, p1); }
	static Any _0x614D0B4533F842D3(Any p0) { return Native::Invoke<Any, Any>(0x614D0B4533F842D3, p0); }
	static void _0x276AAF0F1C7F2494(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x276AAF0F1C7F2494, p0, p1); }
	static Any _0xEBA314768FB35D58(Any p0) { return Native::Invoke<Any, Any>(0xEBA314768FB35D58, p0); }
	static void _0x5230BF34EB0EC645(Any p0) { return Native::Invoke<void, Any>(0x5230BF34EB0EC645, p0); }
	static BOOL DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(float x, float y, float z, float radius, Hash hash, BOOL p5) { return Native::Invoke<BOOL, float, float, float, float, Hash, BOOL>(N::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS, x, y, z, radius, hash, p5); }
	static BOOL IS_POINT_IN_ANGLED_AREA(float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, float p9, BOOL p10, BOOL p11) { return Native::Invoke<BOOL, float, float, float, float, float, float, float, float, float, float, BOOL, BOOL>(N::IS_POINT_IN_ANGLED_AREA, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); }
	static Any _0x4D89D607CB3DD1D2() { return Native::Invoke<Any>(0x4D89D607CB3DD1D2); }
	static void SET_OBJECT_PHYSICS_PARAMS(Object object, float mass, float gravityFactor, float dampingLinearC, float dampingLinearV, float dampingLinearV2, float dampingAngularC, float dampingAngularV, float dampingAngularV2, float margin, float default2Pi, float buoyancyFactor) { return Native::Invoke<void, Object, float, float, float, float, float, float, float, float, float, float, float>(N::SET_OBJECT_PHYSICS_PARAMS, object, mass, gravityFactor, dampingLinearC, dampingLinearV, dampingLinearV2, dampingAngularC, dampingAngularV, dampingAngularV2, margin, default2Pi, buoyancyFactor); }
	static float GET_OBJECT_FRAGMENT_DAMAGE_HEALTH(Any p0, BOOL p1) { return Native::Invoke<float, Any, BOOL>(N::GET_OBJECT_FRAGMENT_DAMAGE_HEALTH, p0, p1); }
	static Any _0x235C863DA77BD88D() { return Native::Invoke<Any>(0x235C863DA77BD88D); }
	static void SET_ACTIVATE_OBJECT_PHYSICS_AS_SOON_AS_IT_IS_UNFROZEN(Object object, BOOL toggle) { return Native::Invoke<void, Object, BOOL>(N::SET_ACTIVATE_OBJECT_PHYSICS_AS_SOON_AS_IT_IS_UNFROZEN, object, toggle); }
	static void _0xE7E4C198B0185900(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0xE7E4C198B0185900, p0, p1, p2); }
	static void _0x8462BE2341A55B6F(Any p0) { return Native::Invoke<void, Any>(0x8462BE2341A55B6F, p0); }
	static void _0xAAACF33CBF9B990A(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xAAACF33CBF9B990A, p0, p1); }
	static Any _0xE4EFB315BCD2A838() { return Native::Invoke<Any>(0xE4EFB315BCD2A838); }
	static void _0xF9C1681347C8BD15(Any p0) { return Native::Invoke<void, Any>(0xF9C1681347C8BD15, p0); }
	static Any _0x58DE624FA7FB0E7F(Any p0) { return Native::Invoke<Any, Any>(0x58DE624FA7FB0E7F, p0); }
	static Any _0x491439AEF410A2FC() { return Native::Invoke<Any>(0x491439AEF410A2FC); }
	static void _0xFFB99FFD17F65889(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xFFB99FFD17F65889, p0, p1); }
	static Any _0xCEAB54F4632C6EF6() { return Native::Invoke<Any>(0xCEAB54F4632C6EF6); }
	static void TRACK_OBJECT_VISIBILITY(Any p0) { return Native::Invoke<void, Any>(N::TRACK_OBJECT_VISIBILITY, p0); }
	static BOOL IS_OBJECT_VISIBLE(Object object) { return Native::Invoke<BOOL, Object>(N::IS_OBJECT_VISIBLE, object); }
	static Any _0xEB6F1A9B5510A5D2() { return Native::Invoke<Any>(0xEB6F1A9B5510A5D2); }
	static Any _0xE2B3B852B537C398() { return Native::Invoke<Any>(0xE2B3B852B537C398); }
	static Any _0x6579860A5558524A() { return Native::Invoke<Any>(0x6579860A5558524A); }
	static void _0xDFA1237F5228263F(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xDFA1237F5228263F, p0, p1); }
	static Any _0xFA3B61EC249B4674(Any p0) { return Native::Invoke<Any, Any>(0xFA3B61EC249B4674, p0); }
	static void _0xF49574E2332A8F06(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xF49574E2332A8F06, p0, p1); }
	static void _0x63E39F09310F481F(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x63E39F09310F481F, p0, p1); }
	static void _0x04D1D4E411CE52D0(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x04D1D4E411CE52D0, p0, p1); }
	static void _0x7FCD49388BC9B775(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x7FCD49388BC9B775, p0, p1); }
	static Any GET_RAYFIRE_MAP_OBJECT(Any p0, Any p1, Any p2, Any p3, Any p4) { return Native::Invoke<Any, Any, Any, Any, Any, Any>(N::GET_RAYFIRE_MAP_OBJECT, p0, p1, p2, p3, p4); }
	static void SET_STATE_OF_RAYFIRE_MAP_OBJECT(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(N::SET_STATE_OF_RAYFIRE_MAP_OBJECT, p0, p1); }
	static Any GET_STATE_OF_RAYFIRE_MAP_OBJECT(Any p0) { return Native::Invoke<Any, Any>(N::GET_STATE_OF_RAYFIRE_MAP_OBJECT, p0); }
	static Any DOES_RAYFIRE_MAP_OBJECT_EXIST(Any p0) { return Native::Invoke<Any, Any>(N::DOES_RAYFIRE_MAP_OBJECT_EXIST, p0); }
	static Any GET_RAYFIRE_MAP_OBJECT_ANIM_PHASE(Any p0) { return Native::Invoke<Any, Any>(N::GET_RAYFIRE_MAP_OBJECT_ANIM_PHASE, p0); }
	static Pickup CREATE_PICKUP(Hash pickupHash, float posX, float posY, float posZ, int p4, int value, BOOL p6, Hash modelHash, Any p8) { return Native::Invoke<Pickup, Hash, float, float, float, int, int, BOOL, Hash, Any>(N::CREATE_PICKUP, pickupHash, posX, posY, posZ, p4, value, p6, modelHash, p8); }
	static Pickup CREATE_PICKUP_ROTATE(Hash pickupHash, float posX, float posY, float posZ, float rotX, float rotY, float rotZ, int flag, int amount, Any p9, BOOL p10, Hash modelHash, Any p12) { return Native::Invoke<Pickup, Hash, float, float, float, float, float, float, int, int, Any, BOOL, Hash, Any>(N::CREATE_PICKUP_ROTATE, pickupHash, posX, posY, posZ, rotX, rotY, rotZ, flag, amount, p9, p10, modelHash, p12); }
	static Any CREATE_AMBIENT_PICKUP() { return Native::Invoke<Any>(N::CREATE_AMBIENT_PICKUP); }
	static Any CREATE_PORTABLE_PICKUP() { return Native::Invoke<Any>(N::CREATE_PORTABLE_PICKUP); }
	static Any ATTACH_PORTABLE_PICKUP_TO_PED() { return Native::Invoke<Any>(N::ATTACH_PORTABLE_PICKUP_TO_PED); }
	static Any DETACH_PORTABLE_PICKUP_FROM_PED() { return Native::Invoke<Any>(N::DETACH_PORTABLE_PICKUP_FROM_PED); }
	static Any _0x2777150CC7D9365E() { return Native::Invoke<Any>(0x2777150CC7D9365E); }
	static Any _0x0BF3B3BD47D79C08() { return Native::Invoke<Any>(0x0BF3B3BD47D79C08); }
	static Any _0x3E2616E7EA539480() { return Native::Invoke<Any>(0x3E2616E7EA539480); }
	static Any _0x78857FC65CADB909() { return Native::Invoke<Any>(0x78857FC65CADB909); }
	static Any GET_SAFE_PICKUP_COORDS() { return Native::Invoke<Any>(N::GET_SAFE_PICKUP_COORDS); }
	static Vector3 GET_PICKUP_COORDS(Pickup pickup) { return Native::Invoke<Vector3, Pickup>(N::GET_PICKUP_COORDS, pickup); }
	static void REMOVE_ALL_PICKUPS_OF_TYPE(Hash pickupHash) { return Native::Invoke<void, Hash>(N::REMOVE_ALL_PICKUPS_OF_TYPE, pickupHash); }
	static BOOL HAS_PICKUP_BEEN_COLLECTED(Pickup pickup) { return Native::Invoke<BOOL, Pickup>(N::HAS_PICKUP_BEEN_COLLECTED, pickup); }
	static void REMOVE_PICKUP(Pickup pickup) { return Native::Invoke<void, Pickup>(N::REMOVE_PICKUP, pickup); }
	static Any _0x634C19521485AB25() { return Native::Invoke<Any>(0x634C19521485AB25); }
	static BOOL DOES_PICKUP_EXIST(Pickup pickup) { return Native::Invoke<BOOL, Pickup>(N::DOES_PICKUP_EXIST, pickup); }
	static BOOL DOES_PICKUP_OBJECT_EXIST(Object pickupObject) { return Native::Invoke<BOOL, Object>(N::DOES_PICKUP_OBJECT_EXIST, pickupObject); }
	static Object GET_PICKUP_OBJECT(Pickup pickup) { return Native::Invoke<Object, Pickup>(N::GET_PICKUP_OBJECT, pickup); }
	static Any _0x0378C08504160D0D() { return Native::Invoke<Any>(0x0378C08504160D0D); }
	static Any _0x007BD043587F7C82() { return Native::Invoke<Any>(0x007BD043587F7C82); }
	static Any DOES_PICKUP_OF_TYPE_EXIST_IN_AREA(Any p0, Any p1, Any p2, Any p3, Any p4) { return Native::Invoke<Any, Any, Any, Any, Any, Any>(N::DOES_PICKUP_OF_TYPE_EXIST_IN_AREA, p0, p1, p2, p3, p4); }
	static Any SET_PICKUP_REGENERATION_TIME() { return Native::Invoke<Any>(N::SET_PICKUP_REGENERATION_TIME); }
	static Any _0x758A5C1B3B1E1990() { return Native::Invoke<Any>(0x758A5C1B3B1E1990); }
	static Any _0x94F3D956BFAEAE18() { return Native::Invoke<Any>(0x94F3D956BFAEAE18); }
	static Any _SET_LOCAL_PLAYER_CAN_USE_PICKUPS_WITH_THIS_MODEL() { return Native::Invoke<Any>(N::_SET_LOCAL_PLAYER_CAN_USE_PICKUPS_WITH_THIS_MODEL); }
	static void _0xB8F5062070BB6DBD(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xB8F5062070BB6DBD, p0, p1); }
	static void _0x92E87F60F21A0C3A(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x92E87F60F21A0C3A, p0, p1); }
	static Any _0x1F5E07E14A86FAFC() { return Native::Invoke<Any>(0x1F5E07E14A86FAFC); }
	static Any SET_TEAM_PICKUP_OBJECT() { return Native::Invoke<Any>(N::SET_TEAM_PICKUP_OBJECT); }
	static Any _0x9F52AD67D1A91BAD() { return Native::Invoke<Any>(0x9F52AD67D1A91BAD); }
	static Any _0x92AEFB5F6E294023() { return Native::Invoke<Any>(0x92AEFB5F6E294023); }
	static Any SET_PICKUP_GENERATION_RANGE_MULTIPLIER() { return Native::Invoke<Any>(N::SET_PICKUP_GENERATION_RANGE_MULTIPLIER); }
	static Any _0x4A8CB328CD6F1C9B() { return Native::Invoke<Any>(0x4A8CB328CD6F1C9B); }
	static Any _0x81218CE01B672219() { return Native::Invoke<Any>(0x81218CE01B672219); }
	static Any _0xAC9AE68F0A463752() { return Native::Invoke<Any>(0xAC9AE68F0A463752); }
	static Any _0xEB9740A38FD6D634() { return Native::Invoke<Any>(0xEB9740A38FD6D634); }
	static Any _0x1607C7D9B3021DF5() { return Native::Invoke<Any>(0x1607C7D9B3021DF5); }
	static Any _0xF92099527DB8E2A7() { return Native::Invoke<Any>(0xF92099527DB8E2A7); }
	static Any _0x20135AF9C10D2A3D() { return Native::Invoke<Any>(0x20135AF9C10D2A3D); }
	static Any _0x00EE08603EADEE92() { return Native::Invoke<Any>(0x00EE08603EADEE92); }
	static void _0xDE116ECFFDD4B997(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xDE116ECFFDD4B997, p0, p1); }
	static Any GET_WEAPON_TYPE_FROM_PICKUP_TYPE() { return Native::Invoke<Any>(N::GET_WEAPON_TYPE_FROM_PICKUP_TYPE); }
	static Any _0x44B09A23D728045A() { return Native::Invoke<Any>(0x44B09A23D728045A); }
	static void _SET_OBJECT_TEXTURE_VARIATION(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(N::_SET_OBJECT_TEXTURE_VARIATION, p0, p1); }
	static Any _0x3397CD4E0353DFBA() { return Native::Invoke<Any>(0x3397CD4E0353DFBA); }
	static void _0x7D7285EFEAB5AF15(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x7D7285EFEAB5AF15, p0, p1); }
	static void _0xC8E21C1677DC5E6F(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xC8E21C1677DC5E6F, p0, p1); }
	static void _0x2797C633DCDBBAC5(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0x2797C633DCDBBAC5, p0, p1, p2); }
	static void _0x9A74A9CADFA8A598(Any p0) { return Native::Invoke<void, Any>(0x9A74A9CADFA8A598, p0); }
	static void _0xF40AB58D83C35027(Any p0) { return Native::Invoke<void, Any>(0xF40AB58D83C35027, p0); }
	static void _0x646564A3B7DF68F8(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0x646564A3B7DF68F8, p0, p1, p2); }
	static void _0xCBFBD38F2E0A263B(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xCBFBD38F2E0A263B, p0, p1); }
	static Any _GET_PICKUP_HASH() { return Native::Invoke<Any>(N::_GET_PICKUP_HASH); }
	static void SET_FORCE_OBJECT_THIS_FRAME(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<void, Any, Any, Any, Any>(N::SET_FORCE_OBJECT_THIS_FRAME, p0, p1, p2, p3); }
	static Any _0xD91E55B6C005EB09() { return Native::Invoke<Any>(0xD91E55B6C005EB09); }
	static void _MARK_OBJECT_FOR_DELETION(Object object) { return Native::Invoke<void, Object>(N::_MARK_OBJECT_FOR_DELETION, object); }
	static void _0xCAAF2BCCFEF37F77(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xCAAF2BCCFEF37F77, p0, p1); }
	static Any _0x08C5825A2932EA7B() { return Native::Invoke<Any>(0x08C5825A2932EA7B); }
	static Any _0x7D4411D6736CD295(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x7D4411D6736CD295, p0, p1); }
	static Any _0x250EBB11E81A10BE(Any p0) { return Native::Invoke<Any, Any>(0x250EBB11E81A10BE, p0); }
	static Any _0x2BF1953C0C21AC88(Any p0) { return Native::Invoke<Any, Any>(0x2BF1953C0C21AC88, p0); }
	static Any _0xB6CBD40F8EA69E8A(Any p0) { return Native::Invoke<Any, Any>(0xB6CBD40F8EA69E8A, p0); }
	static void _0x1461DF6DB886BE3F(Any p0) { return Native::Invoke<void, Any>(0x1461DF6DB886BE3F, p0); }
	static Any _0xF65EDE5D02A7A760() { return Native::Invoke<Any>(0xF65EDE5D02A7A760); }
	static Any _0x98D2D9C053A1F449() { return Native::Invoke<Any>(0x98D2D9C053A1F449); }
	static Any _0xE1C708BA4885796B() { return Native::Invoke<Any>(0xE1C708BA4885796B); }
	static Any _0xB7017DA4D498269F() { return Native::Invoke<Any>(0xB7017DA4D498269F); }
	static void _0xE124889AE0521FCF(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<void, Any, Any, Any, Any>(0xE124889AE0521FCF, p0, p1, p2, p3); }
	static void _0xD503D6F0986D58BC(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xD503D6F0986D58BC, p0, p1); }
	static Any _0xAEE6C800E124CFE1() { return Native::Invoke<Any>(0xAEE6C800E124CFE1); }
}
namespace PAD
{
	static void _0x2804658EB7D8A50B(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x2804658EB7D8A50B, p0, p1); }
	static Any _0xDDCEB0F26C89C00F() { return Native::Invoke<Any>(0xDDCEB0F26C89C00F); }
	static Any _0xBC0884BC590951C7(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0xBC0884BC590951C7, p0, p1); }
	static BOOL IS_CONTROL_ENABLED(int inputGroup, int control) { return Native::Invoke<BOOL, int, int>(N::IS_CONTROL_ENABLED, inputGroup, control); }
	static BOOL IS_CONTROL_PRESSED(int inputGroup, int contorl) { return Native::Invoke<BOOL, int, int>(N::IS_CONTROL_PRESSED, inputGroup, contorl); }
	static BOOL IS_CONTROL_RELEASED(int inputGroup, int control) { return Native::Invoke<BOOL, int, int>(N::IS_CONTROL_RELEASED, inputGroup, control); }
	static BOOL IS_CONTROL_JUST_PRESSED(int inputGroup, int control) { return Native::Invoke<BOOL, int, int>(N::IS_CONTROL_JUST_PRESSED, inputGroup, control); }
	static BOOL IS_CONTROL_JUST_RELEASED(int inputGroup, int control) { return Native::Invoke<BOOL, int, int>(N::IS_CONTROL_JUST_RELEASED, inputGroup, control); }
	static int GET_CONTROL_VALUE(int inputGroup, int control) { return Native::Invoke<int, int, int>(N::GET_CONTROL_VALUE, inputGroup, control); }
	static float GET_CONTROL_NORMAL(int inputGroup, int control) { return Native::Invoke<float, int, int>(N::GET_CONTROL_NORMAL, inputGroup, control); }
	static Any GET_CONTROL_UNBOUND_NORMAL(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(N::GET_CONTROL_UNBOUND_NORMAL, p0, p1); }
	static BOOL _SET_CONTROL_NORMAL(int inputGroup, int control, float amount) { return Native::Invoke<BOOL, int, int, float>(N::_SET_CONTROL_NORMAL, inputGroup, control, amount); }
	static BOOL IS_DISABLED_CONTROL_PRESSED(int inputGroup, int control) { return Native::Invoke<BOOL, int, int>(N::IS_DISABLED_CONTROL_PRESSED, inputGroup, control); }
	static BOOL IS_DISABLED_CONTROL_JUST_PRESSED(int inputGroup, int control) { return Native::Invoke<BOOL, int, int>(N::IS_DISABLED_CONTROL_JUST_PRESSED, inputGroup, control); }
	static BOOL IS_DISABLED_CONTROL_JUST_RELEASED(int inputGroup, int control) { return Native::Invoke<BOOL, int, int>(N::IS_DISABLED_CONTROL_JUST_RELEASED, inputGroup, control); }
	static float GET_DISABLED_CONTROL_NORMAL(int inputGroup, int control) { return Native::Invoke<float, int, int>(N::GET_DISABLED_CONTROL_NORMAL, inputGroup, control); }
	static Any GET_DISABLED_CONTROL_UNBOUND_NORMAL(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(N::GET_DISABLED_CONTROL_UNBOUND_NORMAL, p0, p1); }
	static Any _0xD7D22F5592AED8BA(Any p0) { return Native::Invoke<Any, Any>(0xD7D22F5592AED8BA, p0); }
	static Any _0x771DFCB24D19C2F6() { return Native::Invoke<Any>(0x771DFCB24D19C2F6); }
	static Any _IS_INPUT_DISABLED() { return Native::Invoke<Any>(N::_IS_INPUT_DISABLED); }
	static Any _0x43F35DDB2905D945() { return Native::Invoke<Any>(0x43F35DDB2905D945); }
	static Any _0xBD629C1C4F501C80(Any p0) { return Native::Invoke<Any, Any>(0xBD629C1C4F501C80, p0); }
	static Any _0x6CD79468A1E595C6() { return Native::Invoke<Any>(0x6CD79468A1E595C6); }
	static Any _0x8290252FFF36ACB5() { return Native::Invoke<Any>(0x8290252FFF36ACB5); }
	static Any _0xCB0360EFEFB2580D() { return Native::Invoke<Any>(0xCB0360EFEFB2580D); }
	static Any _0xA45884DB10EC7EE3() { return Native::Invoke<Any>(0xA45884DB10EC7EE3); }
	static void SET_PAD_SHAKE(int p0, int duration, int frequency) { return Native::Invoke<void, int, int, int>(N::SET_PAD_SHAKE, p0, duration, frequency); }
	static void _0x14D29BB12D47F68C(Any p0, Any p1, Any p2, Any p3, Any p4) { return Native::Invoke<void, Any, Any, Any, Any, Any>(0x14D29BB12D47F68C, p0, p1, p2, p3, p4); }
	static void STOP_PAD_SHAKE(Any p0) { return Native::Invoke<void, Any>(N::STOP_PAD_SHAKE, p0); }
	static void _0xF239400E16C23E08(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xF239400E16C23E08, p0, p1); }
	static void _0xA0CEFCEA390AAB9B(Any p0) { return Native::Invoke<void, Any>(0xA0CEFCEA390AAB9B, p0); }
	static BOOL IS_LOOK_INVERTED() { return Native::Invoke<BOOL>(N::IS_LOOK_INVERTED); }
	static void SET_INPUT_EXCLUSIVE(int inputGroup, int control) { return Native::Invoke<void, int, int>(N::SET_INPUT_EXCLUSIVE, inputGroup, control); }
	static void DISABLE_CONTROL_ACTION(int inputGroup, int control, BOOL disable) { return Native::Invoke<void, int, int, BOOL>(N::DISABLE_CONTROL_ACTION, inputGroup, control, disable); }
	static void ENABLE_CONTROL_ACTION(int inputGroup, int control, BOOL enable) { return Native::Invoke<void, int, int, BOOL>(N::ENABLE_CONTROL_ACTION, inputGroup, control, enable); }
	static void DISABLE_ALL_CONTROL_ACTIONS(int inputGroup) { return Native::Invoke<void, int>(N::DISABLE_ALL_CONTROL_ACTIONS, inputGroup); }
	static void _0x5F217BC1190503D8(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x5F217BC1190503D8, p0, p1); }
	static void _0x709BA8C08C5C008D() { return Native::Invoke<void>(0x709BA8C08C5C008D); }
	static Any _0x1252C029FC8EBB4D() { return Native::Invoke<Any>(0x1252C029FC8EBB4D); }
}
namespace PATHFIND
{
	static void SET_ROADS_IN_AREA(float x1, float y1, float z1, float x2, float y2, float z2, BOOL unknown1, BOOL unknown2, Any p8) { return Native::Invoke<void, float, float, float, float, float, float, BOOL, BOOL, Any>(N::SET_ROADS_IN_AREA, x1, y1, z1, x2, y2, z2, unknown1, unknown2, p8); }
	static void SET_ROADS_IN_ANGLED_AREA(float x1, float y1, float z1, float x2, float y2, float z2, float angle, BOOL unknown1, BOOL unknown2, BOOL unknown3, Any p10) { return Native::Invoke<void, float, float, float, float, float, float, float, BOOL, BOOL, BOOL, Any>(N::SET_ROADS_IN_ANGLED_AREA, x1, y1, z1, x2, y2, z2, angle, unknown1, unknown2, unknown3, p10); }
	static void _0xC1799FAFD2FDF52B(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<void, Any, Any, Any, Any>(0xC1799FAFD2FDF52B, p0, p1, p2, p3); }
	static void _0xD17672447692478E(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xD17672447692478E, p0, p1); }
	static void SET_ROADS_BACK_TO_ORIGINAL(float p0, float p1, float p2, float p3, float p4, float p5, Any p6, Any p7) { return Native::Invoke<void, float, float, float, float, float, float, Any, Any>(N::SET_ROADS_BACK_TO_ORIGINAL, p0, p1, p2, p3, p4, p5, p6, p7); }
	static void SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(float x1, float y1, float z1, float x2, float y2, float z2, float p6, Any p7, Any p8) { return Native::Invoke<void, float, float, float, float, float, float, float, Any, Any>(N::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA, x1, y1, z1, x2, y2, z2, p6, p7, p8); }
	static void _0xAFE2AE66F6251C66(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any, Any, Any>(0xAFE2AE66F6251C66, p0, p1, p2, p3, p4, p5, p6, p7); }
	static void _0x4358BCF14C91761C(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any>(0x4358BCF14C91761C, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); }
	static void _0xB03944057FD735BA(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0xB03944057FD735BA, p0, p1, p2); }
	static void _0x6C3F12ECEB6D2E2A(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any, Any, Any>(0x6C3F12ECEB6D2E2A, p0, p1, p2, p3, p4, p5, p6, p7); }
	static void _0x5A4E1A41E3A02AD0(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0x5A4E1A41E3A02AD0, p0, p1, p2); }
	static BOOL GET_CLOSEST_VEHICLE_NODE(float x, float y, float z, Vector3* outPosition, int nodeType, float p5, float p6) { return Native::Invoke<BOOL, float, float, float, Vector3*, int, float, float>(N::GET_CLOSEST_VEHICLE_NODE, x, y, z, outPosition, nodeType, p5, p6); }
	static Any _0xCA27A86CAA4E98ED(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return Native::Invoke<Any, Any, Any, Any, Any, Any, Any, Any>(0xCA27A86CAA4E98ED, p0, p1, p2, p3, p4, p5, p6); }
	static BOOL GET_CLOSEST_VEHICLE_NODE_WITH_HEADING(float x, float y, float z, Vector3* outPosition, float* outHeading, int nodeType, float p6, int p7) { return Native::Invoke<BOOL, float, float, float, Vector3*, float*, int, float, int>(N::GET_CLOSEST_VEHICLE_NODE_WITH_HEADING, x, y, z, outPosition, outHeading, nodeType, p6, p7); }
	static BOOL GET_NTH_CLOSEST_VEHICLE_NODE(float x, float y, float z, int nthClosest, Vector3* outPosition, BOOL p6, float p7, float p8) { return Native::Invoke<BOOL, float, float, float, int, Vector3*, BOOL, float, float>(N::GET_NTH_CLOSEST_VEHICLE_NODE, x, y, z, nthClosest, outPosition, p6, p7, p8); }
	static int GET_NTH_CLOSEST_VEHICLE_NODE_ID(float x, float y, float z, int nth, int nodetype, float p5, float p6) { return Native::Invoke<int, float, float, float, int, int, float, float>(N::GET_NTH_CLOSEST_VEHICLE_NODE_ID, x, y, z, nth, nodetype, p5, p6); }
	static Any GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING() { return Native::Invoke<Any>(N::GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING); }
	static Any GET_NTH_CLOSEST_VEHICLE_NODE_ID_WITH_HEADING() { return Native::Invoke<Any>(N::GET_NTH_CLOSEST_VEHICLE_NODE_ID_WITH_HEADING); }
	static Any GET_NTH_CLOSEST_VEHICLE_NODE_FAVOUR_DIRECTION() { return Native::Invoke<Any>(N::GET_NTH_CLOSEST_VEHICLE_NODE_FAVOUR_DIRECTION); }
	static Any IS_VEHICLE_NODE_ID_VALID() { return Native::Invoke<Any>(N::IS_VEHICLE_NODE_ID_VALID); }
	static Any GET_VEHICLE_NODE_POSITION() { return Native::Invoke<Any>(N::GET_VEHICLE_NODE_POSITION); }
	static Any GET_VEHICLE_NODE_IS_SWITCHED_OFF(Any p0) { return Native::Invoke<Any, Any>(N::GET_VEHICLE_NODE_IS_SWITCHED_OFF, p0); }
	static Any GET_CLOSEST_ROAD(float posX, float posY, float posZ, float p3, int p4, Vector3* p5, Vector3* p6, int* p7, int* p8, float* p9, int p10) { return Native::Invoke<Any, float, float, float, float, int, Vector3*, Vector3*, int*, int*, float*, int>(N::GET_CLOSEST_ROAD, posX, posY, posZ, p3, p4, p5, p6, p7, p8, p9, p10); }
	static Any _ARE_PATH_NODES_LOADED_IN_AREA() { return Native::Invoke<Any>(N::_ARE_PATH_NODES_LOADED_IN_AREA); }
	static Any _0x07FB139B592FA687() { return Native::Invoke<Any>(0x07FB139B592FA687); }
	static Any GET_RANDOM_VEHICLE_NODE() { return Native::Invoke<Any>(N::GET_RANDOM_VEHICLE_NODE); }
	static Any _0xA3791B915B8B84C6() { return Native::Invoke<Any>(0xA3791B915B8B84C6); }
	static BOOL IS_POINT_ON_ROAD(float x, float y, float z, Vehicle vehicle) { return Native::Invoke<BOOL, float, float, float, Vehicle>(N::IS_POINT_ON_ROAD, x, y, z, vehicle); }
	static void SET_PED_PATHS_IN_AREA(float x1, float y1, float z1, float x2, float y2, float z2, BOOL unknown, Any p7) { return Native::Invoke<void, float, float, float, float, float, float, BOOL, Any>(N::SET_PED_PATHS_IN_AREA, x1, y1, z1, x2, y2, z2, unknown, p7); }
	static void _0xE5EF9DE716FF737E(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0xE5EF9DE716FF737E, p0, p1, p2); }
	static BOOL GET_SAFE_COORD_FOR_PED(float x, float y, float z, BOOL onGround, Vector3* outPosition, int flags) { return Native::Invoke<BOOL, float, float, float, BOOL, Vector3*, int>(N::GET_SAFE_COORD_FOR_PED, x, y, z, onGround, outPosition, flags); }
	static void SET_PED_PATHS_BACK_TO_ORIGINAL(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any, Any>(N::SET_PED_PATHS_BACK_TO_ORIGINAL, p0, p1, p2, p3, p4, p5, p6); }
	static void _0xCF213A5FC3ABFC08(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0xCF213A5FC3ABFC08, p0, p1, p2); }
	static void ADD_NAVMESH_REQUIRED_REGION(float x, float y, float radius) { return Native::Invoke<void, float, float, float>(N::ADD_NAVMESH_REQUIRED_REGION, x, y, radius); }
	static BOOL IS_NAVMESH_LOADED_IN_AREA(float x1, float y1, float z1, float x2, float y2, float z2) { return Native::Invoke<BOOL, float, float, float, float, float, float>(N::IS_NAVMESH_LOADED_IN_AREA, x1, y1, z1, x2, y2, z2); }
	static Any _0x01708E8DD3FF8C65() { return Native::Invoke<Any>(0x01708E8DD3FF8C65); }
	static Any _0x7C334FF4D9215912(Any p0) { return Native::Invoke<Any, Any>(0x7C334FF4D9215912, p0); }
	static Any _0x527B97C203BB8606(Any p0) { return Native::Invoke<Any, Any>(0x527B97C203BB8606, p0); }
	static Any _0x5AC0944C156E5F44(Any p0) { return Native::Invoke<Any, Any>(0x5AC0944C156E5F44, p0); }
	static Any _0x495CFAB2924237C7(Any p0) { return Native::Invoke<Any, Any>(0x495CFAB2924237C7, p0); }
	static Any _0x5A3B54ADDF5472A3(Any p0) { return Native::Invoke<Any, Any>(0x5A3B54ADDF5472A3, p0); }
	static Any _0xA33914B00CA55756(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0xA33914B00CA55756, p0, p1); }
	static Any _0x44026E3DB3CED602(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x44026E3DB3CED602, p0, p1); }
	static Any ADD_NAVMESH_BLOCKING_OBJECT(float p0, float p1, float p2, float p3, float p4, float p5, float p6, BOOL p7, Any p8) { return Native::Invoke<Any, float, float, float, float, float, float, float, BOOL, Any>(N::ADD_NAVMESH_BLOCKING_OBJECT, p0, p1, p2, p3, p4, p5, p6, p7, p8); }
	static void REMOVE_NAVMESH_BLOCKING_OBJECT(Any p0) { return Native::Invoke<void, Any>(N::REMOVE_NAVMESH_BLOCKING_OBJECT, p0); }
	static BOOL DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Any p0) { return Native::Invoke<BOOL, Any>(N::DOES_NAVMESH_BLOCKING_OBJECT_EXIST, p0); }
	static Any _0x19C7567D2F2287D6(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x19C7567D2F2287D6, p0, p1); }
	static void _0x2C87C3E1C7B96EE2(Any p0) { return Native::Invoke<void, Any>(0x2C87C3E1C7B96EE2, p0); }
	static Any _0xDE0EA444735C1368(Any p0) { return Native::Invoke<Any, Any>(0xDE0EA444735C1368, p0); }
	static void _0x6DAD6630AE4A74CB(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x6DAD6630AE4A74CB, p0, p1); }
	static Any _0x348F211CA2404039(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { return Native::Invoke<Any, Any, Any, Any, Any, Any, Any, Any, Any>(0x348F211CA2404039, p0, p1, p2, p3, p4, p5, p6, p7); }
	static Any _0x661BB1E1FF77742D(Any p0) { return Native::Invoke<Any, Any>(0x661BB1E1FF77742D, p0); }
	static Any _0x3A0F82F6EE2291C8(Any p0) { return Native::Invoke<Any, Any>(0x3A0F82F6EE2291C8, p0); }
	static Any _0x8800776E410EB669() { return Native::Invoke<Any>(0x8800776E410EB669); }
	static Any _0xF61CFEDEAB627BFA(Any p0) { return Native::Invoke<Any, Any>(0xF61CFEDEAB627BFA, p0); }
	static Any _0xD470725E0703D22F(Any p0) { return Native::Invoke<Any, Any>(0xD470725E0703D22F, p0); }
	static Any _0x430F8319AE56C8A9(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x430F8319AE56C8A9, p0, p1); }
	static Any _0x336511A34F2E5185(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x336511A34F2E5185, p0, p1); }
	static void SET_AMBIENT_PED_RANGE_MULTIPLIER_THIS_FRAME(Any p0) { return Native::Invoke<void, Any>(N::SET_AMBIENT_PED_RANGE_MULTIPLIER_THIS_FRAME, p0); }
	static Any SET_IGNORE_NO_GPS_FLAG() { return Native::Invoke<Any>(N::SET_IGNORE_NO_GPS_FLAG); }
	static Any _0xBBB45C3CF5C8AA85() { return Native::Invoke<Any>(0xBBB45C3CF5C8AA85); }
	static Any _0xEFC535C9FAF563B3(Any p0) { return Native::Invoke<Any, Any>(0xEFC535C9FAF563B3, p0); }
	static Any _0x665B21666351CB37() { return Native::Invoke<Any>(0x665B21666351CB37); }
	static Any _0x869DAACBBE9FA006() { return Native::Invoke<Any>(0x869DAACBBE9FA006); }
	static Any _0x54F4D7B6670FBB5A(Any p0, Any p1, Any p2, Any p3, Any p4) { return Native::Invoke<Any, Any, Any, Any, Any, Any>(0x54F4D7B6670FBB5A, p0, p1, p2, p3, p4); }
	static void _0x34C9AF25649172D0(Any p0) { return Native::Invoke<void, Any>(0x34C9AF25649172D0, p0); }
	static void _0xF2A2177AC848B3A8(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0xF2A2177AC848B3A8, p0, p1, p2); }
	static void _0x4BDEBEA5702B97A9(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any>(0x4BDEBEA5702B97A9, p0, p1, p2, p3, p4, p5); }
	static Any _0x264E9A5CD78C338F() { return Native::Invoke<Any>(0x264E9A5CD78C338F); }
	static Any _0x869A7015BD4606E9() { return Native::Invoke<Any>(0x869A7015BD4606E9); }
	static Any _0xFD5BB35AAB83FD48() { return Native::Invoke<Any>(0xFD5BB35AAB83FD48); }
	static Any _0x4907D0E4FB26EE65() { return Native::Invoke<Any>(0x4907D0E4FB26EE65); }
	static Any _0x65A8196B8D7F5E0B() { return Native::Invoke<Any>(0x65A8196B8D7F5E0B); }
	static Any _0x240915043CB799D7() { return Native::Invoke<Any>(0x240915043CB799D7); }
	static Any _0xA1A3DE1C215C7394() { return Native::Invoke<Any>(0xA1A3DE1C215C7394); }
	static Any _0x2DD5F78D73B24172() { return Native::Invoke<Any>(0x2DD5F78D73B24172); }
}
namespace PED
{
	static Player* CREATE_PED(int pedType, Hash modelHash, float x, float y, float z, float heading, BOOL isNetwork, BOOL thisScriptCheck, Any p8) { return Native::Invoke<Player*, int, Hash, float, float, float, float, BOOL, BOOL, Any>(N::CREATE_PED, pedType, modelHash, x, y, z, heading, isNetwork, thisScriptCheck, p8); }
	static void DELETE_PED(Ped* ped) { return Native::Invoke<void, Ped*>(N::DELETE_PED, ped); }
	static void _0x39A2FC5AF55A52B1(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x39A2FC5AF55A52B1, p0, p1); }
	static Any _0x7C08E7CB8D951B70() { return Native::Invoke<Any>(0x7C08E7CB8D951B70); }
	static void _0x36E4B61DC56DE77C(Any p0, Any p1, Any p2, Any p3, Any p4) { return Native::Invoke<void, Any, Any, Any, Any, Any>(0x36E4B61DC56DE77C, p0, p1, p2, p3, p4); }
	static Ped CLONE_PED(Ped ped, float heading, BOOL isNetwork, BOOL thisScriptCheck) { return Native::Invoke<Ped, Ped, float, BOOL, BOOL>(N::CLONE_PED, ped, heading, isNetwork, thisScriptCheck); }
	static Any CLONE_PED_TO_TARGET() { return Native::Invoke<Any>(N::CLONE_PED_TO_TARGET); }
	static BOOL IS_PED_IN_VEHICLE(Ped ped, Vehicle vehicle, BOOL atGetIn) { return Native::Invoke<BOOL, Ped, Vehicle, BOOL>(N::IS_PED_IN_VEHICLE, ped, vehicle, atGetIn); }
	static BOOL IS_PED_IN_MODEL(Ped ped, Hash modelHash) { return Native::Invoke<BOOL, Ped, Hash>(N::IS_PED_IN_MODEL, ped, modelHash); }
	static BOOL IS_PED_IN_ANY_VEHICLE(Ped ped, BOOL atGetIn) { return Native::Invoke<BOOL, Ped, BOOL>(N::IS_PED_IN_ANY_VEHICLE, ped, atGetIn); }
	static void _0x9851DE7AEC10B4E1(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any>(0x9851DE7AEC10B4E1, p0, p1, p2, p3, p4, p5); }
	static BOOL IS_PED_INJURED(Ped ped) { return Native::Invoke<BOOL, Ped>(N::IS_PED_INJURED, ped); }
	static BOOL IS_PED_FATALLY_INJURED(Ped ped) { return Native::Invoke<BOOL, Ped>(N::IS_PED_FATALLY_INJURED, ped); }
	static BOOL IS_PED_DEAD_OR_DYING(Ped ped, BOOL p1) { return Native::Invoke<BOOL, Ped, BOOL>(N::IS_PED_DEAD_OR_DYING, ped, p1); }
	static void _0x66C047719B0E80E1(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x66C047719B0E80E1, p0, p1); }
	static BOOL IS_PED_AIMING_FROM_COVER(Ped ped) { return Native::Invoke<BOOL, Ped>(N::IS_PED_AIMING_FROM_COVER, ped); }
	static BOOL IS_PED_RELOADING(Ped ped) { return Native::Invoke<BOOL, Ped>(N::IS_PED_RELOADING, ped); }
	static BOOL IS_PED_A_PLAYER(Ped ped) { return Native::Invoke<BOOL, Ped>(N::IS_PED_A_PLAYER, ped); }
	static Ped CREATE_PED_INSIDE_VEHICLE(Vehicle vehicle, int pedType, Hash modelHash, int seat, BOOL isNetwork, BOOL thisScriptCheck) { return Native::Invoke<Ped, Vehicle, int, Hash, int, BOOL, BOOL>(N::CREATE_PED_INSIDE_VEHICLE, vehicle, pedType, modelHash, seat, isNetwork, thisScriptCheck); }
	static void SET_PED_DESIRED_HEADING(Ped ped, float heading) { return Native::Invoke<void, Ped, float>(N::SET_PED_DESIRED_HEADING, ped, heading); }
	static Any _FREEZE_PED_CAMERA_ROTATION() { return Native::Invoke<Any>(N::_FREEZE_PED_CAMERA_ROTATION); }
	static BOOL IS_PED_FACING_PED(Ped ped, Ped otherPed, float angle) { return Native::Invoke<BOOL, Ped, Ped, float>(N::IS_PED_FACING_PED, ped, otherPed, angle); }
	static BOOL IS_PED_IN_MELEE_COMBAT(Ped ped) { return Native::Invoke<BOOL, Ped>(N::IS_PED_IN_MELEE_COMBAT, ped); }
	static Any _0x6DB875AFC584FA32(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x6DB875AFC584FA32, p0, p1); }
	static BOOL IS_PED_STOPPED(Ped ped) { return Native::Invoke<BOOL, Ped>(N::IS_PED_STOPPED, ped); }
	static Any _0x84D0BF2B21862059(Any p0) { return Native::Invoke<Any, Any>(0x84D0BF2B21862059, p0); }
	static Any _0x09D7AFD3716DA8E1(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x09D7AFD3716DA8E1, p0, p1); }
	static Any _0x9C81338B2E62CE0A(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(0x9C81338B2E62CE0A, p0, p1, p2); }
	static Any _0xB7DBB2986B87E230(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0xB7DBB2986B87E230, p0, p1); }
	static Any _0xD355E2F1BB41087E(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0xD355E2F1BB41087E, p0, p1); }
	static BOOL IS_ANY_PED_SHOOTING_IN_AREA(float x1, float y1, float z1, float x2, float y2, float z2, BOOL p6, BOOL p7) { return Native::Invoke<BOOL, float, float, float, float, float, float, BOOL, BOOL>(N::IS_ANY_PED_SHOOTING_IN_AREA, x1, y1, z1, x2, y2, z2, p6, p7); }
	static BOOL IS_PED_SHOOTING(Ped ped) { return Native::Invoke<BOOL, Ped>(N::IS_PED_SHOOTING, ped); }
	static Any _0x285D36C5C72B0569(Any p0) { return Native::Invoke<Any, Any>(0x285D36C5C72B0569, p0); }
	static Any SET_PED_ACCURACY(Ped ped, int accuracy) { return Native::Invoke<Any, Ped, int>(N::SET_PED_ACCURACY, ped, accuracy); }
	static int GET_PED_ACCURACY(Ped ped) { return Native::Invoke<int, Ped>(N::GET_PED_ACCURACY, ped); }
	static BOOL IS_PED_MODEL(Ped ped, Hash modelHash) { return Native::Invoke<BOOL, Ped, Hash>(N::IS_PED_MODEL, ped, modelHash); }
	static void EXPLODE_PED_HEAD(Ped ped, Hash weaponHash) { return Native::Invoke<void, Ped, Hash>(N::EXPLODE_PED_HEAD, ped, weaponHash); }
	static void ADD_ARMOUR_TO_PED(Ped ped, int amount) { return Native::Invoke<void, Ped, int>(N::ADD_ARMOUR_TO_PED, ped, amount); }
	static void _0x5CA20FBE49891BBD(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x5CA20FBE49891BBD, p0, p1); }
	static void SET_PED_INTO_VEHICLE(Ped ped, Vehicle vehicle, int seatIndex) { return Native::Invoke<void, Ped, Vehicle, int>(N::SET_PED_INTO_VEHICLE, ped, vehicle, seatIndex); }
	static void SET_PED_MOVE_ANIMS_BLEND_OUT(Ped ped) { return Native::Invoke<void, Ped>(N::SET_PED_MOVE_ANIMS_BLEND_OUT, ped); }
	static void _0x606D529DADA3C940(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x606D529DADA3C940, p0, p1); }
	static BOOL IS_PED_MALE(Ped ped) { return Native::Invoke<BOOL, Ped>(N::IS_PED_MALE, ped); }
	static BOOL IS_PED_HUMAN(Ped ped) { return Native::Invoke<BOOL, Ped>(N::IS_PED_HUMAN, ped); }
	static Vehicle GET_VEHICLE_PED_IS_IN(Ped ped, BOOL lastVehicle) { return Native::Invoke<Vehicle, Ped, BOOL>(N::GET_VEHICLE_PED_IS_IN, ped, lastVehicle); }
	static void RESET_PED_LAST_VEHICLE(Ped ped) { return Native::Invoke<void, Ped>(N::RESET_PED_LAST_VEHICLE, ped); }
	static Any _0xC6136B40FFFB778B() { return Native::Invoke<Any>(0xC6136B40FFFB778B); }
	static void _0x6E8B87139854022D(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x6E8B87139854022D, p0, p1); }
	static Any _0x313778EDCA9158E2() { return Native::Invoke<Any>(0x313778EDCA9158E2); }
	static void _0xED9582B3DA8F02B4(Any p0) { return Native::Invoke<void, Any>(0xED9582B3DA8F02B4, p0); }
	static void _0xF008E0BA1FE1D644(Any p0) { return Native::Invoke<void, Any>(0xF008E0BA1FE1D644, p0); }
	static void _0x7D4E70A67A651C71(Any p0) { return Native::Invoke<void, Any>(0x7D4E70A67A651C71, p0); }
	static Any _0x62DE46F061CAA468() { return Native::Invoke<Any>(0x62DE46F061CAA468); }
	static Any _0x5C16855277819BBF() { return Native::Invoke<Any>(0x5C16855277819BBF); }
	static Any _0x5E420FF293EE5472() { return Native::Invoke<Any>(0x5E420FF293EE5472); }
	static void _0xA77FA7BE9312F8C0(Any p0) { return Native::Invoke<void, Any>(0xA77FA7BE9312F8C0, p0); }
	static void _0x9E3842E5DAD69F80(Any p0) { return Native::Invoke<void, Any>(0x9E3842E5DAD69F80, p0); }
	static void _0xAB0D553FE20A6E25(Any p0) { return Native::Invoke<void, Any>(0xAB0D553FE20A6E25, p0); }
	static void SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(Any p0) { return Native::Invoke<void, Any>(N::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME, p0); }
	static void _0xC0258742B034DFAF(Any p0) { return Native::Invoke<void, Any>(0xC0258742B034DFAF, p0); }
	static void _0xBA0980B5C0A11924(Any p0) { return Native::Invoke<void, Any>(0xBA0980B5C0A11924, p0); }
	static Any _0xDB48E99F8E064E56() { return Native::Invoke<Any>(0xDB48E99F8E064E56); }
	static void _0x28CB6391ACEDD9DB(Any p0) { return Native::Invoke<void, Any>(0x28CB6391ACEDD9DB, p0); }
	static void _0x95423627A9CA598E(Any p0) { return Native::Invoke<void, Any>(0x95423627A9CA598E, p0); }
	static void _0x4759CC730F947C81() { return Native::Invoke<void>(0x4759CC730F947C81); }
	static Any _0xBFA6B7731C3BAF02() { return Native::Invoke<Any>(0xBFA6B7731C3BAF02); }
	static Any _0x0EE3F0D7FECCC54F() { return Native::Invoke<Any>(0x0EE3F0D7FECCC54F); }
	static void SET_PED_NON_CREATION_AREA(float x1, float y1, float z1, float x2, float y2, float z2) { return Native::Invoke<void, float, float, float, float, float, float>(N::SET_PED_NON_CREATION_AREA, x1, y1, z1, x2, y2, z2); }
	static void CLEAR_PED_NON_CREATION_AREA() { return Native::Invoke<void>(N::CLEAR_PED_NON_CREATION_AREA); }
	static void _0x7C00CFC48A782DC0(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any>(0x7C00CFC48A782DC0, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); }
	static void _0x19C975B81BE53C28(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x19C975B81BE53C28, p0, p1); }
	static void _0x028F76B6E78246EB(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<void, Any, Any, Any, Any>(0x028F76B6E78246EB, p0, p1, p2, p3); }
	static void _0x5337B721C51883A9(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0x5337B721C51883A9, p0, p1, p2); }
	static Any _0xF89AA2BD01FC06B7(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return Native::Invoke<Any, Any, Any, Any, Any, Any, Any>(0xF89AA2BD01FC06B7, p0, p1, p2, p3, p4, p5); }
	static Any _0xAAB0FE202E9FC9F0(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0xAAB0FE202E9FC9F0, p0, p1); }
	static BOOL IS_PED_ON_MOUNT(Ped ped) { return Native::Invoke<BOOL, Ped>(N::IS_PED_ON_MOUNT, ped); }
	static Any _0x95CBC65780DE7EB1(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x95CBC65780DE7EB1, p0, p1); }
	static Ped GET_MOUNT(Ped ped) { return Native::Invoke<Ped, Ped>(N::GET_MOUNT, ped); }
	static Any _0x4C8B59171957BCF7(Any p0) { return Native::Invoke<Any, Any>(0x4C8B59171957BCF7, p0); }
	static void _0xED1C764997A86D5A(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xED1C764997A86D5A, p0, p1); }
	static void _0xB8AB265426CFE6DD(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xB8AB265426CFE6DD, p0, p1); }
	static Any _0xE8D1CCB9375C101B(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0xE8D1CCB9375C101B, p0, p1); }
	static void _0xA691C10054275290(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0xA691C10054275290, p0, p1, p2); }
	static void _0x6734F0A6A52C371C(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x6734F0A6A52C371C, p0, p1); }
	static void _0x024EC9B649111915(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x024EC9B649111915, p0, p1); }
	static void _0x931B241409216C1F(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0x931B241409216C1F, p0, p1, p2); }
	static Any _0xF103823FFE72BB49(Any p0) { return Native::Invoke<Any, Any>(0xF103823FFE72BB49, p0); }
	static void _0xBCC76708E5677E1D(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xBCC76708E5677E1D, p0, p1); }
	static Any _0x454AD4DA6C41B5BD(Any p0) { return Native::Invoke<Any, Any>(0x454AD4DA6C41B5BD, p0); }
	static void _0xA69899995997A63B(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xA69899995997A63B, p0, p1); }
	static void _0x9B65444C07B782BF(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x9B65444C07B782BF, p0, p1); }
	static Any _0xD543D3A8FDE4F185(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0xD543D3A8FDE4F185, p0, p1); }
	static Any _0x7FC84E85D98F063D(Any p0) { return Native::Invoke<Any, Any>(0x7FC84E85D98F063D, p0); }
	static Any _0x8BE24D74D74C6E9B() { return Native::Invoke<Any>(0x8BE24D74D74C6E9B); }
	static Any _0x77243ED4F7CAAA55(Any p0) { return Native::Invoke<Any, Any>(0x77243ED4F7CAAA55, p0); }
	static BOOL IS_PED_ON_VEHICLE(Ped ped) { return Native::Invoke<BOOL, Ped>(N::IS_PED_ON_VEHICLE, ped); }
	static BOOL IS_PED_ON_SPECIFIC_VEHICLE(Ped ped, Vehicle vehicle) { return Native::Invoke<BOOL, Ped, Vehicle>(N::IS_PED_ON_SPECIFIC_VEHICLE, ped, vehicle); }
	static void _0xE0B61ED8BB37712F(Any p0) { return Native::Invoke<void, Any>(0xE0B61ED8BB37712F, p0); }
	static void SET_PED_MONEY(Ped ped, int amount) { return Native::Invoke<void, Ped, int>(N::SET_PED_MONEY, ped, amount); }
	static int GET_PED_MONEY(Ped ped) { return Native::Invoke<int, Ped>(N::GET_PED_MONEY, ped); }
	static void _0x9911F4A24485F653(Any p0) { return Native::Invoke<void, Any>(0x9911F4A24485F653, p0); }
	static void _0x34EDDD59364AD74A(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x34EDDD59364AD74A, p0, p1); }
	static void _0x2D976DBDC731DF80(Any p0) { return Native::Invoke<void, Any>(0x2D976DBDC731DF80, p0); }
	static BOOL IS_PED_SITTING_IN_VEHICLE(Ped ped, Vehicle vehicle) { return Native::Invoke<BOOL, Ped, Vehicle>(N::IS_PED_SITTING_IN_VEHICLE, ped, vehicle); }
	static BOOL IS_PED_SITTING_IN_ANY_VEHICLE(Ped ped) { return Native::Invoke<BOOL, Ped>(N::IS_PED_SITTING_IN_ANY_VEHICLE, ped); }
	static BOOL IS_PED_ON_FOOT(Ped ped) { return Native::Invoke<BOOL, Ped>(N::IS_PED_ON_FOOT, ped); }
	static BOOL IS_PED_PLANTING_BOMB(Ped ped) { return Native::Invoke<BOOL, Ped>(N::IS_PED_PLANTING_BOMB, ped); }
	static Vector3 GET_DEAD_PED_PICKUP_COORDS(Ped ped, float p1, float p2) { return Native::Invoke<Vector3, Ped, float, float>(N::GET_DEAD_PED_PICKUP_COORDS, ped, p1, p2); }
	static BOOL IS_PED_IN_ANY_BOAT(Ped ped) { return Native::Invoke<BOOL, Ped>(N::IS_PED_IN_ANY_BOAT, ped); }
	static Any IS_PED_IN_ANY_HELI() { return Native::Invoke<Any>(N::IS_PED_IN_ANY_HELI); }
	static Any IS_PED_IN_ANY_PLANE() { return Native::Invoke<Any>(N::IS_PED_IN_ANY_PLANE); }
	static Any IS_PED_IN_FLYING_VEHICLE() { return Native::Invoke<Any>(N::IS_PED_IN_FLYING_VEHICLE); }
	static Any _0x256EDD55C6BE1482() { return Native::Invoke<Any>(0x256EDD55C6BE1482); }
	static BOOL GET_PED_LAST_DAMAGE_BONE(Ped ped, int* outBone) { return Native::Invoke<BOOL, Ped, int*>(N::GET_PED_LAST_DAMAGE_BONE, ped, outBone); }
	static Any CLEAR_PED_LAST_DAMAGE_BONE() { return Native::Invoke<Any>(N::CLEAR_PED_LAST_DAMAGE_BONE); }
	static Any _0x88EFFED5FE8B0B4A(Any p0) { return Native::Invoke<Any, Any>(0x88EFFED5FE8B0B4A, p0); }
	static void _0x7528720101A807A5(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x7528720101A807A5, p0, p1); }
	static Any _0x6CFC373008A1EDAF() { return Native::Invoke<Any>(0x6CFC373008A1EDAF); }
	static Any _0xDACE03C65C6666DB() { return Native::Invoke<Any>(0xDACE03C65C6666DB); }
	static Any _0xB29C553BA582D09E(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<Any, Any, Any, Any, Any>(0xB29C553BA582D09E, p0, p1, p2, p3); }
	static Any _0x101B45C5F56D970F(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<Any, Any, Any, Any, Any>(0x101B45C5F56D970F, p0, p1, p2, p3); }
	static Any _0x6B89FAA36FC909A3(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<Any, Any, Any, Any, Any>(0x6B89FAA36FC909A3, p0, p1, p2, p3); }
	static Any _0x9E7738B291706746(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(0x9E7738B291706746, p0, p1, p2); }
	static void SET_AI_WEAPON_DAMAGE_MODIFIER(float value) { return Native::Invoke<void, float>(N::SET_AI_WEAPON_DAMAGE_MODIFIER, value); }
	static void RESET_AI_WEAPON_DAMAGE_MODIFIER() { return Native::Invoke<void>(N::RESET_AI_WEAPON_DAMAGE_MODIFIER); }
	static void _0x73B6F907B913C860(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x73B6F907B913C860, p0, p1); }
	static Any _0xA6D6F03095C88F59() { return Native::Invoke<Any>(0xA6D6F03095C88F59); }
	static Any _0x92C8EACA29F6BED6(Any p0) { return Native::Invoke<Any, Any>(0x92C8EACA29F6BED6, p0); }
	static void _0xD77AE48611B7B10A(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xD77AE48611B7B10A, p0, p1); }
	static Any _0x936E7CAD0AE2EE14(Any p0) { return Native::Invoke<Any, Any>(0x936E7CAD0AE2EE14, p0); }
	static Any _0x069EDDF1FD4DEB0A() { return Native::Invoke<Any>(0x069EDDF1FD4DEB0A); }
	static void SET_AI_MELEE_WEAPON_DAMAGE_MODIFIER(float modifier) { return Native::Invoke<void, float>(N::SET_AI_MELEE_WEAPON_DAMAGE_MODIFIER, modifier); }
	static void _0xC2266AA617668AD3(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xC2266AA617668AD3, p0, p1); }
	static Any _0xDC9273D95976BA22(Any p0) { return Native::Invoke<Any, Any>(0xDC9273D95976BA22, p0); }
	static void _0x2BA918C823B8BA56(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x2BA918C823B8BA56, p0, p1); }
	static void _0xDEE8D30AA5C2E28D(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0xDEE8D30AA5C2E28D, p0, p1, p2); }
	static void _0xE1B3BE07D3AADDED(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0xE1B3BE07D3AADDED, p0, p1, p2); }
	static void _0x32CEDA9A0AB4CEF7(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0x32CEDA9A0AB4CEF7, p0, p1, p2); }
	static void _0x52A24D8A1DA89658(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0x52A24D8A1DA89658, p0, p1, p2); }
	static void _0x34B5CEAC180A5D6E(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0x34B5CEAC180A5D6E, p0, p1, p2); }
	static void _0x4F27603E44A8E4C0(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0x4F27603E44A8E4C0, p0, p1, p2); }
	static Any _0x3FDCC1F8C17E303E() { return Native::Invoke<Any>(0x3FDCC1F8C17E303E); }
	static Any _0x9B6808EC46BE849B() { return Native::Invoke<Any>(0x9B6808EC46BE849B); }
	static void _0xC5B78E41DCF8227C(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xC5B78E41DCF8227C, p0, p1); }
	static void SET_PED_CAN_BE_TARGETTED(Ped ped, BOOL toggle) { return Native::Invoke<void, Ped, BOOL>(N::SET_PED_CAN_BE_TARGETTED, ped, toggle); }
	static Any SET_PED_CAN_BE_TARGETTED_BY_TEAM() { return Native::Invoke<Any>(N::SET_PED_CAN_BE_TARGETTED_BY_TEAM); }
	static void SET_PED_CAN_BE_TARGETTED_BY_PLAYER(Ped ped, Player player, BOOL toggle) { return Native::Invoke<void, Ped, Player, BOOL>(N::SET_PED_CAN_BE_TARGETTED_BY_PLAYER, ped, player, toggle); }
	static Any _0xFECA2081F61ED2CD() { return Native::Invoke<Any>(0xFECA2081F61ED2CD); }
	static BOOL IS_PED_FALLING(Ped ped) { return Native::Invoke<BOOL, Ped>(N::IS_PED_FALLING, ped); }
	static Any _0xD6740E14E4CEFC0B(Any p0) { return Native::Invoke<Any, Any>(0xD6740E14E4CEFC0B, p0); }
	static BOOL IS_PED_JUMPING(Ped ped) { return Native::Invoke<BOOL, Ped>(N::IS_PED_JUMPING, ped); }
	static BOOL IS_PED_CLIMBING(Ped ped) { return Native::Invoke<BOOL, Ped>(N::IS_PED_CLIMBING, ped); }
	static Any _0x59643424B68D52B5(Any p0) { return Native::Invoke<Any, Any>(0x59643424B68D52B5, p0); }
	static Any _0x577C60BA06D0EA64(Any p0) { return Native::Invoke<Any, Any>(0x577C60BA06D0EA64, p0); }
	static BOOL IS_PED_VAULTING(Ped ped) { return Native::Invoke<BOOL, Ped>(N::IS_PED_VAULTING, ped); }
	static BOOL IS_PED_DIVING(Ped ped) { return Native::Invoke<BOOL, Ped>(N::IS_PED_DIVING, ped); }
	static Any _IS_PED_OPENING_A_DOOR(Any p0) { return Native::Invoke<Any, Any>(N::_IS_PED_OPENING_A_DOOR, p0); }
	static Any _0x5C6C7C70CA302801(Any p0) { return Native::Invoke<Any, Any>(0x5C6C7C70CA302801, p0); }
	static Any _0xB91AB3BE7F655D49(Any p0) { return Native::Invoke<Any, Any>(0xB91AB3BE7F655D49, p0); }
	static BOOL IS_PED_IN_ANY_TAXI(Ped ped) { return Native::Invoke<BOOL, Ped>(N::IS_PED_IN_ANY_TAXI, ped); }
	static void SET_PED_ID_RANGE(Ped ped, float value) { return Native::Invoke<void, Ped, float>(N::SET_PED_ID_RANGE, ped, value); }
	static Any _0x31167ED4324B758D(Any p0) { return Native::Invoke<Any, Any>(0x31167ED4324B758D, p0); }
	static void SET_PED_HIGHLY_PERCEPTIVE(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(N::SET_PED_HIGHLY_PERCEPTIVE, p0, p1); }
	static void _0x733C87D4CE22BEA2(Any p0) { return Native::Invoke<void, Any>(0x733C87D4CE22BEA2, p0); }
	static void _0x028E7B3BBA0BD2FC(Any p0) { return Native::Invoke<void, Any>(0x028E7B3BBA0BD2FC, p0); }
	static Any _0xFA8C10DCE0706D43(Any p0) { return Native::Invoke<Any, Any>(0xFA8C10DCE0706D43, p0); }
	static Any _0x2BA9D7BF629F920C(Any p0) { return Native::Invoke<Any, Any>(0x2BA9D7BF629F920C, p0); }
	static void SET_PED_SEEING_RANGE(Ped ped, float value) { return Native::Invoke<void, Ped, float>(N::SET_PED_SEEING_RANGE, ped, value); }
	static Any _0x900CA00CE703E1E2(Any p0) { return Native::Invoke<Any, Any>(0x900CA00CE703E1E2, p0); }
	static void SET_PED_HEARING_RANGE(Ped ped, float value) { return Native::Invoke<void, Ped, float>(N::SET_PED_HEARING_RANGE, ped, value); }
	static void SET_PED_VISUAL_FIELD_MIN_ANGLE(Ped ped, float value) { return Native::Invoke<void, Ped, float>(N::SET_PED_VISUAL_FIELD_MIN_ANGLE, ped, value); }
	static void SET_PED_VISUAL_FIELD_MAX_ANGLE(Ped ped, float value) { return Native::Invoke<void, Ped, float>(N::SET_PED_VISUAL_FIELD_MAX_ANGLE, ped, value); }
	static void SET_PED_VISUAL_FIELD_PERIPHERAL_RANGE(Ped ped, float range) { return Native::Invoke<void, Ped, float>(N::SET_PED_VISUAL_FIELD_PERIPHERAL_RANGE, ped, range); }
	static void SET_PED_VISUAL_FIELD_CENTER_ANGLE(Ped ped, float angle) { return Native::Invoke<void, Ped, float>(N::SET_PED_VISUAL_FIELD_CENTER_ANGLE, ped, angle); }
	static void _0x9AB33CB5834885B3(Any p0, Any p1, Any p2, Any p3, Any p4) { return Native::Invoke<void, Any, Any, Any, Any, Any>(0x9AB33CB5834885B3, p0, p1, p2, p3, p4); }
	static void _0x899DFA0009AC93DE(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x899DFA0009AC93DE, p0, p1); }
	static void _0x3A5697B80FED5EBE(Any p0, Any p1, Any p2, Any p3, Any p4) { return Native::Invoke<void, Any, Any, Any, Any, Any>(0x3A5697B80FED5EBE, p0, p1, p2, p3, p4); }
	static void SET_PED_STEALTH_MOVEMENT(Ped ped, BOOL p1, char* action, Any p3) { return Native::Invoke<void, Ped, BOOL, char*, Any>(N::SET_PED_STEALTH_MOVEMENT, ped, p1, action, p3); }
	static BOOL GET_PED_STEALTH_MOVEMENT(Ped ped) { return Native::Invoke<BOOL, Ped>(N::GET_PED_STEALTH_MOVEMENT, ped); }
	static void _0x7DE9692C6F64CFE8(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<void, Any, Any, Any, Any>(0x7DE9692C6F64CFE8, p0, p1, p2, p3); }
	static Any _0xD5FE956C70FF370B(Any p0) { return Native::Invoke<Any, Any>(0xD5FE956C70FF370B, p0); }
	static Any _0xC48A9EB0D499B3E5(Any p0) { return Native::Invoke<Any, Any>(0xC48A9EB0D499B3E5, p0); }
	static int CREATE_GROUP(int unused) { return Native::Invoke<int, int>(N::CREATE_GROUP, unused); }
	static void SET_PED_AS_GROUP_LEADER(Ped ped, int groupId, Any p2) { return Native::Invoke<void, Ped, int, Any>(N::SET_PED_AS_GROUP_LEADER, ped, groupId, p2); }
	static void SET_PED_AS_GROUP_MEMBER(Ped ped, int groupId) { return Native::Invoke<void, Ped, int>(N::SET_PED_AS_GROUP_MEMBER, ped, groupId); }
	static void SET_PED_CAN_TELEPORT_TO_GROUP_LEADER(Ped pedHandle, int groupHandle, BOOL toggle) { return Native::Invoke<void, Ped, int, BOOL>(N::SET_PED_CAN_TELEPORT_TO_GROUP_LEADER, pedHandle, groupHandle, toggle); }
	static void REMOVE_GROUP(int groupId) { return Native::Invoke<void, int>(N::REMOVE_GROUP, groupId); }
	static void REMOVE_PED_FROM_GROUP(Ped ped) { return Native::Invoke<void, Ped>(N::REMOVE_PED_FROM_GROUP, ped); }
	static BOOL IS_PED_GROUP_MEMBER(Ped ped, int groupId, Any p2) { return Native::Invoke<BOOL, Ped, int, Any>(N::IS_PED_GROUP_MEMBER, ped, groupId, p2); }
	static Any _0x878B68960C1C2A35(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x878B68960C1C2A35, p0, p1); }
	static BOOL IS_PED_HANGING_ON_TO_VEHICLE(Ped ped) { return Native::Invoke<BOOL, Ped>(N::IS_PED_HANGING_ON_TO_VEHICLE, ped); }
	static void SET_GROUP_SEPARATION_RANGE(int groupHandle, float separationRange) { return Native::Invoke<void, int, float>(N::SET_GROUP_SEPARATION_RANGE, groupHandle, separationRange); }
	static void _0x89E59DBD15E21177(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x89E59DBD15E21177, p0, p1); }
	static BOOL IS_PED_PRONE(Ped ped) { return Native::Invoke<BOOL, Ped>(N::IS_PED_PRONE, ped); }
	static Any _0x7583A9D35248B83F(Any p0) { return Native::Invoke<Any, Any>(0x7583A9D35248B83F, p0); }
	static BOOL IS_PED_IN_COMBAT(Ped ped, Ped target) { return Native::Invoke<BOOL, Ped, Ped>(N::IS_PED_IN_COMBAT, ped, target); }
	static Any CAN_PED_IN_COMBAT_SEE_TARGET() { return Native::Invoke<Any>(N::CAN_PED_IN_COMBAT_SEE_TARGET); }
	static BOOL IS_PED_JACKING(Ped ped) { return Native::Invoke<BOOL, Ped>(N::IS_PED_JACKING, ped); }
	static BOOL IS_PED_BEING_JACKED(Ped ped) { return Native::Invoke<BOOL, Ped>(N::IS_PED_BEING_JACKED, ped); }
	static BOOL IS_PED_BEING_STUNNED(Ped ped, int p1) { return Native::Invoke<BOOL, Ped, int>(N::IS_PED_BEING_STUNNED, ped, p1); }
	static Ped GET_PEDS_JACKER(Ped ped) { return Native::Invoke<Ped, Ped>(N::GET_PEDS_JACKER, ped); }
	static Ped GET_JACK_TARGET(Ped ped) { return Native::Invoke<Ped, Ped>(N::GET_JACK_TARGET, ped); }
	static BOOL IS_PED_FLEEING(Ped ped) { return Native::Invoke<BOOL, Ped>(N::IS_PED_FLEEING, ped); }
	static BOOL IS_PED_IN_COVER(Ped ped, BOOL exceptUseWeapon, Any p2) { return Native::Invoke<BOOL, Ped, BOOL, Any>(N::IS_PED_IN_COVER, ped, exceptUseWeapon, p2); }
	static Any _0x2DD4E0E26DFAD97D(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(0x2DD4E0E26DFAD97D, p0, p1, p2); }
	static Any _0x06FA94C835787C64(Any p0) { return Native::Invoke<Any, Any>(0x06FA94C835787C64, p0); }
	static Any _0xBD6B242B8BD5543A(Any p0) { return Native::Invoke<Any, Any>(0xBD6B242B8BD5543A, p0); }
	static BOOL IS_PED_IN_COVER_FACING_LEFT(Ped ped) { return Native::Invoke<BOOL, Ped>(N::IS_PED_IN_COVER_FACING_LEFT, ped); }
	static BOOL IS_PED_GOING_INTO_COVER(Ped ped) { return Native::Invoke<BOOL, Ped>(N::IS_PED_GOING_INTO_COVER, ped); }
	static Any _0x77525BBF433F2CD6(Any p0) { return Native::Invoke<Any, Any>(0x77525BBF433F2CD6, p0); }
	static Any _0xC22AA08A8ADB87D4(Any p0) { return Native::Invoke<Any, Any>(0xC22AA08A8ADB87D4, p0); }
	static Any _0x569F1E1237508DEB(Any p0) { return Native::Invoke<Any, Any>(0x569F1E1237508DEB, p0); }
	static Any _0x3BBDD6143FF16F98(Any p0, Any p1, Any p2, Any p3, Any p4) { return Native::Invoke<Any, Any, Any, Any, Any, Any>(0x3BBDD6143FF16F98, p0, p1, p2, p3, p4); }
	static Any _0x2B02DB082258625F(Any p0, Any p1, Any p2, Any p3, Any p4) { return Native::Invoke<Any, Any, Any, Any, Any, Any>(0x2B02DB082258625F, p0, p1, p2, p3, p4); }
	static Any _0xA0774E388CE4A679(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<Any, Any, Any, Any, Any>(0xA0774E388CE4A679, p0, p1, p2, p3); }
	static Any _0xBEC65C6049B3219D(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return Native::Invoke<Any, Any, Any, Any, Any, Any, Any>(0xBEC65C6049B3219D, p0, p1, p2, p3, p4, p5); }
	static Any _0xBDED916A9F9B0604(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return Native::Invoke<Any, Any, Any, Any, Any, Any, Any>(0xBDED916A9F9B0604, p0, p1, p2, p3, p4, p5); }
	static Any _0x4D0D2E3D8BC000EB(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(0x4D0D2E3D8BC000EB, p0, p1, p2); }
	static int GET_SEAT_PED_IS_TRYING_TO_ENTER(Ped ped) { return Native::Invoke<int, Ped>(N::GET_SEAT_PED_IS_TRYING_TO_ENTER, ped); }
	static Entity GET_PED_SOURCE_OF_DEATH(Ped ped) { return Native::Invoke<Entity, Ped>(N::GET_PED_SOURCE_OF_DEATH, ped); }
	static Hash GET_PED_CAUSE_OF_DEATH(Ped ped) { return Native::Invoke<Hash, Ped>(N::GET_PED_CAUSE_OF_DEATH, ped); }
	static Any GET_PED_TIME_OF_DEATH(Any p0) { return Native::Invoke<Any, Any>(N::GET_PED_TIME_OF_DEATH, p0); }
	static Any _0x5407B7288D0478B7(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x5407B7288D0478B7, p0, p1); }
	static Any _0x7BE607DAFF382FD2(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(0x7BE607DAFF382FD2, p0, p1, p2); }
	static Any _0x336B3D200AB007CB(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return Native::Invoke<Any, Any, Any, Any, Any, Any, Any>(0x336B3D200AB007CB, p0, p1, p2, p3, p4, p5); }
	static Any _0xCD66FEA29400A0B5(Any p0) { return Native::Invoke<Any, Any>(0xCD66FEA29400A0B5, p0); }
	static void SET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(Ped ped, Hash hash) { return Native::Invoke<void, Ped, Hash>(N::SET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH, ped, hash); }
	static Any _0x3CC4A718C258BDD0(Any p0) { return Native::Invoke<Any, Any>(0x3CC4A718C258BDD0, p0); }
	static void SET_PED_RELATIONSHIP_GROUP_HASH(Ped ped, Hash hash) { return Native::Invoke<void, Ped, Hash>(N::SET_PED_RELATIONSHIP_GROUP_HASH, ped, hash); }
	static void SET_RELATIONSHIP_BETWEEN_GROUPS(int relationship, Hash group1, Hash group2) { return Native::Invoke<void, int, Hash, Hash>(N::SET_RELATIONSHIP_BETWEEN_GROUPS, relationship, group1, group2); }
	static void CLEAR_RELATIONSHIP_BETWEEN_GROUPS(int relationship, Hash group1, Hash group2) { return Native::Invoke<void, int, Hash, Hash>(N::CLEAR_RELATIONSHIP_BETWEEN_GROUPS, relationship, group1, group2); }
	static Any ADD_RELATIONSHIP_GROUP(char* name, Hash* groupHash) { return Native::Invoke<Any, char*, Hash*>(N::ADD_RELATIONSHIP_GROUP, name, groupHash); }
	static void REMOVE_RELATIONSHIP_GROUP(Hash groupHash) { return Native::Invoke<void, Hash>(N::REMOVE_RELATIONSHIP_GROUP, groupHash); }
	static int GET_RELATIONSHIP_BETWEEN_PEDS(Ped ped1, Ped ped2) { return Native::Invoke<int, Ped, Ped>(N::GET_RELATIONSHIP_BETWEEN_PEDS, ped1, ped2); }
	static Hash GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(Ped ped) { return Native::Invoke<Hash, Ped>(N::GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH, ped); }
	static Hash GET_PED_RELATIONSHIP_GROUP_HASH(Ped ped) { return Native::Invoke<Hash, Ped>(N::GET_PED_RELATIONSHIP_GROUP_HASH, ped); }
	static int GET_RELATIONSHIP_BETWEEN_GROUPS(Hash group1, Hash group2) { return Native::Invoke<int, Hash, Hash>(N::GET_RELATIONSHIP_BETWEEN_GROUPS, group1, group2); }
	static void _0xDC91F22F09BC6C2F(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xDC91F22F09BC6C2F, p0, p1); }
	static Any _0x9629FAF6460D35CB() { return Native::Invoke<Any>(0x9629FAF6460D35CB); }
	static Any _0x4E68C7EF706DF35D() { return Native::Invoke<Any>(0x4E68C7EF706DF35D); }
	static Any _0x3ACCE14DFA6BA8C2(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return Native::Invoke<Any, Any, Any, Any, Any, Any, Any, Any>(0x3ACCE14DFA6BA8C2, p0, p1, p2, p3, p4, p5, p6); }
	static Any SET_PED_TO_INFORM_RESPECTED_FRIENDS() { return Native::Invoke<Any>(N::SET_PED_TO_INFORM_RESPECTED_FRIENDS); }
	static Any _0x40C9155AF8BC13F3(Any p0) { return Native::Invoke<Any, Any>(0x40C9155AF8BC13F3, p0); }
	static Any _0xF4860514AD354226(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return Native::Invoke<Any, Any, Any, Any, Any, Any, Any>(0xF4860514AD354226, p0, p1, p2, p3, p4, p5); }
	static BOOL IS_PED_RESPONDING_TO_EVENT(Ped ped, Any event) { return Native::Invoke<BOOL, Ped, Any>(N::IS_PED_RESPONDING_TO_EVENT, ped, event); }
	static Any _0x5E9FAF6C513347B4(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x5E9FAF6C513347B4, p0, p1); }
	static Any _0x326F7951EF0D7F75(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x326F7951EF0D7F75, p0, p1); }
	static Any _0xE76687023D8C8505(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0xE76687023D8C8505, p0, p1); }
	static Any _0xCB8F4C9343EBE240(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(0xCB8F4C9343EBE240, p0, p1, p2); }
	static void SET_PED_FIRING_PATTERN(Ped ped, Hash patternHash) { return Native::Invoke<void, Ped, Hash>(N::SET_PED_FIRING_PATTERN, ped, patternHash); }
	static void _0x20E54854DEF6A54A(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x20E54854DEF6A54A, p0, p1); }
	static Any _0x244E8C282188E40F() { return Native::Invoke<Any>(0x244E8C282188E40F); }
	static void SET_PED_SHOOT_RATE(Ped ped, int shootRate) { return Native::Invoke<void, Ped, int>(N::SET_PED_SHOOT_RATE, ped, shootRate); }
	static void _0x3C529A827998F9B3(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0x3C529A827998F9B3, p0, p1, p2); }
	static void _0x1F44B7E283C09EDE(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0x1F44B7E283C09EDE, p0, p1, p2); }
	static void SET_COMBAT_FLOAT(Ped ped, int combatType, float p2) { return Native::Invoke<void, Ped, int, float>(N::SET_COMBAT_FLOAT, ped, combatType, p2); }
	static float GET_COMBAT_FLOAT(Ped ped, int p1) { return Native::Invoke<float, Ped, int>(N::GET_COMBAT_FLOAT, ped, p1); }
	static void GET_GROUP_SIZE(int groupID, Any* unknown, int* sizeInMembers) { return Native::Invoke<void, int, Any*, int*>(N::GET_GROUP_SIZE, groupID, unknown, sizeInMembers); }
	static BOOL DOES_GROUP_EXIST(int groupId) { return Native::Invoke<BOOL, int>(N::DOES_GROUP_EXIST, groupId); }
	static Any _0x0455546F23FF08E4(Any p0) { return Native::Invoke<Any, Any>(0x0455546F23FF08E4, p0); }
	static Any _0x909AD9E9A92A10DF() { return Native::Invoke<Any>(0x909AD9E9A92A10DF); }
	static int GET_PED_GROUP_INDEX(Ped ped) { return Native::Invoke<int, Ped>(N::GET_PED_GROUP_INDEX, ped); }
	static BOOL IS_PED_IN_GROUP(Ped ped) { return Native::Invoke<BOOL, Ped>(N::IS_PED_IN_GROUP, ped); }
	static Any _0x917760CFE7A0E0F1(Any p0) { return Native::Invoke<Any, Any>(0x917760CFE7A0E0F1, p0); }
	static Any GET_PLAYER_PED_IS_FOLLOWING() { return Native::Invoke<Any>(N::GET_PLAYER_PED_IS_FOLLOWING); }
	static void SET_GROUP_FORMATION(int groupId, int formationType) { return Native::Invoke<void, int, int>(N::SET_GROUP_FORMATION, groupId, formationType); }
	static Any _0x13A1B061007C906B(Any p0) { return Native::Invoke<Any, Any>(0x13A1B061007C906B, p0); }
	static void SET_GROUP_FORMATION_SPACING(int groupId, float p1, float p2, float p3) { return Native::Invoke<void, int, float, float, float>(N::SET_GROUP_FORMATION_SPACING, groupId, p1, p2, p3); }
	static void RESET_GROUP_FORMATION_DEFAULT_SPACING(int groupId) { return Native::Invoke<void, int>(N::RESET_GROUP_FORMATION_DEFAULT_SPACING, groupId); }
	static Any _0xB05CC690CDE8A4A9(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0xB05CC690CDE8A4A9, p0, p1); }
	static void _0x4E23CD07BD161E06(Any p0, Any p1, Any p2, Any p3, Any p4) { return Native::Invoke<void, Any, Any, Any, Any, Any>(0x4E23CD07BD161E06, p0, p1, p2, p3, p4); }
	static Any _0xB05945C1E9E60D91(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<Any, Any, Any, Any, Any>(0xB05945C1E9E60D91, p0, p1, p2, p3); }
	static Any _0x7CC7D3B7AF7FB71F(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x7CC7D3B7AF7FB71F, p0, p1); }
	static void _0x478F6B9920446CE2(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x478F6B9920446CE2, p0, p1); }
	static void _0x0E9E95FDEDCC9D35(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0x0E9E95FDEDCC9D35, p0, p1, p2); }
	static Any _0x8AF8E647D6B2A649(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x8AF8E647D6B2A649, p0, p1); }
	static void _0x87C2724A56F66020(Any p0) { return Native::Invoke<void, Any>(0x87C2724A56F66020, p0); }
	static void _0xD5BD1B5318A81994(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xD5BD1B5318A81994, p0, p1); }
	static void _0x9BBEAF8B0C007F1E(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x9BBEAF8B0C007F1E, p0, p1); }
	static void _0xC99F104BDF8C7F5A(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xC99F104BDF8C7F5A, p0, p1); }
	static void _0x02E741E19E39628C(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x02E741E19E39628C, p0, p1); }
	static void _0x97C475212B327666(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x97C475212B327666, p0, p1); }
	static void _0x154B7E841AC7412F(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x154B7E841AC7412F, p0, p1); }
	static void _0x8AFCCC0F18D70018(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x8AFCCC0F18D70018, p0, p1); }
	static void _0xE1103300F3456DE7(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0xE1103300F3456DE7, p0, p1, p2); }
	static void _0xA8A95CECB1906EA2(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xA8A95CECB1906EA2, p0, p1); }
	static void _0xDDFAD4DEAA7FA362(Any p0, Any p1, Any p2, Any p3, Any p4) { return Native::Invoke<void, Any, Any, Any, Any, Any>(0xDDFAD4DEAA7FA362, p0, p1, p2, p3, p4); }
	static void _0x966DE09688A1DE39(Any p0, Any p1, Any p2, Any p3, Any p4) { return Native::Invoke<void, Any, Any, Any, Any, Any>(0x966DE09688A1DE39, p0, p1, p2, p3, p4); }
	static void _0x7E5185B979706210(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x7E5185B979706210, p0, p1); }
	static void _0x40C3524D4ED83554(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x40C3524D4ED83554, p0, p1); }
	static void _0x86FAFC18E3D4380C(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x86FAFC18E3D4380C, p0, p1); }
	static Any _0x07EA5B053FA60AC7() { return Native::Invoke<Any>(0x07EA5B053FA60AC7); }
	static void _0xF9CBD46433E36713(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any>(0xF9CBD46433E36713, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); }
	static Vehicle GET_VEHICLE_PED_IS_USING(Ped ped) { return Native::Invoke<Vehicle, Ped>(N::GET_VEHICLE_PED_IS_USING, ped); }
	static Any GET_VEHICLE_PED_IS_ENTERING(Any p0) { return Native::Invoke<Any, Any>(N::GET_VEHICLE_PED_IS_ENTERING, p0); }
	static Any _0xE4770DA1B8FF4FD1(Any p0) { return Native::Invoke<Any, Any>(0xE4770DA1B8FF4FD1, p0); }
	static Any _0x5064DB5083C29921() { return Native::Invoke<Any>(0x5064DB5083C29921); }
	static Any _0x4E76CB57222A00E5(Any p0) { return Native::Invoke<Any, Any>(0x4E76CB57222A00E5, p0); }
	static Any _0x849BD6C6314793D0(Any p0) { return Native::Invoke<Any, Any>(0x849BD6C6314793D0, p0); }
	static Any _0x1D46B417F926D34D(Any p0) { return Native::Invoke<Any, Any>(0x1D46B417F926D34D, p0); }
	static void SET_PED_GRAVITY(Ped ped, BOOL toggle) { return Native::Invoke<void, Ped, BOOL>(N::SET_PED_GRAVITY, ped, toggle); }
	static void _0x96595B36D6A2279B(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x96595B36D6A2279B, p0, p1); }
	static void _0x7FB0088E8769CDDB(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x7FB0088E8769CDDB, p0, p1); }
	static void _0xA90684ED185CCB4B(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<void, Any, Any, Any, Any>(0xA90684ED185CCB4B, p0, p1, p2, p3); }
	static void _0x8B3CB08158E98481(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x8B3CB08158E98481, p0, p1); }
	static void _0x1CE875505D45338A(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0x1CE875505D45338A, p0, p1, p2); }
	static void APPLY_DAMAGE_TO_PED(Ped ped, int damageAmount, BOOL armorFirst, Any p3, Any p4) { return Native::Invoke<void, Ped, int, BOOL, Any, Any>(N::APPLY_DAMAGE_TO_PED, ped, damageAmount, armorFirst, p3, p4); }
	static void _0xBAD2A311667A50D7(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xBAD2A311667A50D7, p0, p1); }
	static int GET_PED_TYPE(Ped ped) { return Native::Invoke<int, Ped>(N::GET_PED_TYPE, ped); }
	static void SET_PED_AS_COP(Ped Player, BOOL True) { return Native::Invoke<void, Ped, BOOL>(N::SET_PED_AS_COP, Player, True); }
	static Any _0x405180B14DA5A935() { return Native::Invoke<Any>(0x405180B14DA5A935); }
	static void _0x24C82EF607105FAA(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x24C82EF607105FAA, p0, p1); }
	static Any _0xD7AD3C7EBAF88C92() { return Native::Invoke<Any>(0xD7AD3C7EBAF88C92); }
	static void _0xB8B6430EAD2D2437(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xB8B6430EAD2D2437, p0, p1); }
	static void _0x329772C47DBB2FBC(Any p0) { return Native::Invoke<void, Any>(0x329772C47DBB2FBC, p0); }
	static Any _0x331550B212014B92(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x331550B212014B92, p0, p1); }
	static Any _0x94132D7C8D3575C4(Any p0) { return Native::Invoke<Any, Any>(0x94132D7C8D3575C4, p0); }
	static void _0x8AF46E5159A5B620(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x8AF46E5159A5B620, p0, p1); }
	static void _0x45FEA6D5539BD474(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x45FEA6D5539BD474, p0, p1); }
	static void _0x20C5459379D75C1C(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x20C5459379D75C1C, p0, p1); }
	static void _0xE37ACEE15AC50C7E(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xE37ACEE15AC50C7E, p0, p1); }
	static void _0xA3C53CDE922BC78B(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xA3C53CDE922BC78B, p0, p1); }
	static void _0x41C23A8E6B344867(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x41C23A8E6B344867, p0, p1); }
	static Any _0x9337183FDA2E9035(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x9337183FDA2E9035, p0, p1); }
	static Any _0xA454D234E45BB6E5(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0xA454D234E45BB6E5, p0, p1); }
	static void _0xA7DC9266ED6A4E51(Any p0) { return Native::Invoke<void, Any>(0xA7DC9266ED6A4E51, p0); }
	static Any _0x89816B58C3466262(Any p0) { return Native::Invoke<Any, Any>(0x89816B58C3466262, p0); }
	static Any _0x97B06669AC569003() { return Native::Invoke<Any>(0x97B06669AC569003); }
	static void _0x85F500F4E24CA43E(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x85F500F4E24CA43E, p0, p1); }
	static void _0x9B9B9FA0EA283E3D(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x9B9B9FA0EA283E3D, p0, p1); }
	static void _0xEC60D1D225BC50AA(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xEC60D1D225BC50AA, p0, p1); }
	static void _0x12F2D161BF4031FC(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x12F2D161BF4031FC, p0, p1); }
	static void _0x0ADA3EC589E1736E() { return Native::Invoke<void>(0x0ADA3EC589E1736E); }
	static Any _0xE33F98BD76490ABC(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(0xE33F98BD76490ABC, p0, p1, p2); }
	static Any _0xD55DB4466D00A258(Any p0) { return Native::Invoke<Any, Any>(0xD55DB4466D00A258, p0); }
	static void SET_PED_MAX_HEALTH(Ped ped, int value) { return Native::Invoke<void, Ped, int>(N::SET_PED_MAX_HEALTH, ped, value); }
	static int GET_PED_MAX_HEALTH(Ped ped) { return Native::Invoke<int, Ped>(N::GET_PED_MAX_HEALTH, ped); }
	static void _0xF6B82FCE03B43A37(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xF6B82FCE03B43A37, p0, p1); }
	static void _0x7DD7FB3480D8083E(Any p0) { return Native::Invoke<void, Any>(0x7DD7FB3480D8083E, p0); }
	static void SET_PED_MAX_TIME_IN_WATER(Ped ped, float value) { return Native::Invoke<void, Ped, float>(N::SET_PED_MAX_TIME_IN_WATER, ped, value); }
	static void SET_PED_MAX_TIME_UNDERWATER(Ped ped, float value) { return Native::Invoke<void, Ped, float>(N::SET_PED_MAX_TIME_UNDERWATER, ped, value); }
	static void _0xAF041C10756C30FB(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<void, Any, Any, Any, Any>(0xAF041C10756C30FB, p0, p1, p2, p3); }
	static void _0x5AF24CA9C974E51A(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x5AF24CA9C974E51A, p0, p1); }
	static void SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(Ped ped, int state) { return Native::Invoke<void, Ped, int>(N::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE, ped, state); }
	static BOOL CAN_KNOCK_PED_OFF_VEHICLE(Ped ped) { return Native::Invoke<BOOL, Ped>(N::CAN_KNOCK_PED_OFF_VEHICLE, ped); }
	static void KNOCK_PED_OFF_VEHICLE(Ped ped) { return Native::Invoke<void, Ped>(N::KNOCK_PED_OFF_VEHICLE, ped); }
	static Ped GET_PED_AS_GROUP_MEMBER(int groupID, int memberNumber) { return Native::Invoke<Ped, int, int>(N::GET_PED_AS_GROUP_MEMBER, groupID, memberNumber); }
	static Any GET_PED_AS_GROUP_LEADER(Any p0) { return Native::Invoke<Any, Any>(N::GET_PED_AS_GROUP_LEADER, p0); }
	static void SET_PED_KEEP_TASK(Ped ped, BOOL toggle) { return Native::Invoke<void, Ped, BOOL>(N::SET_PED_KEEP_TASK, ped, toggle); }
	static BOOL IS_PED_SWIMMING(Ped ped) { return Native::Invoke<BOOL, Ped>(N::IS_PED_SWIMMING, ped); }
	static BOOL IS_PED_SWIMMING_UNDER_WATER(Ped ped) { return Native::Invoke<BOOL, Ped>(N::IS_PED_SWIMMING_UNDER_WATER, ped); }
	static Any _0xDC88D06719070C39(Any p0) { return Native::Invoke<Any, Any>(0xDC88D06719070C39, p0); }
	static void SET_CREATE_RANDOM_COPS(BOOL toggle) { return Native::Invoke<void, BOOL>(N::SET_CREATE_RANDOM_COPS, toggle); }
	static BOOL IS_PED_IN_ANY_TRAIN(Ped ped) { return Native::Invoke<BOOL, Ped>(N::IS_PED_IN_ANY_TRAIN, ped); }
	static BOOL IS_PED_GETTING_INTO_A_VEHICLE(Ped ped) { return Native::Invoke<BOOL, Ped>(N::IS_PED_GETTING_INTO_A_VEHICLE, ped); }
	static Any _0x550CB89DD7F4FA3D(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x550CB89DD7F4FA3D, p0, p1); }
	static void SET_ENABLE_HANDCUFFS(Ped ped, BOOL toggle, Any p2) { return Native::Invoke<void, Ped, BOOL, Any>(N::SET_ENABLE_HANDCUFFS, ped, toggle, p2); }
	static void SET_ENABLE_BOUND_ANKLES(Ped ped, BOOL toggle) { return Native::Invoke<void, Ped, BOOL>(N::SET_ENABLE_BOUND_ANKLES, ped, toggle); }
	static Any _0x8822F139408B8D0A(Any p0) { return Native::Invoke<Any, Any>(0x8822F139408B8D0A, p0); }
	static void _0x8822F124788B8D0A(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x8822F124788B8D0A, p0, p1); }
	static void RESET_PED_WEAPON_MOVEMENT_CLIPSET(Ped ped) { return Native::Invoke<void, Ped>(N::RESET_PED_WEAPON_MOVEMENT_CLIPSET, ped); }
	static void _0x3AE3552E7C207CC5(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x3AE3552E7C207CC5, p0, p1); }
	static void _0x88A95BB640FC186F(Any p0) { return Native::Invoke<void, Any>(0x88A95BB640FC186F, p0); }
	static void RESET_PED_IN_VEHICLE_CONTEXT(Ped ped) { return Native::Invoke<void, Ped>(N::RESET_PED_IN_VEHICLE_CONTEXT, ped); }
	static void _0x878E8104FA27CDAE(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x878E8104FA27CDAE, p0, p1); }
	static void SET_PED_GESTURE_GROUP(Ped ped, char* animGroupGesture, Any p2) { return Native::Invoke<void, Ped, char*, Any>(N::SET_PED_GESTURE_GROUP, ped, animGroupGesture, p2); }
	static void _0x923583741DC87BCE(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x923583741DC87BCE, p0, p1); }
	static void _0x4FD80C3DD84B817B(Any p0) { return Native::Invoke<void, Any>(0x4FD80C3DD84B817B, p0); }
	static void _0x89F5E7ADECCCB49C(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x89F5E7ADECCCB49C, p0, p1); }
	static void _0x58F7DB5BD8FA2288(Any p0) { return Native::Invoke<void, Any>(0x58F7DB5BD8FA2288, p0); }
	static void _0x2371C39D4F91C288(Any p0) { return Native::Invoke<void, Any>(0x2371C39D4F91C288, p0); }
	static void _0xEAA8242C8479C27D(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xEAA8242C8479C27D, p0, p1); }
	static void _0xF6E1E9F47A7686F8(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xF6E1E9F47A7686F8, p0, p1); }
	static void _0x1E4C940233FC0C6F(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any>(0x1E4C940233FC0C6F, p0, p1, p2, p3, p4, p5); }
	static void _0x16F798A05BB9E3B5(Any p0) { return Native::Invoke<void, Any>(0x16F798A05BB9E3B5, p0); }
	static void _0xAAB050DA48B57978(Any p0, Any p1, Any p2, Any p3, Any p4) { return Native::Invoke<void, Any, Any, Any, Any, Any>(0xAAB050DA48B57978, p0, p1, p2, p3, p4); }
	static void _0x935CF6E42BAF7F4D(Any p0) { return Native::Invoke<void, Any>(0x935CF6E42BAF7F4D, p0); }
	static void _0x32CCAD8A981B53D3(Any p0) { return Native::Invoke<void, Any>(0x32CCAD8A981B53D3, p0); }
	static void _0x406CCF555B04FAD3(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0x406CCF555B04FAD3, p0, p1, p2); }
	static Any _0x50F124E6EF188B22(Any p0) { return Native::Invoke<Any, Any>(0x50F124E6EF188B22, p0); }
	static Any _0x6FB76442469ABD68(Any p0) { return Native::Invoke<Any, Any>(0x6FB76442469ABD68, p0); }
	static Vector3 GET_ANIM_INITIAL_OFFSET_POSITION(char* animDict, char* animName, float x, float y, float z, float xRot, float yRot, float zRot, float p8, int p9) { return Native::Invoke<Vector3, char*, char*, float, float, float, float, float, float, float, int>(N::GET_ANIM_INITIAL_OFFSET_POSITION, animDict, animName, x, y, z, xRot, yRot, zRot, p8, p9); }
	static Vector3 GET_ANIM_INITIAL_OFFSET_ROTATION(char* animDict, char* animName, float x, float y, float z, float xRot, float yRot, float zRot, float p8, int p9) { return Native::Invoke<Vector3, char*, char*, float, float, float, float, float, float, float, int>(N::GET_ANIM_INITIAL_OFFSET_ROTATION, animDict, animName, x, y, z, xRot, yRot, zRot, p8, p9); }
	static Any SET_PED_RANDOM_COMPONENT_VARIATION() { return Native::Invoke<Any>(N::SET_PED_RANDOM_COMPONENT_VARIATION); }
	static void KNOCK_OFF_PED_PROP(Ped ped, BOOL p1, BOOL knockOff, BOOL p2, BOOL p3) { return Native::Invoke<void, Ped, BOOL, BOOL, BOOL, BOOL>(N::KNOCK_OFF_PED_PROP, ped, p1, knockOff, p2, p3); }
	static void SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Ped ped, BOOL toggle) { return Native::Invoke<void, Ped, BOOL>(N::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS, ped, toggle); }
	static Any _0x268B3AEBF032A88D(Any p0) { return Native::Invoke<Any, Any>(0x268B3AEBF032A88D, p0); }
	static void _0xC17A94CC8FC3C61A(Any p0, Any p1, Any p2, Any p3, Any p4) { return Native::Invoke<void, Any, Any, Any, Any, Any>(0xC17A94CC8FC3C61A, p0, p1, p2, p3, p4); }
	static void _0x25ACFC650B65C538(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x25ACFC650B65C538, p0, p1); }
	static Any _0x134775B093AD5C38(Any p0) { return Native::Invoke<Any, Any>(0x134775B093AD5C38, p0); }
	static Any _0x1D491CCF7211FB74(Any p0) { return Native::Invoke<Any, Any>(0x1D491CCF7211FB74, p0); }
	static void REGISTER_TARGET(Ped ped, Ped target, Any p2) { return Native::Invoke<void, Ped, Ped, Any>(N::REGISTER_TARGET, ped, target, p2); }
	static void _0xD8736EFDA38EDC5C(Any p0, Any p1, Any p2, Any p3, Any p4) { return Native::Invoke<void, Any, Any, Any, Any, Any>(0xD8736EFDA38EDC5C, p0, p1, p2, p3, p4); }
	static void REGISTER_HATED_TARGETS_AROUND_PED(Ped ped, float radius) { return Native::Invoke<void, Ped, float>(N::REGISTER_HATED_TARGETS_AROUND_PED, ped, radius); }
	static Any _0x6E5CBCB3941D7D08() { return Native::Invoke<Any>(0x6E5CBCB3941D7D08); }
	static void _0x4707E9C23D8CA3FE(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x4707E9C23D8CA3FE, p0, p1); }
	static BOOL GET_CLOSEST_PED(float x, float y, float z, float radius, BOOL p4, BOOL p5, Ped* outPed, BOOL p7, BOOL p8, int pedType, Any p10) { return Native::Invoke<BOOL, float, float, float, float, BOOL, BOOL, Ped*, BOOL, BOOL, int, Any>(N::GET_CLOSEST_PED, x, y, z, radius, p4, p5, outPed, p7, p8, pedType, p10); }
	static BOOL CAN_PED_RAGDOLL(Ped ped) { return Native::Invoke<BOOL, Ped>(N::CAN_PED_RAGDOLL, ped); }
	static BOOL SET_PED_TO_RAGDOLL(Ped ped, int time1, int time2, int ragdollType, BOOL p4, BOOL p5, BOOL p6) { return Native::Invoke<BOOL, Ped, int, int, int, BOOL, BOOL, BOOL>(N::SET_PED_TO_RAGDOLL, ped, time1, time2, ragdollType, p4, p5, p6); }
	static BOOL SET_PED_TO_RAGDOLL_WITH_FALL(Ped ped, int time, int p2, int ragdollType, float x, float y, float z, float p7, float p8, float p9, float p10, float p11, float p12, float p13) { return Native::Invoke<BOOL, Ped, int, int, int, float, float, float, float, float, float, float, float, float, float>(N::SET_PED_TO_RAGDOLL_WITH_FALL, ped, time, p2, ragdollType, x, y, z, p7, p8, p9, p10, p11, p12, p13); }
	static void SET_PED_RAGDOLL_ON_COLLISION(Ped ped, BOOL toggle, Any p2) { return Native::Invoke<void, Ped, BOOL, Any>(N::SET_PED_RAGDOLL_ON_COLLISION, ped, toggle, p2); }
	static void _0x221F4D9912B7FE86(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x221F4D9912B7FE86, p0, p1); }
	static BOOL IS_PED_RAGDOLL(Ped ped) { return Native::Invoke<BOOL, Ped>(N::IS_PED_RAGDOLL, ped); }
	static BOOL IS_PED_RUNNING_RAGDOLL_TASK(Ped ped) { return Native::Invoke<BOOL, Ped>(N::IS_PED_RUNNING_RAGDOLL_TASK, ped); }
	static void SET_PED_RAGDOLL_FORCE_FALL(Ped ped) { return Native::Invoke<void, Ped>(N::SET_PED_RAGDOLL_FORCE_FALL, ped); }
	static void _0x8CB2553C559102C1(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0x8CB2553C559102C1, p0, p1, p2); }
	static void _0xFD3C31A2E45671E7(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xFD3C31A2E45671E7, p0, p1); }
	static void RESET_PED_RAGDOLL_TIMER(Ped ped) { return Native::Invoke<void, Ped>(N::RESET_PED_RAGDOLL_TIMER, ped); }
	static void SET_PED_CAN_RAGDOLL(Ped ped, BOOL toggle) { return Native::Invoke<void, Ped, BOOL>(N::SET_PED_CAN_RAGDOLL, ped, toggle); }
	static Any _0x3AEC4A410ECAF30D(Any p0) { return Native::Invoke<Any, Any>(0x3AEC4A410ECAF30D, p0); }
	static Any IS_PED_RUNNING_MOBILE_PHONE_TASK() { return Native::Invoke<Any>(N::IS_PED_RUNNING_MOBILE_PHONE_TASK); }
	static void SET_RAGDOLL_BLOCKING_FLAGS(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(N::SET_RAGDOLL_BLOCKING_FLAGS, p0, p1); }
	static void CLEAR_RAGDOLL_BLOCKING_FLAGS(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(N::CLEAR_RAGDOLL_BLOCKING_FLAGS, p0, p1); }
	static void _0x9F933E0985E12C51(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<void, Any, Any, Any, Any>(0x9F933E0985E12C51, p0, p1, p2, p3); }
	static void _0x88B2026A3B0BE33D(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x88B2026A3B0BE33D, p0, p1); }
	static void _0xFC3DB99C8144CD81(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<void, Any, Any, Any, Any>(0xFC3DB99C8144CD81, p0, p1, p2, p3); }
	static void SET_PED_SPHERE_DEFENSIVE_AREA(Ped ped, float x, float y, float z, float radius, BOOL p5, BOOL p6) { return Native::Invoke<void, Ped, float, float, float, float, BOOL, BOOL>(N::SET_PED_SPHERE_DEFENSIVE_AREA, ped, x, y, z, radius, p5, p6); }
	static void _0x1854217C640B39EC(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any, Any, Any>(0x1854217C640B39EC, p0, p1, p2, p3, p4, p5, p6, p7); }
	static void SET_PED_DEFENSIVE_AREA_DIRECTION(Ped ped, float p1, float p2, float p3, BOOL p4) { return Native::Invoke<void, Ped, float, float, float, BOOL>(N::SET_PED_DEFENSIVE_AREA_DIRECTION, ped, p1, p2, p3, p4); }
	static void REMOVE_PED_DEFENSIVE_AREA(Ped ped, BOOL toggle) { return Native::Invoke<void, Ped, BOOL>(N::REMOVE_PED_DEFENSIVE_AREA, ped, toggle); }
	static Vector3 GET_PED_DEFENSIVE_AREA_POSITION(Ped ped, BOOL p1) { return Native::Invoke<Vector3, Ped, BOOL>(N::GET_PED_DEFENSIVE_AREA_POSITION, ped, p1); }
	static Any IS_PED_DEFENSIVE_AREA_ACTIVE(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(N::IS_PED_DEFENSIVE_AREA_ACTIVE, p0, p1); }
	static Any _0xEF2E6F870783369B(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0xEF2E6F870783369B, p0, p1); }
	static void _0x4EC4EA2F72B36358(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x4EC4EA2F72B36358, p0, p1); }
	static void _0xCF0B19806473D324(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<void, Any, Any, Any, Any>(0xCF0B19806473D324, p0, p1, p2, p3); }
	static void _0xB4B7C92FCE7347B7(Any p0) { return Native::Invoke<void, Any>(0xB4B7C92FCE7347B7, p0); }
	static void REVIVE_INJURED_PED(Ped ped) { return Native::Invoke<void, Ped>(N::REVIVE_INJURED_PED, ped); }
	static void RESURRECT_PED(Ped ped) { return Native::Invoke<void, Ped>(N::RESURRECT_PED, ped); }
	static void SET_PED_NAME_DEBUG(Ped ped, char* name) { return Native::Invoke<void, Ped, char*>(N::SET_PED_NAME_DEBUG, ped, name); }
	static void _0xF9ACF4A08098EA25(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xF9ACF4A08098EA25, p0, p1); }
	static Any _0x7020839C7302D8AC(Any p0) { return Native::Invoke<Any, Any>(0x7020839C7302D8AC, p0); }
	static void _0xE1AADD0055D76603(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any>(0xE1AADD0055D76603, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); }
	static void _0x5A1A929C8B729B4A(Any p0) { return Native::Invoke<void, Any>(0x5A1A929C8B729B4A, p0); }
	static void _0x97A38B65EBDA3D50(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x97A38B65EBDA3D50, p0, p1); }
	static Any _0x06A10B4D7F50B0C3(Any p0) { return Native::Invoke<Any, Any>(0x06A10B4D7F50B0C3, p0); }
	static Any _0x88A5564B19C15391(Any p0) { return Native::Invoke<Any, Any>(0x88A5564B19C15391, p0); }
	static Any _0x354CA4DDDEEC397A(Any p0) { return Native::Invoke<Any, Any>(0x354CA4DDDEEC397A, p0); }
	static void _0xFEA6126C34DF2532(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xFEA6126C34DF2532, p0, p1); }
	static void _0xA967D6A8ED2D713B(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xA967D6A8ED2D713B, p0, p1); }
	static void APPLY_PED_BLOOD_SPECIFIC(Ped ped, Any p1, float xOffset, float yOffset, float zOffset, float scale, Any p6, float p7, char* bloodType) { return Native::Invoke<void, Ped, Any, float, float, float, float, Any, float, char*>(N::APPLY_PED_BLOOD_SPECIFIC, ped, p1, xOffset, yOffset, zOffset, scale, p6, p7, bloodType); }
	static void _0x58D32261AE0F0843(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any, Any, Any, Any>(0x58D32261AE0F0843, p0, p1, p2, p3, p4, p5, p6, p7, p8); }
	static void _0x735662994E60A710(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x735662994E60A710, p0, p1); }
	static void _0x91BAB9E064F036CD(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x91BAB9E064F036CD, p0, p1); }
	static void _0x897934E868EDDD6C(Any p0, Any p1, Any p2, Any p3, Any p4) { return Native::Invoke<void, Any, Any, Any, Any, Any>(0x897934E868EDDD6C, p0, p1, p2, p3, p4); }
	static void _0xFFD54D9FE71B966A(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any>(0xFFD54D9FE71B966A, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); }
	static void _0x66B1CB778D911F49(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x66B1CB778D911F49, p0, p1); }
	static void APPLY_PED_DAMAGE_PACK(Ped ped, char* damagePack, float damage, float mult) { return Native::Invoke<void, Ped, char*, float, float>(N::APPLY_PED_DAMAGE_PACK, ped, damagePack, damage, mult); }
	static void CLEAR_PED_BLOOD_DAMAGE(Ped ped) { return Native::Invoke<void, Ped>(N::CLEAR_PED_BLOOD_DAMAGE, ped); }
	static void CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(Ped ped, int p1) { return Native::Invoke<void, Ped, int>(N::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE, ped, p1); }
	static void CLEAR_PED_DAMAGE_DECAL_BY_ZONE(Ped ped, int p1, char* p2) { return Native::Invoke<void, Ped, int, char*>(N::CLEAR_PED_DAMAGE_DECAL_BY_ZONE, ped, p1, p2); }
	static void _0x7F5D88333EE8A86F(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x7F5D88333EE8A86F, p0, p1); }
	static void _0x34C11114887150FD(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x34C11114887150FD, p0, p1); }
	static void _0xEB8886E1065654CD(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<void, Any, Any, Any, Any>(0xEB8886E1065654CD, p0, p1, p2, p3); }
	static Any _0x7043D0681285BA2D() { return Native::Invoke<Any>(0x7043D0681285BA2D); }
	static Any _0x8D9BFCE3352DE47F() { return Native::Invoke<Any>(0x8D9BFCE3352DE47F); }
	static void CLEAR_PED_WETNESS(Ped ped) { return Native::Invoke<void, Ped>(N::CLEAR_PED_WETNESS, ped); }
	static void SET_PED_WETNESS_HEIGHT(Ped ped, float height) { return Native::Invoke<void, Ped, float>(N::SET_PED_WETNESS_HEIGHT, ped, height); }
	static void _0xF9CFF5BB70E8A2CB(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xF9CFF5BB70E8A2CB, p0, p1); }
	static void SET_PED_WETNESS_ENABLED_THIS_FRAME(Ped ped) { return Native::Invoke<void, Ped>(N::SET_PED_WETNESS_ENABLED_THIS_FRAME, ped); }
	static void _0xA7A806677F8DE138(Any p0) { return Native::Invoke<void, Any>(0xA7A806677F8DE138, p0); }
	static void _0xA064BBABB064446F(Any p0) { return Native::Invoke<void, Any>(0xA064BBABB064446F, p0); }
	static void CLEAR_PED_ENV_DIRT(Any p0) { return Native::Invoke<void, Any>(N::CLEAR_PED_ENV_DIRT, p0); }
	static void SET_PED_SWEAT(Ped ped, float sweat) { return Native::Invoke<void, Ped, float>(N::SET_PED_SWEAT, ped, sweat); }
	static void CLEAR_PED_DECORATIONS(Ped ped) { return Native::Invoke<void, Ped>(N::CLEAR_PED_DECORATIONS, ped); }
	static BOOL WAS_PED_SKELETON_UPDATED(Ped ped) { return Native::Invoke<BOOL, Ped>(N::WAS_PED_SKELETON_UPDATED, ped); }
	static Vector3 GET_PED_BONE_COORDS(Ped ped, int boneId, float offsetX, float offsetY, float offsetZ) { return Native::Invoke<Vector3, Ped, int, float, float, float>(N::GET_PED_BONE_COORDS, ped, boneId, offsetX, offsetY, offsetZ); }
	static Any ADD_SCENARIO_BLOCKING_AREA(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { return Native::Invoke<Any, Any, Any, Any, Any, Any, Any, Any, Any>(N::ADD_SCENARIO_BLOCKING_AREA, p0, p1, p2, p3, p4, p5, p6, p7); }
	static void REMOVE_SCENARIO_BLOCKING_AREAS() { return Native::Invoke<void>(N::REMOVE_SCENARIO_BLOCKING_AREAS); }
	static void REMOVE_SCENARIO_BLOCKING_AREA(int areaHandle, BOOL p1) { return Native::Invoke<void, int, BOOL>(N::REMOVE_SCENARIO_BLOCKING_AREA, areaHandle, p1); }
	static Any _0x4C39C95AE5DB1329(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(0x4C39C95AE5DB1329, p0, p1, p2); }
	static Any _0x6F46F8ACB44C4FC1(Any p0) { return Native::Invoke<Any, Any>(0x6F46F8ACB44C4FC1, p0); }
	static Any _0x91A5F9CBEBB9D936(Any p0) { return Native::Invoke<Any, Any>(0x91A5F9CBEBB9D936, p0); }
	static Any _0x34D6AC1157C8226C(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x34D6AC1157C8226C, p0, p1); }
	static BOOL IS_PED_USING_ANY_SCENARIO(Ped ped) { return Native::Invoke<BOOL, Ped>(N::IS_PED_USING_ANY_SCENARIO, ped); }
	static Any _0x9C54041BB66BCF9E(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x9C54041BB66BCF9E, p0, p1); }
	static Any _0xAB643407D0B26F07(Any p0, Any p1, Any p2, Any p3, Any p4) { return Native::Invoke<Any, Any, Any, Any, Any, Any>(0xAB643407D0B26F07, p0, p1, p2, p3, p4); }
	static Any _0x1148F706CF4EBDDA() { return Native::Invoke<Any>(0x1148F706CF4EBDDA); }
	static Any _0xFE07FF6495D52E2A(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<Any, Any, Any, Any, Any>(0xFE07FF6495D52E2A, p0, p1, p2, p3); }
	static void _0x9A77DFD295E29B09(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x9A77DFD295E29B09, p0, p1); }
	static void _0xD8CEEED54C672B5D(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any, Any>(0xD8CEEED54C672B5D, p0, p1, p2, p3, p4, p5, p6); }
	static Any _0xEC6935EBE0847B90(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<Any, Any, Any, Any, Any>(0xEC6935EBE0847B90, p0, p1, p2, p3); }
	static void _0xA3A9299C4F2ADB98(Any p0) { return Native::Invoke<void, Any>(0xA3A9299C4F2ADB98, p0); }
	static void _0xF1C03A5352243A30(Any p0) { return Native::Invoke<void, Any>(0xF1C03A5352243A30, p0); }
	static Any _0xEEED8FAFEC331A70(Any p0, Any p1, Any p2, Any p3, Any p4) { return Native::Invoke<Any, Any, Any, Any, Any, Any>(0xEEED8FAFEC331A70, p0, p1, p2, p3, p4); }
	static Any _0x802092B07E3B1EEA(Any p0, Any p1, Any p2, Any p3, Any p4) { return Native::Invoke<Any, Any, Any, Any, Any, Any>(0x802092B07E3B1EEA, p0, p1, p2, p3, p4); }
	static Any _0x62FDAD5E01D2DD47(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return Native::Invoke<Any, Any, Any, Any, Any, Any, Any>(0x62FDAD5E01D2DD47, p0, p1, p2, p3, p4, p5); }
	static Any _0x463803429297117C(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return Native::Invoke<Any, Any, Any, Any, Any, Any, Any>(0x463803429297117C, p0, p1, p2, p3, p4, p5); }
	static Any _0xF9331B3A314EB49D(Any p0) { return Native::Invoke<Any, Any>(0xF9331B3A314EB49D, p0); }
	static void _0xE735A7DA22E88359(Any p0) { return Native::Invoke<void, Any>(0xE735A7DA22E88359, p0); }
	static Any _0x82CB0F3F0C7785E5(Any p0) { return Native::Invoke<Any, Any>(0x82CB0F3F0C7785E5, p0); }
	static void _0xCA95C156C14B2054(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xCA95C156C14B2054, p0, p1); }
	static void SET_FACIAL_IDLE_ANIM_OVERRIDE(Ped ped, char* animName, char* animDict) { return Native::Invoke<void, Ped, char*, char*>(N::SET_FACIAL_IDLE_ANIM_OVERRIDE, ped, animName, animDict); }
	static void CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(Ped ped) { return Native::Invoke<void, Ped>(N::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE, ped); }
	static void _0x8B3B71C80A29A4BB(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0x8B3B71C80A29A4BB, p0, p1, p2); }
	static void _0xD2F0FE8805D91647(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xD2F0FE8805D91647, p0, p1); }
	static void SET_PED_CAN_PLAY_GESTURE_ANIMS(Ped ped, BOOL toggle, Any p2) { return Native::Invoke<void, Ped, BOOL, Any>(N::SET_PED_CAN_PLAY_GESTURE_ANIMS, ped, toggle, p2); }
	static void SET_PED_CAN_PLAY_AMBIENT_ANIMS(Ped ped, BOOL toggle) { return Native::Invoke<void, Ped, BOOL>(N::SET_PED_CAN_PLAY_AMBIENT_ANIMS, ped, toggle); }
	static void SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(Ped ped, BOOL toggle) { return Native::Invoke<void, Ped, BOOL>(N::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS, ped, toggle); }
	static void SET_PED_CAN_ARM_IK(Ped ped, BOOL toggle) { return Native::Invoke<void, Ped, BOOL>(N::SET_PED_CAN_ARM_IK, ped, toggle); }
	static void _0xEE9DF765990E8D1D(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xEE9DF765990E8D1D, p0, p1); }
	static void SET_PED_CAN_HEAD_IK(Ped ped, BOOL toggle) { return Native::Invoke<void, Ped, BOOL>(N::SET_PED_CAN_HEAD_IK, ped, toggle); }
	static void SET_PED_CAN_LEG_IK(Ped ped, BOOL toggle) { return Native::Invoke<void, Ped, BOOL>(N::SET_PED_CAN_LEG_IK, ped, toggle); }
	static void SET_PED_CAN_TORSO_IK(Ped ped, BOOL toggle) { return Native::Invoke<void, Ped, BOOL>(N::SET_PED_CAN_TORSO_IK, ped, toggle); }
	static void _0xF5846EDB26A98A24(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xF5846EDB26A98A24, p0, p1); }
	static void _0x6647C5F6F5792496(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x6647C5F6F5792496, p0, p1); }
	static void SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Ped ped, BOOL toggle) { return Native::Invoke<void, Ped, BOOL>(N::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT, ped, toggle); }
	static BOOL IS_PED_HEADTRACKING_PED(Ped ped1, Ped ped2) { return Native::Invoke<BOOL, Ped, Ped>(N::IS_PED_HEADTRACKING_PED, ped1, ped2); }
	static BOOL IS_PED_HEADTRACKING_ENTITY(Ped ped, Entity entity) { return Native::Invoke<BOOL, Ped, Entity>(N::IS_PED_HEADTRACKING_ENTITY, ped, entity); }
	static void _0x80038740C96AD17F(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x80038740C96AD17F, p0, p1); }
	static Any _0xCD9E5F94A2F38683() { return Native::Invoke<Any>(0xCD9E5F94A2F38683); }
	static void _0x78C4E9961DB3EB5B(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x78C4E9961DB3EB5B, p0, p1); }
	static void _0x1D4636C90BBEFACB(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x1D4636C90BBEFACB, p0, p1); }
	static void _0xEF371232BC6053E1(Any p0) { return Native::Invoke<void, Any>(0xEF371232BC6053E1, p0); }
	static void _0x86F0B6730C32AC14(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x86F0B6730C32AC14, p0, p1); }
	static void _0x8101BA1C0B462412(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x8101BA1C0B462412, p0, p1); }
	static void SET_PED_CONFIG_FLAG(Ped ped, int flagId, BOOL value) { return Native::Invoke<void, Ped, int, BOOL>(N::SET_PED_CONFIG_FLAG, ped, flagId, value); }
	static void SET_PED_RESET_FLAG(Ped ped, int flagId, BOOL value) { return Native::Invoke<void, Ped, int, BOOL>(N::SET_PED_RESET_FLAG, ped, flagId, value); }
	static BOOL GET_PED_CONFIG_FLAG(Ped ped, int flagId, BOOL p2) { return Native::Invoke<BOOL, Ped, int, BOOL>(N::GET_PED_CONFIG_FLAG, ped, flagId, p2); }
	static BOOL GET_PED_RESET_FLAG(Ped ped, int flagId) { return Native::Invoke<BOOL, Ped, int>(N::GET_PED_RESET_FLAG, ped, flagId); }
	static void _0xC6981AFF6D2A71C2(Any p0) { return Native::Invoke<void, Any>(0xC6981AFF6D2A71C2, p0); }
	static void _0xE0FE107AB174D64A(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xE0FE107AB174D64A, p0, p1); }
	static Any SET_PED_GROUP_MEMBER_PASSENGER_INDEX() { return Native::Invoke<Any>(N::SET_PED_GROUP_MEMBER_PASSENGER_INDEX); }
	static Any IS_PED_EVASIVE_DIVING() { return Native::Invoke<Any>(N::IS_PED_EVASIVE_DIVING); }
	static Any _0x4C57F27D1554E6B0(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { return Native::Invoke<Any, Any, Any, Any, Any, Any, Any, Any, Any>(0x4C57F27D1554E6B0, p0, p1, p2, p3, p4, p5, p6, p7); }
	static Any _0x772A1969F649E902(Any p0) { return Native::Invoke<Any, Any>(0x772A1969F649E902, p0); }
	static void SET_PED_MODEL_IS_SUPPRESSED(Ped ped, BOOL toggle) { return Native::Invoke<void, Ped, BOOL>(N::SET_PED_MODEL_IS_SUPPRESSED, ped, toggle); }
	static Any _0xAA9F048DCF69B6DC(Any p0) { return Native::Invoke<Any, Any>(0xAA9F048DCF69B6DC, p0); }
	static void _0x7ABBD9E449E0DB00(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x7ABBD9E449E0DB00, p0, p1); }
	static Any _0xADD31A5C7A5FAA73() { return Native::Invoke<Any>(0xADD31A5C7A5FAA73); }
	static void SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(Ped ped, BOOL toggle) { return Native::Invoke<void, Ped, BOOL>(N::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT, ped, toggle); }
	static void _0xE6CB36F43A95D75F(Any p0) { return Native::Invoke<void, Any>(0xE6CB36F43A95D75F, p0); }
	static void SET_PED_LEG_IK_MODE(Ped ped, int mode) { return Native::Invoke<void, Ped, int>(N::SET_PED_LEG_IK_MODE, ped, mode); }
	static Any _0x078076AB50FB117F(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return Native::Invoke<Any, Any, Any, Any, Any, Any, Any>(0x078076AB50FB117F, p0, p1, p2, p3, p4, p5); }
	static void _0xFD6943B6DF77E449(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xFD6943B6DF77E449, p0, p1); }
	static void SET_PED_COMBAT_MOVEMENT(Ped ped, int combatMovement) { return Native::Invoke<void, Ped, int>(N::SET_PED_COMBAT_MOVEMENT, ped, combatMovement); }
	static int GET_PED_COMBAT_MOVEMENT(Ped ped) { return Native::Invoke<int, Ped>(N::GET_PED_COMBAT_MOVEMENT, ped); }
	static void _0x815C0074A1BC0D93(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x815C0074A1BC0D93, p0, p1); }
	static Any _0xFFDE295662405B25() { return Native::Invoke<Any>(0xFFDE295662405B25); }
	static void SET_PED_COMBAT_ABILITY(Ped ped, int p1) { return Native::Invoke<void, Ped, int>(N::SET_PED_COMBAT_ABILITY, ped, p1); }
	static void SET_PED_COMBAT_RANGE(Ped ped, int p1) { return Native::Invoke<void, Ped, int>(N::SET_PED_COMBAT_RANGE, ped, p1); }
	static void SET_PED_COMBAT_ATTRIBUTES(Ped ped, int attributeIndex, BOOL enabled) { return Native::Invoke<void, Ped, int, BOOL>(N::SET_PED_COMBAT_ATTRIBUTES, ped, attributeIndex, enabled); }
	static Any _0xCC2B20596E29E4E3(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0xCC2B20596E29E4E3, p0, p1); }
	static void _0xBD75500141E4725C(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xBD75500141E4725C, p0, p1); }
	static void SET_PED_TARGET_LOSS_RESPONSE(Ped ped, int responseType) { return Native::Invoke<void, Ped, int>(N::SET_PED_TARGET_LOSS_RESPONSE, ped, responseType); }
	static void _0x0A4618FFD517E24D(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x0A4618FFD517E24D, p0, p1); }
	static void _0x712B2C2B2471B493(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x712B2C2B2471B493, p0, p1); }
	static void _0x00B380FF2DF6AB7A(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x00B380FF2DF6AB7A, p0, p1); }
	static void _0x8ACC0506743A8A5C(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<void, Any, Any, Any, Any>(0x8ACC0506743A8A5C, p0, p1, p2, p3); }
	static void _0x78815FC52832B690(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x78815FC52832B690, p0, p1); }
	static void _0x8B1E8E35A6E814EA(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0x8B1E8E35A6E814EA, p0, p1, p2); }
	static void _0x1FA132CBCD7CB239(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x1FA132CBCD7CB239, p0, p1); }
	static Any _0x5BF0B9D9A8E227A0(Any p0) { return Native::Invoke<Any, Any>(0x5BF0B9D9A8E227A0, p0); }
	static void _0x642720D8D69328B6(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x642720D8D69328B6, p0, p1); }
	static Any IS_PED_PERFORMING_MELEE_ACTION(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(N::IS_PED_PERFORMING_MELEE_ACTION, p0, p1, p2); }
	static Any _0x6127F25ED21C533C(Any p0) { return Native::Invoke<Any, Any>(0x6127F25ED21C533C, p0); }
	static BOOL IS_PED_BEING_STEALTH_KILLED(Ped ped) { return Native::Invoke<BOOL, Ped>(N::IS_PED_BEING_STEALTH_KILLED, ped); }
	static Ped GET_MELEE_TARGET_FOR_PED(Ped ped) { return Native::Invoke<Ped, Ped>(N::GET_MELEE_TARGET_FOR_PED, ped); }
	static void _0xDEDBED3020DA49DC(Any p0) { return Native::Invoke<void, Any>(0xDEDBED3020DA49DC, p0); }
	static void _0xA405BF9F01960C16(Any p0) { return Native::Invoke<void, Any>(0xA405BF9F01960C16, p0); }
	static Any _0xEC6B59BE445FEC51(Any p0) { return Native::Invoke<Any, Any>(0xEC6B59BE445FEC51, p0); }
	static void _0x8BA83CC4288CD56D(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x8BA83CC4288CD56D, p0, p1); }
	static void _0x9D8DFE2DE9CB4DFC(Any p0) { return Native::Invoke<void, Any>(0x9D8DFE2DE9CB4DFC, p0); }
	static Any _0xC48AF420371C7407(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0xC48AF420371C7407, p0, p1); }
	static Any _0x5EFA8A3D8A60D662() { return Native::Invoke<Any>(0x5EFA8A3D8A60D662); }
	static Any _0x242EDF85D4E87B65(Any p0) { return Native::Invoke<Any, Any>(0x242EDF85D4E87B65, p0); }
	static void _0x9238A3D970BBB0A9(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x9238A3D970BBB0A9, p0, p1); }
	static void _0x9A4AC116CC1EEE14(Any p0) { return Native::Invoke<void, Any>(0x9A4AC116CC1EEE14, p0); }
	static void _0xE20027B414BFE6C7(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xE20027B414BFE6C7, p0, p1); }
	static void _0x6DBF2D78709AD70B(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x6DBF2D78709AD70B, p0, p1); }
	static void _0xB8DE69D9473B7593(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xB8DE69D9473B7593, p0, p1); }
	static void _0x949B2F9ED2917F5D(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x949B2F9ED2917F5D, p0, p1); }
	static Any _0xB346C85D49CC998E(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0xB346C85D49CC998E, p0, p1); }
	static void _0xC163DAC52AC975D3(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xC163DAC52AC975D3, p0, p1); }
	static void _0xBBF6D1D07C02D00A(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xBBF6D1D07C02D00A, p0, p1); }
	static Any _0x02AA2096FE00F3E1(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x02AA2096FE00F3E1, p0, p1); }
	static void _0x57F35552E771BE9D(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x57F35552E771BE9D, p0, p1); }
	static void _0x7C10221CE718AA72(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x7C10221CE718AA72, p0, p1); }
	static Any _0x0D3B1568917EBDA0(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x0D3B1568917EBDA0, p0, p1); }
	static void _0x29F3539189D3E277(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x29F3539189D3E277, p0, p1); }
	static void _0xE9E06EA514A69061(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xE9E06EA514A69061, p0, p1); }
	static void _0x4DB9D03AC4E1FA84(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<void, Any, Any, Any, Any>(0x4DB9D03AC4E1FA84, p0, p1, p2, p3); }
	static Any _0xEBE89623EB861271(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0xEBE89623EB861271, p0, p1); }
	static void _0x925A160133003AC6(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x925A160133003AC6, p0, p1); }
	static Any _0x12EB4E31F092C9B3(Any p0) { return Native::Invoke<Any, Any>(0x12EB4E31F092C9B3, p0); }
	static Any _0x0E99E3BF11BB6367(Any p0) { return Native::Invoke<Any, Any>(0x0E99E3BF11BB6367, p0); }
	static Any _0x3BDFCF25B58B0415(Any p0) { return Native::Invoke<Any, Any>(0x3BDFCF25B58B0415, p0); }
	static Any _0xD0B7AEB56229D317(Any p0) { return Native::Invoke<Any, Any>(0xD0B7AEB56229D317, p0); }
	static Any _0x2311F15D971AA680(Any p0) { return Native::Invoke<Any, Any>(0x2311F15D971AA680, p0); }
	static Any _0x753B15AD0FD6F3E3(Any p0) { return Native::Invoke<Any, Any>(0x753B15AD0FD6F3E3, p0); }
	static Any _0x630E7B01F091A197(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x630E7B01F091A197, p0, p1); }
	static void _0x604190F0CF0DF158(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x604190F0CF0DF158, p0, p1); }
	static void _0x789DABD18E9024DB(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0x789DABD18E9024DB, p0, p1, p2); }
	static void _0xEAE3B5B019C8D23F(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xEAE3B5B019C8D23F, p0, p1); }
	static Any _0xF3C873ED0C595109(Any p0) { return Native::Invoke<Any, Any>(0xF3C873ED0C595109, p0); }
	static void _0x8301D87B1B89E219(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x8301D87B1B89E219, p0, p1); }
	static Any _0x99A6E246C315BF60(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x99A6E246C315BF60, p0, p1); }
	static void _0x56E9C26CD29D1ED6(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x56E9C26CD29D1ED6, p0, p1); }
	static void SET_PED_FLEE_ATTRIBUTES(Ped ped, int attributes, BOOL p2) { return Native::Invoke<void, Ped, int, BOOL>(N::SET_PED_FLEE_ATTRIBUTES, ped, attributes, p2); }
	static Any _0xB086C8C0F5701D14(Any p0) { return Native::Invoke<Any, Any>(0xB086C8C0F5701D14, p0); }
	static BOOL IS_ANY_PED_NEAR_POINT(float x, float y, float z, float radius) { return Native::Invoke<BOOL, float, float, float, float>(N::IS_ANY_PED_NEAR_POINT, x, y, z, radius); }
	static void _0x2208438012482A1A(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0x2208438012482A1A, p0, p1, p2); }
	static Any _0xC488B8C0E52560D8(Any p0) { return Native::Invoke<Any, Any>(0xC488B8C0E52560D8, p0); }
	static Any _0x2DC0E8DCBD3546E9(Any p0) { return Native::Invoke<Any, Any>(0x2DC0E8DCBD3546E9, p0); }
	static void _0x6D07B371E9439019(Any p0) { return Native::Invoke<void, Any>(0x6D07B371E9439019, p0); }
	static void _0xD65FDC686A031C83(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0xD65FDC686A031C83, p0, p1, p2); }
	static Any _0x68821369A2CEADD5(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x68821369A2CEADD5, p0, p1); }
	static Any IS_PED_HEADING_TOWARDS_POSITION(Any p0, Any p1, Any p2, Any p3, Any p4) { return Native::Invoke<Any, Any, Any, Any, Any, Any>(N::IS_PED_HEADING_TOWARDS_POSITION, p0, p1, p2, p3, p4); }
	static void _0x600BBDD29820370C(Any p0) { return Native::Invoke<void, Any>(0x600BBDD29820370C, p0); }
	static void REQUEST_PED_VISIBILITY_TRACKING(Any p0) { return Native::Invoke<void, Any>(N::REQUEST_PED_VISIBILITY_TRACKING, p0); }
	static void _0x3088634CF8C819CF(Any p0) { return Native::Invoke<void, Any>(0x3088634CF8C819CF, p0); }
	static void REQUEST_PED_VEHICLE_VISIBILITY_TRACKING(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(N::REQUEST_PED_VEHICLE_VISIBILITY_TRACKING, p0, p1); }
	static void _0x75BA1CB3B7D40CAF(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x75BA1CB3B7D40CAF, p0, p1); }
	static Any _0x511F1A683387C7E2(Any p0) { return Native::Invoke<Any, Any>(0x511F1A683387C7E2, p0); }
	static BOOL IS_TRACKED_PED_VISIBLE(Ped ped) { return Native::Invoke<BOOL, Ped>(N::IS_TRACKED_PED_VISIBLE, ped); }
	static Any _0x164CECC59E70DF86(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x164CECC59E70DF86, p0, p1); }
	static Any _0x5102307CE88798EB(Any p0) { return Native::Invoke<Any, Any>(0x5102307CE88798EB, p0); }
	static Any _0x2D64376CF437363E(Any p0) { return Native::Invoke<Any, Any>(0x2D64376CF437363E, p0); }
	static Any _0x118D476A6F1A13F1(Any p0) { return Native::Invoke<Any, Any>(0x118D476A6F1A13F1, p0); }
	static Any _0xC8D523BF5BBD3808(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0xC8D523BF5BBD3808, p0, p1); }
	static Any _0x7F9B9791D4CB71F6(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(0x7F9B9791D4CB71F6, p0, p1, p2); }
	static Any _0x9D9473CB82D83A30(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(0x9D9473CB82D83A30, p0, p1, p2); }
	static Any _0x0EA9EACBA3B01601(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(0x0EA9EACBA3B01601, p0, p1, p2); }
	static int GET_PED_BONE_INDEX(Ped ped, int boneId) { return Native::Invoke<int, Ped, int>(N::GET_PED_BONE_INDEX, ped, boneId); }
	static Any _0xC5303F460A40D21D(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0xC5303F460A40D21D, p0, p1); }
	static Any _0xE29D8CD66553DBAA() { return Native::Invoke<Any>(0xE29D8CD66553DBAA); }
	static void _0xB06F5F1DEF417216(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<void, Any, Any, Any, Any>(0xB06F5F1DEF417216, p0, p1, p2, p3); }
	static void _0xFC23348F0F4E245F(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<void, Any, Any, Any, Any>(0xFC23348F0F4E245F, p0, p1, p2, p3); }
	static void _0x9184788BFF1EDAD7(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x9184788BFF1EDAD7, p0, p1); }
	static void _0xE3144B932DFDFF65(Any p0, Any p1, Any p2, Any p3, Any p4) { return Native::Invoke<void, Any, Any, Any, Any, Any>(0xE3144B932DFDFF65, p0, p1, p2, p3, p4); }
	static Any _0x0105FEE8F9091255(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x0105FEE8F9091255, p0, p1); }
	static void _0xD049920CD29F6CC8(Any p0, Any p1, Any p2, Any p3, Any p4) { return Native::Invoke<void, Any, Any, Any, Any, Any>(0xD049920CD29F6CC8, p0, p1, p2, p3, p4); }
	static Any _0xBB3E5370EBB6BE28(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0xBB3E5370EBB6BE28, p0, p1); }
	static void _0x2FA568BFA725F8D6(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<void, Any, Any, Any, Any>(0x2FA568BFA725F8D6, p0, p1, p2, p3); }
	static Any _0x56E4BAD93D33453C(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x56E4BAD93D33453C, p0, p1); }
	static void _0x75A082563B4452E5(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<void, Any, Any, Any, Any>(0x75A082563B4452E5, p0, p1, p2, p3); }
	static void _0x16802C32B2FCA06B(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<void, Any, Any, Any, Any>(0x16802C32B2FCA06B, p0, p1, p2, p3); }
	static void _0x8BA0C65AC15A7D33(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<void, Any, Any, Any, Any>(0x8BA0C65AC15A7D33, p0, p1, p2, p3); }
	static void _0x0FFDF937E5C11382(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any>(0x0FFDF937E5C11382, p0, p1, p2, p3, p4, p5); }
	static void _0x5FCF25D584065BFD(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<void, Any, Any, Any, Any>(0x5FCF25D584065BFD, p0, p1, p2, p3); }
	static void _0xA2116C1E4ED85C24(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xA2116C1E4ED85C24, p0, p1); }
	static BOOL FORCE_PED_MOTION_STATE(Ped ped, Hash motionStateHash, BOOL p2, BOOL p3, BOOL p4) { return Native::Invoke<BOOL, Ped, Hash, BOOL, BOOL, BOOL>(N::FORCE_PED_MOTION_STATE, ped, motionStateHash, p2, p3, p4); }
	static void _0x75D3333409CD33CE(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0x75D3333409CD33CE, p0, p1, p2); }
	static Any _0xF60165E1D2C5370B(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(0xF60165E1D2C5370B, p0, p1, p2); }
	static void SET_PED_MAX_MOVE_BLEND_RATIO(Ped ped, float value) { return Native::Invoke<void, Ped, float>(N::SET_PED_MAX_MOVE_BLEND_RATIO, ped, value); }
	static void SET_PED_MIN_MOVE_BLEND_RATIO(Ped ped, float value) { return Native::Invoke<void, Ped, float>(N::SET_PED_MIN_MOVE_BLEND_RATIO, ped, value); }
	static void _0xBC1DC48270468444(Any p0) { return Native::Invoke<void, Any>(0xBC1DC48270468444, p0); }
	static Any _0x46BF2A810679D6E6(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x46BF2A810679D6E6, p0, p1); }
	static Any _0xCA95924C893A0C91(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0xCA95924C893A0C91, p0, p1); }
	static void _0xBAE08F00021BFFB2(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xBAE08F00021BFFB2, p0, p1); }
	static void _0x413697EC260AABBF(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0x413697EC260AABBF, p0, p1, p2); }
	static void _0xCAC43D060099EA72(Any p0) { return Native::Invoke<void, Any>(0xCAC43D060099EA72, p0); }
	static void _0xC9151483CC06A414(Any p0) { return Native::Invoke<void, Any>(0xC9151483CC06A414, p0); }
	static void _0xAD3330E3C3E98007(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xAD3330E3C3E98007, p0, p1); }
	static Any _0xB8E2D655E1D5BD39(Any p0) { return Native::Invoke<Any, Any>(0xB8E2D655E1D5BD39, p0); }
	static Any _0x7BB810E8B343AC7B(Any p0) { return Native::Invoke<Any, Any>(0x7BB810E8B343AC7B, p0); }
	static void SET_PED_MOVE_RATE_OVERRIDE(Ped ped, float value) { return Native::Invoke<void, Ped, float>(N::SET_PED_MOVE_RATE_OVERRIDE, ped, value); }
	static Any GET_PED_NEARBY_VEHICLES() { return Native::Invoke<Any>(N::GET_PED_NEARBY_VEHICLES); }
	static int GET_PED_NEARBY_PEDS(Ped ped, int* sizeAndPeds, int ignore, Any p3) { return Native::Invoke<int, Ped, int*, int, Any>(N::GET_PED_NEARBY_PEDS, ped, sizeAndPeds, ignore, p3); }
	static Any _0xA0BC8FAED8CFEB3C(Any p0) { return Native::Invoke<Any, Any>(0xA0BC8FAED8CFEB3C, p0); }
	static Any _0x6A489892E813951A() { return Native::Invoke<Any>(0x6A489892E813951A); }
	static BOOL IS_PED_USING_ACTION_MODE(Ped ped) { return Native::Invoke<BOOL, Ped>(N::IS_PED_USING_ACTION_MODE, ped); }
	static Any _0xEBB208D6AE712C03(Any p0) { return Native::Invoke<Any, Any>(0xEBB208D6AE712C03, p0); }
	static void SET_PED_USING_ACTION_MODE(Ped ped, BOOL p1, Any p2, char* action) { return Native::Invoke<void, Ped, BOOL, Any, char*>(N::SET_PED_USING_ACTION_MODE, ped, p1, p2, action); }
	static void SET_PED_CAPSULE(Ped ped, float value) { return Native::Invoke<void, Ped, float>(N::SET_PED_CAPSULE, ped, value); }
	static Any _0xB676EFDA03DADA52(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0xB676EFDA03DADA52, p0, p1); }
	static void _0x2DF9038C90AD5264(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any, Any, Any, Any>(0x2DF9038C90AD5264, p0, p1, p2, p3, p4, p5, p6, p7, p8); }
	static Any _0xB2AFF10216DEFA2F() { return Native::Invoke<Any>(0xB2AFF10216DEFA2F); }
	static Any _0x8B74032DDD2156FE() { return Native::Invoke<Any>(0x8B74032DDD2156FE); }
	static void _0xFEE4A5459472A9F8() { return Native::Invoke<void>(0xFEE4A5459472A9F8); }
	static Any _0x3C67506996001F5E() { return Native::Invoke<Any>(0x3C67506996001F5E); }
	static Any _0xA586FBEB32A53DBB() { return Native::Invoke<Any>(0xA586FBEB32A53DBB); }
	static Any _0xF445DE8DA80A1792() { return Native::Invoke<Any>(0xF445DE8DA80A1792); }
	static Any _0xA635C11B8C44AFC2() { return Native::Invoke<Any>(0xA635C11B8C44AFC2); }
	static void _0x280C7E3AC7F56E90(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<void, Any, Any, Any, Any>(0x280C7E3AC7F56E90, p0, p1, p2, p3); }
	static Any _0xB782F8238512BAD5() { return Native::Invoke<Any>(0xB782F8238512BAD5); }
	static void SET_IK_TARGET(Ped ped, int ikIndex, Entity entityLookAt, int boneLookAt, float offsetX, float offsetY, float offsetZ, Any p7, int blendInDuration, int blendOutDuration) { return Native::Invoke<void, Ped, int, Entity, int, float, float, float, Any, int, int>(N::SET_IK_TARGET, ped, ikIndex, entityLookAt, boneLookAt, offsetX, offsetY, offsetZ, p7, blendInDuration, blendOutDuration); }
	static void _0x5C3C55EAAD19915F(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x5C3C55EAAD19915F, p0, p1); }
	static Any _0xDE3904B22695D9F9(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0xDE3904B22695D9F9, p0, p1); }
	static void _0xFC3BAB1801A8255A(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xFC3BAB1801A8255A, p0, p1); }
	static void _0xF7EA250B9A919E03(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xF7EA250B9A919E03, p0, p1); }
	static Any _0x854BC9B1A1CCD034(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x854BC9B1A1CCD034, p0, p1); }
	static void _0xDE7B2B4144906CDF(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xDE7B2B4144906CDF, p0, p1); }
	static Any _0x290B2E6CCDE532E1() { return Native::Invoke<Any>(0x290B2E6CCDE532E1); }
	static Any _0x0EEF7A81C17679DB() { return Native::Invoke<Any>(0x0EEF7A81C17679DB); }
	static void SET_PED_LOD_MULTIPLIER(Ped ped, float multiplier) { return Native::Invoke<void, Ped, float>(N::SET_PED_LOD_MULTIPLIER, ped, multiplier); }
	static Any _0xA218D2BBCAA7388C(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0xA218D2BBCAA7388C, p0, p1); }
	static void _0xCBDE59C48F2B06F5(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0xCBDE59C48F2B06F5, p0, p1, p2); }
	static void _0x6A190B94C2541A99(Any p0) { return Native::Invoke<void, Any>(0x6A190B94C2541A99, p0); }
	static Any _0x06087579E7AA85A9(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return Native::Invoke<Any, Any, Any, Any, Any, Any, Any>(0x06087579E7AA85A9, p0, p1, p2, p3, p4, p5); }
	static Any _0xD8C3BE3EE94CAF2D() { return Native::Invoke<Any>(0xD8C3BE3EE94CAF2D); }
	static Any _0x3AA24CCC0D451379(Any p0) { return Native::Invoke<Any, Any>(0x3AA24CCC0D451379, p0); }
	static Any _0xD453BB601D4A606E() { return Native::Invoke<Any>(0xD453BB601D4A606E); }
	static Any _0x3D9F958834AB9C30(Any p0) { return Native::Invoke<Any, Any>(0x3D9F958834AB9C30, p0); }
	static Any _0x913D04A5176F84C9(Any p0) { return Native::Invoke<Any, Any>(0x913D04A5176F84C9, p0); }
	static Any _0x42429C674B61238B(Any p0) { return Native::Invoke<Any, Any>(0x42429C674B61238B, p0); }
	static Any _0x2C76FA0E01681F8D(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x2C76FA0E01681F8D, p0, p1); }
	static void _0xAE6004120C18DF97(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0xAE6004120C18DF97, p0, p1, p2); }
	static Any _0x4642182A298187D0(Any p0, Any p1, Any p2, Any p3, Any p4) { return Native::Invoke<Any, Any, Any, Any, Any, Any>(0x4642182A298187D0, p0, p1, p2, p3, p4); }
	static void _0x6B67320E0D57856A(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<void, Any, Any, Any, Any>(0x6B67320E0D57856A, p0, p1, p2, p3); }
	static Any _0xD806CD2A4F2C2996(Any p0) { return Native::Invoke<Any, Any>(0xD806CD2A4F2C2996, p0); }
	static Any _0xAA6C49AE90A32299() { return Native::Invoke<Any>(0xAA6C49AE90A32299); }
	static Any _0x09B83E68DE004CD4(Any p0) { return Native::Invoke<Any, Any>(0x09B83E68DE004CD4, p0); }
	static Any _0xA033D7E4BBF9844D(Any p0) { return Native::Invoke<Any, Any>(0xA033D7E4BBF9844D, p0); }
	static Any _0x79443D56C8DF45EE(Any p0) { return Native::Invoke<Any, Any>(0x79443D56C8DF45EE, p0); }
	static Any _0x608BC6A6AACD5036(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<Any, Any, Any, Any, Any>(0x608BC6A6AACD5036, p0, p1, p2, p3); }
	static void _0xED00D72F81CF7278(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0xED00D72F81CF7278, p0, p1, p2); }
	static void _0xB5ACE8B23A438EC0(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xB5ACE8B23A438EC0, p0, p1); }
	static Any _0xA911EE21EDF69DAF(Any p0) { return Native::Invoke<Any, Any>(0xA911EE21EDF69DAF, p0); }
	static Any _0xB65927F861E7AE39(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0xB65927F861E7AE39, p0, p1); }
	static Any _0xA1FBAC56D38563E2(Any p0) { return Native::Invoke<Any, Any>(0xA1FBAC56D38563E2, p0); }
	static Any _0x6F43C351A5D51E2F(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x6F43C351A5D51E2F, p0, p1); }
	static Any _0x9682F850056C9ADE(Any p0) { return Native::Invoke<Any, Any>(0x9682F850056C9ADE, p0); }
	static Any _0x833F0053340EF413() { return Native::Invoke<Any>(0x833F0053340EF413); }
	static Any _0xB65A4DAB460A19BD(Any p0) { return Native::Invoke<Any, Any>(0xB65A4DAB460A19BD, p0); }
	static Any _0x0C31C51168E80365() { return Native::Invoke<Any>(0x0C31C51168E80365); }
	static void _0x6569F31A01B4C097(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0x6569F31A01B4C097, p0, p1, p2); }
	static Any _0xE4C11F104620DDCE(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0xE4C11F104620DDCE, p0, p1); }
	static Any _0x5463C962BC7777C3(Any p0, Any p1, Any p2, Any p3, Any p4) { return Native::Invoke<Any, Any, Any, Any, Any, Any>(0x5463C962BC7777C3, p0, p1, p2, p3, p4); }
	static Any _0x4B19F171450E0D4F(Any p0) { return Native::Invoke<Any, Any>(0x4B19F171450E0D4F, p0); }
	static Any _0x758F081DB204DDDE(Any p0) { return Native::Invoke<Any, Any>(0x758F081DB204DDDE, p0); }
	static Any _0x14169FA823679E41(Any p0) { return Native::Invoke<Any, Any>(0x14169FA823679E41, p0); }
	static Any _0x7B5C293238EE4F20() { return Native::Invoke<Any>(0x7B5C293238EE4F20); }
	static Any _0xAE6B68A83ABBE7C0() { return Native::Invoke<Any>(0xAE6B68A83ABBE7C0); }
	static Any _0xB655DB7582AEC805(Any p0) { return Native::Invoke<Any, Any>(0xB655DB7582AEC805, p0); }
	static Any _0x39ED303390DDEAC7() { return Native::Invoke<Any>(0x39ED303390DDEAC7); }
	static Any _0x7A4E00364B5D727B() { return Native::Invoke<Any>(0x7A4E00364B5D727B); }
	static void _0x5240864E847C691C(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x5240864E847C691C, p0, p1); }
	static Any _0x89BFDF6D53145545() { return Native::Invoke<Any>(0x89BFDF6D53145545); }
	static Any _0x2890418B39BC8FFF() { return Native::Invoke<Any>(0x2890418B39BC8FFF); }
	static Any _0x4B9668DB91DC39B8() { return Native::Invoke<Any>(0x4B9668DB91DC39B8); }
	static void _0xD67B6F3BCF81BA47(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xD67B6F3BCF81BA47, p0, p1); }
	static void _0x92A1B55A59720395(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x92A1B55A59720395, p0, p1); }
	static void _0xF6262491C7704A63(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xF6262491C7704A63, p0, p1); }
	static Any _0x88D9D76D78065487() { return Native::Invoke<Any>(0x88D9D76D78065487); }
	static void _0x5BCF0B79D4F5DBA3(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x5BCF0B79D4F5DBA3, p0, p1); }
	static void _0x2E5B5D1F1453E08E(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x2E5B5D1F1453E08E, p0, p1); }
	static void _0x29924EB8EE9DB926(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x29924EB8EE9DB926, p0, p1); }
	static void _0xB285AD0EC870B2DF(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xB285AD0EC870B2DF, p0, p1); }
	static Any _0xCB86D3E3E3708901(Any p0, Any p1, Any p2, Any p3, Any p4) { return Native::Invoke<Any, Any, Any, Any, Any, Any>(0xCB86D3E3E3708901, p0, p1, p2, p3, p4); }
	static void _0x633F83B301C87994(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x633F83B301C87994, p0, p1); }
	static Any _0x5203038FF8BAE577(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(0x5203038FF8BAE577, p0, p1, p2); }
	static Any _0x7F090958AE95B61B(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x7F090958AE95B61B, p0, p1); }
	static void _0xC494C76A34266E82(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xC494C76A34266E82, p0, p1); }
	static Any _0xC3995D396F1D97B6() { return Native::Invoke<Any>(0xC3995D396F1D97B6); }
	static void _0x15F4732C357B1D6D(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0x15F4732C357B1D6D, p0, p1, p2); }
	static Any _0x947E43F544B6AB34(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<Any, Any, Any, Any, Any>(0x947E43F544B6AB34, p0, p1, p2, p3); }
	static Any _0x32417CB860A3BDC4(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x32417CB860A3BDC4, p0, p1); }
	static void _0xE737D5F14304A2EC(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0xE737D5F14304A2EC, p0, p1, p2); }
	static void _0xEBD49472BCCF7642(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xEBD49472BCCF7642, p0, p1); }
	static void _0x19173C3F15367B54(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0x19173C3F15367B54, p0, p1, p2); }
	static void _0x5708EDD71B50C008(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0x5708EDD71B50C008, p0, p1, p2); }
	static void _0xB9BDFAE609DFB7C5(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0xB9BDFAE609DFB7C5, p0, p1, p2); }
	static Any _0xF7327ACC7A89AEF1(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(0xF7327ACC7A89AEF1, p0, p1, p2); }
	static Any _0x7CC2186C32D3540A(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x7CC2186C32D3540A, p0, p1); }
	static Any _0x1E017404784AA6A3(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x1E017404784AA6A3, p0, p1); }
	static void _0x2B4CE170DE09F346(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x2B4CE170DE09F346, p0, p1); }
	static Any _0x7C8AA850617651D9(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x7C8AA850617651D9, p0, p1); }
	static Any _0x42688E94E96FD9B4(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(0x42688E94E96FD9B4, p0, p1, p2); }
	static void _0x06D26A96CA1BCA75(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<void, Any, Any, Any, Any>(0x06D26A96CA1BCA75, p0, p1, p2, p3); }
	static void _0x23BDE06596A22CEC(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<void, Any, Any, Any, Any>(0x23BDE06596A22CEC, p0, p1, p2, p3); }
	static void _0xCDFB8C04D4C95D9B(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<void, Any, Any, Any, Any>(0xCDFB8C04D4C95D9B, p0, p1, p2, p3); }
	static Any _0x33FA048675821DA7(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x33FA048675821DA7, p0, p1); }
	static void _0x2EB75FB86C41F026(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0x2EB75FB86C41F026, p0, p1, p2); }
	static void _0xA1EB5D029E0191D3(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0xA1EB5D029E0191D3, p0, p1, p2); }
	static void _0xFD8E853F0BC2E942(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xFD8E853F0BC2E942, p0, p1); }
	static void _0x01B21B81865E2A1F(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x01B21B81865E2A1F, p0, p1); }
	static Any _0x05CE6AF4DF071D23() { return Native::Invoke<Any>(0x05CE6AF4DF071D23); }
	static Any _0x801917E7D7BCE418() { return Native::Invoke<Any>(0x801917E7D7BCE418); }
	static void _0xC6C4E15CF7D52FEA(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xC6C4E15CF7D52FEA, p0, p1); }
	static void _0xD05AD61F242C626B(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xD05AD61F242C626B, p0, p1); }
	static void _0x0F967019CC853BCC(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x0F967019CC853BCC, p0, p1); }
	static Any _0x226CF9B159E38F42(Any p0) { return Native::Invoke<Any, Any>(0x226CF9B159E38F42, p0); }
	static Any _0xEF3A8772F085B4AA(Any p0) { return Native::Invoke<Any, Any>(0xEF3A8772F085B4AA, p0); }
	static Any _0x070A3841406C43D5() { return Native::Invoke<Any>(0x070A3841406C43D5); }
	static Any _0xE9B168527B337BF0(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0xE9B168527B337BF0, p0, p1); }
	static Any _0x0CAB404CD2DB41F5(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x0CAB404CD2DB41F5, p0, p1); }
	static void _0x9E66708B2B41F14A(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x9E66708B2B41F14A, p0, p1); }
	static void _0xF634E2892220EF34(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xF634E2892220EF34, p0, p1); }
	static void _0xAAC0EE3B4999ABB5(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xAAC0EE3B4999ABB5, p0, p1); }
	static Any _0x243E1B4607040057() { return Native::Invoke<Any>(0x243E1B4607040057); }
	static void _0x5653AB26C82938CF(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0x5653AB26C82938CF, p0, p1, p2); }
	static Any _0xFD1BA1EEF7985BB8(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0xFD1BA1EEF7985BB8, p0, p1); }
	static void _0x5BB04BC74A474B47(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x5BB04BC74A474B47, p0, p1); }
	static void _0x9078FB0557364099(Any p0) { return Native::Invoke<void, Any>(0x9078FB0557364099, p0); }
	static Any _0x3E592D0486DEC0F6(Any p0) { return Native::Invoke<Any, Any>(0x3E592D0486DEC0F6, p0); }
	static Any _0x29FCE825613FEFCA(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x29FCE825613FEFCA, p0, p1); }
	static void _0x0D497AA69059FE40(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x0D497AA69059FE40, p0, p1); }
	static void _0xD7D2F45C56A4F4DF(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0xD7D2F45C56A4F4DF, p0, p1, p2); }
	static Any _0x8AC1D721B2097B6E() { return Native::Invoke<Any>(0x8AC1D721B2097B6E); }
	static void _0x1D23D3F70606D788(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x1D23D3F70606D788, p0, p1); }
	static Any _0xEC9A1261BF0CE510(Any p0) { return Native::Invoke<Any, Any>(0xEC9A1261BF0CE510, p0); }
	static Any _0xFB4891BD7578CDC1(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0xFB4891BD7578CDC1, p0, p1); }
	static Any _0xBD0E4F52F6D95242(Any p0) { return Native::Invoke<Any, Any>(0xBD0E4F52F6D95242, p0); }
	static Any _0x137772000DAF42C5() { return Native::Invoke<Any>(0x137772000DAF42C5); }
	static void _0xFFA1594703ED27CA(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xFFA1594703ED27CA, p0, p1); }
	static void _0xBC6DF00D7A4A6819(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any, Any, Any, Any>(0xBC6DF00D7A4A6819, p0, p1, p2, p3, p4, p5, p6, p7, p8); }
	static void _0xD710A5007C2AC539(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0xD710A5007C2AC539, p0, p1, p2); }
	static void _0xA2B8E47442C76CEC(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xA2B8E47442C76CEC, p0, p1); }
	static Any _0xA622E66EEE92A08D(Any p0) { return Native::Invoke<Any, Any>(0xA622E66EEE92A08D, p0); }
	static Any _0xCCB97B51893C662F(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0xCCB97B51893C662F, p0, p1); }
	static Any _0x90403E8107B60E81(Any p0) { return Native::Invoke<Any, Any>(0x90403E8107B60E81, p0); }
	static Any _0x9B90842304C938A7() { return Native::Invoke<Any>(0x9B90842304C938A7); }
	static void _0xCC8CA3E88256E58F(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any>(0xCC8CA3E88256E58F, p0, p1, p2, p3, p4, p5); }
	static void _0xCB1A3864C524F784(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xCB1A3864C524F784, p0, p1); }
	static void _0xFA0D206B489A6846(Any p0, Any p1, Any p2, Any p3, Any p4) { return Native::Invoke<void, Any, Any, Any, Any, Any>(0xFA0D206B489A6846, p0, p1, p2, p3, p4); }
	static Any _0xA4AC05B1A364EBC5(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(0xA4AC05B1A364EBC5, p0, p1, p2); }
	static void _0x1298B3D8E4C2409F(Any p0) { return Native::Invoke<void, Any>(0x1298B3D8E4C2409F, p0); }
	static Any _0xA274F51EF7E34B95(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0xA274F51EF7E34B95, p0, p1); }
	static Any _0xC2EF407645BEECDC() { return Native::Invoke<Any>(0xC2EF407645BEECDC); }
	static void _0x1902C4CFCC5BE57C(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x1902C4CFCC5BE57C, p0, p1); }
	static void _0xFA742B82D093D848(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0xFA742B82D093D848, p0, p1, p2); }
	static Any _0x30569F348D126A5A(Any p0) { return Native::Invoke<Any, Any>(0x30569F348D126A5A, p0); }
	static void _0xA2F8B3B5FEDFC100(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xA2F8B3B5FEDFC100, p0, p1); }
	static void _0x66FF395445A88A6E(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0x66FF395445A88A6E, p0, p1, p2); }
	static Any _0xC0E880B7A441164D(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0xC0E880B7A441164D, p0, p1); }
	static Any _0x4FF3C2B4E6A196C1(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(0x4FF3C2B4E6A196C1, p0, p1, p2); }
	static Any _0x62FDF4E678E40CC6() { return Native::Invoke<Any>(0x62FDF4E678E40CC6); }
	static void _0x0BFA1BD465CDFEFD(Any p0) { return Native::Invoke<void, Any>(0x0BFA1BD465CDFEFD, p0); }
	static Any _0x370A973252741AC4() { return Native::Invoke<Any>(0x370A973252741AC4); }
	static void _0x283978A15512B2FE(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x283978A15512B2FE, p0, p1); }
	static Any _0x10C70A515BC03707() { return Native::Invoke<Any>(0x10C70A515BC03707); }
	static void _0x77FF8D35EEC6BBC4(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0x77FF8D35EEC6BBC4, p0, p1, p2); }
	static Any _0xA5BAE410B03E7371() { return Native::Invoke<Any>(0xA5BAE410B03E7371); }
	static Any _0x98082246107A6ACF(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x98082246107A6ACF, p0, p1); }
	static void _0x851966E1E35AF491(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x851966E1E35AF491, p0, p1); }
	static void _0x4EFC1F8FF1AD94DE(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any>(0x4EFC1F8FF1AD94DE, p0, p1, p2, p3, p4, p5); }
	static Any _0xF97C34C33487D569(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0xF97C34C33487D569, p0, p1); }
	static Any _0xC0940AC858C1E126(Any p0) { return Native::Invoke<Any, Any>(0xC0940AC858C1E126, p0); }
	static Any _0x43E4DA469541A9C9(Any p0) { return Native::Invoke<Any, Any>(0x43E4DA469541A9C9, p0); }
	static Any _0x0BCD4091C8EABA42(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9) { return Native::Invoke<Any, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any>(0x0BCD4091C8EABA42, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); }
	static void _0x3972F78A78B5D9DF(Any p0) { return Native::Invoke<void, Any>(0x3972F78A78B5D9DF, p0); }
	static Any _0x13154A76CE0CF9AB(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x13154A76CE0CF9AB, p0, p1); }
	static Any _0x27E8A84C12B0B7D1(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(0x27E8A84C12B0B7D1, p0, p1, p2); }
	static Any _0x273915CE30780986(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x273915CE30780986, p0, p1); }
	static void _0x4592B8B9B0EF5F48(Any p0) { return Native::Invoke<void, Any>(0x4592B8B9B0EF5F48, p0); }
	static Any _0x3FCBB5FCFD968698(Any p0, Any p1, Any p2, Any p3, Any p4) { return Native::Invoke<Any, Any, Any, Any, Any, Any>(0x3FCBB5FCFD968698, p0, p1, p2, p3, p4); }
	static Any _0x91FE941F9FCFB702(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x91FE941F9FCFB702, p0, p1); }
	static Any _0xF6D9E1F3560CBF8E(Any p0, Any p1, Any p2, Any p3, Any p4) { return Native::Invoke<Any, Any, Any, Any, Any, Any>(0xF6D9E1F3560CBF8E, p0, p1, p2, p3, p4); }
	static void _0x13E7320C762F0477(Any p0) { return Native::Invoke<void, Any>(0x13E7320C762F0477, p0); }
	static Any _0xB0B2C6D170B0E8E5(Any p0) { return Native::Invoke<Any, Any>(0xB0B2C6D170B0E8E5, p0); }
	static Any _0x93FFD92F05EC32FD(Any p0) { return Native::Invoke<Any, Any>(0x93FFD92F05EC32FD, p0); }
	static Any _0x9641A9A20310F6B8(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { return Native::Invoke<Any, Any, Any, Any, Any, Any, Any, Any, Any>(0x9641A9A20310F6B8, p0, p1, p2, p3, p4, p5, p6, p7); }
	static Any _0x610438375E5D1801(Any p0) { return Native::Invoke<Any, Any>(0x610438375E5D1801, p0); }
	static Any _0xB25E57FC8E37114D(Any p0) { return Native::Invoke<Any, Any>(0xB25E57FC8E37114D, p0); }
	static Any _0xEAF682A14F8E5F53(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { return Native::Invoke<Any, Any, Any, Any, Any, Any, Any, Any, Any, Any>(0xEAF682A14F8E5F53, p0, p1, p2, p3, p4, p5, p6, p7, p8); }
	static Any _0x74F512E29CB717E2(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<Any, Any, Any, Any, Any>(0x74F512E29CB717E2, p0, p1, p2, p3); }
	static void _0x314C5465195F3B30(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x314C5465195F3B30, p0, p1); }
	static void _0x0FB1BA7FF73B41E1(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0x0FB1BA7FF73B41E1, p0, p1, p2); }
	static Any _0xB292203008EBBAAC(Any p0) { return Native::Invoke<Any, Any>(0xB292203008EBBAAC, p0); }
	static Any _0xD4D403EA031F351C() { return Native::Invoke<Any>(0xD4D403EA031F351C); }
	static Any _0x0CEEB6F4780B1F2F(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x0CEEB6F4780B1F2F, p0, p1); }
	static Any _0xA73F50E8796150D5() { return Native::Invoke<Any>(0xA73F50E8796150D5); }
	static void _0xC412AA1C73111FE0(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<void, Any, Any, Any, Any>(0xC412AA1C73111FE0, p0, p1, p2, p3); }
	static void _0x627F7F3A0C4C51FF(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x627F7F3A0C4C51FF, p0, p1); }
	static void _0x13A210949FCBD92B(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x13A210949FCBD92B, p0, p1); }
	static Any _0xD049FDAF089FDDB0() { return Native::Invoke<Any>(0xD049FDAF089FDDB0); }
	static Any _0xDD9540E7B1C9714F() { return Native::Invoke<Any>(0xDD9540E7B1C9714F); }
	static void _0x55546004A244302A(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x55546004A244302A, p0, p1); }
	static void _0xDE1B1907A83A1550(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xDE1B1907A83A1550, p0, p1); }
	static Any _0x95B8E397B8F4360F(Any p0) { return Native::Invoke<Any, Any>(0x95B8E397B8F4360F, p0); }
	static void _0xEF5A3D2285D8924B(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xEF5A3D2285D8924B, p0, p1); }
	static Any _0x825F6DD559A0895B(Any p0) { return Native::Invoke<Any, Any>(0x825F6DD559A0895B, p0); }
	static void _0x345C9F993A8AB4A4(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x345C9F993A8AB4A4, p0, p1); }
	static Any _0xE7687EB2F634ABF0(Any p0) { return Native::Invoke<Any, Any>(0xE7687EB2F634ABF0, p0); }
	static Any _0xC3D4B754C0E86B9E(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0xC3D4B754C0E86B9E, p0, p1); }
	static Any _0x775A1CA7893AA8B5(Any p0) { return Native::Invoke<Any, Any>(0x775A1CA7893AA8B5, p0); }
	static Any _0x22F2A386D43048A9(Any p0) { return Native::Invoke<Any, Any>(0x22F2A386D43048A9, p0); }
	static Any _0xCB42AFE2B613EE55(Any p0) { return Native::Invoke<Any, Any>(0xCB42AFE2B613EE55, p0); }
	static void _0x36513AFFC703C60D(Any p0) { return Native::Invoke<void, Any>(0x36513AFFC703C60D, p0); }
	static void _0x675680D089BFA21F(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x675680D089BFA21F, p0, p1); }
	static Any _0xFC3B580C4380B5B7(Any p0) { return Native::Invoke<Any, Any>(0xFC3B580C4380B5B7, p0); }
	static void _0xEA8763E505AFD49A(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0xEA8763E505AFD49A, p0, p1, p2); }
	static void _0xE4EF4382E22C780C(Any p0) { return Native::Invoke<void, Any>(0xE4EF4382E22C780C, p0); }
	static void _0xD61FCF9FCFD515B7(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0xD61FCF9FCFD515B7, p0, p1, p2); }
	static void _0x8D9DB115FBA8E23D(Any p0) { return Native::Invoke<void, Any>(0x8D9DB115FBA8E23D, p0); }
	static Any _0x16F2C8C084AB2092(Any p0) { return Native::Invoke<Any, Any>(0x16F2C8C084AB2092, p0); }
	static Any _0xFEAB3DB4EDB236EB() { return Native::Invoke<Any>(0xFEAB3DB4EDB236EB); }
	static Any _0xF6A8C4B4A11AE89C(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return Native::Invoke<Any, Any, Any, Any, Any, Any, Any>(0xF6A8C4B4A11AE89C, p0, p1, p2, p3, p4, p5); }
	static void _0xE4C95E0AE31C6512(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xE4C95E0AE31C6512, p0, p1); }
	static Any _0x1F714E7A9DADFC42(Any p0) { return Native::Invoke<Any, Any>(0x1F714E7A9DADFC42, p0); }
	static void _0x5D4CD22A8C82A81A(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x5D4CD22A8C82A81A, p0, p1); }
	static void _0xBF567DF2BEF211A6(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xBF567DF2BEF211A6, p0, p1); }
	static Any _0x4F5EBE70081E5A20(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { return Native::Invoke<Any, Any, Any, Any, Any, Any, Any, Any, Any, Any>(0x4F5EBE70081E5A20, p0, p1, p2, p3, p4, p5, p6, p7, p8); }
	static void _0x87247BC60B60BED8(Any p0) { return Native::Invoke<void, Any>(0x87247BC60B60BED8, p0); }
	static Any _0x57779B55B83E2BEA(Any p0) { return Native::Invoke<Any, Any>(0x57779B55B83E2BEA, p0); }
	static Any _0x7EE3A8660F38797E(Any p0) { return Native::Invoke<Any, Any>(0x7EE3A8660F38797E, p0); }
	static Any _0xA180FBD502A03125(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(0xA180FBD502A03125, p0, p1, p2); }
	static Any _0xC5E7204F322E49EB(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(0xC5E7204F322E49EB, p0, p1, p2); }
	static void _0x0B46E25761519058(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0x0B46E25761519058, p0, p1, p2); }
	static Any _0x6BEFAA907B076859() { return Native::Invoke<Any>(0x6BEFAA907B076859); }
	static void _0x92DAABA2C1C10B0E(Any p0) { return Native::Invoke<void, Any>(0x92DAABA2C1C10B0E, p0); }
	static void _0x8472A1789478F82F(Any p0) { return Native::Invoke<void, Any>(0x8472A1789478F82F, p0); }
	static Any _0x31DC8D3F216D8509(Any p0) { return Native::Invoke<Any, Any>(0x31DC8D3F216D8509, p0); }
	static Any _0x86BB5FF45F193A02(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return Native::Invoke<Any, Any, Any, Any, Any, Any, Any, Any>(0x86BB5FF45F193A02, p0, p1, p2, p3, p4, p5, p6); }
	static void _0x96C349DE04C49011(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x96C349DE04C49011, p0, p1); }
	static void _0x3329AAE2882FC8E4(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0x3329AAE2882FC8E4, p0, p1, p2); }
	static void _0x6C76BC24F8BB709A(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0x6C76BC24F8BB709A, p0, p1, p2); }
	static void _0x057C4F092E2298BE(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0x057C4F092E2298BE, p0, p1, p2); }
	static void _0x1ED8588524AC9BE1(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0x1ED8588524AC9BE1, p0, p1, p2); }
	static void _0x2DF59FFE6FFD6044(Any p0, Any p1, Any p2, Any p3, Any p4) { return Native::Invoke<void, Any, Any, Any, Any, Any>(0x2DF59FFE6FFD6044, p0, p1, p2, p3, p4); }
	static void _0xF2EA041F1146D75B(Any p0, Any p1, Any p2, Any p3, Any p4) { return Native::Invoke<void, Any, Any, Any, Any, Any>(0xF2EA041F1146D75B, p0, p1, p2, p3, p4); }
	static void _0x253A63B5BADBC398(Any p0, Any p1, Any p2, Any p3, Any p4) { return Native::Invoke<void, Any, Any, Any, Any, Any>(0x253A63B5BADBC398, p0, p1, p2, p3, p4); }
	static Any _0xB63B9178D0F58D82() { return Native::Invoke<Any>(0xB63B9178D0F58D82); }
	static void _0xC991EF46FE323867(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xC991EF46FE323867, p0, p1); }
	static void _0x1F8215D0E446F593(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0x1F8215D0E446F593, p0, p1, p2); }
	static Any _0xFB1E7998B8595825() { return Native::Invoke<Any>(0xFB1E7998B8595825); }
	static void _0x53BA7D96B9A421D9(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x53BA7D96B9A421D9, p0, p1); }
	static void _0x96C7B659854DE629(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x96C7B659854DE629, p0, p1); }
	static Any _0xDDCF6FEA5D7ACC17() { return Native::Invoke<Any>(0xDDCF6FEA5D7ACC17); }
	static Any _0x2A5AFD2B8381A6E1() { return Native::Invoke<Any>(0x2A5AFD2B8381A6E1); }
	static void _0x5B73975B4F12F7F3(Any p0, Any p1, Any p2, Any p3, Any p4) { return Native::Invoke<void, Any, Any, Any, Any, Any>(0x5B73975B4F12F7F3, p0, p1, p2, p3, p4); }
	static Any _0xA9C28516A6DC9D56(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return Native::Invoke<Any, Any, Any, Any, Any, Any, Any>(0xA9C28516A6DC9D56, p0, p1, p2, p3, p4, p5); }
	static Any _0xE7998FEC53A33BBE(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return Native::Invoke<Any, Any, Any, Any, Any, Any, Any>(0xE7998FEC53A33BBE, p0, p1, p2, p3, p4, p5); }
	static void _0x5F53010C4C3F6BAF(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<void, Any, Any, Any, Any>(0x5F53010C4C3F6BAF, p0, p1, p2, p3); }
	static void _0xCB9401F918CB0F75(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<void, Any, Any, Any, Any>(0xCB9401F918CB0F75, p0, p1, p2, p3); }
	static void _0x437C08DB4FEBE2BD(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<void, Any, Any, Any, Any>(0x437C08DB4FEBE2BD, p0, p1, p2, p3); }
	static void _0xA762C9D6CF165E0D(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<void, Any, Any, Any, Any>(0xA762C9D6CF165E0D, p0, p1, p2, p3); }
	static void _0x81B75428A7813E67(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x81B75428A7813E67, p0, p1); }
	static void _0xA6F67BEC53379A32(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xA6F67BEC53379A32, p0, p1); }
	static void _0x411189E51B8020BA(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x411189E51B8020BA, p0, p1); }
	static void _0x0E17378642156790(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x0E17378642156790, p0, p1); }
	static Any _0x498F2E77982D6945(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x498F2E77982D6945, p0, p1); }
	static Any _0x56E58D4D118FB45E(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x56E58D4D118FB45E, p0, p1); }
	static Any _0xBF5E791BBBF90A3C(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0xBF5E791BBBF90A3C, p0, p1); }
	static Any _0xB71B91B398F8F067(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0xB71B91B398F8F067, p0, p1); }
	static Any _0x4912DFE492DB98CD(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x4912DFE492DB98CD, p0, p1); }
	static Any _0xA29FD00D45311EB7(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0xA29FD00D45311EB7, p0, p1); }
	static Any _0x7FF72DE061DF55E2() { return Native::Invoke<Any>(0x7FF72DE061DF55E2); }
	static Any _0xA31D350D66FA1855() { return Native::Invoke<Any>(0xA31D350D66FA1855); }
	static Any _0xAF61B3CD8C3B82C3() { return Native::Invoke<Any>(0xAF61B3CD8C3B82C3); }
	static void _0xEEDC9B29314B2733(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any>(0xEEDC9B29314B2733, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); }
	static void _0x5C90E20C25E6D83C(Any p0) { return Native::Invoke<void, Any>(0x5C90E20C25E6D83C, p0); }
	static void _0x10F96086123B939F(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0x10F96086123B939F, p0, p1, p2); }
	static void _0x3FDBB99EFD8CE4AF(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0x3FDBB99EFD8CE4AF, p0, p1, p2); }
	static void _0x7E8F9949B7AABBF0(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0x7E8F9949B7AABBF0, p0, p1, p2); }
	static Any _0x5DA36CCCB63C0895(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(0x5DA36CCCB63C0895, p0, p1, p2); }
	static void _0xD3A7B003ED343FD9(Any p0, Any p1, Any p2, Any p3, Any p4) { return Native::Invoke<void, Any, Any, Any, Any, Any>(0xD3A7B003ED343FD9, p0, p1, p2, p3, p4); }
	static void _0xDF631E4BCE1B1FC4(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<void, Any, Any, Any, Any>(0xDF631E4BCE1B1FC4, p0, p1, p2, p3); }
	static void _0x66B957AAC2EAAEAB(Any p0, Any p1, Any p2, Any p3, Any p4) { return Native::Invoke<void, Any, Any, Any, Any, Any>(0x66B957AAC2EAAEAB, p0, p1, p2, p3, p4); }
	static Any _0x77BA37622E22023B() { return Native::Invoke<Any>(0x77BA37622E22023B); }
	static Any _0xFFCC2DB2D9953401(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(0xFFCC2DB2D9953401, p0, p1, p2); }
	static Any _0x6243635AF2F1B826(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<Any, Any, Any, Any, Any>(0x6243635AF2F1B826, p0, p1, p2, p3); }
	static Any _0x5FF9A878C3D115B8(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(0x5FF9A878C3D115B8, p0, p1, p2); }
	static Any _0x31B2E7F2E3C58B89(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<Any, Any, Any, Any, Any>(0x31B2E7F2E3C58B89, p0, p1, p2, p3); }
	static Any _0x63342C50EC115CE8() { return Native::Invoke<Any>(0x63342C50EC115CE8); }
	static Any _0xAAB86462966168CE(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0xAAB86462966168CE, p0, p1); }
	static Any _0x7E02E4218D916B94(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(0x7E02E4218D916B94, p0, p1, p2); }
	static Any _0x59BD177A1A48600A() { return Native::Invoke<Any>(0x59BD177A1A48600A); }
	static void _0xD103F6DBB5442BE8(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xD103F6DBB5442BE8, p0, p1); }
	static void _0xFCA8FB9E15FA80D3(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xFCA8FB9E15FA80D3, p0, p1); }
	static void _0x4A48B6E03BABB4AC(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x4A48B6E03BABB4AC, p0, p1); }
	static Any _0xC2745D9261664901() { return Native::Invoke<Any>(0xC2745D9261664901); }
	static Any _0x19B14E04B009E28B() { return Native::Invoke<Any>(0x19B14E04B009E28B); }
	static Any _0xF917F92BF22ECBAB() { return Native::Invoke<Any>(0xF917F92BF22ECBAB); }
	static void _0x49DADFC4CD808B0A(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0x49DADFC4CD808B0A, p0, p1, p2); }
	static Any _0xBA208A8D6399A3AC(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0xBA208A8D6399A3AC, p0, p1); }
	static void _0x704C908E9C405136(Any p0) { return Native::Invoke<void, Any>(0x704C908E9C405136, p0); }
	static Any _0x7406C71F4AC2FFCC() { return Native::Invoke<Any>(0x7406C71F4AC2FFCC); }
	static Any _0x52250B92EA70BE3D(Any p0) { return Native::Invoke<Any, Any>(0x52250B92EA70BE3D, p0); }
	static void _0xCE6B874286D640BB(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xCE6B874286D640BB, p0, p1); }
	static Any _0x7BCC6087D130312A(Any p0) { return Native::Invoke<Any, Any>(0x7BCC6087D130312A, p0); }
	static void _0xCE7A6C1D5CDE1F9D(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<void, Any, Any, Any, Any>(0xCE7A6C1D5CDE1F9D, p0, p1, p2, p3); }
	static void _0x604E1010E3162E86(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0x604E1010E3162E86, p0, p1, p2); }
	static void _0xE8ABE3B73FC7FE17(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<void, Any, Any, Any, Any>(0xE8ABE3B73FC7FE17, p0, p1, p2, p3); }
	static void _0x3A50753042B6891B(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x3A50753042B6891B, p0, p1); }
	static Any _0x932786CE3C76477C() { return Native::Invoke<Any>(0x932786CE3C76477C); }
	static Any _0x095C2277FED731DB(Any p0) { return Native::Invoke<Any, Any>(0x095C2277FED731DB, p0); }
	static void _0x09171A6F8FDE5DC1(Any p0, Any p1, Any p2, Any p3, Any p4) { return Native::Invoke<void, Any, Any, Any, Any, Any>(0x09171A6F8FDE5DC1, p0, p1, p2, p3, p4); }
	static void _0x09E378C52B1433B5(Any p0, Any p1, Any p2, Any p3, Any p4) { return Native::Invoke<void, Any, Any, Any, Any, Any>(0x09E378C52B1433B5, p0, p1, p2, p3, p4); }
	static Any _0x6507AC3BD7C99009() { return Native::Invoke<Any>(0x6507AC3BD7C99009); }
	static Any _0x2942457417A5FD24() { return Native::Invoke<Any>(0x2942457417A5FD24); }
	static Any _0xA5950E16B8F31052() { return Native::Invoke<Any>(0xA5950E16B8F31052); }
	static Any _0xEBAAC9A750E7563B() { return Native::Invoke<Any>(0xEBAAC9A750E7563B); }
}
namespace _NAMESPACE48
{
	static void _0x63AA2B8EB087886A(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x63AA2B8EB087886A, p0, p1); }
	static Any _0xA00DF706C60173D1(Any p0) { return Native::Invoke<Any, Any>(0xA00DF706C60173D1, p0); }
	static void _0x8BC555034A5A5E8C(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x8BC555034A5A5E8C, p0, p1); }
	static Any _0x70605812ABC9FF0F() { return Native::Invoke<Any>(0x70605812ABC9FF0F); }
	static Any _0xDC9655D47DEC0353(Any p0) { return Native::Invoke<Any, Any>(0xDC9655D47DEC0353, p0); }
	static void _0x2DF89CD2ED1D0BDE(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x2DF89CD2ED1D0BDE, p0, p1); }
	static void _0x535A66AAD2BF68F9(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x535A66AAD2BF68F9, p0, p1); }
	static Any _0xCEB40B678E403759(Any p0) { return Native::Invoke<Any, Any>(0xCEB40B678E403759, p0); }
	static void _0x187D65F3AEC5D679(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x187D65F3AEC5D679, p0, p1); }
	static void _0x8B44273A92CD406C(Any p0) { return Native::Invoke<void, Any>(0x8B44273A92CD406C, p0); }
	static void _0xE0E65E0D261F7507(Any p0) { return Native::Invoke<void, Any>(0xE0E65E0D261F7507, p0); }
	static Any _0x112DDF56300BC6E5(Any p0) { return Native::Invoke<Any, Any>(0x112DDF56300BC6E5, p0); }
	static Any _0x4F76E3676583D951(Any p0) { return Native::Invoke<Any, Any>(0x4F76E3676583D951, p0); }
	static Any _0x800DF3FC913355F3(Any p0) { return Native::Invoke<Any, Any>(0x800DF3FC913355F3, p0); }
	static void _0xFC77C5B44D5FF7C0(Any p0) { return Native::Invoke<void, Any>(0xFC77C5B44D5FF7C0, p0); }
	static Any _0x5EE6FCCC9C832CA2(Any p0) { return Native::Invoke<Any, Any>(0x5EE6FCCC9C832CA2, p0); }
	static void _0x59C7AD6FEA2AC449(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<void, Any, Any, Any, Any>(0x59C7AD6FEA2AC449, p0, p1, p2, p3); }
	static void _0xBB68908CD11AEBDC(Any p0) { return Native::Invoke<void, Any>(0xBB68908CD11AEBDC, p0); }
	static Any _0x94995829ED15A598(Any p0) { return Native::Invoke<Any, Any>(0x94995829ED15A598, p0); }
	static Any _0x31C70A716CAE1FEE(Any p0) { return Native::Invoke<Any, Any>(0x31C70A716CAE1FEE, p0); }
	static Any _0x32A1E3B83D501096(Any p0) { return Native::Invoke<Any, Any>(0x32A1E3B83D501096, p0); }
	static Any _0xF8DE7154F7D1458F(Any p0) { return Native::Invoke<Any, Any>(0xF8DE7154F7D1458F, p0); }
	static void _0x669C25840C6F7AE2(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x669C25840C6F7AE2, p0, p1); }
	static void _0x631CD2D77FDC0316(Any p0) { return Native::Invoke<void, Any>(0x631CD2D77FDC0316, p0); }
	static void _0x0B3A99AB6713AA52(Any p0) { return Native::Invoke<void, Any>(0x0B3A99AB6713AA52, p0); }
	static Any _0xEB98B38CA60742D7(Any p0) { return Native::Invoke<Any, Any>(0xEB98B38CA60742D7, p0); }
	static Any _0x49A8C2CD97815215(Any p0) { return Native::Invoke<Any, Any>(0x49A8C2CD97815215, p0); }
	static void _0xD4B614179BCD0654(Any p0) { return Native::Invoke<void, Any>(0xD4B614179BCD0654, p0); }
	static void _0x406808610220405B(Any p0) { return Native::Invoke<void, Any>(0x406808610220405B, p0); }
	static void _0xA2B18FF8D39F6D87(Any p0) { return Native::Invoke<void, Any>(0xA2B18FF8D39F6D87, p0); }
	static Any _0xE4C51A8A3BD1664C(Any p0) { return Native::Invoke<Any, Any>(0xE4C51A8A3BD1664C, p0); }
	static void _0x8AE4EFA464DAE42D(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x8AE4EFA464DAE42D, p0, p1); }
	static void _0xA4DCB3F0DD7488BD(Any p0, Any p1, Any p2, Any p3, Any p4) { return Native::Invoke<void, Any, Any, Any, Any, Any>(0xA4DCB3F0DD7488BD, p0, p1, p2, p3, p4); }
	static void _0xD95D777F828B2BBB(Any p0) { return Native::Invoke<void, Any>(0xD95D777F828B2BBB, p0); }
	static void _0x92690B0822493CE0() { return Native::Invoke<void>(0x92690B0822493CE0); }
	static void _0xEFC5C6670E0B99BA() { return Native::Invoke<void>(0xEFC5C6670E0B99BA); }
	static void _0x2E957AA81F2C61C9() { return Native::Invoke<void>(0x2E957AA81F2C61C9); }
	static void _0xB173599D61FAEB31() { return Native::Invoke<void>(0xB173599D61FAEB31); }
	static Any _0x08FC896D2CB31FCC(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x08FC896D2CB31FCC, p0, p1); }
	static Any _0x0CADC3A977997472(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x0CADC3A977997472, p0, p1); }
	static void _0x7B204F88F6C3D287(Any p0) { return Native::Invoke<void, Any>(0x7B204F88F6C3D287, p0); }
	static void _0xFCC6DB8DBE709BC8(Any p0) { return Native::Invoke<void, Any>(0xFCC6DB8DBE709BC8, p0); }
	static void _0xA8C406C2A56EDC16(Any p0) { return Native::Invoke<void, Any>(0xA8C406C2A56EDC16, p0); }
	static void _0x4F81EAD1DE8FA19B(Any p0) { return Native::Invoke<void, Any>(0x4F81EAD1DE8FA19B, p0); }
	static void _0x6759BEE6762E140B(Any p0) { return Native::Invoke<void, Any>(0x6759BEE6762E140B, p0); }
	static void _0xB65E7F733956CF25(Any p0) { return Native::Invoke<void, Any>(0xB65E7F733956CF25, p0); }
	static Any _0x4AFC7288C77238B3(Any p0) { return Native::Invoke<Any, Any>(0x4AFC7288C77238B3, p0); }
	static Any _0xA8120EBEAF290C7A(Any p0) { return Native::Invoke<Any, Any>(0xA8120EBEAF290C7A, p0); }
	static Any _0x69786495C92A3044(Any p0) { return Native::Invoke<Any, Any>(0x69786495C92A3044, p0); }
	static Any _0xEC254C2C9B0F08F1(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0xEC254C2C9B0F08F1, p0, p1); }
	static Any _0x9C7F95946E304778(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x9C7F95946E304778, p0, p1); }
}
namespace _NAMESPACE49
{
	static void _0x7A1BD123E5CDB6E5() { return Native::Invoke<void>(0x7A1BD123E5CDB6E5); }
	static void _0x9D16896F0DBE78A2(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<void, Any, Any, Any, Any>(0x9D16896F0DBE78A2, p0, p1, p2, p3); }
	static void _0x065887B694359799(Any p0) { return Native::Invoke<void, Any>(0x065887B694359799, p0); }
	static Any _0xFC9806DA9A460093() { return Native::Invoke<Any>(0xFC9806DA9A460093); }
	static void _0xB03140014ACA6C40(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xB03140014ACA6C40, p0, p1); }
	static void _0xE225CEF1901F6108(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xE225CEF1901F6108, p0, p1); }
	static Any _0x8DE104BEC243A73B() { return Native::Invoke<Any>(0x8DE104BEC243A73B); }
	static void _0xEFB5F34CC0953B27(Any p0) { return Native::Invoke<void, Any>(0xEFB5F34CC0953B27, p0); }
	static Any _0xBA2C49EA6A8D24FF() { return Native::Invoke<Any>(0xBA2C49EA6A8D24FF); }
	static Any _0x2E545965DF98D476(Any p0) { return Native::Invoke<Any, Any>(0x2E545965DF98D476, p0); }
	static void _0xF5622FA6ACFCA7DB(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xF5622FA6ACFCA7DB, p0, p1); }
	static Any _0x3CA5E58C9731A16B() { return Native::Invoke<Any>(0x3CA5E58C9731A16B); }
	static void _0xDC0A1F0ECEC9F0C0(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xDC0A1F0ECEC9F0C0, p0, p1); }
	static Any _0x5A79220F6D38D7C3(Any p0) { return Native::Invoke<Any, Any>(0x5A79220F6D38D7C3, p0); }
	static Any _0xCFDA2518F322D836(Any p0) { return Native::Invoke<Any, Any>(0xCFDA2518F322D836, p0); }
	static Any _0x1F56FB3FDB4EAF65(Any p0) { return Native::Invoke<Any, Any>(0x1F56FB3FDB4EAF65, p0); }
	static void _0x291CC21D1FB6790E(Any p0) { return Native::Invoke<void, Any>(0x291CC21D1FB6790E, p0); }
	static Any _0x8245C1F3262F4AC2() { return Native::Invoke<Any>(0x8245C1F3262F4AC2); }
	static Any _0xFB7CF1DE938A3E22() { return Native::Invoke<Any>(0xFB7CF1DE938A3E22); }
	static Any _0xB6E1A185C2B9319A() { return Native::Invoke<Any>(0xB6E1A185C2B9319A); }
	static Any _0x188313616D184213() { return Native::Invoke<Any>(0x188313616D184213); }
}
namespace PHYSICS
{
	static Object ADD_ROPE(float x, float y, float z, float rotX, float rotY, float rotZ, float length, int ropeType, float maxLength, float minLength, float p10, BOOL p11, BOOL p12, BOOL rigid, float p14, BOOL breakWhenShot, Any* unkPtr, Any p17) { return Native::Invoke<Object, float, float, float, float, float, float, float, int, float, float, float, BOOL, BOOL, BOOL, float, BOOL, Any*, Any>(N::ADD_ROPE, x, y, z, rotX, rotY, rotZ, length, ropeType, maxLength, minLength, p10, p11, p12, rigid, p14, breakWhenShot, unkPtr, p17); }
	static Any _0xE9C59F6809373A99(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10) { return Native::Invoke<Any, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any>(0xE9C59F6809373A99, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); }
	static void DELETE_ROPE(Object* rope) { return Native::Invoke<void, Object*>(N::DELETE_ROPE, rope); }
	static void _0x6076213101A47B3B(Any p0) { return Native::Invoke<void, Any>(0x6076213101A47B3B, p0); }
	static Any DELETE_CHILD_ROPE(Object rope) { return Native::Invoke<Any, Object>(N::DELETE_CHILD_ROPE, rope); }
	static void _0x4CFA2B7FAE115ECB(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any, Any>(0x4CFA2B7FAE115ECB, p0, p1, p2, p3, p4, p5, p6); }
	static BOOL DOES_ROPE_EXIST(Object* rope) { return Native::Invoke<BOOL, Object*>(N::DOES_ROPE_EXIST, rope); }
	static Any _0x79C2BEC82CFD7F7F(Any p0) { return Native::Invoke<Any, Any>(0x79C2BEC82CFD7F7F, p0); }
	static void _0x7A54D82227A139DB(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x7A54D82227A139DB, p0, p1); }
	static void ROPE_DRAW_SHADOW_ENABLED(Object* rope, BOOL toggle) { return Native::Invoke<void, Object*, BOOL>(N::ROPE_DRAW_SHADOW_ENABLED, rope, toggle); }
	static int GET_ROPE_VERTEX_COUNT(Object rope) { return Native::Invoke<int, Object>(N::GET_ROPE_VERTEX_COUNT, rope); }
	static void _0xE54BF2CE6C7D23A9(Any p0, Any p1, Any p2, Any p3, Any p4) { return Native::Invoke<void, Any, Any, Any, Any, Any>(0xE54BF2CE6C7D23A9, p0, p1, p2, p3, p4); }
	static void _0x9C24846D0A4A2776(Any p0) { return Native::Invoke<void, Any>(0x9C24846D0A4A2776, p0); }
	static void _0x0CB16D05E03FB525(Any p0) { return Native::Invoke<void, Any>(0x0CB16D05E03FB525, p0); }
	static void _0xF27F1A8DE4F50A1B(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any, Any>(0xF27F1A8DE4F50A1B, p0, p1, p2, p3, p4, p5, p6); }
	static void _0x21D0890D88DFB0B0(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any>(0x21D0890D88DFB0B0, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); }
	static void ATTACH_ENTITIES_TO_ROPE(Object rope, Entity ent1, Entity ent2, float ent1_x, float ent1_y, float ent1_z, float ent2_x, float ent2_y, float ent2_z, float length, BOOL p10, BOOL p11, char* boneName1, char* boneName2, Any p14, Any p15, Any p16, Any p17, Any p18, Any p19, Any p20) { return Native::Invoke<void, Object, Entity, Entity, float, float, float, float, float, float, float, BOOL, BOOL, char*, char*, Any, Any, Any, Any, Any, Any, Any>(N::ATTACH_ENTITIES_TO_ROPE, rope, ent1, ent2, ent1_x, ent1_y, ent1_z, ent2_x, ent2_y, ent2_z, length, p10, p11, boneName1, boneName2, p14, p15, p16, p17, p18, p19, p20); }
	static void _0x462FF2A432733A44(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any>(0x462FF2A432733A44, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); }
	static void _0xE9CD9A67834985A7(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any>(0xE9CD9A67834985A7, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); }
	static void _0x69C810B72291D831(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any, Any>(0x69C810B72291D831, p0, p1, p2, p3, p4, p5, p6); }
	static void _0xB7469CB9AC3C0FD4(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any, Any, Any>(0xB7469CB9AC3C0FD4, p0, p1, p2, p3, p4, p5, p6, p7); }
	static void _0xC64E7A62632AD2FE(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any, Any, Any>(0xC64E7A62632AD2FE, p0, p1, p2, p3, p4, p5, p6, p7); }
	static Any _0x9B4F7E3E4F9C77B3(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x9B4F7E3E4F9C77B3, p0, p1); }
	static void DETACH_ROPE_FROM_ENTITY(Object rope, Entity entity) { return Native::Invoke<void, Object, Entity>(N::DETACH_ROPE_FROM_ENTITY, rope, entity); }
	static void _0x06AADE17334F7A40(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<void, Any, Any, Any, Any>(0x06AADE17334F7A40, p0, p1, p2, p3); }
	static void _0x0348469DAA17576C(Any p0) { return Native::Invoke<void, Any>(0x0348469DAA17576C, p0); }
	static void _0x6EA0E93CFFA472CC(Any p0) { return Native::Invoke<void, Any>(0x6EA0E93CFFA472CC, p0); }
	static void _0xBDDA142759307528(Any p0) { return Native::Invoke<void, Any>(0xBDDA142759307528, p0); }
	static void _0x32F4DBFDFCCCC735(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0x32F4DBFDFCCCC735, p0, p1, p2); }
	static void _0xF8CA39D5C0D1D9A1(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xF8CA39D5C0D1D9A1, p0, p1); }
	static void _0xEAF529446488EB18(Any p0) { return Native::Invoke<void, Any>(0xEAF529446488EB18, p0); }
	static void _0x31160EC47E7C9549(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x31160EC47E7C9549, p0, p1); }
	static void _0x5E981C764DF33117(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x5E981C764DF33117, p0, p1); }
	static void _0xDC57A637A20006ED(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xDC57A637A20006ED, p0, p1); }
	static void _0xFB9153A54AC713E8(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xFB9153A54AC713E8, p0, p1); }
	static void _0xD699E688B49C0FD2(Any p0, Any p1, Any p2, Any p3, Any p4) { return Native::Invoke<void, Any, Any, Any, Any, Any>(0xD699E688B49C0FD2, p0, p1, p2, p3, p4); }
	static void _0xBB3E9B073E66C3C9(Any p0, Any p1, Any p2, Any p3, Any p4) { return Native::Invoke<void, Any, Any, Any, Any, Any>(0xBB3E9B073E66C3C9, p0, p1, p2, p3, p4); }
	static void _0x522FA3F490E2F7AC(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x522FA3F490E2F7AC, p0, p1); }
	static void _0x3900491C0D61ED4B(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x3900491C0D61ED4B, p0, p1); }
	static void _0xC89E7410A93AC19A(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xC89E7410A93AC19A, p0, p1); }
	static void _0x1D97DA8ACB5D2582(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x1D97DA8ACB5D2582, p0, p1); }
	static void _0x3C6490D940FF5D0B(Any p0, Any p1, Any p2, Any p3, Any p4) { return Native::Invoke<void, Any, Any, Any, Any, Any>(0x3C6490D940FF5D0B, p0, p1, p2, p3, p4); }
	static Any GET_ROPE_LAST_VERTEX_COORD(Object rope) { return Native::Invoke<Any, Object>(N::GET_ROPE_LAST_VERTEX_COORD, rope); }
	static Any GET_ROPE_VERTEX_COORD(Object rope, int vertex) { return Native::Invoke<Any, Object, int>(N::GET_ROPE_VERTEX_COORD, rope, vertex); }
	static void START_ROPE_WINDING(Object rope) { return Native::Invoke<void, Object>(N::START_ROPE_WINDING, rope); }
	static void STOP_ROPE_WINDING(Object rope) { return Native::Invoke<void, Object>(N::STOP_ROPE_WINDING, rope); }
	static void START_ROPE_UNWINDING_FRONT(Object rope) { return Native::Invoke<void, Object>(N::START_ROPE_UNWINDING_FRONT, rope); }
	static void STOP_ROPE_UNWINDING_FRONT(Object rope) { return Native::Invoke<void, Object>(N::STOP_ROPE_UNWINDING_FRONT, rope); }
	static void _0x00F611A794A3C36E(Any p0) { return Native::Invoke<void, Any>(0x00F611A794A3C36E, p0); }
	static void _0x10DAA76CB8A201A1(Any p0) { return Native::Invoke<void, Any>(0x10DAA76CB8A201A1, p0); }
	static void _0x461FCBDEB4D06717(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x461FCBDEB4D06717, p0, p1); }
	static void _0x423C6B1F3786D28B(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x423C6B1F3786D28B, p0, p1); }
	static void _0x76BAD9D538BCA1AA(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x76BAD9D538BCA1AA, p0, p1); }
	static void _0xB40EA9E0D2E2F7F3(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xB40EA9E0D2E2F7F3, p0, p1); }
	static Any _0x3D69537039F8D824(Any p0) { return Native::Invoke<Any, Any>(0x3D69537039F8D824, p0); }
	static void _0x751DF00EEFF122E3(Any p0) { return Native::Invoke<void, Any>(0x751DF00EEFF122E3, p0); }
	static Any ROPE_FORCE_LENGTH(Object rope, float length) { return Native::Invoke<Any, Object, float>(N::ROPE_FORCE_LENGTH, rope, length); }
	static void _0x8D59079C37C21D78(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x8D59079C37C21D78, p0, p1); }
	static void _0x814D453FCFDF119F(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0x814D453FCFDF119F, p0, p1, p2); }
	static void _0x1FC92BDBA1106BD2(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x1FC92BDBA1106BD2, p0, p1); }
	static void _0xDEDE679ED29DD4E7(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xDEDE679ED29DD4E7, p0, p1); }
	static void _0xF1EA2A881EB7F2CD(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xF1EA2A881EB7F2CD, p0, p1); }
	static void _0x5A989B7EE3672A56(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x5A989B7EE3672A56, p0, p1); }
	static void _0x483D4E917B0D35A9(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x483D4E917B0D35A9, p0, p1); }
	static void SET_DAMPING(Object ropeorobject, int vertex, float value) { return Native::Invoke<void, Object, int, float>(N::SET_DAMPING, ropeorobject, vertex, value); }
	static void ACTIVATE_PHYSICS(Entity entity) { return Native::Invoke<void, Entity>(N::ACTIVATE_PHYSICS, entity); }
	static void BREAK_ENTITY_GLASS(Object object, float posX, float posY, float posZ, float p4, float offsetX, float offsetY, float offsetZ, float p8, int p9, BOOL p10) { return Native::Invoke<void, Object, float, float, float, float, float, float, float, float, int, BOOL>(N::BREAK_ENTITY_GLASS, object, posX, posY, posZ, p4, offsetX, offsetY, offsetZ, p8, p9, p10); }
	static void _0x8EEDFD8921389928(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any>(0x8EEDFD8921389928, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); }
	static Any SET_DISABLE_BREAKING(Object rope, BOOL enabled) { return Native::Invoke<Any, Object, BOOL>(N::SET_DISABLE_BREAKING, rope, enabled); }
	static void SET_DISABLE_FRAG_DAMAGE(Object object, BOOL toggle) { return Native::Invoke<void, Object, BOOL>(N::SET_DISABLE_FRAG_DAMAGE, object, toggle); }
	static void _0x5BD7457221CC5FF4(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x5BD7457221CC5FF4, p0, p1); }
}
namespace PLAYER
{
	static Player* GET_PLAYER_PED(Vehicle player) { return Native::Invoke<Player*, Vehicle>(N::GET_PLAYER_PED, player); }
	static Any _0x5EBE38A20BC51C27() { return Native::Invoke<Any>(0x5EBE38A20BC51C27); }
	static Any _0x325434C68358D282() { return Native::Invoke<Any>(0x325434C68358D282); }
	static Any GET_PLAYER_PED_SCRIPT_INDEX() { return Native::Invoke<Any>(N::GET_PLAYER_PED_SCRIPT_INDEX); }
	static void SET_PLAYER_MODEL(Player player, Hash modelHash, Any p2) { return Native::Invoke<void, Player, Hash, Any>(N::SET_PLAYER_MODEL, player, modelHash, p2); }
	static Any _0x0760D6F70EBCC05C() { return Native::Invoke<Any>(0x0760D6F70EBCC05C); }
	static int GET_PLAYER_TEAM(Player player) { return Native::Invoke<int, Player>(N::GET_PLAYER_TEAM, player); }
	static Any SET_PLAYER_TEAM() { return Native::Invoke<Any>(N::SET_PLAYER_TEAM); }
	static char* GET_PLAYER_NAME(float player) { return Native::Invoke<char*, float>(N::GET_PLAYER_NAME, player); }
	static Any _0x5B6193813E03E4E9() { return Native::Invoke<Any>(0x5B6193813E03E4E9); }
	static BOOL GET_WANTED_LEVEL_RADIUS(BOOL player) { return Native::Invoke<BOOL, BOOL>(N::GET_WANTED_LEVEL_RADIUS, player); }
	static int GET_WANTED_LEVEL_THRESHOLD(int wantedLevel) { return Native::Invoke<int, int>(N::GET_WANTED_LEVEL_THRESHOLD, wantedLevel); }
	static void SET_PLAYER_WANTED_LEVEL(Player player, int wantedLevel, BOOL disableNoMission) { return Native::Invoke<void, Player, int, BOOL>(N::SET_PLAYER_WANTED_LEVEL, player, wantedLevel, disableNoMission); }
	static BOOL IS_PLAYER_WANTED_LEVEL_GREATER(Player player, int wantedLevel) { return Native::Invoke<BOOL, Player, int>(N::IS_PLAYER_WANTED_LEVEL_GREATER, player, wantedLevel); }
	static void CLEAR_PLAYER_WANTED_LEVEL(Player player) { return Native::Invoke<void, Player>(N::CLEAR_PLAYER_WANTED_LEVEL, player); }
	static BOOL IS_PLAYER_DEAD(Player player) { return Native::Invoke<BOOL, Player>(N::IS_PLAYER_DEAD, player); }
	static void SET_PLAYER_CONTROL(Player player, BOOL toggle, int flags, Any p3) { return Native::Invoke<void, Player, BOOL, int, Any>(N::SET_PLAYER_CONTROL, player, toggle, flags, p3); }
	static int GET_PLAYER_WANTED_LEVEL(Player player) { return Native::Invoke<int, Player>(N::GET_PLAYER_WANTED_LEVEL, player); }
	static Any SET_MAX_WANTED_LEVEL() { return Native::Invoke<Any>(N::SET_MAX_WANTED_LEVEL); }
	static void _0xEA6DE0CD15AECBE2(Any p0) { return Native::Invoke<void, Any>(0xEA6DE0CD15AECBE2, p0); }
	static void SET_POLICE_RADAR_BLIPS(Player test) { return Native::Invoke<void, Player>(N::SET_POLICE_RADAR_BLIPS, test); }
	static BOOL IS_PLAYER_PLAYING(Player player) { return Native::Invoke<BOOL, Player>(N::IS_PLAYER_PLAYING, player); }
	static void SET_EVERYONE_IGNORE_PLAYER(Player player, BOOL toggle) { return Native::Invoke<void, Player, BOOL>(N::SET_EVERYONE_IGNORE_PLAYER, player, toggle); }
	static Any _0x51BEA356B1C60225(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x51BEA356B1C60225, p0, p1); }
	static void _0x0751D461F06E41CE(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<void, Any, Any, Any, Any>(0x0751D461F06E41CE, p0, p1, p2, p3); }
	static Any _0x6614F9039BD31931(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(0x6614F9039BD31931, p0, p1, p2); }
	static void _0xA3DB37EDF9A74635(Any p0, Any p1, Any p2, Any p3, Any p4) { return Native::Invoke<void, Any, Any, Any, Any, Any>(0xA3DB37EDF9A74635, p0, p1, p2, p3, p4); }
	static Any _0xEA8F168A76A0B9BC(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<Any, Any, Any, Any, Any>(0xEA8F168A76A0B9BC, p0, p1, p2, p3); }
	static void _0x93624B36E8851B42(Any p0) { return Native::Invoke<void, Any>(0x93624B36E8851B42, p0); }
	static void _0x9073EC5456651A90(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x9073EC5456651A90, p0, p1); }
	static void _0x2E67707BEC52CA4B(Any p0) { return Native::Invoke<void, Any>(0x2E67707BEC52CA4B, p0); }
	static void SET_ALL_RANDOM_PEDS_FLEE(Player* player, Any toggle) { return Native::Invoke<void, Player*, Any>(N::SET_ALL_RANDOM_PEDS_FLEE, player, toggle); }
	static void SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(Player player) { return Native::Invoke<void, Player>(N::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME, player); }
	static void _0x16752DAA7E6D3F72(Any p0) { return Native::Invoke<void, Any>(0x16752DAA7E6D3F72, p0); }
	static void _0x1D256EED194F5B58(Any p0) { return Native::Invoke<void, Any>(0x1D256EED194F5B58, p0); }
	static Any _0x5B7B97E99F84138B(Any p0) { return Native::Invoke<Any, Any>(0x5B7B97E99F84138B, p0); }
	static void _0x8674D138391FFB1B(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x8674D138391FFB1B, p0, p1); }
	static Any _0xA82964B9D8D6A983() { return Native::Invoke<Any>(0xA82964B9D8D6A983); }
	static void SET_WANTED_LEVEL_MULTIPLIER(float multiplier) { return Native::Invoke<void, float>(N::SET_WANTED_LEVEL_MULTIPLIER, multiplier); }
	static Any RESET_WANTED_LEVEL_DIFFICULTY() { return Native::Invoke<Any>(N::RESET_WANTED_LEVEL_DIFFICULTY); }
	static void _0xD0B0B044112BF424(Any p0) { return Native::Invoke<void, Any>(0xD0B0B044112BF424, p0); }
	static void _0x96722257E5381E00(Any p0) { return Native::Invoke<void, Any>(0x96722257E5381E00, p0); }
	static void _0xCBCCF73FFA69CC6B(Any p0) { return Native::Invoke<void, Any>(0xCBCCF73FFA69CC6B, p0); }
	static void _0xD2DFC9CCA5596A11(Any p0) { return Native::Invoke<void, Any>(0xD2DFC9CCA5596A11, p0); }
	static void _0x5CE5CACC01D0F985() { return Native::Invoke<void>(0x5CE5CACC01D0F985); }
	static BOOL CAN_PLAYER_START_MISSION(Player player) { return Native::Invoke<BOOL, Player>(N::CAN_PLAYER_START_MISSION, player); }
	static BOOL IS_PLAYER_READY_FOR_CUTSCENE(Player player) { return Native::Invoke<BOOL, Player>(N::IS_PLAYER_READY_FOR_CUTSCENE, player); }
	static BOOL IS_PLAYER_TARGETTING_ENTITY(Player player, Entity entity, Any p2) { return Native::Invoke<BOOL, Player, Entity, Any>(N::IS_PLAYER_TARGETTING_ENTITY, player, entity, p2); }
	static BOOL GET_PLAYER_TARGET_ENTITY(Player player, Entity* entity) { return Native::Invoke<BOOL, Player, Entity*>(N::GET_PLAYER_TARGET_ENTITY, player, entity); }
	static Any _0x927861B2C08DBEA5() { return Native::Invoke<Any>(0x927861B2C08DBEA5); }
	static Any _0x1A51BFE60708E482(Any p0) { return Native::Invoke<Any, Any>(0x1A51BFE60708E482, p0); }
	static Any _0x3EE1F7A8C32F24E1(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<Any, Any, Any, Any, Any>(0x3EE1F7A8C32F24E1, p0, p1, p2, p3); }
	static Any _0xBEA3A6E5F5F79A6F(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0xBEA3A6E5F5F79A6F, p0, p1); }
	static Any _0x04D7F33640662FA2() { return Native::Invoke<Any>(0x04D7F33640662FA2); }
	static BOOL IS_PLAYER_FREE_AIMING(Player player) { return Native::Invoke<BOOL, Player>(N::IS_PLAYER_FREE_AIMING, player); }
	static BOOL IS_PLAYER_FREE_AIMING_AT_ENTITY(Player player, Entity entity) { return Native::Invoke<BOOL, Player, Entity>(N::IS_PLAYER_FREE_AIMING_AT_ENTITY, player, entity); }
	static BOOL GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(Player player, Entity* entity) { return Native::Invoke<BOOL, Player, Entity*>(N::GET_ENTITY_PLAYER_IS_FREE_AIMING_AT, player, entity); }
	static void _0x3DAABE78A23694BC(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x3DAABE78A23694BC, p0, p1); }
	static Any _0x7AE93C45EC14A166(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x7AE93C45EC14A166, p0, p1); }
	static void SET_PLAYER_LOCKON_RANGE_OVERRIDE(Player player, float range) { return Native::Invoke<void, Player, float>(N::SET_PLAYER_LOCKON_RANGE_OVERRIDE, player, range); }
	static void SET_PLAYER_CAN_BE_HASSLED_BY_GANGS(Player player, BOOL toggle) { return Native::Invoke<void, Player, BOOL>(N::SET_PLAYER_CAN_BE_HASSLED_BY_GANGS, player, toggle); }
	static Any SET_PLAYER_CAN_USE_COVER(Player player, BOOL toggle) { return Native::Invoke<Any, Player, BOOL>(N::SET_PLAYER_CAN_USE_COVER, player, toggle); }
	static void _0xD1A70C1E8D1031FE(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xD1A70C1E8D1031FE, p0, p1); }
	static void _0xACA45DDCEF6071C4(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xACA45DDCEF6071C4, p0, p1); }
	static void _0xA0C683284DF027C7(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0xA0C683284DF027C7, p0, p1, p2); }
	static Any _0x4EC8BE63B8A5D4EF() { return Native::Invoke<Any>(0x4EC8BE63B8A5D4EF); }
	static int GET_MAX_WANTED_LEVEL() { return Native::Invoke<int>(N::GET_MAX_WANTED_LEVEL); }
	static BOOL IS_PLAYER_TARGETTING_ANYTHING(Player player) { return Native::Invoke<BOOL, Player>(N::IS_PLAYER_TARGETTING_ANYTHING, player); }
	static void RESTORE_PLAYER_STAMINA(Player player, float p1) { return Native::Invoke<void, Player, float>(N::RESTORE_PLAYER_STAMINA, player, p1); }
	static void _0x8591EE69CC3ED257(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x8591EE69CC3ED257, p0, p1); }
	static int GET_PLAYER_GROUP(Player player) { return Native::Invoke<int, Player>(N::GET_PLAYER_GROUP, player); }
	static void _0x3D9DA5C9EFD20D88(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x3D9DA5C9EFD20D88, p0, p1); }
	static void _0x2BEED53B912537D0(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0x2BEED53B912537D0, p0, p1, p2); }
	static void _0x908D4B72854C8F62(Any p0) { return Native::Invoke<void, Any>(0x908D4B72854C8F62, p0); }
	static Any _0xD1F6B912785BFD35(Any p0) { return Native::Invoke<Any, Any>(0xD1F6B912785BFD35, p0); }
	static void _0xC4873B053054C04B(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any, Any, Any>(0xC4873B053054C04B, p0, p1, p2, p3, p4, p5, p6, p7); }
	static void _0xCA59808E51FD67C4(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xCA59808E51FD67C4, p0, p1); }
	static void _0xBA5CA1FEB5DE0DF6(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any>(0xBA5CA1FEB5DE0DF6, p0, p1, p2, p3, p4, p5); }
	static void _0x0869D499A7848309(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any, Any, Any>(0x0869D499A7848309, p0, p1, p2, p3, p4, p5, p6, p7); }
	static Any _0xB331D8A73F9D2BDF(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0xB331D8A73F9D2BDF, p0, p1); }
	static void _0xAC22AA6DF4D1C1DE(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any, Any>(0xAC22AA6DF4D1C1DE, p0, p1, p2, p3, p4, p5, p6); }
	static void _0x0C6B89876262A99D(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x0C6B89876262A99D, p0, p1); }
	static void _0x12E09E278C6C29B7(Any p0) { return Native::Invoke<void, Any>(0x12E09E278C6C29B7, p0); }
	static void _0xDD33A82352C4652F(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0xDD33A82352C4652F, p0, p1, p2); }
	static void _0x1FDA57E8908F2609(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0x1FDA57E8908F2609, p0, p1, p2); }
	static Any _0x84481018E668E1B8() { return Native::Invoke<Any>(0x84481018E668E1B8); }
	static Any _0x2009F8AB7A5E9D6D(Any p0) { return Native::Invoke<Any, Any>(0x2009F8AB7A5E9D6D, p0); }
	static Any _0xE24C64D9ADED2EF5(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0xE24C64D9ADED2EF5, p0, p1); }
	static Any _0xE7F8707269544B29(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0xE7F8707269544B29, p0, p1); }
	static Any _0xE631EAF35828FA67(Any p0) { return Native::Invoke<Any, Any>(0xE631EAF35828FA67, p0); }
	static void _0x086549F3B0381CB1(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x086549F3B0381CB1, p0, p1); }
	static BOOL IS_PLAYER_CONTROL_ON(Player player) { return Native::Invoke<BOOL, Player>(N::IS_PLAYER_CONTROL_ON, player); }
	static BOOL IS_PLAYER_SCRIPT_CONTROL_ON(Player player) { return Native::Invoke<BOOL, Player>(N::IS_PLAYER_SCRIPT_CONTROL_ON, player); }
	static BOOL IS_PLAYER_CLIMBING(Player player) { return Native::Invoke<BOOL, Player>(N::IS_PLAYER_CLIMBING, player); }
	static void _0xEBB6E27AC2FF32DA(Any p0, Any p1, Any p2, Any p3, Any p4) { return Native::Invoke<void, Any, Any, Any, Any, Any>(0xEBB6E27AC2FF32DA, p0, p1, p2, p3, p4); }
	static Any _0xB15CD2F9932C9AB5(Any p0) { return Native::Invoke<Any, Any>(0xB15CD2F9932C9AB5, p0); }
	static Any _0x621D1B289CAF5978(Any p0) { return Native::Invoke<Any, Any>(0x621D1B289CAF5978, p0); }
	static BOOL IS_PLAYER_BEING_ARRESTED(Player player, BOOL atArresting) { return Native::Invoke<BOOL, Player, BOOL>(N::IS_PLAYER_BEING_ARRESTED, player, atArresting); }
	static void RESET_PLAYER_ARREST_STATE(Player player) { return Native::Invoke<void, Player>(N::RESET_PLAYER_ARREST_STATE, player); }
	static void _0xCBB54CC7FFFFAB86(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0xCBB54CC7FFFFAB86, p0, p1, p2); }
	static void _0xBED386157F65942C(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xBED386157F65942C, p0, p1); }
	static Any _0xDAB6A2FC56B7DE65(Any p0) { return Native::Invoke<Any, Any>(0xDAB6A2FC56B7DE65, p0); }
	static Any _0x0F4EAF69DA41AF43(Any p0) { return Native::Invoke<Any, Any>(0x0F4EAF69DA41AF43, p0); }
	static Any _0x6ADF821FBF21920E() { return Native::Invoke<Any>(0x6ADF821FBF21920E); }
	static Any _0x8F2A81C09DA9124A() { return Native::Invoke<Any>(0x8F2A81C09DA9124A); }
	static Vehicle GET_PLAYERS_LAST_VEHICLE() { return Native::Invoke<Vehicle>(N::GET_PLAYERS_LAST_VEHICLE); }
	static Player GET_PLAYER_INDEX() { return Native::Invoke<Player>(N::GET_PLAYER_INDEX); }
	static Player INT_TO_PLAYERINDEX(int value) { return Native::Invoke<Player, int>(N::INT_TO_PLAYERINDEX, value); }
	static Any INT_TO_PARTICIPANTINDEX() { return Native::Invoke<Any>(N::INT_TO_PARTICIPANTINDEX); }
	static Player PLAYER_ID() { return Native::Invoke<Player>(N::PLAYER_ID); }
	static Ped PLAYER_PED_ID() { return Native::Invoke<Ped>(N::PLAYER_PED_ID); }
	static int NETWORK_PLAYER_ID_TO_INT() { return Native::Invoke<int>(N::NETWORK_PLAYER_ID_TO_INT); }
	static BOOL HAS_FORCE_CLEANUP_OCCURRED(int cleanupFlags) { return Native::Invoke<BOOL, int>(N::HAS_FORCE_CLEANUP_OCCURRED, cleanupFlags); }
	static void FORCE_CLEANUP(int cleanupFlags) { return Native::Invoke<void, int>(N::FORCE_CLEANUP, cleanupFlags); }
	static void FORCE_CLEANUP_FOR_ALL_THREADS_WITH_THIS_NAME(char* name, int cleanupFlags) { return Native::Invoke<void, char*, int>(N::FORCE_CLEANUP_FOR_ALL_THREADS_WITH_THIS_NAME, name, cleanupFlags); }
	static void FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(int id, int cleanupFlags) { return Native::Invoke<void, int, int>(N::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID, id, cleanupFlags); }
	static Vehicle* GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP() { return Native::Invoke<Vehicle*>(N::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP); }
	static void _0x39BED552DB46FFA9(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x39BED552DB46FFA9, p0, p1); }
	static Any _0x054473164C012699(Any p0) { return Native::Invoke<Any, Any>(0x054473164C012699, p0); }
	static Any SET_PLAYER_MAY_ONLY_ENTER_THIS_VEHICLE() { return Native::Invoke<Any>(N::SET_PLAYER_MAY_ONLY_ENTER_THIS_VEHICLE); }
	static void _0xC71D07C96946E263(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xC71D07C96946E263, p0, p1); }
	static void SET_PLAYER_MAY_NOT_ENTER_ANY_VEHICLE(Player* player) { return Native::Invoke<void, Player*>(N::SET_PLAYER_MAY_NOT_ENTER_ANY_VEHICLE, player); }
	static BOOL IS_SYSTEM_UI_BEING_DISPLAYED() { return Native::Invoke<BOOL>(N::IS_SYSTEM_UI_BEING_DISPLAYED); }
	static void _0x3946FC742AC305CD(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any, Any, Any>(0x3946FC742AC305CD, p0, p1, p2, p3, p4, p5, p6, p7); }
	static void _0xC67A4910425F11F1(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xC67A4910425F11F1, p0, p1); }
	static void SET_PLAYER_INVINCIBLE(Player player, BOOL toggle) { return Native::Invoke<void, Player, BOOL>(N::SET_PLAYER_INVINCIBLE, player, toggle); }
	static BOOL GET_PLAYER_INVINCIBLE(Player player) { return Native::Invoke<BOOL, Player>(N::GET_PLAYER_INVINCIBLE, player); }
	static void SET_PLAYER_LOCKON(Player player, BOOL toggle) { return Native::Invoke<void, Player, BOOL>(N::SET_PLAYER_LOCKON, player, toggle); }
	static Any _0x4A056257802DD3E5() { return Native::Invoke<Any>(0x4A056257802DD3E5); }
	static Any SET_PLAYER_TARGETING_MODE() { return Native::Invoke<Any>(N::SET_PLAYER_TARGETING_MODE); }
	static Any _0x19B4F71703902238() { return Native::Invoke<Any>(0x19B4F71703902238); }
	static Any _0x747257807B8721CE() { return Native::Invoke<Any>(0x747257807B8721CE); }
	static Any _0x8702D9150D9FBB3D() { return Native::Invoke<Any>(0x8702D9150D9FBB3D); }
	static void _0xCB0B9506BC91E441(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xCB0B9506BC91E441, p0, p1); }
	static void CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(Player player) { return Native::Invoke<void, Player>(N::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED, player); }
	static BOOL HAS_PLAYER_DAMAGED_AT_LEAST_ONE_PED(Player player) { return Native::Invoke<BOOL, Player>(N::HAS_PLAYER_DAMAGED_AT_LEAST_ONE_PED, player); }
	static void CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_NON_ANIMAL_PED(Player player) { return Native::Invoke<void, Player>(N::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_NON_ANIMAL_PED, player); }
	static BOOL HAS_PLAYER_DAMAGED_AT_LEAST_ONE_NON_ANIMAL_PED(Player player) { return Native::Invoke<BOOL, Player>(N::HAS_PLAYER_DAMAGED_AT_LEAST_ONE_NON_ANIMAL_PED, player); }
	static void _0xEACEBAAE0A33FB3F(Any p0) { return Native::Invoke<void, Any>(0xEACEBAAE0A33FB3F, p0); }
	static Any _0x72AD59F7B7FB6E24(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x72AD59F7B7FB6E24, p0, p1); }
	static Any _0x1A6E84F13C952094(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(0x1A6E84F13C952094, p0, p1, p2); }
	static Any _0x78B3D19AF6391A55() { return Native::Invoke<Any>(0x78B3D19AF6391A55); }
	static Any _0x1F488807BC8E0630() { return Native::Invoke<Any>(0x1F488807BC8E0630); }
	static Any SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE() { return Native::Invoke<Any>(N::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE); }
	static void SET_SWIM_MULTIPLIER_FOR_PLAYER(Ped player, float multiplier) { return Native::Invoke<void, Ped, float>(N::SET_SWIM_MULTIPLIER_FOR_PLAYER, player, multiplier); }
	static Any _0x73EB2EF2E92D23BF() { return Native::Invoke<Any>(0x73EB2EF2E92D23BF); }
	static void SET_PLAYER_FORCED_AIM(Player player, BOOL toggle, Any p2, Any p3) { return Native::Invoke<void, Player, BOOL, Any, Any>(N::SET_PLAYER_FORCED_AIM, player, toggle, p2, p3); }
	static void _0x310CE349E0C0EC4B(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0x310CE349E0C0EC4B, p0, p1, p2); }
	static Any DISABLE_PLAYER_FIRING() { return Native::Invoke<Any>(N::DISABLE_PLAYER_FIRING); }
	static void _0xEBFF94328FF7A18A(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xEBFF94328FF7A18A, p0, p1); }
	static void _0xF993373285053D77(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0xF993373285053D77, p0, p1, p2); }
	static Any _0xE956C2340A76272E(Any p0) { return Native::Invoke<Any, Any>(0xE956C2340A76272E, p0); }
	static void _0x95EE1DEE1DCD9070(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x95EE1DEE1DCD9070, p0, p1); }
	static Any _0xDE6C85975F9D4894(Any p0) { return Native::Invoke<Any, Any>(0xDE6C85975F9D4894, p0); }
	static void _0xBBA140062B15A8AC(Any p0) { return Native::Invoke<void, Any>(0xBBA140062B15A8AC, p0); }
	static void _0xAE637BB8EF017875(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xAE637BB8EF017875, p0, p1); }
	static Any _0xB16223CB7DA965F0(Any p0) { return Native::Invoke<Any, Any>(0xB16223CB7DA965F0, p0); }
	static void _0x28A13BF6B05C3D83(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x28A13BF6B05C3D83, p0, p1); }
	static Any _0xC0B21F235C02139C() { return Native::Invoke<Any>(0xC0B21F235C02139C); }
	static void _0x51345AE20F22C261(Any p0, Any p1, Any p2, Any p3, Any p4) { return Native::Invoke<void, Any, Any, Any, Any, Any>(0x51345AE20F22C261, p0, p1, p2, p3, p4); }
	static void _0xFA437FA0738C370C(Any p0, Any p1, Any p2, Any p3, Any p4) { return Native::Invoke<void, Any, Any, Any, Any, Any>(0xFA437FA0738C370C, p0, p1, p2, p3, p4); }
	static void _0x2498035289B5688F(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x2498035289B5688F, p0, p1); }
	static Any _0x811A748B1BE231BA(Any p0) { return Native::Invoke<Any, Any>(0x811A748B1BE231BA, p0); }
	static Any _0x029884FB65821B07() { return Native::Invoke<Any>(0x029884FB65821B07); }
	static void _0x200114E99552462B(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0x200114E99552462B, p0, p1, p2); }
	static void _0x1D77B47AFA584E90(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0x1D77B47AFA584E90, p0, p1, p2); }
	static void _0x5A498FCA232F71E1(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x5A498FCA232F71E1, p0, p1); }
	static Any _0xAB3773E7AA1E9DCC(Any p0) { return Native::Invoke<Any, Any>(0xAB3773E7AA1E9DCC, p0); }
	static Any _0x00BA333DA05ADC23() { return Native::Invoke<Any>(0x00BA333DA05ADC23); }
	static void _0x22B3CABEDDB538B2(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x22B3CABEDDB538B2, p0, p1); }
	static void _0xB783F75940B23014(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xB783F75940B23014, p0, p1); }
	static Any _0xC0B1C05B313693D1() { return Native::Invoke<Any>(0xC0B1C05B313693D1); }
	static Any _0x57D9991DC1334151(Any p0) { return Native::Invoke<Any, Any>(0x57D9991DC1334151, p0); }
	static Any _0x21091B4BEB6376EE(Any p0) { return Native::Invoke<Any, Any>(0x21091B4BEB6376EE, p0); }
	static Any _0xAE4BCC79C587EBBF() { return Native::Invoke<Any>(0xAE4BCC79C587EBBF); }
	static Any _0x4D1699543B1C023C() { return Native::Invoke<Any>(0x4D1699543B1C023C); }
	static Any _0x3A6AE4EEE30370FE(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x3A6AE4EEE30370FE, p0, p1); }
	static Any _0xA81D24AE0AF99A5E(Any p0) { return Native::Invoke<Any, Any>(0xA81D24AE0AF99A5E, p0); }
	static Any _0xDF66A37936D5F3D9(Any p0) { return Native::Invoke<Any, Any>(0xDF66A37936D5F3D9, p0); }
	static Any _0x592F58BC4D2A2CF3(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x592F58BC4D2A2CF3, p0, p1); }
	static Any _0x0317C947D062854E(Any p0) { return Native::Invoke<Any, Any>(0x0317C947D062854E, p0); }
	static Any _0x0FF421E467373FCF(Any p0) { return Native::Invoke<Any, Any>(0x0FF421E467373FCF, p0); }
	static Any _0x768E81AE285A4B67() { return Native::Invoke<Any>(0x768E81AE285A4B67); }
	static void _0x0E1DB1F8F5B561DC(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any>(0x0E1DB1F8F5B561DC, p0, p1, p2, p3, p4, p5); }
	static void _0x08E22898A6AF4905(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x08E22898A6AF4905, p0, p1); }
	static Any _0xBEFED69CE8317F91(Any p0) { return Native::Invoke<Any, Any>(0xBEFED69CE8317F91, p0); }
	static void _0xA63FCAD3A6FEC6D2(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xA63FCAD3A6FEC6D2, p0, p1); }
	static Any _0xE022CC1B545F1D9F(Any p0) { return Native::Invoke<Any, Any>(0xE022CC1B545F1D9F, p0); }
	static Any _0x1710BC33CFB83634() { return Native::Invoke<Any>(0x1710BC33CFB83634); }
	static void _0x64FF4BF9AF59E139(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x64FF4BF9AF59E139, p0, p1); }
	static Any _0x45AB66D02B601FA7(Any p0) { return Native::Invoke<Any, Any>(0x45AB66D02B601FA7, p0); }
	static void _0x107F2A66E1C4C83A(Any p0) { return Native::Invoke<void, Any>(0x107F2A66E1C4C83A, p0); }
	static void START_PLAYER_TELEPORT(Player player, float x, float y, float z, float heading, Any keepVehicle, Any keepVelocity, Any p7, Any p8) { return Native::Invoke<void, Player, float, float, float, float, Any, Any, Any, Any>(N::START_PLAYER_TELEPORT, player, x, y, z, heading, keepVehicle, keepVelocity, p7, p8); }
	static void _0x2C2D287748E8E9B7(Any p0) { return Native::Invoke<void, Any>(0x2C2D287748E8E9B7, p0); }
	static BOOL _HAS_PLAYER_TELEPORT_FINISHED(Player player) { return Native::Invoke<BOOL, Player>(N::_HAS_PLAYER_TELEPORT_FINISHED, player); }
	static void STOP_PLAYER_TELEPORT() { return Native::Invoke<void>(N::STOP_PLAYER_TELEPORT); }
	static BOOL IS_PLAYER_TELEPORT_ACTIVE() { return Native::Invoke<BOOL>(N::IS_PLAYER_TELEPORT_ACTIVE); }
	static float GET_PLAYER_CURRENT_STEALTH_NOISE(Player player) { return Native::Invoke<float, Player>(N::GET_PLAYER_CURRENT_STEALTH_NOISE, player); }
	static void SET_PLAYER_HEALTH_RECHARGE_MULTIPLIER(Player player, float regenRate) { return Native::Invoke<void, Player, float>(N::SET_PLAYER_HEALTH_RECHARGE_MULTIPLIER, player, regenRate); }
	static Any _0x22CD23BB0C45E0CD(Any p0) { return Native::Invoke<Any, Any>(0x22CD23BB0C45E0CD, p0); }
	static Any _0x535ED4605F89AB6E() { return Native::Invoke<Any>(0x535ED4605F89AB6E); }
	static void _0xFECA17CF3343694B(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xFECA17CF3343694B, p0, p1); }
	static Any _0x617D3494AD58200F(Any p0) { return Native::Invoke<Any, Any>(0x617D3494AD58200F, p0); }
	static void _0xBBADFB5E5E5766FB(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xBBADFB5E5E5766FB, p0, p1); }
	static Any _0x68A0389E0718AC8F(Any p0) { return Native::Invoke<Any, Any>(0x68A0389E0718AC8F, p0); }
	static void _0x8FBF9EDB378CCB8C(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x8FBF9EDB378CCB8C, p0, p1); }
	static Any _0x46FA0AE18F4C7FA9(Any p0) { return Native::Invoke<Any, Any>(0x46FA0AE18F4C7FA9, p0); }
	static void _0xD2CB0FB0FDCB473D(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xD2CB0FB0FDCB473D, p0, p1); }
	static Any _0xB48050D326E9A2F3(Any p0) { return Native::Invoke<Any, Any>(0xB48050D326E9A2F3, p0); }
	static Any _0x227B06324234FB09(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x227B06324234FB09, p0, p1); }
	static Any _0xD3F7445CEA2E5035(Any p0) { return Native::Invoke<Any, Any>(0xD3F7445CEA2E5035, p0); }
	static void _0x77B0B6D17A3AC9AA(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x77B0B6D17A3AC9AA, p0, p1); }
	static void _0xDF93973251FB2CA5(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xDF93973251FB2CA5, p0, p1); }
	static Any _0x694FFA4308060CD1() { return Native::Invoke<Any>(0x694FFA4308060CD1); }
	static void _0x09C28F828EE674FA(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0x09C28F828EE674FA, p0, p1, p2); }
	static void SET_PLAYER_WEAPON_DAMAGE_MODIFIER(Player player, Pickup* damageAmount) { return Native::Invoke<void, Player, Pickup*>(N::SET_PLAYER_WEAPON_DAMAGE_MODIFIER, player, damageAmount); }
	static Any SET_PLAYER_WEAPON_DEFENSE_MODIFIER() { return Native::Invoke<Any>(N::SET_PLAYER_WEAPON_DEFENSE_MODIFIER); }
	static Any _0x818241B3EDA84191() { return Native::Invoke<Any>(0x818241B3EDA84191); }
	static Any SET_PLAYER_MELEE_WEAPON_DAMAGE_MODIFIER() { return Native::Invoke<Any>(N::SET_PLAYER_MELEE_WEAPON_DAMAGE_MODIFIER); }
	static Any _0x2D3ACE3DE0A2B622() { return Native::Invoke<Any>(0x2D3ACE3DE0A2B622); }
	static void _0x83C989D5B5B5B466(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x83C989D5B5B5B466, p0, p1); }
	static Any _0x03B4B759A8990505(Any p0) { return Native::Invoke<Any, Any>(0x03B4B759A8990505, p0); }
	static void _0x67659A8F248E0141(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x67659A8F248E0141, p0, p1); }
	static void _0xB427911EA6DFFEF3(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xB427911EA6DFFEF3, p0, p1); }
	static void _0x914071FF93AF2692(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x914071FF93AF2692, p0, p1); }
	static Any _0x2E78D822208E740A(Any p0) { return Native::Invoke<Any, Any>(0x2E78D822208E740A, p0); }
	static Any _0x19B2C7A6C34FAD54(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x19B2C7A6C34FAD54, p0, p1); }
	static Any _0x9422743A5BA50E10(Any p0) { return Native::Invoke<Any, Any>(0x9422743A5BA50E10, p0); }
	static void _0x497A6539BB0E8787(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0x497A6539BB0E8787, p0, p1, p2); }
	static void _0x93F499CAE53FCD05(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0x93F499CAE53FCD05, p0, p1, p2); }
	static Any _0xD04AD186CE8BB129() { return Native::Invoke<Any>(0xD04AD186CE8BB129); }
	static Any _0xFE0304050261442C() { return Native::Invoke<Any>(0xFE0304050261442C); }
	static Any _0x5C2E5E3CAEEB1F58() { return Native::Invoke<Any>(0x5C2E5E3CAEEB1F58); }
	static Any _0xFC79DCC94D0A5897() { return Native::Invoke<Any>(0xFC79DCC94D0A5897); }
	static Any _0x59F0AFF3E0A1B019() { return Native::Invoke<Any>(0x59F0AFF3E0A1B019); }
	static Any _0xAF341032E97FB061() { return Native::Invoke<Any>(0xAF341032E97FB061); }
	static Any _0x43F50A7CD2482156() { return Native::Invoke<Any>(0x43F50A7CD2482156); }
	static Any _0x967FF5BC0CFE6D26() { return Native::Invoke<Any>(0x967FF5BC0CFE6D26); }
	static Any _0x4EA69188FBCE6A7D() { return Native::Invoke<Any>(0x4EA69188FBCE6A7D); }
	static Any _0xDEE80FEDFDD43C9B() { return Native::Invoke<Any>(0xDEE80FEDFDD43C9B); }
	static void _0x3AD212429E095EFB(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x3AD212429E095EFB, p0, p1); }
	static void SET_PLAYER_NOISE_MULTIPLIER(Player player, float multiplier) { return Native::Invoke<void, Player, float>(N::SET_PLAYER_NOISE_MULTIPLIER, player, multiplier); }
	static void _0x113EF458AB6CDA67(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x113EF458AB6CDA67, p0, p1); }
	static void SET_PLAYER_SNEAKING_NOISE_MULTIPLIER(Player player, float multiplier) { return Native::Invoke<void, Player, float>(N::SET_PLAYER_SNEAKING_NOISE_MULTIPLIER, player, multiplier); }
	static void SIMULATE_PLAYER_INPUT_GAIT(Player control, float amount, int gaitType, float speed, BOOL p4, BOOL p5) { return Native::Invoke<void, Player, float, int, float, BOOL, BOOL>(N::SIMULATE_PLAYER_INPUT_GAIT, control, amount, gaitType, speed, p4, p5); }
	static void RESET_PLAYER_INPUT_GAIT(Player player) { return Native::Invoke<void, Player>(N::RESET_PLAYER_INPUT_GAIT, player); }
	static void SET_PLAYER_SIMULATE_AIMING(Player player, BOOL toggle) { return Native::Invoke<void, Player, BOOL>(N::SET_PLAYER_SIMULATE_AIMING, player, toggle); }
	static void SET_PLAYER_CLOTH_PIN_FRAMES(Player player, BOOL toggle) { return Native::Invoke<void, Player, BOOL>(N::SET_PLAYER_CLOTH_PIN_FRAMES, player, toggle); }
	static Any HAS_PLAYER_BEEN_SPOTTED_IN_STOLEN_VEHICLE() { return Native::Invoke<Any>(N::HAS_PLAYER_BEEN_SPOTTED_IN_STOLEN_VEHICLE); }
	static Any _0xFB6EB8785F808551() { return Native::Invoke<Any>(0xFB6EB8785F808551); }
	static void _0x5B9813ECF7633FE8(Any p0) { return Native::Invoke<void, Any>(0x5B9813ECF7633FE8, p0); }
	static BOOL IS_PLAYER_RIDING_TRAIN(Player player) { return Native::Invoke<BOOL, Player>(N::IS_PLAYER_RIDING_TRAIN, player); }
	static void _0x9AFCF9FE1884BF62(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x9AFCF9FE1884BF62, p0, p1); }
	static Any _0x1E8099F449ABB0BA(Any p0) { return Native::Invoke<Any, Any>(0x1E8099F449ABB0BA, p0); }
	static Any _0xCCE7C695C164C35F(Any p0) { return Native::Invoke<Any, Any>(0xCCE7C695C164C35F, p0); }
	static void _0xF0FE8E790BFEB5BB(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xF0FE8E790BFEB5BB, p0, p1); }
	static Any _0x8A0643B0B4CA276B(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x8A0643B0B4CA276B, p0, p1); }
	static void _0x2797B8D66DD0EBB8(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0x2797B8D66DD0EBB8, p0, p1, p2); }
	static void _0x6B5DDFB967E5073D(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x6B5DDFB967E5073D, p0, p1); }
	static Any _0x32348719DCED2969(Any p0) { return Native::Invoke<Any, Any>(0x32348719DCED2969, p0); }
	static void _0x3C4AE8506638C7E2(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x3C4AE8506638C7E2, p0, p1); }
	static Any _0x51139D8C17B16FBC(Any p0) { return Native::Invoke<Any, Any>(0x51139D8C17B16FBC, p0); }
	static void _0x8F44EBB3BA8F6D44(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x8F44EBB3BA8F6D44, p0, p1); }
	static Any _0x83FCD6921FC8FD05() { return Native::Invoke<Any>(0x83FCD6921FC8FD05); }
	static Any _0xE92261BD28C0878F(Any p0) { return Native::Invoke<Any, Any>(0xE92261BD28C0878F, p0); }
	static void _0x870634493CB4372C(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x870634493CB4372C, p0, p1); }
	static Any _0xA54000D4BFD90BDE(Any p0) { return Native::Invoke<Any, Any>(0xA54000D4BFD90BDE, p0); }
	static Any _0x6EDB5D08CB03E763() { return Native::Invoke<Any>(0x6EDB5D08CB03E763); }
	static Any _0x27AD7162D3FED01E(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x27AD7162D3FED01E, p0, p1); }
	static Any _0xCCD9B77F70D31C9D(Any p0) { return Native::Invoke<Any, Any>(0xCCD9B77F70D31C9D, p0); }
	static Any _0xC93A9A45430D484E(Any p0) { return Native::Invoke<Any, Any>(0xC93A9A45430D484E, p0); }
	static Any _0x570A13A4CA2799BB() { return Native::Invoke<Any>(0x570A13A4CA2799BB); }
	static Any _0x3ACAC8832E77BC93() { return Native::Invoke<Any>(0x3ACAC8832E77BC93); }
	static Any _0x2B12B6FC8B8772AB() { return Native::Invoke<Any>(0x2B12B6FC8B8772AB); }
	static Any _0xE910932F4B30BE23() { return Native::Invoke<Any>(0xE910932F4B30BE23); }
	static Any _0x131E294EF60160DF() { return Native::Invoke<Any>(0x131E294EF60160DF); }
	static Any _0x0E9057A9DA78D0F8() { return Native::Invoke<Any>(0x0E9057A9DA78D0F8); }
	static Any _0x263D69767F76059C() { return Native::Invoke<Any>(0x263D69767F76059C); }
	static void _0x543DFE14BE720027(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0x543DFE14BE720027, p0, p1, p2); }
	static Any _0xAC67098A1E54ABB0() { return Native::Invoke<Any>(0xAC67098A1E54ABB0); }
	static void _0x9DAE1380CC5C6451(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x9DAE1380CC5C6451, p0, p1); }
	static Any _0x9A957912CE2EABD1() { return Native::Invoke<Any>(0x9A957912CE2EABD1); }
	static void _0xE5D3EB37ABC1EB03(Any p0) { return Native::Invoke<void, Any>(0xE5D3EB37ABC1EB03, p0); }
	static Any _0x0E6846476906C9DD(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x0E6846476906C9DD, p0, p1); }
	static Any _0x6852288340B43239(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x6852288340B43239, p0, p1); }
	static Any _0xE50A67C33514A390(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0xE50A67C33514A390, p0, p1); }
	static Any _0x40AB73092C95B5F5() { return Native::Invoke<Any>(0x40AB73092C95B5F5); }
	static void _0x6ECFC621A168424C(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0x6ECFC621A168424C, p0, p1, p2); }
	static void _0xDC5E09D012D759C4(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0xDC5E09D012D759C4, p0, p1, p2); }
	static void _0x00B156AFEBCC5AE0(Any p0) { return Native::Invoke<void, Any>(0x00B156AFEBCC5AE0, p0); }
	static void _0xC58CE6824E604DEC(Any p0) { return Native::Invoke<void, Any>(0xC58CE6824E604DEC, p0); }
	static void _0x330CA55A3647FA1C(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x330CA55A3647FA1C, p0, p1); }
	static Any _0xA62BBAAE67A05BB0(Any p0) { return Native::Invoke<Any, Any>(0xA62BBAAE67A05BB0, p0); }
	static Any _0x2C41D93F550D5E37() { return Native::Invoke<Any>(0x2C41D93F550D5E37); }
	static void _0x22C8B10802301381(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x22C8B10802301381, p0, p1); }
	static void _0xE0D6C2A146A5C993(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xE0D6C2A146A5C993, p0, p1); }
	static Any _0x06E1FB78B1E59CA5() { return Native::Invoke<Any>(0x06E1FB78B1E59CA5); }
	static Any _0xCE285A4413B00B7F() { return Native::Invoke<Any>(0xCE285A4413B00B7F); }
	static Any _0x3813E11A378958A5(Any p0) { return Native::Invoke<Any, Any>(0x3813E11A378958A5, p0); }
	static void _0x2AF423D6ECB2C485(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x2AF423D6ECB2C485, p0, p1); }
	static void _0x0F9CF06986300875(Any p0) { return Native::Invoke<void, Any>(0x0F9CF06986300875, p0); }
	static void _0xDFC85C5199045026(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xDFC85C5199045026, p0, p1); }
	static Any _0x1DA5C5B0923E1B85(Any p0) { return Native::Invoke<Any, Any>(0x1DA5C5B0923E1B85, p0); }
	static Any _0xAAED694CE814817F(Any p0) { return Native::Invoke<Any, Any>(0xAAED694CE814817F, p0); }
	static Any _0x62ED71E133B6C9F1() { return Native::Invoke<Any>(0x62ED71E133B6C9F1); }
	static Any _0xBC02B3D151D3859F() { return Native::Invoke<Any>(0xBC02B3D151D3859F); }
	static Any _0x907B16B3834C69E2() { return Native::Invoke<Any>(0x907B16B3834C69E2); }
	static Any _0xF21C7A3F3FFBA629() { return Native::Invoke<Any>(0xF21C7A3F3FFBA629); }
	static void _0x292F0B6EDC82E3A4(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x292F0B6EDC82E3A4, p0, p1); }
	static void _0x7146CF430965927C(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x7146CF430965927C, p0, p1); }
	static Any _0xE133C1EC5300F740() { return Native::Invoke<Any>(0xE133C1EC5300F740); }
	static void _0xC900A465364A85D6(Any p0) { return Native::Invoke<void, Any>(0xC900A465364A85D6, p0); }
	static void _0xCFB2EED4FCB7BD77(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0xCFB2EED4FCB7BD77, p0, p1, p2); }
	static void _0x2BB8D58E88777499(Any p0) { return Native::Invoke<void, Any>(0x2BB8D58E88777499, p0); }
	static void _0x00EB5A760638DB55(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0x00EB5A760638DB55, p0, p1, p2); }
	static void _0x65887EAC535A0B0C(Any p0) { return Native::Invoke<void, Any>(0x65887EAC535A0B0C, p0); }
	static void _0x11A7FF918EF6BC66(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x11A7FF918EF6BC66, p0, p1); }
	static Any _0xBE0C524970892D41() { return Native::Invoke<Any>(0xBE0C524970892D41); }
	static void _0xFE7C9CF376D23342(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xFE7C9CF376D23342, p0, p1); }
	static Any _0x7761A30432C91297() { return Native::Invoke<Any>(0x7761A30432C91297); }
	static Any _0x5006C36652D6EC56() { return Native::Invoke<Any>(0x5006C36652D6EC56); }
	static Any _0xED591CB17C8BA216() { return Native::Invoke<Any>(0xED591CB17C8BA216); }
	static Any _0x1F0E3A4434565F8F() { return Native::Invoke<Any>(0x1F0E3A4434565F8F); }
	static Any _0x6C54E69516CC56BD(Any p0) { return Native::Invoke<Any, Any>(0x6C54E69516CC56BD, p0); }
	static void _0x3A8611BD7BDE84F7(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x3A8611BD7BDE84F7, p0, p1); }
	static void _0xC177C827CEFC0AA4(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xC177C827CEFC0AA4, p0, p1); }
	static void _0xBD96185264DDAAEA(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xBD96185264DDAAEA, p0, p1); }
	static void _0x628E742FE1F79C4A(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x628E742FE1F79C4A, p0, p1); }
	static void _0xC6366A585659D15C(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xC6366A585659D15C, p0, p1); }
	static void _0x98CD760DE43B612E(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x98CD760DE43B612E, p0, p1); }
	static void _0x216BC0D3D2E413D2(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x216BC0D3D2E413D2, p0, p1); }
	static void _0x45EF176B532CA851(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x45EF176B532CA851, p0, p1); }
	static void _0xA342495F93B7B838(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xA342495F93B7B838, p0, p1); }
	static void _0x3BB84F812E052C90(Any p0) { return Native::Invoke<void, Any>(0x3BB84F812E052C90, p0); }
	static void _0x9FC5A003FB76EDBD(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x9FC5A003FB76EDBD, p0, p1); }
	static Any _0x0FAF95D71ED67ADE() { return Native::Invoke<Any>(0x0FAF95D71ED67ADE); }
	static Any _0xBB6EA5D59E926095() { return Native::Invoke<Any>(0xBB6EA5D59E926095); }
	static void _0xFA7DAAE3959E6C7B(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xFA7DAAE3959E6C7B, p0, p1); }
	static void _0x9461A8FAB0378E5B(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x9461A8FAB0378E5B, p0, p1); }
	static void _0xCB61A63AA53D7D22(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xCB61A63AA53D7D22, p0, p1); }
	static void _0xCFFC3ECCD7A5CCEB(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0xCFFC3ECCD7A5CCEB, p0, p1, p2); }
	static void _0x76F7E1BCD623A429(Any p0) { return Native::Invoke<void, Any>(0x76F7E1BCD623A429, p0); }
	static void _0x585CE159DB46FADB(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x585CE159DB46FADB, p0, p1); }
	static void _0x9F9A829C6751F3C7(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0x9F9A829C6751F3C7, p0, p1, p2); }
	static Any _0xFE691E89C08937B6() { return Native::Invoke<Any>(0xFE691E89C08937B6); }
	static Any _0xF49F14462F0AE27C(Any p0) { return Native::Invoke<Any, Any>(0xF49F14462F0AE27C, p0); }
	static Any _0xAD03B03737CE6810(Any p0) { return Native::Invoke<Any, Any>(0xAD03B03737CE6810, p0); }
	static Any _0xE6D4E435B56D5BD0() { return Native::Invoke<Any>(0xE6D4E435B56D5BD0); }
	static Any _0xB9050A97594C8832() { return Native::Invoke<Any>(0xB9050A97594C8832); }
	static Any _0x7C803BDC8343228D() { return Native::Invoke<Any>(0x7C803BDC8343228D); }
	static Any _0xD0E02AA618020D17() { return Native::Invoke<Any>(0xD0E02AA618020D17); }
	static Any _0x5CA6BBD4A7D8145E() { return Native::Invoke<Any>(0x5CA6BBD4A7D8145E); }
	static Any _0x6A4404BDFA62CE2C() { return Native::Invoke<Any>(0x6A4404BDFA62CE2C); }
	static void _0x9044835BE9D9DBFE(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x9044835BE9D9DBFE, p0, p1); }
	static Any _0x0139637A3BFF8B6D(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x0139637A3BFF8B6D, p0, p1); }
	static Any _0x8E84119A23C16623() { return Native::Invoke<Any>(0x8E84119A23C16623); }
	static Any _0x0335106F3ACABBED() { return Native::Invoke<Any>(0x0335106F3ACABBED); }
	static Any _0x755E08680F21EF30() { return Native::Invoke<Any>(0x755E08680F21EF30); }
	static Any _0x36E3D8B5A6552FE8() { return Native::Invoke<Any>(0x36E3D8B5A6552FE8); }
	static Any _0xDA9D7BE231FE865F() { return Native::Invoke<Any>(0xDA9D7BE231FE865F); }
	static void _0x946D46CD6DFB9742(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0x946D46CD6DFB9742, p0, p1, p2); }
	static Any _0x0772F87D7B07719A(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(0x0772F87D7B07719A, p0, p1, p2); }
	static void _0xCDDD4B74660E2335(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0xCDDD4B74660E2335, p0, p1, p2); }
	static void _0x77E83C315A3B31CA(Any p0) { return Native::Invoke<void, Any>(0x77E83C315A3B31CA, p0); }
	static Any _0x7C32191D9FB2BDEA() { return Native::Invoke<Any>(0x7C32191D9FB2BDEA); }
	static Any _0x354F689C4FFAAB37() { return Native::Invoke<Any>(0x354F689C4FFAAB37); }
	static Any _0xFB0E622B401884D3() { return Native::Invoke<Any>(0xFB0E622B401884D3); }
	static void _0xDC68829BB3F37023(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xDC68829BB3F37023, p0, p1); }
	static void _0x4DBC4873707E8FD6(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<void, Any, Any, Any, Any>(0x4DBC4873707E8FD6, p0, p1, p2, p3); }
	static void _0xCEDC16930526F728(Any p0) { return Native::Invoke<void, Any>(0xCEDC16930526F728, p0); }
	static void _0x14E57F88BA0A07FC(Any p0) { return Native::Invoke<void, Any>(0x14E57F88BA0A07FC, p0); }
	static Any _0x2E1ABE627C95ED9B() { return Native::Invoke<Any>(0x2E1ABE627C95ED9B); }
	static Any _0x497A18F8F88AA9D8() { return Native::Invoke<Any>(0x497A18F8F88AA9D8); }
	static Any _0x4F0D2256AAE94EDA() { return Native::Invoke<Any>(0x4F0D2256AAE94EDA); }
	static Any _0x5F8E0303C229C84B() { return Native::Invoke<Any>(0x5F8E0303C229C84B); }
	static Any _0x0B7803F6F7BB43E0() { return Native::Invoke<Any>(0x0B7803F6F7BB43E0); }
	static Any _0x3B296934DB026873() { return Native::Invoke<Any>(0x3B296934DB026873); }
	static Any _0x506CE71FB6E8CF5E() { return Native::Invoke<Any>(0x506CE71FB6E8CF5E); }
	static Any _0xF4CB347D7B5EB0FD() { return Native::Invoke<Any>(0xF4CB347D7B5EB0FD); }
}
namespace _NAMESPACE52
{
	static Any _0xA1E3171ED0E47564(Any p0) { return Native::Invoke<Any, Any>(0xA1E3171ED0E47564, p0); }
	static Any _0x3EAFA1C533B7139E(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x3EAFA1C533B7139E, p0, p1); }
	static Any _0x6B12ED8C77E8567B(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { return Native::Invoke<Any, Any, Any, Any, Any, Any, Any, Any, Any>(0x6B12ED8C77E8567B, p0, p1, p2, p3, p4, p5, p6, p7); }
	static Any _0x9AC1C64FE46B6D09(Any p0) { return Native::Invoke<Any, Any>(0x9AC1C64FE46B6D09, p0); }
	static void _0xA6E6A66FC4CA4224(Any p0) { return Native::Invoke<void, Any>(0xA6E6A66FC4CA4224, p0); }
	static Any _0xA5BD585005EFCAD4(Any p0) { return Native::Invoke<Any, Any>(0xA5BD585005EFCAD4, p0); }
	static void _0x3E6A49D9B519E85C(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x3E6A49D9B519E85C, p0, p1); }
	static void _0x7E6BC0B94F5928F0(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0x7E6BC0B94F5928F0, p0, p1, p2); }
	static void _0x578E2FA64E847C60(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x578E2FA64E847C60, p0, p1); }
	static void _0x08892122769770D5(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x08892122769770D5, p0, p1); }
	static void _0x0F1861101C9A9944(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x0F1861101C9A9944, p0, p1); }
	static void _0x60CDE717A6D47769(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0x60CDE717A6D47769, p0, p1, p2); }
	static void _0x217A54DE2D200305(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x217A54DE2D200305, p0, p1); }
	static void _0x638FCFC6042A9473(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x638FCFC6042A9473, p0, p1); }
	static void _0xB56D41A694E42E86(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any, Any>(0xB56D41A694E42E86, p0, p1, p2, p3, p4, p5, p6); }
	static void _0x74C2B3DC0B294102(Any p0) { return Native::Invoke<void, Any>(0x74C2B3DC0B294102, p0); }
	static void _0x18262CAFEBB5FBE1(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any, Any>(0x18262CAFEBB5FBE1, p0, p1, p2, p3, p4, p5, p6); }
	static void _0xA1CFB35069D23C23(Any p0) { return Native::Invoke<void, Any>(0xA1CFB35069D23C23, p0); }
	static void _0x2161278C6322F740(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any>(0x2161278C6322F740, p0, p1, p2, p3, p4, p5); }
	static void _0xF45E46DEECF7DF6E(Any p0, Any p1, Any p2, Any p3, Any p4) { return Native::Invoke<void, Any, Any, Any, Any, Any>(0xF45E46DEECF7DF6E, p0, p1, p2, p3, p4); }
	static void _0x8EC7CD701F872F87(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any>(0x8EC7CD701F872F87, p0, p1, p2, p3, p4, p5); }
	static void _0xC4533E3E87125C9E(Any p0) { return Native::Invoke<void, Any>(0xC4533E3E87125C9E, p0); }
	static void _0xF74E134F40192884(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xF74E134F40192884, p0, p1); }
	static void _0xDBBF12EA7C1029B2(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xDBBF12EA7C1029B2, p0, p1); }
	static void _0x247F86595D396344(Any p0) { return Native::Invoke<void, Any>(0x247F86595D396344, p0); }
	static void _0x324AB2A68AD8AEE5() { return Native::Invoke<void>(0x324AB2A68AD8AEE5); }
	static void _0xC6DCC2A3A8825C85(Any p0) { return Native::Invoke<void, Any>(0xC6DCC2A3A8825C85, p0); }
	static void _0xBC90BDF4E5228EA1() { return Native::Invoke<void>(0xBC90BDF4E5228EA1); }
	static Any _0x595478B3BBC3076D() { return Native::Invoke<Any>(0x595478B3BBC3076D); }
	static Any _0xEC116EDB683AD479() { return Native::Invoke<Any>(0xEC116EDB683AD479); }
}
namespace _NAMESPACE53
{
	static Any _0xC086FF658B2E51DB() { return Native::Invoke<Any>(0xC086FF658B2E51DB); }
	static Any _0xC086FF658B2E51DA() { return Native::Invoke<Any>(0xC086FF658B2E51DA); }
	static Any _0xC087FF658B2E51DA() { return Native::Invoke<Any>(0xC087FF658B2E51DA); }
	static Any _0xC088FF658B2E51DA() { return Native::Invoke<Any>(0xC088FF658B2E51DA); }
	static Any _0xC089FF658B2E51DA() { return Native::Invoke<Any>(0xC089FF658B2E51DA); }
	static void _0xC08AFF658B2E51DA(Any p0) { return Native::Invoke<void, Any>(0xC08AFF658B2E51DA, p0); }
	static Any _0xC08BFF658B2E51DA(Any p0) { return Native::Invoke<Any, Any>(0xC08BFF658B2E51DA, p0); }
	static Any _0xC08AFF658B2E51DB() { return Native::Invoke<Any>(0xC08AFF658B2E51DB); }
	static Any _0xC08CFF658B2E51DA() { return Native::Invoke<Any>(0xC08CFF658B2E51DA); }
	static Any _0xC09CFF658B2E51DA() { return Native::Invoke<Any>(0xC09CFF658B2E51DA); }
	static Any _0xC08DEF658B2E51DA() { return Native::Invoke<Any>(0xC08DEF658B2E51DA); }
	static Any _0xC08DFF658B2E51DA() { return Native::Invoke<Any>(0xC08DFF658B2E51DA); }
	static Any _0xC08DFF658B2E51DB() { return Native::Invoke<Any>(0xC08DFF658B2E51DB); }
	static Any _0xC08EFF658B2E51DB() { return Native::Invoke<Any>(0xC08EFF658B2E51DB); }
	static Any _0xC08FFF658B2E51DA() { return Native::Invoke<Any>(0xC08FFF658B2E51DA); }
	static Any _0xC08FFF658B2E51DB() { return Native::Invoke<Any>(0xC08FFF658B2E51DB); }
	static Any _0xC084FF658B2E61DA() { return Native::Invoke<Any>(0xC084FF658B2E61DA); }
	static Any _0xC084FF658B2E71DA() { return Native::Invoke<Any>(0xC084FF658B2E71DA); }
	static Any _0xC084FF658B2E81DA() { return Native::Invoke<Any>(0xC084FF658B2E81DA); }
	static Any _0xC084FF658B2E52DA() { return Native::Invoke<Any>(0xC084FF658B2E52DA); }
	static Any _0xC084FF658B2E53DA() { return Native::Invoke<Any>(0xC084FF658B2E53DA); }
	static Any _0xC084FF658B2E54DA() { return Native::Invoke<Any>(0xC084FF658B2E54DA); }
	static Any _0xC084FF658B2E55DA() { return Native::Invoke<Any>(0xC084FF658B2E55DA); }
	static Any _0xC484FF658B2E55DA() { return Native::Invoke<Any>(0xC484FF658B2E55DA); }
	static Any _0xC584FF658B2E55DA() { return Native::Invoke<Any>(0xC584FF658B2E55DA); }
	static Any _0xC684FF658B2E55DA() { return Native::Invoke<Any>(0xC684FF658B2E55DA); }
	static Any _0xC184FF658B2E55DA() { return Native::Invoke<Any>(0xC184FF658B2E55DA); }
	static Any _0xC284FF658B2E55DA() { return Native::Invoke<Any>(0xC284FF658B2E55DA); }
	static Any _0xC394FF658B2E55DA() { return Native::Invoke<Any>(0xC394FF658B2E55DA); }
	static Any _0xC07CFF658B2E51DA() { return Native::Invoke<Any>(0xC07CFF658B2E51DA); }
	static Any _0xC06CFF658B2E51DA() { return Native::Invoke<Any>(0xC06CFF658B2E51DA); }
}
namespace _NAMESPACE54
{
	static Any _0xF3DE57A46D5585E9(Any p0) { return Native::Invoke<Any, Any>(0xF3DE57A46D5585E9, p0); }
	static Any _0xE72F591958F3ACAB(Any p0) { return Native::Invoke<Any, Any>(0xE72F591958F3ACAB, p0); }
	static Any _0x48A88FC684C55FDC(Any p0) { return Native::Invoke<Any, Any>(0x48A88FC684C55FDC, p0); }
	static Any _0xD090ABEF4D6A7D96(Any p0) { return Native::Invoke<Any, Any>(0xD090ABEF4D6A7D96, p0); }
	static void _0x909E3C7FAE539FB1(Any p0) { return Native::Invoke<void, Any>(0x909E3C7FAE539FB1, p0); }
	static void _0x58AC173A55D9D7B4(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0x58AC173A55D9D7B4, p0, p1, p2); }
	static Any _0xB1964A83B345B4AB() { return Native::Invoke<Any>(0xB1964A83B345B4AB); }
	static Any _0xE65C5CBA95F0E510(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { return Native::Invoke<Any, Any, Any, Any, Any, Any, Any, Any, Any, Any>(0xE65C5CBA95F0E510, p0, p1, p2, p3, p4, p5, p6, p7, p8); }
	static Any _0x899C97A1CCE7D483(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { return Native::Invoke<Any, Any, Any, Any, Any, Any, Any, Any, Any, Any>(0x899C97A1CCE7D483, p0, p1, p2, p3, p4, p5, p6, p7, p8); }
	static Any _0x9609DBDDE18FAD8C(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { return Native::Invoke<Any, Any, Any, Any, Any, Any, Any, Any, Any, Any>(0x9609DBDDE18FAD8C, p0, p1, p2, p3, p4, p5, p6, p7, p8); }
	static Any _0xACA7FB30269096D4(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { return Native::Invoke<Any, Any, Any, Any, Any, Any, Any, Any, Any, Any>(0xACA7FB30269096D4, p0, p1, p2, p3, p4, p5, p6, p7, p8); }
	static Any _0x7DDDCF815E650FF5(Any p0) { return Native::Invoke<Any, Any>(0x7DDDCF815E650FF5, p0); }
	static Any _0x72068021F498E6E3(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<Any, Any, Any, Any, Any>(0x72068021F498E6E3, p0, p1, p2, p3); }
	static Any _0xF42DB680A8B2A4D9(Any p0) { return Native::Invoke<Any, Any>(0xF42DB680A8B2A4D9, p0); }
	static void _0x9D096A5BD02F953E(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x9D096A5BD02F953E, p0, p1); }
	static Any _0x0CE8AAFE9E433A23(Any p0) { return Native::Invoke<Any, Any>(0x0CE8AAFE9E433A23, p0); }
	static Any _0xA6A9712955F53D9C() { return Native::Invoke<Any>(0xA6A9712955F53D9C); }
	static Any _0x36F69E7A22655653() { return Native::Invoke<Any>(0x36F69E7A22655653); }
	static Any _0x738271B660FE0695(Any p0, Any p1, Any p2, Any p3, Any p4) { return Native::Invoke<Any, Any, Any, Any, Any, Any>(0x738271B660FE0695, p0, p1, p2, p3, p4); }
	static void _0xC4B67EF3FD65622D(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any>(0xC4B67EF3FD65622D, p0, p1, p2, p3, p4, p5); }
	static void _0x58E0B01D45CA7357(Any p0) { return Native::Invoke<void, Any>(0x58E0B01D45CA7357, p0); }
	static void _0xC1AB7EEFD3E6EE49(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xC1AB7EEFD3E6EE49, p0, p1); }
	static Any _0xCE2ACD6F602803E5(Any p0) { return Native::Invoke<Any, Any>(0xCE2ACD6F602803E5, p0); }
	static Any _0x53784CEA0159439B(Any p0) { return Native::Invoke<Any, Any>(0x53784CEA0159439B, p0); }
	static void _0xD80FAF919A2E56EA(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xD80FAF919A2E56EA, p0, p1); }
	static void _0x3BCF32FF37EA9F1D(Any p0) { return Native::Invoke<void, Any>(0x3BCF32FF37EA9F1D, p0); }
	static Any _0x155B2FBE72D7D1D0(Any p0) { return Native::Invoke<Any, Any>(0x155B2FBE72D7D1D0, p0); }
	static Any _0x75F90E4051CC084C() { return Native::Invoke<Any>(0x75F90E4051CC084C); }
	static Any _0x7264F9CA87A9830B() { return Native::Invoke<Any>(0x7264F9CA87A9830B); }
	static Any _0xA079300AF757FB1A(Any p0) { return Native::Invoke<Any, Any>(0xA079300AF757FB1A, p0); }
	static Any _0xC9B4B3A36F81FD75(Any p0) { return Native::Invoke<Any, Any>(0xC9B4B3A36F81FD75, p0); }
	static void _0xC0F0417A90402742(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xC0F0417A90402742, p0, p1); }
	static void _0xE31C0CB1C3186D40(Any p0) { return Native::Invoke<void, Any>(0xE31C0CB1C3186D40, p0); }
	static Any _0x0790473EEE1977D3(Any p0) { return Native::Invoke<Any, Any>(0x0790473EEE1977D3, p0); }
	static Any _0xCFC0BD09BB1B73FF(Any p0) { return Native::Invoke<Any, Any>(0xCFC0BD09BB1B73FF, p0); }
	static Any _0x8F3333F0A6900B3C(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x8F3333F0A6900B3C, p0, p1); }
	static Any _0xC061E50F8D299F95(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<Any, Any, Any, Any, Any>(0xC061E50F8D299F95, p0, p1, p2, p3); }
}
namespace QUEUE
{
	static Any _EVENT_QUEUE_IS_EMPTY(Any p0) { return Native::Invoke<Any, Any>(N::_EVENT_QUEUE_IS_EMPTY, p0); }
	static void _EVENT_QUEUE_POP(Any p0) { return Native::Invoke<void, Any>(N::_EVENT_QUEUE_POP, p0); }
}
namespace _NAMESPACE56
{
	static Any _STOP_RECORDING_THIS_FRAME() { return Native::Invoke<Any>(N::_STOP_RECORDING_THIS_FRAME); }
}
namespace REPLAY
{
	static BOOL _IS_INTERIOR_RENDERING_DISABLED() { return Native::Invoke<BOOL>(N::_IS_INTERIOR_RENDERING_DISABLED); }
	static void _0x57C6525034E76EB0() { return Native::Invoke<void>(0x57C6525034E76EB0); }
	static Any _0xB3F2829907403C13() { return Native::Invoke<Any>(0xB3F2829907403C13); }
	static Any _0xCEEC64BD27A59312(Any p0) { return Native::Invoke<Any, Any>(0xCEEC64BD27A59312, p0); }
	static Any _0x9EEB007317FA3B9C() { return Native::Invoke<Any>(0x9EEB007317FA3B9C); }
}
namespace SCRIPTS
{
	static void _0x31010318BA9897AC(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x31010318BA9897AC, p0, p1); }
	static Any _0xD426E2E3288469D6() { return Native::Invoke<Any>(0xD426E2E3288469D6); }
	static Any _0xE4ABE20DCE7C7CFE() { return Native::Invoke<Any>(0xE4ABE20DCE7C7CFE); }
	static Any _0xFFDDF802279BE128() { return Native::Invoke<Any>(0xFFDDF802279BE128); }
	static Any _0x64F765D9A1F8F02C() { return Native::Invoke<Any>(0x64F765D9A1F8F02C); }
	static Any _0x20F4CB76689ACDBC() { return Native::Invoke<Any>(0x20F4CB76689ACDBC); }
	static void _0xDE544B7EC0C187CC(Any p0) { return Native::Invoke<void, Any>(0xDE544B7EC0C187CC, p0); }
	static Any _0x72B2E00C9BAC6789(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x72B2E00C9BAC6789, p0, p1); }
	static Any _0x179A6F0EE2E79026(Any p0) { return Native::Invoke<Any, Any>(0x179A6F0EE2E79026, p0); }
	static Any _0xFA3B530A5CC693D5() { return Native::Invoke<Any>(0xFA3B530A5CC693D5); }
	static Any _0xC6DFB8C04C86D5A5() { return Native::Invoke<Any>(0xC6DFB8C04C86D5A5); }
	static Any _0x462C687BEA254BD9(Any p0) { return Native::Invoke<Any, Any>(0x462C687BEA254BD9, p0); }
	static Any _0x1BDB5A07307F6929() { return Native::Invoke<Any>(0x1BDB5A07307F6929); }
	static Any _0x1C5EB3C27F7508CB() { return Native::Invoke<Any>(0x1C5EB3C27F7508CB); }
	static Any _0x42A429CDFED6D99D() { return Native::Invoke<Any>(0x42A429CDFED6D99D); }
	static Any _0x5827BE85A87B073D() { return Native::Invoke<Any>(0x5827BE85A87B073D); }
	static Any _0x0A79C81C418F5D38() { return Native::Invoke<Any>(0x0A79C81C418F5D38); }
	static Any _0xA88E1D7FA1E20080() { return Native::Invoke<Any>(0xA88E1D7FA1E20080); }
	static Any _0x2F050A3FF8738245() { return Native::Invoke<Any>(0x2F050A3FF8738245); }
	static void REQUEST_SCRIPT(char* scriptName) { return Native::Invoke<void, char*>(N::REQUEST_SCRIPT, scriptName); }
	static void SET_SCRIPT_AS_NO_LONGER_NEEDED(char* scriptName) { return Native::Invoke<void, char*>(N::SET_SCRIPT_AS_NO_LONGER_NEEDED, scriptName); }
	static BOOL HAS_SCRIPT_LOADED(char* scriptName) { return Native::Invoke<BOOL, char*>(N::HAS_SCRIPT_LOADED, scriptName); }
	static BOOL DOES_SCRIPT_EXIST(char* scriptName) { return Native::Invoke<BOOL, char*>(N::DOES_SCRIPT_EXIST, scriptName); }
	static void REQUEST_SCRIPT_WITH_NAME_HASH(Hash scriptHash) { return Native::Invoke<void, Hash>(N::REQUEST_SCRIPT_WITH_NAME_HASH, scriptHash); }
	static void SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(Hash scriptHash) { return Native::Invoke<void, Hash>(N::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED, scriptHash); }
	static BOOL HAS_SCRIPT_WITH_NAME_HASH_LOADED(Hash scriptHash) { return Native::Invoke<BOOL, Hash>(N::HAS_SCRIPT_WITH_NAME_HASH_LOADED, scriptHash); }
	static Any DOES_SCRIPT_WITH_NAME_HASH_EXIST(Any p0) { return Native::Invoke<Any, Any>(N::DOES_SCRIPT_WITH_NAME_HASH_EXIST, p0); }
	static void TERMINATE_THREAD(int threadId) { return Native::Invoke<void, int>(N::TERMINATE_THREAD, threadId); }
	static BOOL IS_THREAD_ACTIVE(int threadId, Any p1) { return Native::Invoke<BOOL, int, Any>(N::IS_THREAD_ACTIVE, threadId, p1); }
	static Any _0xFF975BC4435A0FA3(Any p0) { return Native::Invoke<Any, Any>(0xFF975BC4435A0FA3, p0); }
	static Any _0xD92FA81B64920E85() { return Native::Invoke<Any>(0xD92FA81B64920E85); }
	static Any _0x724CB89D35B283D0(Any p0) { return Native::Invoke<Any, Any>(0x724CB89D35B283D0, p0); }
	static void SCRIPT_THREAD_ITERATOR_RESET() { return Native::Invoke<void>(N::SCRIPT_THREAD_ITERATOR_RESET); }
	static Any SCRIPT_THREAD_ITERATOR_GET_NEXT_THREAD_ID() { return Native::Invoke<Any>(N::SCRIPT_THREAD_ITERATOR_GET_NEXT_THREAD_ID); }
	static Any _0x20B7F69B40C6B755(Any p0) { return Native::Invoke<Any, Any>(0x20B7F69B40C6B755, p0); }
	static int GET_ID_OF_THIS_THREAD() { return Native::Invoke<int>(N::GET_ID_OF_THIS_THREAD); }
	static void TERMINATE_THIS_THREAD() { return Native::Invoke<void>(N::TERMINATE_THIS_THREAD); }
	static Any _GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(Any p0) { return Native::Invoke<Any, Any>(N::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH, p0); }
	static void _0x7DE4643157AD646C(Any p0) { return Native::Invoke<void, Any>(0x7DE4643157AD646C, p0); }
	static void _0x7423F7835770F619(Any p0) { return Native::Invoke<void, Any>(0x7423F7835770F619, p0); }
	static Any _0x9E4EF615E307FBBE() { return Native::Invoke<Any>(0x9E4EF615E307FBBE); }
	static Any _0x30BED53646C86D11(Any p0) { return Native::Invoke<Any, Any>(0x30BED53646C86D11, p0); }
	static Any _0x54AE4FDEEFEAB77E() { return Native::Invoke<Any>(0x54AE4FDEEFEAB77E); }
	static Hash GET_HASH_OF_THIS_SCRIPT_NAME() { return Native::Invoke<Hash>(N::GET_HASH_OF_THIS_SCRIPT_NAME); }
	static int GET_NUMBER_OF_EVENTS(int eventGroup) { return Native::Invoke<int, int>(N::GET_NUMBER_OF_EVENTS, eventGroup); }
	static BOOL GET_EVENT_EXISTS(int eventGroup, int eventIndex) { return Native::Invoke<BOOL, int, int>(N::GET_EVENT_EXISTS, eventGroup, eventIndex); }
	static int GET_EVENT_AT_INDEX(int eventGroup, int eventIndex) { return Native::Invoke<int, int, int>(N::GET_EVENT_AT_INDEX, eventGroup, eventIndex); }
	static BOOL GET_EVENT_DATA(int eventGroup, int eventIndex, int* argStruct, int argStructSize) { return Native::Invoke<BOOL, int, int, int*, int>(N::GET_EVENT_DATA, eventGroup, eventIndex, argStruct, argStructSize); }
	static void _0x4768D5252EAEB76F(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0x4768D5252EAEB76F, p0, p1, p2); }
	static void TRIGGER_SCRIPT_EVENT(int eventGroup, Any* args, int argCount, Any bit, Any p4) { return Native::Invoke<void, int, Any*, int, Any, Any>(N::TRIGGER_SCRIPT_EVENT, eventGroup, args, argCount, bit, p4); }
	static Any _0x8B61C950A148FFA2() { return Native::Invoke<Any>(0x8B61C950A148FFA2); }
	static Any _0xE7282390542F570D(Any p0) { return Native::Invoke<Any, Any>(0xE7282390542F570D, p0); }
	static void _0x11B0A0B282FA9B10(Any p0) { return Native::Invoke<void, Any>(0x11B0A0B282FA9B10, p0); }
	static Any _0x6F700A4BF7C3331B() { return Native::Invoke<Any>(0x6F700A4BF7C3331B); }
	static void _0xF9E951A1E5517C06() { return Native::Invoke<void>(0xF9E951A1E5517C06); }
	static Any _0x76CBCD9EADC00955() { return Native::Invoke<Any>(0x76CBCD9EADC00955); }
	static void SHUTDOWN_LOADING_SCREEN() { return Native::Invoke<void>(N::SHUTDOWN_LOADING_SCREEN); }
	static void SET_NO_LOADING_SCREEN(BOOL toggle) { return Native::Invoke<void, BOOL>(N::SET_NO_LOADING_SCREEN, toggle); }
	static Any GET_NO_LOADING_SCREEN() { return Native::Invoke<Any>(N::GET_NO_LOADING_SCREEN); }
	static Any _0x1E5B70E53DB661E5() { return Native::Invoke<Any>(0x1E5B70E53DB661E5); }
	static Any _0x29FB4CE89472C3CB() { return Native::Invoke<Any>(0x29FB4CE89472C3CB); }
	static Any _0x778D4733E0F2F265() { return Native::Invoke<Any>(0x778D4733E0F2F265); }
	static Any _0xB54ADBE65D528FCB() { return Native::Invoke<Any>(0xB54ADBE65D528FCB); }
	static void _0xBC2C927F5C264243(Any p0) { return Native::Invoke<void, Any>(0xBC2C927F5C264243, p0); }
	static void _0xE98204D3C25AE14C(Any p0) { return Native::Invoke<void, Any>(0xE98204D3C25AE14C, p0); }
	static Any _0x2238EC3EC631AB1F() { return Native::Invoke<Any>(0x2238EC3EC631AB1F); }
	static Any _0x4858148E3B8A75D0() { return Native::Invoke<Any>(0x4858148E3B8A75D0); }
	static Any BG_START_CONTEXT_HASH() { return Native::Invoke<Any>(N::BG_START_CONTEXT_HASH); }
	static Any BG_END_CONTEXT_HASH() { return Native::Invoke<Any>(N::BG_END_CONTEXT_HASH); }
	static Any BG_START_CONTEXT() { return Native::Invoke<Any>(N::BG_START_CONTEXT); }
	static Any BG_END_CONTEXT() { return Native::Invoke<Any>(N::BG_END_CONTEXT); }
	static Any _0x4AE1DFF337A86FDE() { return Native::Invoke<Any>(0x4AE1DFF337A86FDE); }
	static Any _0x55C40B7592BAD213() { return Native::Invoke<Any>(0x55C40B7592BAD213); }
	static Any _0x829CD22E043A2577() { return Native::Invoke<Any>(0x829CD22E043A2577); }
	static Any _0xBE7D814CFA181B56() { return Native::Invoke<Any>(0xBE7D814CFA181B56); }
	static void _0x7D654266025E921B(Any p0) { return Native::Invoke<void, Any>(0x7D654266025E921B, p0); }
	static void _0x50B72A754EE64A71(Any p0) { return Native::Invoke<void, Any>(0x50B72A754EE64A71, p0); }
	static Any _0x7409669C5ED50144(Any p0) { return Native::Invoke<Any, Any>(0x7409669C5ED50144, p0); }
	static Any _0xAC8FAB22A914AE34() { return Native::Invoke<Any>(0xAC8FAB22A914AE34); }
	static Any _0xB9467E41DAB1CF2C() { return Native::Invoke<Any>(0xB9467E41DAB1CF2C); }
	static Any _0x4293B44A855F82CC() { return Native::Invoke<Any>(0x4293B44A855F82CC); }
	static Any _0xB952A3AC41D58F2F(Any p0) { return Native::Invoke<Any, Any>(0xB952A3AC41D58F2F, p0); }
	static Any _0xDC3914A99B4A5FDF(Any p0) { return Native::Invoke<Any, Any>(0xDC3914A99B4A5FDF, p0); }
	static Any _0x66EE5B93C308F734(Any p0) { return Native::Invoke<Any, Any>(0x66EE5B93C308F734, p0); }
	static void _0xE66F392BFCE734AF(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xE66F392BFCE734AF, p0, p1); }
	static Any _0x42A7EB5C814C2DE0(Any p0) { return Native::Invoke<Any, Any>(0x42A7EB5C814C2DE0, p0); }
	static void _0x11986B05885564D2(Any p0) { return Native::Invoke<void, Any>(0x11986B05885564D2, p0); }
	static Any _0x380FFA15B72408FB(Any p0) { return Native::Invoke<Any, Any>(0x380FFA15B72408FB, p0); }
}
namespace _NAMESPACE59
{
	static Any _0x4FB5869E2B37FC00() { return Native::Invoke<Any>(0x4FB5869E2B37FC00); }
	static Any _0x62C9EB51656D68CE(Any p0) { return Native::Invoke<Any, Any>(0x62C9EB51656D68CE, p0); }
	static Any _0x1840F3B30ED0105F() { return Native::Invoke<Any>(0x1840F3B30ED0105F); }
	static Any _0x3CF46F55C6585590() { return Native::Invoke<Any>(0x3CF46F55C6585590); }
	static Any _0x1431540BCA1A1BD2() { return Native::Invoke<Any>(0x1431540BCA1A1BD2); }
	static void _0xED4B0C1057892B2E(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<void, Any, Any, Any, Any>(0xED4B0C1057892B2E, p0, p1, p2, p3); }
	static void _0x9BB83C4DD7BE0802(Any p0, Any p1, Any p2, Any p3, Any p4) { return Native::Invoke<void, Any, Any, Any, Any, Any>(0x9BB83C4DD7BE0802, p0, p1, p2, p3, p4); }
	static void _0xE8346E62FD7FB962() { return Native::Invoke<void>(0xE8346E62FD7FB962); }
	static void _0xC0ABF784590798A9(Any p0) { return Native::Invoke<void, Any>(0xC0ABF784590798A9, p0); }
	static Any _0xB00CE33465B5406D(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0xB00CE33465B5406D, p0, p1); }
	static void _0x529B9CCD0972AF4D(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x529B9CCD0972AF4D, p0, p1); }
	static Any _0x529B9CCD0972AF4E() { return Native::Invoke<Any>(0x529B9CCD0972AF4E); }
	static void _0xB25B5A375BE5BE26(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xB25B5A375BE5BE26, p0, p1); }
	static void _0x35DEFECAE36D4FAE(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x35DEFECAE36D4FAE, p0, p1); }
	static void _0xBB7F4273C186BC4B(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xBB7F4273C186BC4B, p0, p1); }
	static void _0x5A10D6506B2F2C63(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x5A10D6506B2F2C63, p0, p1); }
	static void _0x4845E7E7643A908C(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x4845E7E7643A908C, p0, p1); }
	static void _0x186608A2AC6F9E88(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x186608A2AC6F9E88, p0, p1); }
	static void _0x443174C20B8B9E7F(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0x443174C20B8B9E7F, p0, p1, p2); }
	static void _0x8E8FFB9E4AD051D2(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<void, Any, Any, Any, Any>(0x8E8FFB9E4AD051D2, p0, p1, p2, p3); }
	static void _0xE0B45E983BFC0768() { return Native::Invoke<void>(0xE0B45E983BFC0768); }
	static void _0x81F4E92BE3958364(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0x81F4E92BE3958364, p0, p1, p2); }
	static void _0xA844FEB5C22C2C74() { return Native::Invoke<void>(0xA844FEB5C22C2C74); }
}
namespace SHAPETEST
{
	static int START_SHAPE_TEST_LOS_PROBE(float x1, float y1, float z1, float x2, float y2, float z2, int flags, Entity ent, int p8) { return Native::Invoke<int, float, float, float, float, float, float, int, Entity, int>(N::START_SHAPE_TEST_LOS_PROBE, x1, y1, z1, x2, y2, z2, flags, ent, p8); }
	static Any _0x04AA59CA40571C2E(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x04AA59CA40571C2E, p0, p1); }
	static int _START_SHAPE_TEST_RAY(float x1, float y1, float z1, float x2, float y2, float z2, int flags, Entity entity, int p8) { return Native::Invoke<int, float, float, float, float, float, float, int, Entity, int>(N::_START_SHAPE_TEST_RAY, x1, y1, z1, x2, y2, z2, flags, entity, p8); }
	static int START_SHAPE_TEST_BOX(float x, float y, float z, float x1, float y2, float z2, float rotX, float rotY, float rotZ, Any p9, Any p10, Any entity, Any p12) { return Native::Invoke<int, float, float, float, float, float, float, float, float, float, Any, Any, Any, Any>(N::START_SHAPE_TEST_BOX, x, y, z, x1, y2, z2, rotX, rotY, rotZ, p9, p10, entity, p12); }
	static int START_SHAPE_TEST_CAPSULE(float x1, float y1, float z1, float x2, float y2, float z2, float radius, int flags, Entity entity, int p9) { return Native::Invoke<int, float, float, float, float, float, float, float, int, Entity, int>(N::START_SHAPE_TEST_CAPSULE, x1, y1, z1, x2, y2, z2, radius, flags, entity, p9); }
	static Any START_SHAPE_TEST_SWEPT_SPHERE(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9) { return Native::Invoke<Any, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any>(N::START_SHAPE_TEST_SWEPT_SPHERE, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); }
	static Any _START_SHAPE_TEST_SURROUNDING_COORDS() { return Native::Invoke<Any>(N::_START_SHAPE_TEST_SURROUNDING_COORDS); }
	static int GET_SHAPE_TEST_RESULT(int rayHandle, BOOL* hit, Vector3* endCoords, Vector3* surfaceNormal, Entity* entityHit) { return Native::Invoke<int, int, BOOL*, Vector3*, Vector3*, Entity*>(N::GET_SHAPE_TEST_RESULT, rayHandle, hit, endCoords, surfaceNormal, entityHit); }
}
namespace SOCIALCLUB
{
	static int _GET_TOTAL_SC_INBOX_IDS() { return Native::Invoke<int>(N::_GET_TOTAL_SC_INBOX_IDS); }
	static Any _SC_INBOX_MESSAGE_INIT() { return Native::Invoke<Any>(N::_SC_INBOX_MESSAGE_INIT); }
	static Any _IS_SC_INBOX_VALID() { return Native::Invoke<Any>(N::_IS_SC_INBOX_VALID); }
	static Any _SC_INBOX_MESSAGE_POP() { return Native::Invoke<Any>(N::_SC_INBOX_MESSAGE_POP); }
	static Any SC_INBOX_MESSAGE_GET_DATA_INT() { return Native::Invoke<Any>(N::SC_INBOX_MESSAGE_GET_DATA_INT); }
	static Any SC_INBOX_MESSAGE_GET_DATA_STRING() { return Native::Invoke<Any>(N::SC_INBOX_MESSAGE_GET_DATA_STRING); }
	static Any _SC_INBOX_MESSAGE_GET_STRING() { return Native::Invoke<Any>(N::_SC_INBOX_MESSAGE_GET_STRING); }
	static Any _0xA31DAFCDC33775E9() { return Native::Invoke<Any>(0xA31DAFCDC33775E9); }
	static Any _0x0000000085488C49() { return Native::Invoke<Any>(0x0000000085488C49); }
	static Any _0x00000000467F4CAA() { return Native::Invoke<Any>(0x00000000467F4CAA); }
	static Any _0x00000000EB2D93B3() { return Native::Invoke<Any>(0x00000000EB2D93B3); }
	static Any SC_PROFANITY_CHECK_STRING(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(N::SC_PROFANITY_CHECK_STRING, p0, p1); }
	static Any SC_PROFANITY_GET_CHECK_IS_VALID(Any p0) { return Native::Invoke<Any, Any>(N::SC_PROFANITY_GET_CHECK_IS_VALID, p0); }
	static Any SC_PROFANITY_GET_CHECK_IS_PENDING(Any p0) { return Native::Invoke<Any, Any>(N::SC_PROFANITY_GET_CHECK_IS_PENDING, p0); }
	static Any SC_PROFANITY_GET_STRING_PASSED(Any p0) { return Native::Invoke<Any, Any>(N::SC_PROFANITY_GET_STRING_PASSED, p0); }
	static Any SC_PROFANITY_GET_STRING_STATUS(Any p0) { return Native::Invoke<Any, Any>(N::SC_PROFANITY_GET_STRING_STATUS, p0); }
	static Any _0xCBF743C984695CF3() { return Native::Invoke<Any>(0xCBF743C984695CF3); }
	static Any _0xD635DF6BAA5A6017() { return Native::Invoke<Any>(0xD635DF6BAA5A6017); }
	static Any _0xB4411D4D6B81438E() { return Native::Invoke<Any>(0xB4411D4D6B81438E); }
	static Any _0x060BBAD634C2B44B() { return Native::Invoke<Any>(0x060BBAD634C2B44B); }
	static Any _0x9F6DCD0C939C71E9() { return Native::Invoke<Any>(0x9F6DCD0C939C71E9); }
	static Any _0x89D9BDE7334B110F() { return Native::Invoke<Any>(0x89D9BDE7334B110F); }
	static Any _0x09937EB0CEBC2F9F() { return Native::Invoke<Any>(0x09937EB0CEBC2F9F); }
	static Any _0x03C03ABBABBEF752() { return Native::Invoke<Any>(0x03C03ABBABBEF752); }
	static Any _0x3519CC3525319A96() { return Native::Invoke<Any>(0x3519CC3525319A96); }
	static Any _0x1BDB56DB258F052D() { return Native::Invoke<Any>(0x1BDB56DB258F052D); }
	static Any _0xC8FC3B2432E8229D() { return Native::Invoke<Any>(0xC8FC3B2432E8229D); }
	static Any _0x85EA0BEC7B1F7622() { return Native::Invoke<Any>(0x85EA0BEC7B1F7622); }
	static Any _0x62B384FEFDE06817() { return Native::Invoke<Any>(0x62B384FEFDE06817); }
	static Any _0x7C981DE05A7403A0() { return Native::Invoke<Any>(0x7C981DE05A7403A0); }
	static Any _0x91C9E2A0F9DD6DD4() { return Native::Invoke<Any>(0x91C9E2A0F9DD6DD4); }
	static Any _0x049D2196D9D11184() { return Native::Invoke<Any>(0x049D2196D9D11184); }
	static Any _0x11EA52CAD1B55910() { return Native::Invoke<Any>(0x11EA52CAD1B55910); }
}
namespace SOCIALCLUBFEED
{
	static Any _SC_FEED_SUBMIT_PRESET_MESSAGE(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(N::_SC_FEED_SUBMIT_PRESET_MESSAGE, p0, p1); }
}
namespace SPACTIONPROXY
{
	static Any _START_MANAGER() { return Native::Invoke<Any>(N::_START_MANAGER); }
	static Any _MANAGER_IS_READY() { return Native::Invoke<Any>(N::_MANAGER_IS_READY); }
	static Any _MANAGER_IS_FAILED() { return Native::Invoke<Any>(N::_MANAGER_IS_FAILED); }
	static Any _0x1F471B79ACC97BEF(Any p0) { return Native::Invoke<Any, Any>(0x1F471B79ACC97BEF, p0); }
	static Any _0x1F471B79ACC98BEF(Any p0) { return Native::Invoke<Any, Any>(0x1F471B79ACC98BEF, p0); }
	static Any _0x1F471B79ACC94BEF(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x1F471B79ACC94BEF, p0, p1); }
}
namespace _NAMESPACE64
{
	static Any _0xC48FE1971C9743FF(Any p0) { return Native::Invoke<Any, Any>(0xC48FE1971C9743FF, p0); }
	static Any _0xA4DDF5DF95E65EEE(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(0xA4DDF5DF95E65EEE, p0, p1, p2); }
	static Any _0x481BDF6A10C5EF68() { return Native::Invoke<Any>(0x481BDF6A10C5EF68); }
	static Any _0x3B5107353267D7A1(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(0x3B5107353267D7A1, p0, p1, p2); }
	static Any _0x05060A54834F2382(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(0x05060A54834F2382, p0, p1, p2); }
	static Any _0x1FAE9B2FAA2DFE06() { return Native::Invoke<Any>(0x1FAE9B2FAA2DFE06); }
	static Any _0x767FBC2AC802EF3E(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x767FBC2AC802EF3E, p0, p1); }
	static Any _0xD7AE6C9C9C6AC54D(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0xD7AE6C9C9C6AC54D, p0, p1); }
	static Any _0x11B5E6D2AE73F48F(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x11B5E6D2AE73F48F, p0, p1); }
	static Any _0x8B0FACEFC36C824C() { return Native::Invoke<Any>(0x8B0FACEFC36C824C); }
	static void _0x0FEE2561120F3333(Any p0) { return Native::Invoke<void, Any>(0x0FEE2561120F3333, p0); }
	static void _0x6A0184E904CDF25E(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x6A0184E904CDF25E, p0, p1); }
	static void _0x4A47E38EA3D60939(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x4A47E38EA3D60939, p0, p1); }
	static void _0xBD861AE8A5181ED7(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xBD861AE8A5181ED7, p0, p1); }
	static void _0x91A4F58E01ED5E4C(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x91A4F58E01ED5E4C, p0, p1); }
	static void _0xE141F6B40B1E3683(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xE141F6B40B1E3683, p0, p1); }
	static Any _0x34B22DE38477EDB4() { return Native::Invoke<Any>(0x34B22DE38477EDB4); }
	static Any _0xCAAE29CB5591B2A5() { return Native::Invoke<Any>(0xCAAE29CB5591B2A5); }
	static Any _0xDCEC875A02991AD0() { return Native::Invoke<Any>(0xDCEC875A02991AD0); }
	static Any _0x1E7384AB5D4F4581(Any p0) { return Native::Invoke<Any, Any>(0x1E7384AB5D4F4581, p0); }
	static void _0xDA26263C87CCE9C1(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<void, Any, Any, Any, Any>(0xDA26263C87CCE9C1, p0, p1, p2, p3); }
	static void _0x831BF01C56149A8A(Any p0) { return Native::Invoke<void, Any>(0x831BF01C56149A8A, p0); }
	static Any _0x7C2ABF6E556B21FC() { return Native::Invoke<Any>(0x7C2ABF6E556B21FC); }
	static void _0x8312F09C56149A8A(Any p0) { return Native::Invoke<void, Any>(0x8312F09C56149A8A, p0); }
	static void _0x378D3B1B11D9385B(Any p0) { return Native::Invoke<void, Any>(0x378D3B1B11D9385B, p0); }
	static void _0xDA26263C07CCE9C2(Any p0) { return Native::Invoke<void, Any>(0xDA26263C07CCE9C2, p0); }
	static void _0xD64DBC8B0424135F(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xD64DBC8B0424135F, p0, p1); }
	static void _0xA59590050F80FF2E(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<void, Any, Any, Any, Any>(0xA59590050F80FF2E, p0, p1, p2, p3); }
	static void _0xF8181B5EF156862C(Any p0) { return Native::Invoke<void, Any>(0xF8181B5EF156862C, p0); }
	static Any _0x6B1044FDC2B09101() { return Native::Invoke<Any>(0x6B1044FDC2B09101); }
	static Any _0x8C889E4CBB4B2356() { return Native::Invoke<Any>(0x8C889E4CBB4B2356); }
	static Any _0x262EF7CF49CF1EB9() { return Native::Invoke<Any>(0x262EF7CF49CF1EB9); }
	static Any _0xB22F05732F72F70C() { return Native::Invoke<Any>(0xB22F05732F72F70C); }
	static Any _0xF21A5D66874FCEDD() { return Native::Invoke<Any>(0xF21A5D66874FCEDD); }
	static Any _0x3EB2791A1FBC8A42() { return Native::Invoke<Any>(0x3EB2791A1FBC8A42); }
	static Any _0xDF95DF488A645CE7() { return Native::Invoke<Any>(0xDF95DF488A645CE7); }
	static Any _0x302E71C1D9EE75B9() { return Native::Invoke<Any>(0x302E71C1D9EE75B9); }
	static Any _0x01F4D242765C6B24(Any p0) { return Native::Invoke<Any, Any>(0x01F4D242765C6B24, p0); }
	static void _0x6123E2832C34243D(Any p0, Any p1, Any p2, Any p3, Any p4) { return Native::Invoke<void, Any, Any, Any, Any, Any>(0x6123E2832C34243D, p0, p1, p2, p3, p4); }
	static void _0xCA41E86545413B5B(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any, Any>(0xCA41E86545413B5B, p0, p1, p2, p3, p4, p5, p6); }
	static void _0xB2A38826E5886E83(Any p0) { return Native::Invoke<void, Any>(0xB2A38826E5886E83, p0); }
	static void _0xD5910ECF81A2278C(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<void, Any, Any, Any, Any>(0xD5910ECF81A2278C, p0, p1, p2, p3); }
	static Any _0x99230691875FC218() { return Native::Invoke<Any>(0x99230691875FC218); }
	static void _0x025E98E317652CDD(Any p0) { return Native::Invoke<void, Any>(0x025E98E317652CDD, p0); }
	static Any _0xE5A680A5D8B1F687() { return Native::Invoke<Any>(0xE5A680A5D8B1F687); }
	static Any _0x4DAC398297981B87(Any p0) { return Native::Invoke<Any, Any>(0x4DAC398297981B87, p0); }
	static Any _0x04DAC3929796EB87(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x04DAC3929796EB87, p0, p1); }
	static Any _0x58CB53DB63F84DE9(Any p0) { return Native::Invoke<Any, Any>(0x58CB53DB63F84DE9, p0); }
	static Any _0x58CB53DB63F84DEA(Any p0) { return Native::Invoke<Any, Any>(0x58CB53DB63F84DEA, p0); }
	static void _0xDDBD560745B1EE9A(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0xDDBD560745B1EE9A, p0, p1, p2); }
	static Any _0x86922D8C02FB7703() { return Native::Invoke<Any>(0x86922D8C02FB7703); }
	static Any _0xDDBD560745B1EE9B() { return Native::Invoke<Any>(0xDDBD560745B1EE9B); }
	static void _0xDDBD560745B1EE9C(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xDDBD560745B1EE9C, p0, p1); }
	static Any _0x4ABF7E4DB6279E8F() { return Native::Invoke<Any>(0x4ABF7E4DB6279E8F); }
	static Any _0x43B0163154A50C86() { return Native::Invoke<Any>(0x43B0163154A50C86); }
	static Any _0xC3FCB47344DCB638() { return Native::Invoke<Any>(0xC3FCB47344DCB638); }
	static Any _0x00CE6A93324A590B() { return Native::Invoke<Any>(0x00CE6A93324A590B); }
	static Any _0xDDBD560745B1EE98() { return Native::Invoke<Any>(0xDDBD560745B1EE98); }
	static Any _0xB112B9262EC29C20() { return Native::Invoke<Any>(0xB112B9262EC29C20); }
	static Any _0x4FCBCC0584CD08E9() { return Native::Invoke<Any>(0x4FCBCC0584CD08E9); }
	static Any _0xCA1F0B5103936891() { return Native::Invoke<Any>(0xCA1F0B5103936891); }
	static Any _0x8BA3D7B1E83EF803() { return Native::Invoke<Any>(0x8BA3D7B1E83EF803); }
	static Any _0x0B0576DD3A75E58D(Any p0) { return Native::Invoke<Any, Any>(0x0B0576DD3A75E58D, p0); }
	static Any _0xA785A52B59B7E7B2(Any p0) { return Native::Invoke<Any, Any>(0xA785A52B59B7E7B2, p0); }
	static Any _0xC0BB774787BBF301(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0xC0BB774787BBF301, p0, p1); }
	static void _0x97E18E7C098626DE(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0x97E18E7C098626DE, p0, p1, p2); }
	static Any _0x9D0F5D2E1951CD84() { return Native::Invoke<Any>(0x9D0F5D2E1951CD84); }
	static Any _0x218F7710A139D012() { return Native::Invoke<Any>(0x218F7710A139D012); }
	static Any _0x3AEABAE3F3C7600C() { return Native::Invoke<Any>(0x3AEABAE3F3C7600C); }
	static Any _0x997060BC223ADFF9() { return Native::Invoke<Any>(0x997060BC223ADFF9); }
	static Any _0x332630B862277879() { return Native::Invoke<Any>(0x332630B862277879); }
	static Any _0x70379B5C3FF1D209() { return Native::Invoke<Any>(0x70379B5C3FF1D209); }
	static Any _0x3F6FD87D2030ADC6() { return Native::Invoke<Any>(0x3F6FD87D2030ADC6); }
	static Any _0xA2E2BEA4E83F6270() { return Native::Invoke<Any>(0xA2E2BEA4E83F6270); }
	static Any _0xB5E2EDA2135E0FA1() { return Native::Invoke<Any>(0xB5E2EDA2135E0FA1); }
	static Any _0x8F5317729F791D10() { return Native::Invoke<Any>(0x8F5317729F791D10); }
	static Any _0x610783F646894D25() { return Native::Invoke<Any>(0x610783F646894D25); }
	static Any _0xBFFA88522FF0F730() { return Native::Invoke<Any>(0xBFFA88522FF0F730); }
	static Any _0x7D675C9DDDB365BE() { return Native::Invoke<Any>(0x7D675C9DDDB365BE); }
	static Any _0xBA61BA6205A3F5A8() { return Native::Invoke<Any>(0xBA61BA6205A3F5A8); }
	static Any _0x4F2D5FA23DB992DE() { return Native::Invoke<Any>(0x4F2D5FA23DB992DE); }
	static Any _0x4E463A3CDEFFFE96() { return Native::Invoke<Any>(0x4E463A3CDEFFFE96); }
}
namespace STREAMING
{
	static void REQUEST_MODEL(Hash model, Any p1) { return Native::Invoke<void, Hash, Any>(N::REQUEST_MODEL, model, p1); }
	static BOOL HAS_MODEL_LOADED(Hash model) { return Native::Invoke<BOOL, Hash>(N::HAS_MODEL_LOADED, model); }
	static void SET_MODEL_AS_NO_LONGER_NEEDED(Hash model) { return Native::Invoke<void, Hash>(N::SET_MODEL_AS_NO_LONGER_NEEDED, model); }
	static Any IS_MODEL_IN_CDIMAGE() { return Native::Invoke<Any>(N::IS_MODEL_IN_CDIMAGE); }
	static BOOL IS_MODEL_VALID(Hash model) { return Native::Invoke<BOOL, Hash>(N::IS_MODEL_VALID, model); }
	static Any _0xC3F09DE9D6D17DDA(Any p0) { return Native::Invoke<Any, Any>(0xC3F09DE9D6D17DDA, p0); }
	static BOOL IS_MODEL_A_VEHICLE(Hash model) { return Native::Invoke<BOOL, Hash>(N::IS_MODEL_A_VEHICLE, model); }
	static Any _0x274EE1B90CFA669E(Any p0) { return Native::Invoke<Any, Any>(0x274EE1B90CFA669E, p0); }
	static Any _0xDA8B2EAF29E872E2(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(0xDA8B2EAF29E872E2, p0, p1, p2); }
	static void _0x80B3E0597366ADF1() { return Native::Invoke<void>(0x80B3E0597366ADF1); }
	static Any REQUEST_COLLISION_AT_COORD(float x, float y, float z) { return Native::Invoke<Any, float, float, float>(N::REQUEST_COLLISION_AT_COORD, x, y, z); }
	static void _0xA8432A14D4DC2101(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0xA8432A14D4DC2101, p0, p1, p2); }
	static void REQUEST_COLLISION_FOR_MODEL(Hash model) { return Native::Invoke<void, Hash>(N::REQUEST_COLLISION_FOR_MODEL, model); }
	static BOOL HAS_COLLISION_FOR_MODEL_LOADED(Hash model) { return Native::Invoke<BOOL, Hash>(N::HAS_COLLISION_FOR_MODEL_LOADED, model); }
	static BOOL DOES_ANIM_DICT_EXIST(char* animDict) { return Native::Invoke<BOOL, char*>(N::DOES_ANIM_DICT_EXIST, animDict); }
	static void REQUEST_ANIM_DICT(char* animDict) { return Native::Invoke<void, char*>(N::REQUEST_ANIM_DICT, animDict); }
	static BOOL HAS_ANIM_DICT_LOADED(char* animDict) { return Native::Invoke<BOOL, char*>(N::HAS_ANIM_DICT_LOADED, animDict); }
	static void REMOVE_ANIM_DICT(char* animDict) { return Native::Invoke<void, char*>(N::REMOVE_ANIM_DICT, animDict); }
	static void _0x2B6529C54D29037A(Any p0) { return Native::Invoke<void, Any>(0x2B6529C54D29037A, p0); }
	static Any _0x2C04D89A0FB4E244(Any p0) { return Native::Invoke<Any, Any>(0x2C04D89A0FB4E244, p0); }
	static void _0x57A197AD83F66BBF(Any p0) { return Native::Invoke<void, Any>(0x57A197AD83F66BBF, p0); }
	static void REQUEST_CLIP_SET(char* clipSet) { return Native::Invoke<void, char*>(N::REQUEST_CLIP_SET, clipSet); }
	static BOOL HAS_CLIP_SET_LOADED(char* clipSet) { return Native::Invoke<BOOL, char*>(N::HAS_CLIP_SET_LOADED, clipSet); }
	static void REMOVE_CLIP_SET(char* clipSet) { return Native::Invoke<void, char*>(N::REMOVE_CLIP_SET, clipSet); }
	static Any _0xAC37644A538F7524() { return Native::Invoke<Any>(0xAC37644A538F7524); }
	static void _0x03DDBF2D73799F9E(Any p0) { return Native::Invoke<void, Any>(0x03DDBF2D73799F9E, p0); }
	static Any _0x85B8F04555AB49B8(Any p0) { return Native::Invoke<Any, Any>(0x85B8F04555AB49B8, p0); }
	static void _0x9F348DE670423460(Any p0) { return Native::Invoke<void, Any>(0x9F348DE670423460, p0); }
	static Any _0x5288B7F0690F7C1F(Any p0) { return Native::Invoke<Any, Any>(0x5288B7F0690F7C1F, p0); }
	static Any _0x19A6BE7D9C6884D3(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<Any, Any, Any, Any, Any>(0x19A6BE7D9C6884D3, p0, p1, p2, p3); }
	static Any _0x9427C94D2E4094A4(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x9427C94D2E4094A4, p0, p1); }
	static Any _0x4EDDD9E9CA5AF985(Any p0) { return Native::Invoke<Any, Any>(0x4EDDD9E9CA5AF985, p0); }
	static Any _0xB223249B7798EEED(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<Any, Any, Any, Any, Any>(0xB223249B7798EEED, p0, p1, p2, p3); }
	static Any _0xA0AE7653E8181725(Any p0) { return Native::Invoke<Any, Any>(0xA0AE7653E8181725, p0); }
	static Any _0x66BC28E50E85270E(Any p0) { return Native::Invoke<Any, Any>(0x66BC28E50E85270E, p0); }
	static Any _0x9C77964B0E07B633(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(0x9C77964B0E07B633, p0, p1, p2); }
	static void _0x59767C5A7A9AE6DA(Any p0) { return Native::Invoke<void, Any>(0x59767C5A7A9AE6DA, p0); }
	static Any _0x9E211A378F95C97C() { return Native::Invoke<Any>(0x9E211A378F95C97C); }
	static void _0x5A3E5CF7B4014B96(Any p0) { return Native::Invoke<void, Any>(0x5A3E5CF7B4014B96, p0); }
	static void _0x431E3AB760629B34(Any p0) { return Native::Invoke<void, Any>(0x431E3AB760629B34, p0); }
	static Any _0xD779B9B910BD3B7C(Any p0) { return Native::Invoke<Any, Any>(0xD779B9B910BD3B7C, p0); }
	static Any _0x93AC1B91CB6D9913(Any p0) { return Native::Invoke<Any, Any>(0x93AC1B91CB6D9913, p0); }
	static Any _0x73B40D97D7BAAD77(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<Any, Any, Any, Any, Any>(0x73B40D97D7BAAD77, p0, p1, p2, p3); }
	static void SET_GAME_PAUSES_FOR_STREAMING(BOOL toggle) { return Native::Invoke<void, BOOL>(N::SET_GAME_PAUSES_FOR_STREAMING, toggle); }
	static int GET_NUMBER_OF_STREAMING_REQUESTS() { return Native::Invoke<int>(N::GET_NUMBER_OF_STREAMING_REQUESTS); }
	static Any REQUEST_PTFX_ASSET() { return Native::Invoke<Any>(N::REQUEST_PTFX_ASSET); }
	static BOOL HAS_PTFX_ASSET_LOADED() { return Native::Invoke<BOOL>(N::HAS_PTFX_ASSET_LOADED); }
	static void REMOVE_PTFX_ASSET() { return Native::Invoke<void>(N::REMOVE_PTFX_ASSET); }
	static void REQUEST_NAMED_PTFX_ASSET(char* assetName) { return Native::Invoke<void, char*>(N::REQUEST_NAMED_PTFX_ASSET, assetName); }
	static BOOL HAS_NAMED_PTFX_ASSET_LOADED(char* assetName) { return Native::Invoke<BOOL, char*>(N::HAS_NAMED_PTFX_ASSET_LOADED, assetName); }
	static void REMOVE_NAMED_PTFX_ASSET(Any p0) { return Native::Invoke<void, Any>(N::REMOVE_NAMED_PTFX_ASSET, p0); }
	static void _0x2F9AC754FE179D58(Any p0) { return Native::Invoke<void, Any>(0x2F9AC754FE179D58, p0); }
	static Any _0x8A3945405B31048F() { return Native::Invoke<Any>(0x8A3945405B31048F); }
	static Any _0x071769BCB24379E5() { return Native::Invoke<Any>(0x071769BCB24379E5); }
	static void CLEAR_FOCUS() { return Native::Invoke<void>(N::CLEAR_FOCUS); }
	static void _SET_FOCUS_AREA(float x, float y, float z, float offsetX, float offsetY, float offsetZ) { return Native::Invoke<void, float, float, float, float, float, float>(N::_SET_FOCUS_AREA, x, y, z, offsetX, offsetY, offsetZ); }
	static Any SET_FOCUS_ENTITY() { return Native::Invoke<Any>(N::SET_FOCUS_ENTITY); }
	static Any IS_ENTITY_FOCUS() { return Native::Invoke<Any>(N::IS_ENTITY_FOCUS); }
	static void SET_MAPDATACULLBOX_ENABLED(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(N::SET_MAPDATACULLBOX_ENABLED, p0, p1); }
	static Any _0x19ABCC581D28E6F9() { return Native::Invoke<Any>(0x19ABCC581D28E6F9); }
	static void _0xF01D21DF39554115(Any p0) { return Native::Invoke<void, Any>(0xF01D21DF39554115, p0); }
	static Any _0x387AD749E3B69B70(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { return Native::Invoke<Any, Any, Any, Any, Any, Any, Any, Any, Any>(0x387AD749E3B69B70, p0, p1, p2, p3, p4, p5, p6, p7); }
	static Any _0x513F8AA5BF2F17CF(Any p0, Any p1, Any p2, Any p3, Any p4) { return Native::Invoke<Any, Any, Any, Any, Any, Any>(0x513F8AA5BF2F17CF, p0, p1, p2, p3, p4); }
	static void _0x5A8B01199C3E79C3() { return Native::Invoke<void>(0x5A8B01199C3E79C3); }
	static Any _0xCF45DF50C7775F2A() { return Native::Invoke<Any>(0xCF45DF50C7775F2A); }
	static Any _0x0909F71B5C070797() { return Native::Invoke<Any>(0x0909F71B5C070797); }
	static Any _0x45BF3A6239A576B7() { return Native::Invoke<Any>(0x45BF3A6239A576B7); }
	static BOOL IS_PLAYER_SWITCH_IN_PROGRESS() { return Native::Invoke<BOOL>(N::IS_PLAYER_SWITCH_IN_PROGRESS); }
	static void _0xA03A6812529AD9C8() { return Native::Invoke<void>(0xA03A6812529AD9C8); }
	static void _0x20D504994FDC4412(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x20D504994FDC4412, p0, p1); }
	static void _0x31108BB5715D035F() { return Native::Invoke<void>(0x31108BB5715D035F); }
	static Any _0xC2C05DEFE85A0B64() { return Native::Invoke<Any>(0xC2C05DEFE85A0B64); }
	static void _0x040EE319EFD1D3B5() { return Native::Invoke<void>(0x040EE319EFD1D3B5); }
	static Any _0xFC464598F6EE97B0() { return Native::Invoke<Any>(0xFC464598F6EE97B0); }
	static void PREFETCH_SRL(char* srl) { return Native::Invoke<void, char*>(N::PREFETCH_SRL, srl); }
	static void _0xAE00387E53B1E9FC() { return Native::Invoke<void>(0xAE00387E53B1E9FC); }
	static void _0xEF1A8A484118735E() { return Native::Invoke<void>(0xEF1A8A484118735E); }
	static void _0xD9F2FF4AF394D926() { return Native::Invoke<void>(0xD9F2FF4AF394D926); }
	static BOOL IS_SRL_LOADED() { return Native::Invoke<BOOL>(N::IS_SRL_LOADED); }
	static void BEGIN_SRL() { return Native::Invoke<void>(N::BEGIN_SRL); }
	static void END_SRL() { return Native::Invoke<void>(N::END_SRL); }
	static void SET_SRL_TIME(float p0) { return Native::Invoke<void, float>(N::SET_SRL_TIME, p0); }
	static void _0xD346248C1DCE0D76(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<void, Any, Any, Any, Any>(0xD346248C1DCE0D76, p0, p1, p2, p3); }
	static void _0x7C907E8A725E5FD2(Any p0) { return Native::Invoke<void, Any>(0x7C907E8A725E5FD2, p0); }
	static void SET_HD_AREA(float x, float y, float z, float radius) { return Native::Invoke<void, float, float, float, float>(N::SET_HD_AREA, x, y, z, radius); }
	static void CLEAR_HD_AREA() { return Native::Invoke<void>(N::CLEAR_HD_AREA); }
	static void _0x09FBF15D73EFC900() { return Native::Invoke<void>(0x09FBF15D73EFC900); }
	static void _0xF11D7CB962FCD747(Any p0) { return Native::Invoke<void, Any>(0xF11D7CB962FCD747, p0); }
	static void _0xB9B9E47EDB9D63DB() { return Native::Invoke<void>(0xB9B9E47EDB9D63DB); }
	static void _0xBE8DAA9D8D01DA6A(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0xBE8DAA9D8D01DA6A, p0, p1, p2); }
	static Any _0x53764309C4618087(Any p0) { return Native::Invoke<Any, Any>(0x53764309C4618087, p0); }
	static void _0x032A14D082A9B269(Any p0) { return Native::Invoke<void, Any>(0x032A14D082A9B269, p0); }
	static void _0xAFA87A7D41EE346A(Any p0) { return Native::Invoke<void, Any>(0xAFA87A7D41EE346A, p0); }
	static void _0x6A6E79FBE8678C98() { return Native::Invoke<void>(0x6A6E79FBE8678C98); }
	static void _0xCC61D8D6C19D9F14(Any p0) { return Native::Invoke<void, Any>(0xCC61D8D6C19D9F14, p0); }
	static Any _0xDA7FDEFF4DE86839() { return Native::Invoke<Any>(0xDA7FDEFF4DE86839); }
	static Any _0x5D5E2102B174B8D2() { return Native::Invoke<Any>(0x5D5E2102B174B8D2); }
	static Any _0x7B8C2B846C05E5AD() { return Native::Invoke<Any>(0x7B8C2B846C05E5AD); }
	static void _0x62D5F0588915B277() { return Native::Invoke<void>(0x62D5F0588915B277); }
	static Any _0x2F4D53023F826FF0() { return Native::Invoke<Any>(0x2F4D53023F826FF0); }
	static Any _0xDABFE48BA0D457AA() { return Native::Invoke<Any>(0xDABFE48BA0D457AA); }
	static Any _0xE5B76E5B56CD77DD() { return Native::Invoke<Any>(0xE5B76E5B56CD77DD); }
	static Any _0x27AF48C62B281341() { return Native::Invoke<Any>(0x27AF48C62B281341); }
	static Any _0x99F92061EFE908BA() { return Native::Invoke<Any>(0x99F92061EFE908BA); }
	static Any _0x05DD384F39DE1C8C(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x05DD384F39DE1C8C, p0, p1); }
	static Any _0x198B85CC3C7A4593(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x198B85CC3C7A4593, p0, p1); }
	static Any _0x2A6D1DAAB9EBB262(Any p0) { return Native::Invoke<Any, Any>(0x2A6D1DAAB9EBB262, p0); }
	static void _0x07559B29950301FF(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x07559B29950301FF, p0, p1); }
	static Any _0xD6E39DC5D46DF4AB(Any p0) { return Native::Invoke<Any, Any>(0xD6E39DC5D46DF4AB, p0); }
	static Any _0x8D56BDA343D9519F(Any p0) { return Native::Invoke<Any, Any>(0x8D56BDA343D9519F, p0); }
	static void _0xD840C130D7AACFA5(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0xD840C130D7AACFA5, p0, p1, p2); }
	static void _0x74E2261D2A66849A(Any p0) { return Native::Invoke<void, Any>(0x74E2261D2A66849A, p0); }
}
namespace TASK
{
	static void TASK_PAUSE(Ped ped, int time) { return Native::Invoke<void, Ped, int>(N::TASK_PAUSE, ped, time); }
	static void TASK_STAND_STILL(Ped ped, int time) { return Native::Invoke<void, Ped, int>(N::TASK_STAND_STILL, ped, time); }
	static void TASK_JUMP(Ped ped, BOOL unused) { return Native::Invoke<void, Ped, BOOL>(N::TASK_JUMP, ped, unused); }
	static void _0x91083103137D7254(Any p0, Any p1, Any p2, Any p3, Any p4) { return Native::Invoke<void, Any, Any, Any, Any, Any>(0x91083103137D7254, p0, p1, p2, p3, p4); }
	static void TASK_COWER(Ped ped, int duration, Any p2, Any p3) { return Native::Invoke<void, Ped, int, Any, Any>(N::TASK_COWER, ped, duration, p2, p3); }
	static void TASK_HANDS_UP(Ped ped, int duration, Ped facingPed, int p3, BOOL p4) { return Native::Invoke<void, Ped, int, Ped, int, BOOL>(N::TASK_HANDS_UP, ped, duration, facingPed, p3, p4); }
	static void _0xF90427F00A495A28(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0xF90427F00A495A28, p0, p1, p2); }
	static void _0x42AC6401ABB8C7E5(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0x42AC6401ABB8C7E5, p0, p1, p2); }
	static void _0xFFB520A3E16F7B7B(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xFFB520A3E16F7B7B, p0, p1); }
	static Any _0x8B1FDF63C3193EDA() { return Native::Invoke<Any>(0x8B1FDF63C3193EDA); }
	static void UPDATE_TASK_HANDS_UP_DURATION(Ped ped, int duration) { return Native::Invoke<void, Ped, int>(N::UPDATE_TASK_HANDS_UP_DURATION, ped, duration); }
	static Any _0x28EF780BDEA8A639() { return Native::Invoke<Any>(0x28EF780BDEA8A639); }
	static void _0xA14B5FBF986BAC23(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xA14B5FBF986BAC23, p0, p1); }
	static void _0xE53D17AD837CBF7C(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any>(0xE53D17AD837CBF7C, p0, p1, p2, p3, p4, p5); }
	static void _0xA7C6854BB5A4192A(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any>(0xA7C6854BB5A4192A, p0, p1, p2, p3, p4, p5); }
	static Any _0xE41A09C8DDFF7AA4() { return Native::Invoke<Any>(0xE41A09C8DDFF7AA4); }
	static void _0x0A11F3BDEC03ED5F(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0x0A11F3BDEC03ED5F, p0, p1, p2); }
	static void TASK_ENTER_VEHICLE(Ped ped, Vehicle vehicle, int timeout, int seat, float speed, int flag, Any p6) { return Native::Invoke<void, Ped, Vehicle, int, int, float, int, Any>(N::TASK_ENTER_VEHICLE, ped, vehicle, timeout, seat, speed, flag, p6); }
	static void TASK_LEAVE_VEHICLE(Ped ped, Vehicle vehicle, int flags, Any p3) { return Native::Invoke<void, Ped, Vehicle, int, Any>(N::TASK_LEAVE_VEHICLE, ped, vehicle, flags, p3); }
	static void _0x92DB0739813C5186(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any, Any, Any>(0x92DB0739813C5186, p0, p1, p2, p3, p4, p5, p6, p7); }
	static void _0x48E92D3DDE23C23A(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any>(0x48E92D3DDE23C23A, p0, p1, p2, p3, p4, p5); }
	static void _0x9030AD4B6207BFE8(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0x9030AD4B6207BFE8, p0, p1, p2); }
	static void _0xE05A5D39BE6E93AF(Any p0) { return Native::Invoke<void, Any>(0xE05A5D39BE6E93AF, p0); }
	static void TASK_VEHICLE_DRIVE_TO_COORD(Ped ped, Vehicle vehicle, float x, float y, float z, float speed, Any p6, Hash vehicleModel, int drivingMode, float stopRange, float p10) { return Native::Invoke<void, Ped, Vehicle, float, float, float, float, Any, Hash, int, float, float>(N::TASK_VEHICLE_DRIVE_TO_COORD, ped, vehicle, x, y, z, speed, p6, vehicleModel, drivingMode, stopRange, p10); }
	static void _0xF0108F01FB105DA2(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any, Any, Any, Any>(0xF0108F01FB105DA2, p0, p1, p2, p3, p4, p5, p6, p7, p8); }
	static void TASK_VEHICLE_DRIVE_WANDER(Ped ped, Vehicle vehicle, float speed, int drivingStyle) { return Native::Invoke<void, Ped, Vehicle, float, int>(N::TASK_VEHICLE_DRIVE_WANDER, ped, vehicle, speed, drivingStyle); }
	static void TASK_FOLLOW_TO_OFFSET_OF_ENTITY(Ped ped, Entity entity, float offsetX, float offsetY, float offsetZ, float movementSpeed, int timeout, float stoppingRange, BOOL persistFollowing, Any p9, Any p10, Any p11, Any p12) { return Native::Invoke<void, Ped, Entity, float, float, float, float, int, float, BOOL, Any, Any, Any, Any>(N::TASK_FOLLOW_TO_OFFSET_OF_ENTITY, ped, entity, offsetX, offsetY, offsetZ, movementSpeed, timeout, stoppingRange, persistFollowing, p9, p10, p11, p12); }
	static void _0x2E3676282C18A692(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12, Any p13, Any p14) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any>(0x2E3676282C18A692, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14); }
	static void _0x3FFCD7BBA074CC80(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any, Any, Any, Any>(0x3FFCD7BBA074CC80, p0, p1, p2, p3, p4, p5, p6, p7, p8); }
	static void TASK_GO_STRAIGHT_TO_COORD(Ped ped, float x, float y, float z, float speed, int timeout, float targetHeading, float distanceToSlide, Any p8) { return Native::Invoke<void, Ped, float, float, float, float, int, float, float, Any>(N::TASK_GO_STRAIGHT_TO_COORD, ped, x, y, z, speed, timeout, targetHeading, distanceToSlide, p8); }
	static void TASK_GO_STRAIGHT_TO_COORD_RELATIVE_TO_ENTITY(Entity entity1, Entity entity2, float p2, float p3, float p4, float p5, Any p6, Any p7) { return Native::Invoke<void, Entity, Entity, float, float, float, float, Any, Any>(N::TASK_GO_STRAIGHT_TO_COORD_RELATIVE_TO_ENTITY, entity1, entity2, p2, p3, p4, p5, p6, p7); }
	static void _0x8AA1593AEC087A29(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<void, Any, Any, Any, Any>(0x8AA1593AEC087A29, p0, p1, p2, p3); }
	static void _0xDCA3A13F7A45338B(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any, Any, Any>(0xDCA3A13F7A45338B, p0, p1, p2, p3, p4, p5, p6, p7); }
	static void _0x13DED0BC45600FE1(Any p0, Any p1, Any p2, Any p3, Any p4) { return Native::Invoke<void, Any, Any, Any, Any, Any>(0x13DED0BC45600FE1, p0, p1, p2, p3, p4); }
	static void _0xBAAB791AA72C2821(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xBAAB791AA72C2821, p0, p1); }
	static void _0x79482C12482A860D(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any>(0x79482C12482A860D, p0, p1, p2, p3, p4, p5); }
	static void TASK_ACHIEVE_HEADING(Ped ped, float heading, int timeout) { return Native::Invoke<void, Ped, float, int>(N::TASK_ACHIEVE_HEADING, ped, heading, timeout); }
	static void TASK_FLUSH_ROUTE() { return Native::Invoke<void>(N::TASK_FLUSH_ROUTE); }
	static void TASK_EXTEND_ROUTE(float x, float y, float z) { return Native::Invoke<void, float, float, float>(N::TASK_EXTEND_ROUTE, x, y, z); }
	static void _0x0E14C5550DC3CD1D(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any>(0x0E14C5550DC3CD1D, p0, p1, p2, p3, p4, p5); }
	static void _0xC2329B0206426644(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any, Any, Any, Any>(0xC2329B0206426644, p0, p1, p2, p3, p4, p5, p6, p7, p8); }
	static void _0x4AA5AA97C65E4A2F(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any, Any>(0x4AA5AA97C65E4A2F, p0, p1, p2, p3, p4, p5, p6); }
	static void TASK_GO_TO_ENTITY(Entity entity, Entity target, int duration, float distance, float speed, float p5, int p6) { return Native::Invoke<void, Entity, Entity, int, float, float, float, int>(N::TASK_GO_TO_ENTITY, entity, target, duration, distance, speed, p5, p6); }
	static void _0x489FFCCCE7392B55(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any>(0x489FFCCCE7392B55, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); }
	static void _0xA052608A12559BBB(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xA052608A12559BBB, p0, p1); }
	static void _0x8AC76D1408731732(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<void, Any, Any, Any, Any>(0x8AC76D1408731732, p0, p1, p2, p3); }
	static void _0xAA19711D33C6708C(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any, Any, Any, Any>(0xAA19711D33C6708C, p0, p1, p2, p3, p4, p5, p6, p7, p8); }
	static void _0xDE0C8B145EA466FF(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any>(0xDE0C8B145EA466FF, p0, p1, p2, p3, p4, p5); }
	static void _0x8D7F2A63688C20A4(Any p0, Any p1, Any p2, Any p3, Any p4) { return Native::Invoke<void, Any, Any, Any, Any, Any>(0x8D7F2A63688C20A4, p0, p1, p2, p3, p4); }
	static void _0xBAD6545608CECA6E(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0xBAD6545608CECA6E, p0, p1, p2); }
	static Any _0xEB67D4E056C85A81(Any p0) { return Native::Invoke<Any, Any>(0xEB67D4E056C85A81, p0); }
	static Any _0x78D8C1D4EB80C588(Any p0) { return Native::Invoke<Any, Any>(0x78D8C1D4EB80C588, p0); }
	static void _0x9A7A4A54596FE09D(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x9A7A4A54596FE09D, p0, p1); }
	static void _0xED27560703F37258(Any p0) { return Native::Invoke<void, Any>(0xED27560703F37258, p0); }
	static void _0x6879FF208ED87F2A(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any>(0x6879FF208ED87F2A, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); }
	static void _0x7B74D8EEDE9B5727(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any>(0x7B74D8EEDE9B5727, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); }
	static void TASK_SMART_FLEE_COORD(Ped ped, float x, float y, float z, float distance, int time, BOOL p6, BOOL p7) { return Native::Invoke<void, Ped, float, float, float, float, int, BOOL, BOOL>(N::TASK_SMART_FLEE_COORD, ped, x, y, z, distance, time, p6, p7); }
	static void TASK_SMART_FLEE_PED(Ped ped, Ped fleeTarget, float distance, Any fleeTime, BOOL p4, BOOL p5, Any p6) { return Native::Invoke<void, Ped, Ped, float, Any, BOOL, BOOL, Any>(N::TASK_SMART_FLEE_PED, ped, fleeTarget, distance, fleeTime, p4, p5, p6); }
	static void _0x673A8779D229BA5A(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any>(0x673A8779D229BA5A, p0, p1, p2, p3, p4, p5); }
	static void _0x2E1D6D87346BB7D2(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<void, Any, Any, Any, Any>(0x2E1D6D87346BB7D2, p0, p1, p2, p3); }
	static void _0x58428248BF4B64E4(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any, Any, Any, Any>(0x58428248BF4B64E4, p0, p1, p2, p3, p4, p5, p6, p7, p8); }
	static void _0xFD45175A6DFD7CE9(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any, Any>(0xFD45175A6DFD7CE9, p0, p1, p2, p3, p4, p5, p6); }
	static void _0x390E0B697D25EAF5(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any>(0x390E0B697D25EAF5, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); }
	static void _0x5802E0F910E4CF1D(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any>(0x5802E0F910E4CF1D, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); }
	static void _0xE8F1A5B4CED3725A(Any p0, Any p1, Any p2, Any p3, Any p4) { return Native::Invoke<void, Any, Any, Any, Any, Any>(0xE8F1A5B4CED3725A, p0, p1, p2, p3, p4); }
	static void _0x3923EC958249657D(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0x3923EC958249657D, p0, p1, p2); }
	static void _0xA42DC7919159CCCF(Any p0) { return Native::Invoke<void, Any>(0xA42DC7919159CCCF, p0); }
	static void _0xE86A537B5A3C297C(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xE86A537B5A3C297C, p0, p1); }
	static void _0xD6CFC2D59DA72042(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any, Any>(0xD6CFC2D59DA72042, p0, p1, p2, p3, p4, p5, p6); }
	static void _0x72997893BFB8ECCC(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any, Any>(0x72997893BFB8ECCC, p0, p1, p2, p3, p4, p5, p6); }
	static void _0x04ACFAC71E6858F9(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x04ACFAC71E6858F9, p0, p1); }
	static void TASK_SHOCKING_EVENT_REACT(Ped ped, int eventHandle, Any p2) { return Native::Invoke<void, Ped, int, Any>(N::TASK_SHOCKING_EVENT_REACT, ped, eventHandle, p2); }
	static void _0xC4C32C31920E1B70(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any, Any, Any, Any>(0xC4C32C31920E1B70, p0, p1, p2, p3, p4, p5, p6, p7, p8); }
	static void TASK_WANDER_IN_AREA(Ped ped, float x, float y, float z, float radius, float minimalLength, float timeBetweenWalks, Any p7) { return Native::Invoke<void, Ped, float, float, float, float, float, float, Any>(N::TASK_WANDER_IN_AREA, ped, x, y, z, radius, minimalLength, timeBetweenWalks, p7); }
	static void _0x9FDA168777B28424(Any p0, Any p1, Any p2, Any p3, Any p4) { return Native::Invoke<void, Any, Any, Any, Any, Any>(0x9FDA168777B28424, p0, p1, p2, p3, p4); }
	static void TASK_WANDER_STANDARD(Ped ped, float p1, int p2) { return Native::Invoke<void, Ped, float, int>(N::TASK_WANDER_STANDARD, ped, p1, p2); }
	static void _0x527EA3DB8BC7F03B(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x527EA3DB8BC7F03B, p0, p1); }
	static void TASK_PLANT_BOMB(Ped ped, float x, float y, float z, float heading) { return Native::Invoke<void, Ped, float, float, float, float>(N::TASK_PLANT_BOMB, ped, x, y, z, heading); }
	static void _0xA09CFD29100F06C3(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<void, Any, Any, Any, Any>(0xA09CFD29100F06C3, p0, p1, p2, p3); }
	static void _0xCD181A959CFDD7F4(Any p0, Any p1, Any p2, Any p3, Any p4) { return Native::Invoke<void, Any, Any, Any, Any, Any>(0xCD181A959CFDD7F4, p0, p1, p2, p3, p4); }
	static void _0xF960F3D57B660E96(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0xF960F3D57B660E96, p0, p1, p2); }
	static void _0xEE3AA414CF99F368(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<void, Any, Any, Any, Any>(0xEE3AA414CF99F368, p0, p1, p2, p3); }
	static Any _0x37C13863ABA1B4A3() { return Native::Invoke<Any>(0x37C13863ABA1B4A3); }
	static void _0x4B39D8F9D0FE7749(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0x4B39D8F9D0FE7749, p0, p1, p2); }
	static void _0x21FDF9A25CFE1CE5(Any p0, Any p1, Any p2, Any p3, Any p4) { return Native::Invoke<void, Any, Any, Any, Any, Any>(0x21FDF9A25CFE1CE5, p0, p1, p2, p3, p4); }
	static void _0x979D93372FC8C565(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0x979D93372FC8C565, p0, p1, p2); }
	static void _0xA899B61C66F09134(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0xA899B61C66F09134, p0, p1, p2); }
	static Any _0x244430C13BA5258E(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<Any, Any, Any, Any, Any>(0x244430C13BA5258E, p0, p1, p2, p3); }
	static void _0xBD7949BD07299672(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0xBD7949BD07299672, p0, p1, p2); }
	static void _0x83BFC1F836B2F3F2(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0x83BFC1F836B2F3F2, p0, p1, p2); }
	static void _0x1B1475414E70DD8E(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x1B1475414E70DD8E, p0, p1); }
	static void TASK_FOLLOW_NAV_MESH_TO_COORD(Ped ped, float x, float y, float z, float speed, int timeout, float stoppingRange, BOOL persistFollowing, float unk) { return Native::Invoke<void, Ped, float, float, float, float, int, float, BOOL, float>(N::TASK_FOLLOW_NAV_MESH_TO_COORD, ped, x, y, z, speed, timeout, stoppingRange, persistFollowing, unk); }
	static void TASK_FOLLOW_NAV_MESH_TO_COORD_ADVANCED(Ped ped, float x, float y, float z, float speed, int timeout, float unkFloat, int unkInt, float unkX, float unkY, float unkZ, float unk_40000f, Any p12) { return Native::Invoke<void, Ped, float, float, float, float, int, float, int, float, float, float, float, Any>(N::TASK_FOLLOW_NAV_MESH_TO_COORD_ADVANCED, ped, x, y, z, speed, timeout, unkFloat, unkInt, unkX, unkY, unkZ, unk_40000f, p12); }
	static Any SET_PED_PATH_CAN_USE_CLIMBOVERS(Ped ped, BOOL Toggle) { return Native::Invoke<Any, Ped, BOOL>(N::SET_PED_PATH_CAN_USE_CLIMBOVERS, ped, Toggle); }
	static Any SET_PED_PATH_CAN_USE_LADDERS(Ped ped, BOOL Toggle) { return Native::Invoke<Any, Ped, BOOL>(N::SET_PED_PATH_CAN_USE_LADDERS, ped, Toggle); }
	static void SET_PED_PATH_CAN_DROP_FROM_HEIGHT(Ped ped, BOOL Toggle) { return Native::Invoke<void, Ped, BOOL>(N::SET_PED_PATH_CAN_DROP_FROM_HEIGHT, ped, Toggle); }
	static Any _0xE6A151364C600B24(Any p0) { return Native::Invoke<Any, Any>(0xE6A151364C600B24, p0); }
	static void _0x1632EB9386CDBE64(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x1632EB9386CDBE64, p0, p1); }
	static void _0x88E32DB8C1A4AA4B(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x88E32DB8C1A4AA4B, p0, p1); }
	static void _0xE8C296B75EACC357(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xE8C296B75EACC357, p0, p1); }
	static void _0x3AD8EFF9703BE657(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x3AD8EFF9703BE657, p0, p1); }
	static void _0x8798CF6815B8FE0F(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x8798CF6815B8FE0F, p0, p1); }
	static void _0x5B68D0007D9C92EB(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x5B68D0007D9C92EB, p0, p1); }
	static void _0x82ED59F095056550(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x82ED59F095056550, p0, p1); }
	static void _0xE01C8DC8EDD28D31(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xE01C8DC8EDD28D31, p0, p1); }
	static void _0x098CAA6DBE7D8D82(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x098CAA6DBE7D8D82, p0, p1); }
	static Any _0x1948BBE561A2375A(Any p0) { return Native::Invoke<Any, Any>(0x1948BBE561A2375A, p0); }
	static void _0x013A7BA5015C1372(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x013A7BA5015C1372, p0, p1); }
	static void SET_PED_PATH_MAY_ENTER_WATER(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(N::SET_PED_PATH_MAY_ENTER_WATER, p0, p1); }
	static void _0x9DE63896B176EA94(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x9DE63896B176EA94, p0, p1); }
	static void _0xC6170856E54557B2(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0xC6170856E54557B2, p0, p1, p2); }
	static void _0xF948F4356F010F11(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0xF948F4356F010F11, p0, p1, p2); }
	static void SET_PED_PATH_PREFER_TO_AVOID_WATER(Ped ped, BOOL avoidWater, Any p2) { return Native::Invoke<void, Ped, BOOL, Any>(N::SET_PED_PATH_PREFER_TO_AVOID_WATER, ped, avoidWater, p2); }
	static void _0x8BB283A7888AD1AD(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0x8BB283A7888AD1AD, p0, p1, p2); }
	static void _0x12990818C1D35886(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0x12990818C1D35886, p0, p1, p2); }
	static void _0x7C015D8BCEC72CF4(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x7C015D8BCEC72CF4, p0, p1); }
	static void SET_PED_PATH_AVOID_FIRE(Ped ped, BOOL avoidFire) { return Native::Invoke<void, Ped, BOOL>(N::SET_PED_PATH_AVOID_FIRE, ped, avoidFire); }
	static void _0x42CFD8FD8CC8DC69(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x42CFD8FD8CC8DC69, p0, p1); }
	static void _0x216343750545A486(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0x216343750545A486, p0, p1, p2); }
	static Any _0xFA30E2254461ADEB() { return Native::Invoke<Any>(0xFA30E2254461ADEB); }
	static void TASK_GO_TO_COORD_ANY_MEANS(Ped ped, float x, float y, float z, float speed, Any p5, BOOL p6, int walkingStyle, float p8) { return Native::Invoke<void, Ped, float, float, float, float, Any, BOOL, int, float>(N::TASK_GO_TO_COORD_ANY_MEANS, ped, x, y, z, speed, p5, p6, walkingStyle, p8); }
	static void TASK_GO_TO_COORD_ANY_MEANS_EXTRA_PARAMS(Ped ped, float x, float y, float z, float speed, Any p5, BOOL p6, int walkingStyle, float p8, Any p9, Any p10, Any p11, Any p12) { return Native::Invoke<void, Ped, float, float, float, float, Any, BOOL, int, float, Any, Any, Any, Any>(N::TASK_GO_TO_COORD_ANY_MEANS_EXTRA_PARAMS, ped, x, y, z, speed, p5, p6, walkingStyle, p8, p9, p10, p11, p12); }
	static void TASK_GO_TO_COORD_ANY_MEANS_EXTRA_PARAMS_WITH_CRUISE_SPEED(Ped ped, float x, float y, float z, float speed, Any p5, BOOL p6, int walkingStyle, float p8, Any p9, Any p10, Any p11, Any p12, Any p13, Any p14) { return Native::Invoke<void, Ped, float, float, float, float, Any, BOOL, int, float, Any, Any, Any, Any, Any, Any>(N::TASK_GO_TO_COORD_ANY_MEANS_EXTRA_PARAMS_WITH_CRUISE_SPEED, ped, x, y, z, speed, p5, p6, walkingStyle, p8, p9, p10, p11, p12, p13, p14); }
	static void TASK_PLAY_ANIM(Ped ped, char* animDictionary, char* animationName, float speed, float speedMultiplier, int duration, int flag, float playbackRate, BOOL lockX, BOOL lockY, BOOL lockZ, Any p11, Any p12) { return Native::Invoke<void, Ped, char*, char*, float, float, int, int, float, BOOL, BOOL, BOOL, Any, Any>(N::TASK_PLAY_ANIM, ped, animDictionary, animationName, speed, speedMultiplier, duration, flag, playbackRate, lockX, lockY, lockZ, p11, p12); }
	static void TASK_PLAY_ANIM_ADVANCED(Ped ped, char* animDict, char* animName, float posX, float posY, float posZ, float rotX, float rotY, float rotZ, float speed, float speedMultiplier, int duration, Any flag, float animTime, int p14, int p15, Any p16) { return Native::Invoke<void, Ped, char*, char*, float, float, float, float, float, float, float, float, int, Any, float, int, int, Any>(N::TASK_PLAY_ANIM_ADVANCED, ped, animDict, animName, posX, posY, posZ, rotX, rotY, rotZ, speed, speedMultiplier, duration, flag, animTime, p14, p15, p16); }
	static void _0xAD67214236AB1CFE(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12, Any p13, Any p14) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any>(0xAD67214236AB1CFE, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14); }
	static void STOP_ANIM_TASK(Ped ped, char* animDictionary, char* animationName, float p3) { return Native::Invoke<void, Ped, char*, char*, float>(N::STOP_ANIM_TASK, ped, animDictionary, animationName, p3); }
	static void TASK_SCRIPTED_ANIMATION(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(N::TASK_SCRIPTED_ANIMATION, p0, p1); }
	static void PLAY_ENTITY_SCRIPTED_ANIM(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(N::PLAY_ENTITY_SCRIPTED_ANIM, p0, p1); }
	static void STOP_ANIM_PLAYBACK(Ped ped, int p1, BOOL p2) { return Native::Invoke<void, Ped, int, BOOL>(N::STOP_ANIM_PLAYBACK, ped, p1, p2); }
	static void _0x87B66D77D545DB66(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<void, Any, Any, Any, Any>(0x87B66D77D545DB66, p0, p1, p2, p3); }
	static void SET_ANIM_RATE(Any p0, float p1, Any p2, BOOL p3) { return Native::Invoke<void, Any, float, Any, BOOL>(N::SET_ANIM_RATE, p0, p1, p2, p3); }
	static Any _0x2D19BC4DF626CBE7(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<Any, Any, Any, Any, Any>(0x2D19BC4DF626CBE7, p0, p1, p2, p3); }
	static void _0xAE72E7DF013AAA61(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any>(0xAE72E7DF013AAA61, p0, p1, p2, p3, p4, p5); }
	static void _0x72F52AA2D2B172CC(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any, Any, Any>(0x72F52AA2D2B172CC, p0, p1, p2, p3, p4, p5, p6, p7); }
	static void _0xD61D5E1AD9876DEB(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any, Any>(0xD61D5E1AD9876DEB, p0, p1, p2, p3, p4, p5, p6); }
	static void _0xB35370D5353995CB(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0xB35370D5353995CB, p0, p1, p2); }
	static Any _0x6AA3DCA2C6F5EB6D(Any p0) { return Native::Invoke<Any, Any>(0x6AA3DCA2C6F5EB6D, p0); }
	static Any _0x804425C4BBD00883(Any p0) { return Native::Invoke<Any, Any>(0x804425C4BBD00883, p0); }
	static Any _0x038B1F1674F0E242(Any p0) { return Native::Invoke<Any, Any>(0x038B1F1674F0E242, p0); }
	static Any _0xEC7E480FF8BD0BED(Any p0) { return Native::Invoke<Any, Any>(0xEC7E480FF8BD0BED, p0); }
	static Any _0x05A0100EA714DB68(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x05A0100EA714DB68, p0, p1); }
	static Any _0xBC864A70AD55E0C1(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0xBC864A70AD55E0C1, p0, p1); }
	static Any _0x678D3226CF70B9C8(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x678D3226CF70B9C8, p0, p1); }
	static void _0x5F22926E1BCE9B08(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0x5F22926E1BCE9B08, p0, p1, p2); }
	static void TASK_LOOK_AT_COORD(Entity entity, float x, float y, float z, float duration, Any p5, Any p6, Any p7) { return Native::Invoke<void, Entity, float, float, float, float, Any, Any, Any>(N::TASK_LOOK_AT_COORD, entity, x, y, z, duration, p5, p6, p7); }
	static void TASK_LOOK_AT_ENTITY(Ped ped, Entity lookAt, int duration, int unknown1, int unknown2, Any p5) { return Native::Invoke<void, Ped, Entity, int, int, int, Any>(N::TASK_LOOK_AT_ENTITY, ped, lookAt, duration, unknown1, unknown2, p5); }
	static void TASK_CLEAR_LOOK_AT(Ped ped) { return Native::Invoke<void, Ped>(N::TASK_CLEAR_LOOK_AT, ped); }
	static Any _0x508F5053E3F6F0C4(Any p0, Any p1, Any p2, Any p3, Any p4) { return Native::Invoke<Any, Any, Any, Any, Any, Any>(0x508F5053E3F6F0C4, p0, p1, p2, p3, p4); }
	static Any OPEN_SEQUENCE_TASK(Object* taskSequence) { return Native::Invoke<Any, Object*>(N::OPEN_SEQUENCE_TASK, taskSequence); }
	static Any CLOSE_SEQUENCE_TASK(Object taskSequence) { return Native::Invoke<Any, Object>(N::CLOSE_SEQUENCE_TASK, taskSequence); }
	static Any TASK_PERFORM_SEQUENCE(Ped ped, Object taskSequence) { return Native::Invoke<Any, Ped, Object>(N::TASK_PERFORM_SEQUENCE, ped, taskSequence); }
	static void _0x4FC0AF869D6E309D(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<void, Any, Any, Any, Any>(0x4FC0AF869D6E309D, p0, p1, p2, p3); }
	static Any CLEAR_SEQUENCE_TASK(Object* taskSequence) { return Native::Invoke<Any, Object*>(N::CLEAR_SEQUENCE_TASK, taskSequence); }
	static void SET_SEQUENCE_TO_REPEAT(Object taskSequence, BOOL repeat) { return Native::Invoke<void, Object, BOOL>(N::SET_SEQUENCE_TO_REPEAT, taskSequence, repeat); }
	static int GET_SEQUENCE_PROGRESS(Ped ped) { return Native::Invoke<int, Ped>(N::GET_SEQUENCE_PROGRESS, ped); }
	static BOOL GET_IS_TASK_ACTIVE(Ped ped, int taskNumber) { return Native::Invoke<BOOL, Ped, int>(N::GET_IS_TASK_ACTIVE, ped, taskNumber); }
	static int GET_SCRIPT_TASK_STATUS(Ped targetPed, Hash taskHash, Any p2) { return Native::Invoke<int, Ped, Hash, Any>(N::GET_SCRIPT_TASK_STATUS, targetPed, taskHash, p2); }
	static Any _0x9FF5F9B24E870748(Any p0) { return Native::Invoke<Any, Any>(0x9FF5F9B24E870748, p0); }
	static Any _0xA710DC5D25F8B942(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0xA710DC5D25F8B942, p0, p1); }
	static void _0xE7FA07624574B79A(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any, Any, Any, Any>(0xE7FA07624574B79A, p0, p1, p2, p3, p4, p5, p6, p7, p8); }
	static void _0x541E5B41DCA45828(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0x541E5B41DCA45828, p0, p1, p2); }
	static Any _0x916B8E075ABC8B4E(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x916B8E075ABC8B4E, p0, p1); }
	static int GET_ACTIVE_VEHICLE_MISSION_TYPE(Vehicle veh) { return Native::Invoke<int, Vehicle>(N::GET_ACTIVE_VEHICLE_MISSION_TYPE, veh); }
	static void TASK_LEAVE_ANY_VEHICLE(Ped ped, int p1, int p2) { return Native::Invoke<void, Ped, int, int>(N::TASK_LEAVE_ANY_VEHICLE, ped, p1, p2); }
	static Any _0xBD70108D01875299(Any p0) { return Native::Invoke<Any, Any>(0xBD70108D01875299, p0); }
	static void _0x14747F4A5971DE4E(Any p0, Any p1, Any p2, Any p3, Any p4) { return Native::Invoke<void, Any, Any, Any, Any, Any>(0x14747F4A5971DE4E, p0, p1, p2, p3, p4); }
	static void TASK_AIM_GUN_AT_ENTITY(Ped ped, Entity entity, int duration, BOOL unk, Any p4) { return Native::Invoke<void, Ped, Entity, int, BOOL, Any>(N::TASK_AIM_GUN_AT_ENTITY, ped, entity, duration, unk, p4); }
	static void TASK_TURN_PED_TO_FACE_ENTITY(Ped ped, Entity entity, int duration, Any p3, Any p4, Any p5) { return Native::Invoke<void, Ped, Entity, int, Any, Any, Any>(N::TASK_TURN_PED_TO_FACE_ENTITY, ped, entity, duration, p3, p4, p5); }
	static void TASK_AIM_GUN_AT_COORD(Ped ped, float x, float y, float z, int time, BOOL p5, BOOL p6) { return Native::Invoke<void, Ped, float, float, float, int, BOOL, BOOL>(N::TASK_AIM_GUN_AT_COORD, ped, x, y, z, time, p5, p6); }
	static void _0x4AF1D73861212F52(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any, Any>(0x4AF1D73861212F52, p0, p1, p2, p3, p4, p5, p6); }
	static void _0xCF7569BD0FB480A0(Any p0, Any p1, Any p2, Any p3, Any p4) { return Native::Invoke<void, Any, Any, Any, Any, Any>(0xCF7569BD0FB480A0, p0, p1, p2, p3, p4); }
	static void TASK_SHOOT_AT_COORD(Ped ped, float x, float y, float z, int duration, Hash firingPattern, Any p6) { return Native::Invoke<void, Ped, float, float, float, int, Hash, Any>(N::TASK_SHOOT_AT_COORD, ped, x, y, z, duration, firingPattern, p6); }
	static void TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(Ped ped, Vehicle vehicle) { return Native::Invoke<void, Ped, Vehicle>(N::TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT, ped, vehicle); }
	static void CLEAR_PED_TASKS(Ped ped, Any p1, Any p2) { return Native::Invoke<void, Ped, Any, Any>(N::CLEAR_PED_TASKS, ped, p1, p2); }
	static void _0x1A7D63CB1B0BB223(Any p0) { return Native::Invoke<void, Any>(0x1A7D63CB1B0BB223, p0); }
	static void _0xDF94844D474F31E5(Any p0) { return Native::Invoke<void, Any>(0xDF94844D474F31E5, p0); }
	static void _0xEBA2081E0A5F4D17(Any p0) { return Native::Invoke<void, Any>(0xEBA2081E0A5F4D17, p0); }
	static void _0x141BC64C8D7C5529(Any p0) { return Native::Invoke<void, Any>(0x141BC64C8D7C5529, p0); }
	static void CLEAR_PED_SECONDARY_TASK(Ped ped) { return Native::Invoke<void, Ped>(N::CLEAR_PED_SECONDARY_TASK, ped); }
	static Any TASK_EVERYONE_LEAVE_VEHICLE() { return Native::Invoke<Any>(N::TASK_EVERYONE_LEAVE_VEHICLE); }
	static Any _0x6F1C49F275BD25B3() { return Native::Invoke<Any>(0x6F1C49F275BD25B3); }
	static void _0x5C8514540D27FBFB(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any>(0x5C8514540D27FBFB, p0, p1, p2, p3, p4, p5); }
	static void TASK_GOTO_ENTITY_OFFSET(Ped ped, Any p1, Any p2, float x, float y, float z, int duration) { return Native::Invoke<void, Ped, Any, Any, float, float, float, int>(N::TASK_GOTO_ENTITY_OFFSET, ped, p1, p2, x, y, z, duration); }
	static void TASK_GOTO_ENTITY_OFFSET_XY(Ped ped, Entity entity, int duration, float xOffset, float yOffset, float zOffset, float moveBlendRatio, BOOL useNavmesh) { return Native::Invoke<void, Ped, Entity, int, float, float, float, float, BOOL>(N::TASK_GOTO_ENTITY_OFFSET_XY, ped, entity, duration, xOffset, yOffset, zOffset, moveBlendRatio, useNavmesh); }
	static void _0x901BD69984400F62(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any, Any, Any, Any>(0x901BD69984400F62, p0, p1, p2, p3, p4, p5, p6, p7, p8); }
	static void _0x41B0832CA96B5351(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any>(0x41B0832CA96B5351, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); }
	static void _0x2D532EAA142CF83F(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any, Any, Any>(0x2D532EAA142CF83F, p0, p1, p2, p3, p4, p5, p6, p7); }
	static void TASK_TURN_PED_TO_FACE_COORD(Ped ped, float x, float y, float z, int duration) { return Native::Invoke<void, Ped, float, float, float, int>(N::TASK_TURN_PED_TO_FACE_COORD, ped, x, y, z, duration); }
	static void TASK_VEHICLE_TEMP_ACTION(Ped driver, Vehicle vehicle, int action, int time) { return Native::Invoke<void, Ped, Vehicle, int, int>(N::TASK_VEHICLE_TEMP_ACTION, driver, vehicle, action, time); }
	static void TASK_VEHICLE_MISSION(int p0, int p1, Vehicle veh, Any p3, float p4, Any p5, float p6, float p7, BOOL p8) { return Native::Invoke<void, int, int, Vehicle, Any, float, Any, float, float, BOOL>(N::TASK_VEHICLE_MISSION, p0, p1, veh, p3, p4, p5, p6, p7, p8); }
	static void _0x7F241A0D14354583(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any>(0x7F241A0D14354583, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); }
	static void _0x391073B9D3CCE2BA(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any, Any, Any, Any>(0x391073B9D3CCE2BA, p0, p1, p2, p3, p4, p5, p6, p7, p8); }
	static Any _0x55CD5FDDD4335C1E() { return Native::Invoke<Any>(0x55CD5FDDD4335C1E); }
	static void _0x089FF2FB965F0A29(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any, Any, Any>(0x089FF2FB965F0A29, p0, p1, p2, p3, p4, p5, p6, p7); }
	static void _0x6524A8981E8BE7C9(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any, Any>(0x6524A8981E8BE7C9, p0, p1, p2, p3, p4, p5, p6); }
	static void _0x1D125814EBC517EB(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<void, Any, Any, Any, Any>(0x1D125814EBC517EB, p0, p1, p2, p3); }
	static Any _0x583AE9AF9CEE0958() { return Native::Invoke<Any>(0x583AE9AF9CEE0958); }
	static void TASK_VEHICLE_MISSION_PED_TARGET(Ped ped, Vehicle vehicle, Ped pedTarget, int mode, float maxSpeed, int drivingStyle, float minDistance, float p7, BOOL p8) { return Native::Invoke<void, Ped, Vehicle, Ped, int, float, int, float, float, BOOL>(N::TASK_VEHICLE_MISSION_PED_TARGET, ped, vehicle, pedTarget, mode, maxSpeed, drivingStyle, minDistance, p7, p8); }
	static void _0xA263ADBBC8056214(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xA263ADBBC8056214, p0, p1); }
	static void TASK_VEHICLE_ESCORT(Ped ped, Vehicle vehicle, Vehicle targetVehicle, int mode, float speed, int drivingStyle, float minDistance, int p7, float noRoadsDistance) { return Native::Invoke<void, Ped, Vehicle, Vehicle, int, float, int, float, int, float>(N::TASK_VEHICLE_ESCORT, ped, vehicle, targetVehicle, mode, speed, drivingStyle, minDistance, p7, noRoadsDistance); }
	static void TASK_BOAT_MISSION(Ped pedDriver, Vehicle boat, Any p2, Any p3, float x, float y, float z, Any p7, float maxSpeed, int drivingStyle, float p10, Any p11) { return Native::Invoke<void, Ped, Vehicle, Any, Any, float, float, float, Any, float, int, float, Any>(N::TASK_BOAT_MISSION, pedDriver, boat, p2, p3, x, y, z, p7, maxSpeed, drivingStyle, p10, p11); }
	static void _0x7157B82D60E4BC46(Any p0) { return Native::Invoke<void, Any>(0x7157B82D60E4BC46, p0); }
	static void TASK_DRIVE_BY(Ped driverPed, Ped targetPed, Vehicle targetVehicle, float targetX, float targetY, float targetZ, float distanceToShoot, int pedAccuracy, BOOL p8, Hash firingPattern) { return Native::Invoke<void, Ped, Ped, Vehicle, float, float, float, float, int, BOOL, Hash>(N::TASK_DRIVE_BY, driverPed, targetPed, targetVehicle, targetX, targetY, targetZ, distanceToShoot, pedAccuracy, p8, firingPattern); }
	static Any SET_DRIVEBY_TASK_TARGET() { return Native::Invoke<Any>(N::SET_DRIVEBY_TASK_TARGET); }
	static void CLEAR_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(Ped ped) { return Native::Invoke<void, Ped>(N::CLEAR_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK, ped); }
	static BOOL IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(Ped ped) { return Native::Invoke<BOOL, Ped>(N::IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK, ped); }
	static Any _0x8785E6E40C7A8819(Any p0) { return Native::Invoke<Any, Any>(0x8785E6E40C7A8819, p0); }
	static Any _0x34C0010188D7C54A() { return Native::Invoke<Any>(0x34C0010188D7C54A); }
	static Any IS_MOUNTED_WEAPON_TASK_UNDERNEATH_DRIVING_TASK() { return Native::Invoke<Any>(N::IS_MOUNTED_WEAPON_TASK_UNDERNEATH_DRIVING_TASK); }
	static void TASK_WARP_PED_INTO_VEHICLE(Ped ped, Vehicle vehicle, int seat) { return Native::Invoke<void, Ped, Vehicle, int>(N::TASK_WARP_PED_INTO_VEHICLE, ped, vehicle, seat); }
	static void TASK_SHOOT_AT_ENTITY(Entity entity, Entity target, int duration, Hash firingPattern, Any p4) { return Native::Invoke<void, Entity, Entity, int, Hash, Any>(N::TASK_SHOOT_AT_ENTITY, entity, target, duration, firingPattern, p4); }
	static void _0x08AA95E8298AE772(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x08AA95E8298AE772, p0, p1); }
	static void _0x2416EC2F31F75266(Any p0, Any p1, Any p2, Any p3, Any p4) { return Native::Invoke<void, Any, Any, Any, Any, Any>(0x2416EC2F31F75266, p0, p1, p2, p3, p4); }
	static void _0x41323F4E0C4AE94B(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any, Any>(0x41323F4E0C4AE94B, p0, p1, p2, p3, p4, p5, p6); }
	static Any _0x5EA655F01D93667A(Any p0) { return Native::Invoke<Any, Any>(0x5EA655F01D93667A, p0); }
	static void TASK_CLIMB(Ped ped, BOOL unused) { return Native::Invoke<void, Ped, BOOL>(N::TASK_CLIMB, ped, unused); }
	static void _0xDF1D85BCAF60D537(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xDF1D85BCAF60D537, p0, p1); }
	static void TASK_CLIMB_LADDER(Ped ped, int p1, Any p2, Any p3) { return Native::Invoke<void, Ped, int, Any, Any>(N::TASK_CLIMB_LADDER, ped, p1, p2, p3); }
	static void CLEAR_PED_TASKS_IMMEDIATELY(Ped ped, Any p1, Any p2) { return Native::Invoke<void, Ped, Any, Any>(N::CLEAR_PED_TASKS_IMMEDIATELY, ped, p1, p2); }
	static void TASK_PERFORM_SEQUENCE_FROM_PROGRESS(Ped ped, Object taskSequence, int currentProgress, int progressToSetTo) { return Native::Invoke<void, Ped, Object, int, int>(N::TASK_PERFORM_SEQUENCE_FROM_PROGRESS, ped, taskSequence, currentProgress, progressToSetTo); }
	static void SET_PED_DESIRED_MOVE_BLEND_RATIO(Ped ped, float p1) { return Native::Invoke<void, Ped, float>(N::SET_PED_DESIRED_MOVE_BLEND_RATIO, ped, p1); }
	static float GET_PED_DESIRED_MOVE_BLEND_RATIO(Ped ped) { return Native::Invoke<float, Ped>(N::GET_PED_DESIRED_MOVE_BLEND_RATIO, ped); }
	static void TASK_GOTO_ENTITY_AIMING(Ped ped, Entity target, float distanceToStopAt, float StartAimingDist) { return Native::Invoke<void, Ped, Entity, float, float>(N::TASK_GOTO_ENTITY_AIMING, ped, target, distanceToStopAt, StartAimingDist); }
	static void TASK_SET_SPHERE_DEFENSIVE_AREA(Any p0, float p1, float p2, float p3, float p4) { return Native::Invoke<void, Any, float, float, float, float>(N::TASK_SET_SPHERE_DEFENSIVE_AREA, p0, p1, p2, p3, p4); }
	static void TASK_CLEAR_DEFENSIVE_AREA(Any p0) { return Native::Invoke<void, Any>(N::TASK_CLEAR_DEFENSIVE_AREA, p0); }
	static void TASK_PED_SLIDE_TO_COORD(Ped ped, float x, float y, float z, float heading, float duration) { return Native::Invoke<void, Ped, float, float, float, float, float>(N::TASK_PED_SLIDE_TO_COORD, ped, x, y, z, heading, duration); }
	static Any _0x9420FB11B8D77948(Any p0) { return Native::Invoke<Any, Any>(0x9420FB11B8D77948, p0); }
	static Any _0x6BA606AB3A83BC4D(Any p0) { return Native::Invoke<Any, Any>(0x6BA606AB3A83BC4D, p0); }
	static Any ADD_COVER_POINT(float posX, float posY, float posZ, float heading, BOOL p4, int p5, BOOL p6, BOOL p7) { return Native::Invoke<Any, float, float, float, float, BOOL, int, BOOL, BOOL>(N::ADD_COVER_POINT, posX, posY, posZ, heading, p4, p5, p6, p7); }
	static Any _0x59872EA4CBD11C56(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { return Native::Invoke<Any, Any, Any, Any, Any, Any, Any, Any, Any, Any>(0x59872EA4CBD11C56, p0, p1, p2, p3, p4, p5, p6, p7, p8); }
	static void REMOVE_COVER_POINT(ScrHandle coverpoint) { return Native::Invoke<void, ScrHandle>(N::REMOVE_COVER_POINT, coverpoint); }
	static BOOL DOES_SCRIPTED_COVER_POINT_EXIST_AT_COORDS(float x, float y, float z, Any p3) { return Native::Invoke<BOOL, float, float, float, Any>(N::DOES_SCRIPTED_COVER_POINT_EXIST_AT_COORDS, x, y, z, p3); }
	static Vector3 GET_SCRIPTED_COVER_POINT_COORDS(ScrHandle coverpoint) { return Native::Invoke<Vector3, ScrHandle>(N::GET_SCRIPTED_COVER_POINT_COORDS, coverpoint); }
	static Any _0xE116F6F2DA2D777E(Any p0) { return Native::Invoke<Any, Any>(0xE116F6F2DA2D777E, p0); }
	static void _0x50AA09A0DA64E73C(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any, Any>(0x50AA09A0DA64E73C, p0, p1, p2, p3, p4, p5, p6); }
	static void _0xE5831AA1E2FD147C(Any p0) { return Native::Invoke<void, Any>(0xE5831AA1E2FD147C, p0); }
	static void TASK_COMBAT_PED(Ped ped, Ped targetPed, int p2, int p3) { return Native::Invoke<void, Ped, Ped, int, int>(N::TASK_COMBAT_PED, ped, targetPed, p2, p3); }
	static void TASK_COMBAT_PED_TIMED(Any p0, Ped ped, int duration, Any p3) { return Native::Invoke<void, Any, Ped, int, Any>(N::TASK_COMBAT_PED_TIMED, p0, ped, duration, p3); }
	static void _0xC624414FA748B9BA(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any>(0xC624414FA748B9BA, p0, p1, p2, p3, p4, p5); }
	static void TASK_SEEK_COVER_FROM_POS(Ped ped, float x, float y, float z, int duration, BOOL p5, Any p6, Any p7) { return Native::Invoke<void, Ped, float, float, float, int, BOOL, Any, Any>(N::TASK_SEEK_COVER_FROM_POS, ped, x, y, z, duration, p5, p6, p7); }
	static void TASK_SEEK_COVER_FROM_PED(Ped ped, Ped target, int duration, BOOL p3, Any p4, Any p5) { return Native::Invoke<void, Ped, Ped, int, BOOL, Any, Any>(N::TASK_SEEK_COVER_FROM_PED, ped, target, duration, p3, p4, p5); }
	static void TASK_SEEK_COVER_TO_COVER_POINT(Any p0, Any p1, float p2, float p3, float p4, Any p5, BOOL p6, Any p7, Any p8) { return Native::Invoke<void, Any, Any, float, float, float, Any, BOOL, Any, Any>(N::TASK_SEEK_COVER_TO_COVER_POINT, p0, p1, p2, p3, p4, p5, p6, p7, p8); }
	static void TASK_SEEK_COVER_TO_COORDS(Ped ped, float x1, float y1, float z1, float x2, float y2, float z2, Any p7, BOOL p8, Any p9, Any p10) { return Native::Invoke<void, Ped, float, float, float, float, float, float, Any, BOOL, Any, Any>(N::TASK_SEEK_COVER_TO_COORDS, ped, x1, y1, z1, x2, y2, z2, p7, p8, p9, p10); }
	static void TASK_PUT_PED_DIRECTLY_INTO_COVER(Ped ped, float x, float y, float z, Any timeout, BOOL p5, float p6, BOOL p7, BOOL p8, Any p9, BOOL p10, Any p11, Any p12) { return Native::Invoke<void, Ped, float, float, float, Any, BOOL, float, BOOL, BOOL, Any, BOOL, Any, Any>(N::TASK_PUT_PED_DIRECTLY_INTO_COVER, ped, x, y, z, timeout, p5, p6, p7, p8, p9, p10, p11, p12); }
	static void _0xDF8A5855B9F9A97B(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12, Any p13, Any p14, Any p15, Any p16, Any p17) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any>(0xDF8A5855B9F9A97B, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17); }
	static void TASK_PUT_PED_DIRECTLY_INTO_MELEE(Ped ped, Ped target, float p2, float p3, float p4, float flag, Any p6) { return Native::Invoke<void, Ped, Ped, float, float, float, float, Any>(N::TASK_PUT_PED_DIRECTLY_INTO_MELEE, ped, target, p2, p3, p4, flag, p6); }
	static void _0xA05F3F20889D7A5B(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any, Any>(0xA05F3F20889D7A5B, p0, p1, p2, p3, p4, p5, p6); }
	static void _0xE017CF6E2527FE4F(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xE017CF6E2527FE4F, p0, p1); }
	static void _0x098036CAB8373D36(Any p0) { return Native::Invoke<void, Any>(0x098036CAB8373D36, p0); }
	static void _0x10C44F633E2D6D9E(Any p0) { return Native::Invoke<void, Any>(0x10C44F633E2D6D9E, p0); }
	static void _0x7FB78B2199C10E92(Any p0) { return Native::Invoke<void, Any>(0x7FB78B2199C10E92, p0); }
	static Any _0xB9FB242EACCAF30F() { return Native::Invoke<Any>(0xB9FB242EACCAF30F); }
	static void TASK_GUARD_CURRENT_POSITION(Ped p0, float p1, float p2, BOOL p3) { return Native::Invoke<void, Ped, float, float, BOOL>(N::TASK_GUARD_CURRENT_POSITION, p0, p1, p2, p3); }
	static void _0x1FC9B33976BACD6C(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any, Any, Any>(0x1FC9B33976BACD6C, p0, p1, p2, p3, p4, p5, p6, p7); }
	static void TASK_GUARD_ASSIGNED_DEFENSIVE_AREA(Any p0, float p1, float p2, float p3, float p4, float p5, Any p6) { return Native::Invoke<void, Any, float, float, float, float, float, Any>(N::TASK_GUARD_ASSIGNED_DEFENSIVE_AREA, p0, p1, p2, p3, p4, p5, p6); }
	static void TASK_STAND_GUARD(Ped ped, float x, float y, float z, float heading, char* scenarioName) { return Native::Invoke<void, Ped, float, float, float, float, char*>(N::TASK_STAND_GUARD, ped, x, y, z, heading, scenarioName); }
	static void SET_DRIVE_TASK_CRUISE_SPEED(Ped driver, float cruiseSpeed) { return Native::Invoke<void, Ped, float>(N::SET_DRIVE_TASK_CRUISE_SPEED, driver, cruiseSpeed); }
	static void SET_DRIVE_TASK_MAX_CRUISE_SPEED(Any p0, float p1) { return Native::Invoke<void, Any, float>(N::SET_DRIVE_TASK_MAX_CRUISE_SPEED, p0, p1); }
	static void ADD_COVER_BLOCKING_AREA(float playerX, float playerY, float playerZ, float radiusX, float radiusY, float radiusZ, BOOL p6, BOOL p7, BOOL p8, BOOL p9) { return Native::Invoke<void, float, float, float, float, float, float, BOOL, BOOL, BOOL, BOOL>(N::ADD_COVER_BLOCKING_AREA, playerX, playerY, playerZ, radiusX, radiusY, radiusZ, p6, p7, p8, p9); }
	static void _0xEB2ED1DC3AEC0654(Any p0, Any p1, Any p2, Any p3, Any p4) { return Native::Invoke<void, Any, Any, Any, Any, Any>(0xEB2ED1DC3AEC0654, p0, p1, p2, p3, p4); }
	static void REMOVE_ALL_COVER_BLOCKING_AREAS() { return Native::Invoke<void>(N::REMOVE_ALL_COVER_BLOCKING_AREAS); }
	static void _0x2A10538D0A005E81(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x2A10538D0A005E81, p0, p1); }
	static void _0x4F57397388E1DFF8() { return Native::Invoke<void>(0x4F57397388E1DFF8); }
	static void _0x7BB967F85D8CCBDB(Any p0, Any p1, Any p2, Any p3, Any p4) { return Native::Invoke<void, Any, Any, Any, Any, Any>(0x7BB967F85D8CCBDB, p0, p1, p2, p3, p4); }
	static Any _0xBEDBE39B5FD98FD6(Any p0) { return Native::Invoke<Any, Any>(0xBEDBE39B5FD98FD6, p0); }
	static Any _0x94B745CE41DB58A1(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { return Native::Invoke<Any, Any, Any, Any, Any, Any, Any, Any, Any>(0x94B745CE41DB58A1, p0, p1, p2, p3, p4, p5, p6, p7); }
	static Any _0x794AB1379A74064D(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { return Native::Invoke<Any, Any, Any, Any, Any, Any, Any, Any, Any, Any>(0x794AB1379A74064D, p0, p1, p2, p3, p4, p5, p6, p7, p8); }
	static Any _0xEA31F199A73801D3(Any p0) { return Native::Invoke<Any, Any>(0xEA31F199A73801D3, p0); }
	static Any _0x295514F198EFD0CA(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x295514F198EFD0CA, p0, p1); }
	static Any _0x8360C47380B6F351(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<Any, Any, Any, Any, Any>(0x8360C47380B6F351, p0, p1, p2, p3); }
	static void _0x5AF19B6CC2115D34(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0x5AF19B6CC2115D34, p0, p1, p2); }
	static Any _0x8569C38D2FB80650(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x8569C38D2FB80650, p0, p1); }
	static Any _0xADC45010BC17AF0E() { return Native::Invoke<Any>(0xADC45010BC17AF0E); }
	static Any _0x974DA3408DEC4E79(Any p0) { return Native::Invoke<Any, Any>(0x974DA3408DEC4E79, p0); }
	static Any _0x6EF4E31B4D5D2DA0(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x6EF4E31B4D5D2DA0, p0, p1); }
	static Any _0x841475AC96E794D1(Any p0) { return Native::Invoke<Any, Any>(0x841475AC96E794D1, p0); }
	static Any _0x22CD2C33ED4467A1(Any p0) { return Native::Invoke<Any, Any>(0x22CD2C33ED4467A1, p0); }
	static Any _0x7467165EE97D3C68(Any p0) { return Native::Invoke<Any, Any>(0x7467165EE97D3C68, p0); }
	static Any _0x5BA659955369B0E2(Any p0) { return Native::Invoke<Any, Any>(0x5BA659955369B0E2, p0); }
	static Any _0xA8452DD321607029(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0xA8452DD321607029, p0, p1); }
	static Any _0x91CB5E431F579BA1(Any p0) { return Native::Invoke<Any, Any>(0x91CB5E431F579BA1, p0); }
	static Any _0x370F57C47F68EBCA(Any p0) { return Native::Invoke<Any, Any>(0x370F57C47F68EBCA, p0); }
	static Any _0xB93EA7184BAA85C3(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0xB93EA7184BAA85C3, p0, p1); }
	static Any _0x6718F40313A2B5A6(Any p0) { return Native::Invoke<Any, Any>(0x6718F40313A2B5A6, p0); }
	static void _0x2056AB38DF06825C(Any p0, Any p1, Any p2, Any p3, Any p4) { return Native::Invoke<void, Any, Any, Any, Any, Any>(0x2056AB38DF06825C, p0, p1, p2, p3, p4); }
	static void _0xD3A0DA8F91612C6E(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0xD3A0DA8F91612C6E, p0, p1, p2); }
	static Any _0xC47D9080A9A8856A() { return Native::Invoke<Any>(0xC47D9080A9A8856A); }
	static void _0xA7479FB665361EDB(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xA7479FB665361EDB, p0, p1); }
	static void _0xE69FDA40AAC3EFC0(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xE69FDA40AAC3EFC0, p0, p1); }
	static Any _0x345EC3B7EBDE1CB5(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return Native::Invoke<Any, Any, Any, Any, Any, Any, Any>(0x345EC3B7EBDE1CB5, p0, p1, p2, p3, p4, p5); }
	static Any _0xEFD875C2791EBEFD(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<Any, Any, Any, Any, Any>(0xEFD875C2791EBEFD, p0, p1, p2, p3); }
	static Any _0x152664AA3188B193(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return Native::Invoke<Any, Any, Any, Any, Any, Any, Any>(0x152664AA3188B193, p0, p1, p2, p3, p4, p5); }
	static Any _0xE7BBC4E56B989449(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(0xE7BBC4E56B989449, p0, p1, p2); }
	static Any _0xDF7993356F52359A(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0xDF7993356F52359A, p0, p1); }
	static Any _0xD04241BBF6D03A5E(Any p0) { return Native::Invoke<Any, Any>(0xD04241BBF6D03A5E, p0); }
	static Any _0x188F8071F244B9B8() { return Native::Invoke<Any>(0x188F8071F244B9B8); }
	static Any _0xA9E7672F8C6C6F74(Any p0) { return Native::Invoke<Any, Any>(0xA9E7672F8C6C6F74, p0); }
	static Any _0x0A98A362C5A19A43(Any p0) { return Native::Invoke<Any, Any>(0x0A98A362C5A19A43, p0); }
	static Any _0x849791EBBDBA0362(Any p0) { return Native::Invoke<Any, Any>(0x849791EBBDBA0362, p0); }
	static Any _0x640A602946A8C972(Any p0) { return Native::Invoke<Any, Any>(0x640A602946A8C972, p0); }
	static Any _0x01AF8A3729231A43(Any p0) { return Native::Invoke<Any, Any>(0x01AF8A3729231A43, p0); }
	static Any _0xB219612B5568E9EC(Any p0) { return Native::Invoke<Any, Any>(0xB219612B5568E9EC, p0); }
	static void _0x2E20878FD208A68E(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x2E20878FD208A68E, p0, p1); }
	static void _0x4161648394262FDF(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<void, Any, Any, Any, Any>(0x4161648394262FDF, p0, p1, p2, p3); }
	static void _0x9C8F42A5D1859DC1(Any p0) { return Native::Invoke<void, Any>(0x9C8F42A5D1859DC1, p0); }
	static void _0x81948DFE4F5A0283(Any p0) { return Native::Invoke<void, Any>(0x81948DFE4F5A0283, p0); }
	static void _0xCCDAE6324B6A821C(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any>(0xCCDAE6324B6A821C, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); }
	static void _0x0F6641449DD86FBE(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any, Any, Any>(0x0F6641449DD86FBE, p0, p1, p2, p3, p4, p5, p6, p7); }
	static void _0x524B54361229154F(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any, Any>(0x524B54361229154F, p0, p1, p2, p3, p4, p5, p6); }
	static void _0xA917E39F2CEFD215(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any, Any>(0xA917E39F2CEFD215, p0, p1, p2, p3, p4, p5, p6); }
	static void _0x4D1F61FC34AF3CD1(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any>(0x4D1F61FC34AF3CD1, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); }
	static Any _0xF97F462779B31786(Any p0) { return Native::Invoke<Any, Any>(0xF97F462779B31786, p0); }
	static Any _0x6C269F673C47031E(Any p0) { return Native::Invoke<Any, Any>(0x6C269F673C47031E, p0); }
	static void _0x9667CCE29BFA0780(Any p0) { return Native::Invoke<void, Any>(0x9667CCE29BFA0780, p0); }
	static Any _0x00FFE0F85253C572() { return Native::Invoke<Any>(0x00FFE0F85253C572); }
	static void _0x322BFDEA666E2B0E(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any>(0x322BFDEA666E2B0E, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); }
	static void TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(Ped ped, float x, float y, float z, float radius, Any p5, Any p6, Any p7, Any p8, Any p9) { return Native::Invoke<void, Ped, float, float, float, float, Any, Any, Any, Any, Any>(N::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP, ped, x, y, z, radius, p5, p6, p7, p8, p9); }
	static void _0x3774B03456DD6106(Any p0, Any p1, Any p2, Any p3, Any p4) { return Native::Invoke<void, Any, Any, Any, Any, Any>(0x3774B03456DD6106, p0, p1, p2, p3, p4); }
	static void TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(Any p0, float p1, float p2, float p3, float p4, Any p5, Any p6, Any p7, Any p8) { return Native::Invoke<void, Any, float, float, float, float, Any, Any, Any, Any>(N::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD, p0, p1, p2, p3, p4, p5, p6, p7, p8); }
	static void TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD_WARP(Any p0, float p1, float p2, float p3, float p4, Any p5, Any p6, Any p7, Any p8) { return Native::Invoke<void, Any, float, float, float, float, Any, Any, Any, Any>(N::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD_WARP, p0, p1, p2, p3, p4, p5, p6, p7, p8); }
	static Any _0xFDECCA06E8B81346(Any p0) { return Native::Invoke<Any, Any>(0xFDECCA06E8B81346, p0); }
	static Any _0x2D657B10F211C572(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x2D657B10F211C572, p0, p1); }
	static void _0x37FB1C870E2EC2C6(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<void, Any, Any, Any, Any>(0x37FB1C870E2EC2C6, p0, p1, p2, p3); }
	static Any _0x79197F7D2BB5E73A(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return Native::Invoke<Any, Any, Any, Any, Any, Any, Any>(0x79197F7D2BB5E73A, p0, p1, p2, p3, p4, p5); }
	static BOOL DOES_SCENARIO_EXIST_IN_AREA(float x, float y, float z, float radius, BOOL b, Any p5, Any p6) { return Native::Invoke<BOOL, float, float, float, float, BOOL, Any, Any>(N::DOES_SCENARIO_EXIST_IN_AREA, x, y, z, radius, b, p5, p6); }
	static Any _0x6EEAD6AF637DA752(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return Native::Invoke<Any, Any, Any, Any, Any, Any, Any>(0x6EEAD6AF637DA752, p0, p1, p2, p3, p4, p5); }
	static Any _0xF533D68FF970D190(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return Native::Invoke<Any, Any, Any, Any, Any, Any, Any, Any>(0xF533D68FF970D190, p0, p1, p2, p3, p4, p5, p6); }
	static Any _0x0D322AEF8878B8FE() { return Native::Invoke<Any>(0x0D322AEF8878B8FE); }
	static Any _0xD508FA229F1C4900(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return Native::Invoke<Any, Any, Any, Any, Any, Any, Any>(0xD508FA229F1C4900, p0, p1, p2, p3, p4, p5); }
	static void _0xB8E213D02F37947D(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any, Any>(0xB8E213D02F37947D, p0, p1, p2, p3, p4, p5, p6); }
	static BOOL IS_SCENARIO_OCCUPIED(float x, float y, float z, float radius, BOOL p4) { return Native::Invoke<BOOL, float, float, float, float, BOOL>(N::IS_SCENARIO_OCCUPIED, x, y, z, radius, p4); }
	static BOOL PED_HAS_USE_SCENARIO_TASK(Ped ped) { return Native::Invoke<BOOL, Ped>(N::PED_HAS_USE_SCENARIO_TASK, ped); }
	static Any _0x02EBBB3989B7E695(Any p0) { return Native::Invoke<Any, Any>(0x02EBBB3989B7E695, p0); }
	static Any _0x90703A8F75EE4ABD(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x90703A8F75EE4ABD, p0, p1); }
	static void _0xD999E379265A4501(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0xD999E379265A4501, p0, p1, p2); }
	static void PLAY_ANIM_ON_RUNNING_SCENARIO(Ped ped, char* animDict, char* animName) { return Native::Invoke<void, Ped, char*, char*>(N::PLAY_ANIM_ON_RUNNING_SCENARIO, ped, animDict, animName); }
	static Any _0x74F0209674864CBD() { return Native::Invoke<Any>(0x74F0209674864CBD); }
	static Any _0xE1C105E6BBA48270() { return Native::Invoke<Any>(0xE1C105E6BBA48270); }
	static Any _0x1AC5A8AB50CFAA33(Any p0) { return Native::Invoke<Any, Any>(0x1AC5A8AB50CFAA33, p0); }
	static void _0xBEEFBB608D2AA68A(Any p0) { return Native::Invoke<void, Any>(0xBEEFBB608D2AA68A, p0); }
	static void _0x19BC99C678FBA139(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0x19BC99C678FBA139, p0, p1, p2); }
	static void _0x5D9B0BAAF04CF65B(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<void, Any, Any, Any, Any>(0x5D9B0BAAF04CF65B, p0, p1, p2, p3); }
	static void _0x9B6A58FDB0024F12(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x9B6A58FDB0024F12, p0, p1); }
	static void _0xBC3F847AE2C3DC65(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xBC3F847AE2C3DC65, p0, p1); }
	static void _0x450080DDEDB91258(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x450080DDEDB91258, p0, p1); }
	static void _0x954451EA2D2120FB(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x954451EA2D2120FB, p0, p1); }
	static void _0x0F4F6C4CE471259D(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x0F4F6C4CE471259D, p0, p1); }
	static void _0xB8E3486D107F4194(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xB8E3486D107F4194, p0, p1); }
	static void _0x827A58CED9D4D5B4(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x827A58CED9D4D5B4, p0, p1); }
	static void _0x4A7D73989F52EB37(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x4A7D73989F52EB37, p0, p1); }
	static void _0xB79817DB31FF72B9(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xB79817DB31FF72B9, p0, p1); }
	static void _0x65D281985F2BDFC2(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x65D281985F2BDFC2, p0, p1); }
	static void _0x885D19AC2B6FBFF4(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x885D19AC2B6FBFF4, p0, p1); }
	static void _0x2064B33F6E6B92D4(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<void, Any, Any, Any, Any>(0x2064B33F6E6B92D4, p0, p1, p2, p3); }
	static void _0xCE4E669400E5F8AA(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<void, Any, Any, Any, Any>(0xCE4E669400E5F8AA, p0, p1, p2, p3); }
	static void _0x2EB977293923C723(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x2EB977293923C723, p0, p1); }
	static void _0xE9225354FB7437A7(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xE9225354FB7437A7, p0, p1); }
	static void _0x764DB5A48390FBAD(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x764DB5A48390FBAD, p0, p1); }
	static void _0x8F8C84363810691A(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x8F8C84363810691A, p0, p1); }
	static void _0xFF8AFCA532B500D4(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xFF8AFCA532B500D4, p0, p1); }
	static Any _0xFE5D28B9B7837CC1(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<Any, Any, Any, Any, Any>(0xFE5D28B9B7837CC1, p0, p1, p2, p3); }
	static void _0x2B8AF29A78024BD3(Any p0) { return Native::Invoke<void, Any>(0x2B8AF29A78024BD3, p0); }
	static Any _0x0365000D8BF86531(Any p0) { return Native::Invoke<Any, Any>(0x0365000D8BF86531, p0); }
	static Any _0x865732725536EE39(Any p0) { return Native::Invoke<Any, Any>(0x865732725536EE39, p0); }
	static void _0x0E184495B27BB57D() { return Native::Invoke<void>(0x0E184495B27BB57D); }
	static BOOL DOES_SCENARIO_GROUP_EXIST(char* scenarioGroup) { return Native::Invoke<BOOL, char*>(N::DOES_SCENARIO_GROUP_EXIST, scenarioGroup); }
	static Any _0x76E98B52369A289C(Any p0) { return Native::Invoke<Any, Any>(0x76E98B52369A289C, p0); }
	static BOOL IS_SCENARIO_GROUP_ENABLED(char* scenarioGroup) { return Native::Invoke<BOOL, char*>(N::IS_SCENARIO_GROUP_ENABLED, scenarioGroup); }
	static Any _0xDCC374913DE6AAA6(Any p0) { return Native::Invoke<Any, Any>(0xDCC374913DE6AAA6, p0); }
	static void SET_SCENARIO_GROUP_ENABLED(char* scenarioGroup, BOOL p1) { return Native::Invoke<void, char*, BOOL>(N::SET_SCENARIO_GROUP_ENABLED, scenarioGroup, p1); }
	static void _0x9925EDDB6EAB88CD(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x9925EDDB6EAB88CD, p0, p1); }
	static void RESET_SCENARIO_GROUPS_ENABLED() { return Native::Invoke<void>(N::RESET_SCENARIO_GROUPS_ENABLED); }
	static void _0x358A1A751B335A11(Any p0) { return Native::Invoke<void, Any>(0x358A1A751B335A11, p0); }
	static void _0x444C910A5058E568(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x444C910A5058E568, p0, p1); }
	static Any _0xE55478C5EDF70AC2(Any p0) { return Native::Invoke<Any, Any>(0xE55478C5EDF70AC2, p0); }
	static Any _0x0CC36D4156006509(Any p0) { return Native::Invoke<Any, Any>(0x0CC36D4156006509, p0); }
	static void _0xEEE4829304F93EEE(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xEEE4829304F93EEE, p0, p1); }
	static void _0x5A40040BB5AE3EA2(Any p0) { return Native::Invoke<void, Any>(0x5A40040BB5AE3EA2, p0); }
	static BOOL IS_SCENARIO_TYPE_ENABLED(char* scenarioType) { return Native::Invoke<BOOL, char*>(N::IS_SCENARIO_TYPE_ENABLED, scenarioType); }
	static void SET_SCENARIO_TYPE_ENABLED(char* scenarioType, BOOL toggle) { return Native::Invoke<void, char*, BOOL>(N::SET_SCENARIO_TYPE_ENABLED, scenarioType, toggle); }
	static void _0xD00E50E673802D71(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xD00E50E673802D71, p0, p1); }
	static void RESET_SCENARIO_TYPES_ENABLED() { return Native::Invoke<void>(N::RESET_SCENARIO_TYPES_ENABLED); }
	static Any _0x2D0571BB55879DA2(Any p0) { return Native::Invoke<Any, Any>(0x2D0571BB55879DA2, p0); }
	static Any _0xA92450B5AE687AAF(Any p0) { return Native::Invoke<Any, Any>(0xA92450B5AE687AAF, p0); }
	static BOOL IS_PED_ACTIVE_IN_SCENARIO(Ped ped, Any p1) { return Native::Invoke<BOOL, Ped, Any>(N::IS_PED_ACTIVE_IN_SCENARIO, ped, p1); }
	static Any _0x0C3CB2E600C8977D(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x0C3CB2E600C8977D, p0, p1); }
	static Any _0x2C497BDEF897C6DF(Any p0) { return Native::Invoke<Any, Any>(0x2C497BDEF897C6DF, p0); }
	static void TASK_COMBAT_HATED_TARGETS_IN_AREA(Ped ped, float x, float y, float z, float radius, Any p5, Any p6) { return Native::Invoke<void, Ped, float, float, float, float, Any, Any>(N::TASK_COMBAT_HATED_TARGETS_IN_AREA, ped, x, y, z, radius, p5, p6); }
	static Any _0xB5BC69D9C4060BC3() { return Native::Invoke<Any>(0xB5BC69D9C4060BC3); }
	static void TASK_COMBAT_HATED_TARGETS_AROUND_PED(Ped ped, float radius, int p2, Any p3) { return Native::Invoke<void, Ped, float, int, Any>(N::TASK_COMBAT_HATED_TARGETS_AROUND_PED, ped, radius, p2, p3); }
	static void TASK_COMBAT_HATED_TARGETS_AROUND_PED_TIMED(Ped ped, float radius, int duration, BOOL unk) { return Native::Invoke<void, Ped, float, int, BOOL>(N::TASK_COMBAT_HATED_TARGETS_AROUND_PED_TIMED, ped, radius, duration, unk); }
	static void _0x8182B561A29BD597(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x8182B561A29BD597, p0, p1); }
	static void _0x30B391915538EBE2(Any p0) { return Native::Invoke<void, Any>(0x30B391915538EBE2, p0); }
	static void TASK_THROW_PROJECTILE(int ped, float x, float y, float z) { return Native::Invoke<void, int, float, float, float>(N::TASK_THROW_PROJECTILE, ped, x, y, z); }
	static void _0x7282356DFF6B5A51(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<void, Any, Any, Any, Any>(0x7282356DFF6B5A51, p0, p1, p2, p3); }
	static void _0xD6401A1B2F63BED6(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0xD6401A1B2F63BED6, p0, p1, p2); }
	static void TASK_SWAP_WEAPON(Ped ped, BOOL p1, Any p2, Any p3, Any p4) { return Native::Invoke<void, Ped, BOOL, Any, Any, Any>(N::TASK_SWAP_WEAPON, ped, p1, p2, p3, p4); }
	static void _0x0000A8ACDC2E1B6A(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x0000A8ACDC2E1B6A, p0, p1); }
	static void TASK_RELOAD_WEAPON(Ped ped, BOOL unused) { return Native::Invoke<void, Ped, BOOL>(N::TASK_RELOAD_WEAPON, ped, unused); }
	static void _0x55B0ECFD98596624(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x55B0ECFD98596624, p0, p1); }
	static BOOL IS_PED_GETTING_UP(Ped ped) { return Native::Invoke<BOOL, Ped>(N::IS_PED_GETTING_UP, ped); }
	static void _0x8C038A39C4A4B6D6(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0x8C038A39C4A4B6D6, p0, p1, p2); }
	static Any _0x30A768C30D385EC5() { return Native::Invoke<Any>(0x30A768C30D385EC5); }
	static BOOL IS_PED_IN_WRITHE(Ped ped) { return Native::Invoke<BOOL, Ped>(N::IS_PED_IN_WRITHE, ped); }
	static Any _0x3F8387DB1B9F31B7(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x3F8387DB1B9F31B7, p0, p1); }
	static Any _0x756C7B4C43DF0422(Any p0) { return Native::Invoke<Any, Any>(0x756C7B4C43DF0422, p0); }
	static Any _0x351F74ED6177EBE7() { return Native::Invoke<Any>(0x351F74ED6177EBE7); }
	static Any _0x6C50B9DCCCA70023() { return Native::Invoke<Any>(0x6C50B9DCCCA70023); }
	static void _0x356088527D9EBAAD(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0x356088527D9EBAAD, p0, p1, p2); }
	static void OPEN_PATROL_ROUTE(char* patrolRoute) { return Native::Invoke<void, char*>(N::OPEN_PATROL_ROUTE, patrolRoute); }
	static void CLOSE_PATROL_ROUTE() { return Native::Invoke<void>(N::CLOSE_PATROL_ROUTE); }
	static void ADD_PATROL_ROUTE_NODE(int p0, char* p1, float x1, float y1, float z1, float x2, float y2, float z2, int p8, Any p9) { return Native::Invoke<void, int, char*, float, float, float, float, float, float, int, Any>(N::ADD_PATROL_ROUTE_NODE, p0, p1, x1, y1, z1, x2, y2, z2, p8, p9); }
	static void ADD_PATROL_ROUTE_LINK(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(N::ADD_PATROL_ROUTE_LINK, p0, p1); }
	static void CREATE_PATROL_ROUTE() { return Native::Invoke<void>(N::CREATE_PATROL_ROUTE); }
	static void DELETE_PATROL_ROUTE(char* patrolRoute) { return Native::Invoke<void, char*>(N::DELETE_PATROL_ROUTE, patrolRoute); }
	static Any _0x643FD1556F621772(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(0x643FD1556F621772, p0, p1, p2); }
	static void TASK_PATROL(Ped ped, char* p1, Any p2, BOOL p3, BOOL p4) { return Native::Invoke<void, Ped, char*, Any, BOOL, BOOL>(N::TASK_PATROL, ped, p1, p2, p3, p4); }
	static void _0x964B06C88E4C86DB(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any, Any, Any>(0x964B06C88E4C86DB, p0, p1, p2, p3, p4, p5, p6, p7); }
	static void TASK_STAY_IN_COVER(Ped ped) { return Native::Invoke<void, Ped>(N::TASK_STAY_IN_COVER, ped); }
	static void TASK_VEHICLE_SHOOT_AT_PED(Ped ped, Ped target, float flag) { return Native::Invoke<void, Ped, Ped, float>(N::TASK_VEHICLE_SHOOT_AT_PED, ped, target, flag); }
	static void TASK_VEHICLE_AIM_AT_PED(Ped ped, Ped target) { return Native::Invoke<void, Ped, Ped>(N::TASK_VEHICLE_AIM_AT_PED, ped, target); }
	static void TASK_VEHICLE_SHOOT_AT_COORD(Ped ped, float x, float y, float z, float p4) { return Native::Invoke<void, Ped, float, float, float, float>(N::TASK_VEHICLE_SHOOT_AT_COORD, ped, x, y, z, p4); }
	static void _0xAF2EF28CE3084505(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<void, Any, Any, Any, Any>(0xAF2EF28CE3084505, p0, p1, p2, p3); }
	static void TASK_VEHICLE_AIM_AT_COORD(Ped ped, float x, float y, float z) { return Native::Invoke<void, Ped, float, float, float>(N::TASK_VEHICLE_AIM_AT_COORD, ped, x, y, z); }
	static void TASK_VEHICLE_GOTO_NAVMESH(Ped ped, Vehicle vehicle, float x, float y, float z, float speed, int behaviorFlag, float stoppingRange) { return Native::Invoke<void, Ped, Vehicle, float, float, float, float, int, float>(N::TASK_VEHICLE_GOTO_NAVMESH, ped, vehicle, x, y, z, speed, behaviorFlag, stoppingRange); }
	static void TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(Ped ped, float x, float y, float z, float aimAtX, float aimAtY, float aimAtZ, float moveSpeed, BOOL p8, float p9, float p10, BOOL p11, Any flags, BOOL p13, Hash firingPattern, Any p15) { return Native::Invoke<void, Ped, float, float, float, float, float, float, float, BOOL, float, float, BOOL, Any, BOOL, Hash, Any>(N::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD, ped, x, y, z, aimAtX, aimAtY, aimAtZ, moveSpeed, p8, p9, p10, p11, flags, p13, firingPattern, p15); }
	static void _0x639C0425A0B4E77E(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12, Any p13, Any p14, Any p15) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any>(0x639C0425A0B4E77E, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15); }
	static void TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(Any p0, float p1, float p2, float p3, Any p4, float p5, BOOL p6, float p7, float p8, BOOL p9, Any p10, BOOL p11, Any p12, Any p13, Any p14) { return Native::Invoke<void, Any, float, float, float, Any, float, BOOL, float, float, BOOL, Any, BOOL, Any, Any, Any>(N::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14); }
	static void _0x78426D0982D083C9(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12, Any p13, Any p14) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any>(0x78426D0982D083C9, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14); }
	static void TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(Ped ped, Entity entityToWalkTo, Entity entityToAimAt, float speed, BOOL shootatEntity, float p5, float p6, BOOL p7, BOOL p8, Hash firingPattern, Any p10) { return Native::Invoke<void, Ped, Entity, Entity, float, BOOL, float, float, BOOL, BOOL, Hash, Any>(N::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY, ped, entityToWalkTo, entityToAimAt, speed, shootatEntity, p5, p6, p7, p8, firingPattern, p10); }
	static void _0xCEF0117C233026AD(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any>(0xCEF0117C233026AD, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); }
	static void TASK_GO_TO_COORD_AND_AIM_AT_HATED_ENTITIES_NEAR_COORD(Ped pedHandle, float goToLocationX, float goToLocationY, float goToLocationZ, float focusLocationX, float focusLocationY, float focusLocationZ, float speed, BOOL shootAtEnemies, float distanceToStopAt, float noRoadsDistance, BOOL unkTrue, int unkFlag, int aimingFlag, Hash firingPattern) { return Native::Invoke<void, Ped, float, float, float, float, float, float, float, BOOL, float, float, BOOL, int, int, Hash>(N::TASK_GO_TO_COORD_AND_AIM_AT_HATED_ENTITIES_NEAR_COORD, pedHandle, goToLocationX, goToLocationY, goToLocationZ, focusLocationX, focusLocationY, focusLocationZ, speed, shootAtEnemies, distanceToStopAt, noRoadsDistance, unkTrue, unkFlag, aimingFlag, firingPattern); }
	static void _0x87BD711FC31EA273(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12, Any p13, Any p14) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any>(0x87BD711FC31EA273, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14); }
	static void SET_HIGH_FALL_TASK(Ped ped, Any p1, Any p2, Any p3) { return Native::Invoke<void, Ped, Any, Any, Any>(N::SET_HIGH_FALL_TASK, ped, p1, p2, p3); }
	static void _0x5217B7B6DB78E1F3(Any p0, Any p1, Any p2, Any p3, Any p4) { return Native::Invoke<void, Any, Any, Any, Any, Any>(0x5217B7B6DB78E1F3, p0, p1, p2, p3, p4); }
	static void REQUEST_WAYPOINT_RECORDING(char* name) { return Native::Invoke<void, char*>(N::REQUEST_WAYPOINT_RECORDING, name); }
	static BOOL GET_IS_WAYPOINT_RECORDING_LOADED(char* name) { return Native::Invoke<BOOL, char*>(N::GET_IS_WAYPOINT_RECORDING_LOADED, name); }
	static void REMOVE_WAYPOINT_RECORDING(char* name) { return Native::Invoke<void, char*>(N::REMOVE_WAYPOINT_RECORDING, name); }
	static Any _0xF718931A82EEB898() { return Native::Invoke<Any>(0xF718931A82EEB898); }
	static BOOL WAYPOINT_RECORDING_GET_NUM_POINTS(char* name, int* points) { return Native::Invoke<BOOL, char*, int*>(N::WAYPOINT_RECORDING_GET_NUM_POINTS, name, points); }
	static BOOL WAYPOINT_RECORDING_GET_COORD(char* name, int point, Vector3* coord) { return Native::Invoke<BOOL, char*, int, Vector3*>(N::WAYPOINT_RECORDING_GET_COORD, name, point, coord); }
	static float WAYPOINT_RECORDING_GET_SPEED_AT_POINT(char* name, int point) { return Native::Invoke<float, char*, int>(N::WAYPOINT_RECORDING_GET_SPEED_AT_POINT, name, point); }
	static BOOL WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(char* name, float x, float y, float z, int* point) { return Native::Invoke<BOOL, char*, float, float, float, int*>(N::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT, name, x, y, z, point); }
	static void _0x0CFC13EBC19BCA52(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x0CFC13EBC19BCA52, p0, p1); }
	static void TASK_FOLLOW_WAYPOINT_RECORDING(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any, Any, Any>(N::TASK_FOLLOW_WAYPOINT_RECORDING, p0, p1, p2, p3, p4, p5, p6, p7); }
	static void _0xBE9B0520BD7C445B(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any, Any>(0xBE9B0520BD7C445B, p0, p1, p2, p3, p4, p5, p6); }
	static void _0x4D2B787BAE9AB760(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any, Any, Any, Any>(0x4D2B787BAE9AB760, p0, p1, p2, p3, p4, p5, p6, p7, p8); }
	static BOOL IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Any p0, Any p1) { return Native::Invoke<BOOL, Any, Any>(N::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED, p0, p1); }
	static int GET_PED_WAYPOINT_PROGRESS(Ped ped) { return Native::Invoke<int, Ped>(N::GET_PED_WAYPOINT_PROGRESS, ped); }
	static float GET_PED_WAYPOINT_DISTANCE(Ped ped) { return Native::Invoke<float, Ped>(N::GET_PED_WAYPOINT_DISTANCE, ped); }
	static Any SET_PED_WAYPOINT_ROUTE_OFFSET(Ped ped, float offsetX, float offsetY, float offsetZ) { return Native::Invoke<Any, Ped, float, float, float>(N::SET_PED_WAYPOINT_ROUTE_OFFSET, ped, offsetX, offsetY, offsetZ); }
	static float GET_WAYPOINT_DISTANCE_ALONG_ROUTE(char* p0, int p1) { return Native::Invoke<float, char*, int>(N::GET_WAYPOINT_DISTANCE_ALONG_ROUTE, p0, p1); }
	static Any _0x3ACC128510142B9D(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<Any, Any, Any, Any, Any>(0x3ACC128510142B9D, p0, p1, p2, p3); }
	static BOOL WAYPOINT_PLAYBACK_GET_IS_PAUSED(Any p0) { return Native::Invoke<BOOL, Any>(N::WAYPOINT_PLAYBACK_GET_IS_PAUSED, p0); }
	static Any _0xD73A5D1F0325C71C() { return Native::Invoke<Any>(0xD73A5D1F0325C71C); }
	static Any _0xA5B94DF8AF058F46(Any p0) { return Native::Invoke<Any, Any>(0xA5B94DF8AF058F46, p0); }
	static void WAYPOINT_PLAYBACK_PAUSE(Any p0, BOOL p1, BOOL p2, Any p3) { return Native::Invoke<void, Any, BOOL, BOOL, Any>(N::WAYPOINT_PLAYBACK_PAUSE, p0, p1, p2, p3); }
	static void WAYPOINT_PLAYBACK_RESUME(Any p0, BOOL p1, Any p2, Any p3) { return Native::Invoke<void, Any, BOOL, Any, Any>(N::WAYPOINT_PLAYBACK_RESUME, p0, p1, p2, p3); }
	static void WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Any p0, float p1, BOOL p2, Any p3, Any p4) { return Native::Invoke<void, Any, float, BOOL, Any, Any>(N::WAYPOINT_PLAYBACK_OVERRIDE_SPEED, p0, p1, p2, p3, p4); }
	static void WAYPOINT_PLAYBACK_USE_DEFAULT_SPEED(Any p0) { return Native::Invoke<void, Any>(N::WAYPOINT_PLAYBACK_USE_DEFAULT_SPEED, p0); }
	static Any _0xD39A2F3E7FCAFF08(Any p0) { return Native::Invoke<Any, Any>(0xD39A2F3E7FCAFF08, p0); }
	static void USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE(Any* p0, BOOL p1, float p2, float p3, Any p4) { return Native::Invoke<void, Any*, BOOL, float, float, Any>(N::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE, p0, p1, p2, p3, p4); }
	static void WAYPOINT_PLAYBACK_START_AIMING_AT_PED(Any p0, Any p1, BOOL p2, Any p3) { return Native::Invoke<void, Any, Any, BOOL, Any>(N::WAYPOINT_PLAYBACK_START_AIMING_AT_PED, p0, p1, p2, p3); }
	static Any _0x4F158205E0C74385() { return Native::Invoke<Any>(0x4F158205E0C74385); }
	static void WAYPOINT_PLAYBACK_START_AIMING_AT_COORD(Any p0, float p1, float p2, float p3, BOOL p4, Any p5) { return Native::Invoke<void, Any, float, float, float, BOOL, Any>(N::WAYPOINT_PLAYBACK_START_AIMING_AT_COORD, p0, p1, p2, p3, p4, p5); }
	static void WAYPOINT_PLAYBACK_START_SHOOTING_AT_PED(Any p0, Any p1, Any p2, Any p3, Any p4) { return Native::Invoke<void, Any, Any, Any, Any, Any>(N::WAYPOINT_PLAYBACK_START_SHOOTING_AT_PED, p0, p1, p2, p3, p4); }
	static void _0x4AF458F71C1196D2(Any p0, Any p1, Any p2, Any p3, Any p4) { return Native::Invoke<void, Any, Any, Any, Any, Any>(0x4AF458F71C1196D2, p0, p1, p2, p3, p4); }
	static void WAYPOINT_PLAYBACK_START_SHOOTING_AT_COORD(Any p0, float p1, float p2, float p3, BOOL p4, Any p5, Any p6) { return Native::Invoke<void, Any, float, float, float, BOOL, Any, Any>(N::WAYPOINT_PLAYBACK_START_SHOOTING_AT_COORD, p0, p1, p2, p3, p4, p5, p6); }
	static void WAYPOINT_PLAYBACK_STOP_AIMING_OR_SHOOTING(Any p0) { return Native::Invoke<void, Any>(N::WAYPOINT_PLAYBACK_STOP_AIMING_OR_SHOOTING, p0); }
	static void ASSISTED_MOVEMENT_REMOVE_ROUTE(char* route) { return Native::Invoke<void, char*>(N::ASSISTED_MOVEMENT_REMOVE_ROUTE, route); }
	static Any _0x5C885E0978B6AD60(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<Any, Any, Any, Any, Any>(0x5C885E0978B6AD60, p0, p1, p2, p3); }
	static BOOL ASSISTED_MOVEMENT_IS_ROUTE_LOADED(char* route) { return Native::Invoke<BOOL, char*>(N::ASSISTED_MOVEMENT_IS_ROUTE_LOADED, route); }
	static void ASSISTED_MOVEMENT_SET_ROUTE_PROPERTIES(char* route, int props) { return Native::Invoke<void, char*, int>(N::ASSISTED_MOVEMENT_SET_ROUTE_PROPERTIES, route, props); }
	static void _0x295F03DC97BEEBC1(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x295F03DC97BEEBC1, p0, p1); }
	static void _0xB5C51DD544F14F58(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any, Any, Any, Any>(0xB5C51DD544F14F58, p0, p1, p2, p3, p4, p5, p6, p7, p8); }
	static void TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(Ped ped, Vehicle vehicle, char* WPRecording, int p3, int p4, int p5, int p6, float p7, BOOL p8, float p9, Any p10) { return Native::Invoke<void, Ped, Vehicle, char*, int, int, int, int, float, BOOL, float, Any>(N::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING, ped, vehicle, WPRecording, p3, p4, p5, p6, p7, p8, p9, p10); }
	static void _0x041D17A9E221AE30(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any>(0x041D17A9E221AE30, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); }
	static BOOL IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(Any p0, Any p1) { return Native::Invoke<BOOL, Any, Any>(N::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE, p0, p1); }
	static int GET_VEHICLE_WAYPOINT_PROGRESS(Vehicle vehicle) { return Native::Invoke<int, Vehicle>(N::GET_VEHICLE_WAYPOINT_PROGRESS, vehicle); }
	static Any GET_VEHICLE_WAYPOINT_TARGET_POINT(Ped ped) { return Native::Invoke<Any, Ped>(N::GET_VEHICLE_WAYPOINT_TARGET_POINT, ped); }
	static void VEHICLE_WAYPOINT_PLAYBACK_PAUSE(Any p0) { return Native::Invoke<void, Any>(N::VEHICLE_WAYPOINT_PLAYBACK_PAUSE, p0); }
	static Any _0x4D6D30AB18B0B089(Any p0) { return Native::Invoke<Any, Any>(0x4D6D30AB18B0B089, p0); }
	static void VEHICLE_WAYPOINT_PLAYBACK_RESUME(Any p0) { return Native::Invoke<void, Any>(N::VEHICLE_WAYPOINT_PLAYBACK_RESUME, p0); }
	static void VEHICLE_WAYPOINT_PLAYBACK_USE_DEFAULT_SPEED(Any p0) { return Native::Invoke<void, Any>(N::VEHICLE_WAYPOINT_PLAYBACK_USE_DEFAULT_SPEED, p0); }
	static void VEHICLE_WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Any p0, float p1) { return Native::Invoke<void, Any, float>(N::VEHICLE_WAYPOINT_PLAYBACK_OVERRIDE_SPEED, p0, p1); }
	static Any _0x3DC971EB22F73447() { return Native::Invoke<Any>(0x3DC971EB22F73447); }
	static void TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Ped ped, BOOL toggle) { return Native::Invoke<void, Ped, BOOL>(N::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS, ped, toggle); }
	static void _0x4C3FA937B44A90FA(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<void, Any, Any, Any, Any>(0x4C3FA937B44A90FA, p0, p1, p2, p3); }
	static void _0x17293C633C8AC019(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<void, Any, Any, Any, Any>(0x17293C633C8AC019, p0, p1, p2, p3); }
	static void TASK_FORCE_MOTION_STATE(Ped ped, Hash state, BOOL p2) { return Native::Invoke<void, Ped, Hash, BOOL>(N::TASK_FORCE_MOTION_STATE, ped, state, p2); }
	static void TASK_MOVE_NETWORK_BY_NAME(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any>(N::TASK_MOVE_NETWORK_BY_NAME, p0, p1, p2, p3, p4, p5); }
	static void _0x139805C2A67C4795(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any, Any>(0x139805C2A67C4795, p0, p1, p2, p3, p4, p5, p6); }
	static void _0x7B6A04F98BBAFB2C(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12, Any p13, Any p14) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any>(0x7B6A04F98BBAFB2C, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14); }
	static void _0xF92171093BCABED4(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12, Any p13, Any p14, Any p15, Any p16, Any p17) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any>(0xF92171093BCABED4, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17); }
	static Any IS_TASK_MOVE_NETWORK_ACTIVE(Any p0) { return Native::Invoke<Any, Any>(N::IS_TASK_MOVE_NETWORK_ACTIVE, p0); }
	static Any _0xCACC2F9D994504B7(Any p0) { return Native::Invoke<Any, Any>(0xCACC2F9D994504B7, p0); }
	static Any IS_TASK_MOVE_NETWORK_READY_FOR_TRANSITION(Any p0) { return Native::Invoke<Any, Any>(N::IS_TASK_MOVE_NETWORK_READY_FOR_TRANSITION, p0); }
	static void REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(N::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION, p0, p1); }
	static Any GET_TASK_MOVE_NETWORK_STATE(Any p0) { return Native::Invoke<Any, Any>(N::GET_TASK_MOVE_NETWORK_STATE, p0); }
	static Any _0xE9A6400D1A0E7A55(Any p0) { return Native::Invoke<Any, Any>(0xE9A6400D1A0E7A55, p0); }
	static void _0x615DC4A82E90BB48(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0x615DC4A82E90BB48, p0, p1, p2); }
	static void SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(N::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT, p0, p1, p2); }
	static Any _0x099D4A855D53B03B() { return Native::Invoke<Any>(0x099D4A855D53B03B); }
	static void SET_TASK_MOVE_NETWORK_SIGNAL_BOOL(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(N::SET_TASK_MOVE_NETWORK_SIGNAL_BOOL, p0, p1, p2); }
	static void _0x4662BFE01938D98D(Any p0, Any p1, Any p2, Any p3, Any p4) { return Native::Invoke<void, Any, Any, Any, Any, Any>(0x4662BFE01938D98D, p0, p1, p2, p3, p4); }
	static Any _0x844CEEE428EA35B0(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x844CEEE428EA35B0, p0, p1); }
	static Any GET_TASK_MOVE_NETWORK_EVENT(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(N::GET_TASK_MOVE_NETWORK_EVENT, p0, p1); }
	static void _0x9585FF23C4B8EDE0(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x9585FF23C4B8EDE0, p0, p1); }
	static void _0xEAF87DA2BE78A15B(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xEAF87DA2BE78A15B, p0, p1); }
	static void _0x3BBEECC5B8F35318(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x3BBEECC5B8F35318, p0, p1); }
	static BOOL IS_MOVE_BLEND_RATIO_STILL(Ped ped) { return Native::Invoke<BOOL, Ped>(N::IS_MOVE_BLEND_RATIO_STILL, ped); }
	static BOOL IS_MOVE_BLEND_RATIO_WALKING(Ped ped) { return Native::Invoke<BOOL, Ped>(N::IS_MOVE_BLEND_RATIO_WALKING, ped); }
	static BOOL IS_MOVE_BLEND_RATIO_RUNNING(Ped ped) { return Native::Invoke<BOOL, Ped>(N::IS_MOVE_BLEND_RATIO_RUNNING, ped); }
	static BOOL IS_MOVE_BLEND_RATIO_SPRINTING(Ped ped) { return Native::Invoke<BOOL, Ped>(N::IS_MOVE_BLEND_RATIO_SPRINTING, ped); }
	static BOOL IS_PED_STILL(Ped ped) { return Native::Invoke<BOOL, Ped>(N::IS_PED_STILL, ped); }
	static BOOL IS_PED_WALKING(Ped ped) { return Native::Invoke<BOOL, Ped>(N::IS_PED_WALKING, ped); }
	static BOOL IS_PED_RUNNING(Ped ped) { return Native::Invoke<BOOL, Ped>(N::IS_PED_RUNNING, ped); }
	static BOOL IS_PED_SPRINTING(Ped ped) { return Native::Invoke<BOOL, Ped>(N::IS_PED_SPRINTING, ped); }
	static Any _0xF330A5C062B29BED(Any p0) { return Native::Invoke<Any, Any>(0xF330A5C062B29BED, p0); }
	static void TASK_ARREST_PED(Ped ped, Ped target) { return Native::Invoke<void, Ped, Ped>(N::TASK_ARREST_PED, ped, target); }
	static BOOL IS_PED_BEING_ARRESTED(Ped ped) { return Native::Invoke<BOOL, Ped>(N::IS_PED_BEING_ARRESTED, ped); }
	static Any _0xA9CC7856D52DBD25() { return Native::Invoke<Any>(0xA9CC7856D52DBD25); }
	static void _0x7981037A96E7D174(Any p0) { return Native::Invoke<void, Any>(0x7981037A96E7D174, p0); }
	static void UNCUFF_PED(Ped ped) { return Native::Invoke<void, Ped>(N::UNCUFF_PED, ped); }
	static BOOL IS_PED_CUFFED(Ped ped) { return Native::Invoke<BOOL, Ped>(N::IS_PED_CUFFED, ped); }
	static Any _0xC8B29D18022EA2B7(Any p0) { return Native::Invoke<Any, Any>(0xC8B29D18022EA2B7, p0); }
	static void _0x5D5B0D5BC3626E5A(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any>(0x5D5B0D5BC3626E5A, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); }
	static Any _0x908BB14BCE85C80E(Any p0) { return Native::Invoke<Any, Any>(0x908BB14BCE85C80E, p0); }
	static Any _0x1F7A9A9C38C13A56(Any p0) { return Native::Invoke<Any, Any>(0x1F7A9A9C38C13A56, p0); }
	static Any _0x3FEB770D8ED9047A(Any p0) { return Native::Invoke<Any, Any>(0x3FEB770D8ED9047A, p0); }
	static Any _0x30146C25686B7836(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x30146C25686B7836, p0, p1); }
	static Any _0x59AE5CA4FFB4E378(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x59AE5CA4FFB4E378, p0, p1); }
	static void _0x748D5E0D2A1A4C61(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0x748D5E0D2A1A4C61, p0, p1, p2); }
	static void _0xEED08A3A98B847E2(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0xEED08A3A98B847E2, p0, p1, p2); }
	static void _0x651F0530083C0E5A(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x651F0530083C0E5A, p0, p1); }
	static void _0xF0B4F759F35CC7F5(Any p0, Any p1, Any p2, Any p3, Any p4) { return Native::Invoke<void, Any, Any, Any, Any, Any>(0xF0B4F759F35CC7F5, p0, p1, p2, p3, p4); }
	static void _0x9EBD34958AB6F824(Any p0) { return Native::Invoke<void, Any>(0x9EBD34958AB6F824, p0); }
	static Any _0x0CCFE72B43C9CF96(Any p0) { return Native::Invoke<Any, Any>(0x0CCFE72B43C9CF96, p0); }
	static Any _0x10ADFDF07B7DFFBA(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(0x10ADFDF07B7DFFBA, p0, p1, p2); }
	static void _0xC7F0B43DCDC57E3D(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any, Any>(0xC7F0B43DCDC57E3D, p0, p1, p2, p3, p4, p5, p6); }
	static void _0x6D3D87C57B3D52C7(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<void, Any, Any, Any, Any>(0x6D3D87C57B3D52C7, p0, p1, p2, p3); }
	static void _0x17CA98707B15926A(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0x17CA98707B15926A, p0, p1, p2); }
	static void _0x36D188AECB26094B(Any p0) { return Native::Invoke<void, Any>(0x36D188AECB26094B, p0); }
	static Any _0xE2CF104ADD49D4BF() { return Native::Invoke<Any>(0xE2CF104ADD49D4BF); }
	static void _0x502EC17B1BED4BFA(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x502EC17B1BED4BFA, p0, p1); }
	static void _0x27829AFD3E03AC1A(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x27829AFD3E03AC1A, p0, p1); }
	static void _0x81D16C4FF3A77ADF(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x81D16C4FF3A77ADF, p0, p1); }
	static Any _0x525421A507216084() { return Native::Invoke<Any>(0x525421A507216084); }
	static void _0xAB591AE6B48B913E(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xAB591AE6B48B913E, p0, p1); }
	static Any _0x4687E69D258BBE41() { return Native::Invoke<Any>(0x4687E69D258BBE41); }
	static Any _0x73F0D0327BFA0812(Any p0) { return Native::Invoke<Any, Any>(0x73F0D0327BFA0812, p0); }
	static Any _0x5E5D96BE25E9DF68(Any p0) { return Native::Invoke<Any, Any>(0x5E5D96BE25E9DF68, p0); }
	static Any _0x5B4BBE80AD5972DC(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { return Native::Invoke<Any, Any, Any, Any, Any, Any, Any, Any, Any>(0x5B4BBE80AD5972DC, p0, p1, p2, p3, p4, p5, p6, p7); }
	static void _0x5758B1EE0C3FD4AC(Any p0) { return Native::Invoke<void, Any>(0x5758B1EE0C3FD4AC, p0); }
	static Any _0x96C6ED22FB742C3E(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x96C6ED22FB742C3E, p0, p1); }
	static Any _0xDF56A2B50C04DEA4(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0xDF56A2B50C04DEA4, p0, p1); }
	static void _0x48FAE038401A2888(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x48FAE038401A2888, p0, p1); }
	static void _0xBB28D1BC9EA8A6A5(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xBB28D1BC9EA8A6A5, p0, p1); }
	static void _0xCF1501CBC4059412(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any>(0xCF1501CBC4059412, p0, p1, p2, p3, p4, p5); }
	static Any _0xC716EB2BD16370A3() { return Native::Invoke<Any>(0xC716EB2BD16370A3); }
	static void _0x6AFD8FE0D723328F(Any p0) { return Native::Invoke<void, Any>(0x6AFD8FE0D723328F, p0); }
	static void _0x79559BAD83CCD038(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any>(0x79559BAD83CCD038, p0, p1, p2, p3, p4, p5); }
	static void _0x722D6A49200174FE(Any p0, Any p1, Any p2, Any p3, Any p4) { return Native::Invoke<void, Any, Any, Any, Any, Any>(0x722D6A49200174FE, p0, p1, p2, p3, p4); }
	static void _0x78B4567E18B54480(Any p0) { return Native::Invoke<void, Any>(0x78B4567E18B54480, p0); }
	static void _0x67BFCED22909834D(Any p0) { return Native::Invoke<void, Any>(0x67BFCED22909834D, p0); }
	static Any _0x8E1DDE26D270CC5E() { return Native::Invoke<Any>(0x8E1DDE26D270CC5E); }
	static void _0xA6A76D666A281F2D(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xA6A76D666A281F2D, p0, p1); }
	static Any _0xA21AA2F0C2180125() { return Native::Invoke<Any>(0xA21AA2F0C2180125); }
	static Any _0xE47DD64B9F02677D(Any p0) { return Native::Invoke<Any, Any>(0xE47DD64B9F02677D, p0); }
	static void _0xFF745B0346E19E2C(Any p0) { return Native::Invoke<void, Any>(0xFF745B0346E19E2C, p0); }
	static Any _0xB8F52A3F84A7CC59(Any p0) { return Native::Invoke<Any, Any>(0xB8F52A3F84A7CC59, p0); }
	static void _0x6AFDA2264925BD11(Any p0) { return Native::Invoke<void, Any>(0x6AFDA2264925BD11, p0); }
	static void _0x816A3ACD265E2297(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x816A3ACD265E2297, p0, p1); }
	static void _0x4E806A395D43A458(Any p0) { return Native::Invoke<void, Any>(0x4E806A395D43A458, p0); }
	static Any _0x545BF19F86E80F11() { return Native::Invoke<Any>(0x545BF19F86E80F11); }
	static Any _0x559A6F8C5133B4EE() { return Native::Invoke<Any>(0x559A6F8C5133B4EE); }
	static Any _0x11CD066F54DA0133(Any p0) { return Native::Invoke<Any, Any>(0x11CD066F54DA0133, p0); }
	static void _0x9ADDBB9242179D56(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x9ADDBB9242179D56, p0, p1); }
	static Any _0x4ECCC2815CA79AE2(Any p0) { return Native::Invoke<Any, Any>(0x4ECCC2815CA79AE2, p0); }
	static void _0xAA0AF6025160243A(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xAA0AF6025160243A, p0, p1); }
	static Any _0x1BF9D36A5EAFFBAE() { return Native::Invoke<Any>(0x1BF9D36A5EAFFBAE); }
	static Any _0x6AFD84AEAA3EA538() { return Native::Invoke<Any>(0x6AFD84AEAA3EA538); }
	static Any _0xBD1C3C0F271C39D3() { return Native::Invoke<Any>(0xBD1C3C0F271C39D3); }
	static Any _0x1ECF56C040FD839C() { return Native::Invoke<Any>(0x1ECF56C040FD839C); }
	static void _0xF40A109B4B79A848(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0xF40A109B4B79A848, p0, p1, p2); }
	static Any _0xEFC4303DDC6E60D3(Any p0) { return Native::Invoke<Any, Any>(0xEFC4303DDC6E60D3, p0); }
	static Any _0xAC5045AB7F1A34FD() { return Native::Invoke<Any>(0xAC5045AB7F1A34FD); }
	static Any _0xED1F514AF4732258(Any p0) { return Native::Invoke<Any, Any>(0xED1F514AF4732258, p0); }
	static void _0x84179419DBDD36F2(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<void, Any, Any, Any, Any>(0x84179419DBDD36F2, p0, p1, p2, p3); }
	static Any _0x3A2A2071DF5CC569(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(0x3A2A2071DF5CC569, p0, p1, p2); }
	static Any _0x87BE56724650408E(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x87BE56724650408E, p0, p1); }
	static Any _0x482C99D0B38D1B0A(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { return Native::Invoke<Any, Any, Any, Any, Any, Any, Any, Any, Any>(0x482C99D0B38D1B0A, p0, p1, p2, p3, p4, p5, p6, p7); }
	static Any _0x779A2FFACEFAEA7B(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return Native::Invoke<Any, Any, Any, Any, Any, Any, Any, Any>(0x779A2FFACEFAEA7B, p0, p1, p2, p3, p4, p5, p6); }
	static Any _0x648B75D44930D6BD(Any p0, Any p1, Any p2, Any p3, Any p4) { return Native::Invoke<Any, Any, Any, Any, Any, Any>(0x648B75D44930D6BD, p0, p1, p2, p3, p4); }
	static Any _0x933ACC1A1771A288(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { return Native::Invoke<Any, Any, Any, Any, Any, Any, Any, Any, Any, Any>(0x933ACC1A1771A288, p0, p1, p2, p3, p4, p5, p6, p7, p8); }
	static void _0x2948235DB2058E99(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x2948235DB2058E99, p0, p1); }
	static void _0xB2F47A1AFDFCC595(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xB2F47A1AFDFCC595, p0, p1); }
	static void _0x41D1331AFAD5A091(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0x41D1331AFAD5A091, p0, p1, p2); }
	static void _0x801BD27403F3CBA0(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<void, Any, Any, Any, Any>(0x801BD27403F3CBA0, p0, p1, p2, p3); }
	static void _0x0FE797DD9F70DFA6(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<void, Any, Any, Any, Any>(0x0FE797DD9F70DFA6, p0, p1, p2, p3); }
	static void _0x4391700CBD89C3D8(Any p0) { return Native::Invoke<void, Any>(0x4391700CBD89C3D8, p0); }
	static void _0xFC7F71CF49F70B6B(Any p0) { return Native::Invoke<void, Any>(0xFC7F71CF49F70B6B, p0); }
	static void _0xE01F55B2896F6B37(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xE01F55B2896F6B37, p0, p1); }
	static Any _0xE62754D09354F6CF(Any p0) { return Native::Invoke<Any, Any>(0xE62754D09354F6CF, p0); }
	static void _0x4BA972D0E5AD8122(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x4BA972D0E5AD8122, p0, p1); }
	static Any _0xF3735ACD11ACD500(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0xF3735ACD11ACD500, p0, p1); }
	static Any _0xF3735ACD11ACD501(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0xF3735ACD11ACD501, p0, p1); }
	static void _0x2C28AC30A72722DA(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0x2C28AC30A72722DA, p0, p1, p2); }
	static void _0x9B0C7FA063E67629(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<void, Any, Any, Any, Any>(0x9B0C7FA063E67629, p0, p1, p2, p3); }
	static void _0x1F298C7BD30D1240(Any p0) { return Native::Invoke<void, Any>(0x1F298C7BD30D1240, p0); }
	static void _0x1A52076D26E09004(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x1A52076D26E09004, p0, p1); }
	static void _0xCE71C2F9BAA3F975(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xCE71C2F9BAA3F975, p0, p1); }
	static Any _0xB520DBDA7FCF573F(Any p0) { return Native::Invoke<Any, Any>(0xB520DBDA7FCF573F, p0); }
	static void _0x31BB338F64D5C861(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x31BB338F64D5C861, p0, p1); }
	static void _0x517D01BF27B682D1(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any, Any>(0x517D01BF27B682D1, p0, p1, p2, p3, p4, p5, p6); }
	static void _0x88FD60D846D9CD63(Any p0) { return Native::Invoke<void, Any>(0x88FD60D846D9CD63, p0); }
	static void _0x9050DF2C53801208(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x9050DF2C53801208, p0, p1); }
	static void _0x22CDBF317C40A122(Any p0) { return Native::Invoke<void, Any>(0x22CDBF317C40A122, p0); }
	static Any _0xB31A277C1AC7B7FF() { return Native::Invoke<Any>(0xB31A277C1AC7B7FF); }
	static Any _0x884E3436CC1F41DD() { return Native::Invoke<Any>(0x884E3436CC1F41DD); }
	static Any _0x6A1AF481407BF6E9() { return Native::Invoke<Any>(0x6A1AF481407BF6E9); }
	static Any _0xBDFEEB7600BCD938() { return Native::Invoke<Any>(0xBDFEEB7600BCD938); }
	static Any _0xEC516FE805D2CB2D() { return Native::Invoke<Any>(0xEC516FE805D2CB2D); }
	static Any _0x59AEA4DC640814B9() { return Native::Invoke<Any>(0x59AEA4DC640814B9); }
	static Any _0x11C7CE1AE38911B5() { return Native::Invoke<Any>(0x11C7CE1AE38911B5); }
}
namespace _NAMESPACE67
{
	static void _0x9BEE018A63FFFAD9(Any p0) { return Native::Invoke<void, Any>(0x9BEE018A63FFFAD9, p0); }
	static Any _0xEC0BD8736DCAF841() { return Native::Invoke<Any>(0xEC0BD8736DCAF841); }
	static void _0x15B0CC1B36F1DE29(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<void, Any, Any, Any, Any>(0x15B0CC1B36F1DE29, p0, p1, p2, p3); }
	static void _0xD894437E12C17AEC(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xD894437E12C17AEC, p0, p1); }
	static void _0x8EC7890D446BD9C1(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0x8EC7890D446BD9C1, p0, p1, p2); }
	static Any _0x5DA4718DF897EB25() { return Native::Invoke<Any>(0x5DA4718DF897EB25); }
	static Any _0xE692D336F8A2A97F() { return Native::Invoke<Any>(0xE692D336F8A2A97F); }
	static Any _0xF620F47B4F4A78C4() { return Native::Invoke<Any>(0xF620F47B4F4A78C4); }
	static Any _0xA2058154357726BB() { return Native::Invoke<Any>(0xA2058154357726BB); }
	static Any _0xEF3C68F56BAD7B69() { return Native::Invoke<Any>(0xEF3C68F56BAD7B69); }
	static Any _0xECD67E9FA677CCCF() { return Native::Invoke<Any>(0xECD67E9FA677CCCF); }
	static void _0x51EC204A6E5B5A1A(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x51EC204A6E5B5A1A, p0, p1); }
	static void _0xAE693EC3A178F6C2(Any p0) { return Native::Invoke<void, Any>(0xAE693EC3A178F6C2, p0); }
	static void _0x7581972ADF5D699A(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x7581972ADF5D699A, p0, p1); }
	static void _0x565EAA726B2CE3B7(Any p0) { return Native::Invoke<void, Any>(0x565EAA726B2CE3B7, p0); }
	static void _0x217F47761376E16E(Any p0, Any p1, Any p2, Any p3, Any p4) { return Native::Invoke<void, Any, Any, Any, Any, Any>(0x217F47761376E16E, p0, p1, p2, p3, p4); }
	static void _0xCD6F8A0335D821F9(Any p0) { return Native::Invoke<void, Any>(0xCD6F8A0335D821F9, p0); }
	static void _0x775B2ED944E44973(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any>(0x775B2ED944E44973, p0, p1, p2, p3, p4, p5); }
	static void _0xF78E669FDC202E73() { return Native::Invoke<void>(0xF78E669FDC202E73); }
	static void _0x2A374E6F0075EE81(Any p0, Any p1, Any p2, Any p3, Any p4) { return Native::Invoke<void, Any, Any, Any, Any, Any>(0x2A374E6F0075EE81, p0, p1, p2, p3, p4); }
	static void _0x9BD8A9D0A774A6F8(Any p0, Any p1, Any p2, Any p3, Any p4) { return Native::Invoke<void, Any, Any, Any, Any, Any>(0x9BD8A9D0A774A6F8, p0, p1, p2, p3, p4); }
	static Any _0x536B6025E94AC48F() { return Native::Invoke<Any>(0x536B6025E94AC48F); }
	static Any _0x32D5898C4898CD95() { return Native::Invoke<Any>(0x32D5898C4898CD95); }
	static void _0x3145044F3990D321(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any, Any>(0x3145044F3990D321, p0, p1, p2, p3, p4, p5, p6); }
	static void _0xF5EAD898EF387E73(Any p0) { return Native::Invoke<void, Any>(0xF5EAD898EF387E73, p0); }
	static void _0xE6B763C7F4902201(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xE6B763C7F4902201, p0, p1); }
	static void _0x78C2E029DB205A3A(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x78C2E029DB205A3A, p0, p1); }
	static Any _0xDF516E598D966D06() { return Native::Invoke<Any>(0xDF516E598D966D06); }
	static Any _0xD6CB05DDAEE43AFD() { return Native::Invoke<Any>(0xD6CB05DDAEE43AFD); }
	static Any _0xEA323F5E1A4DA2F1() { return Native::Invoke<Any>(0xEA323F5E1A4DA2F1); }
	static Any _0x6571E4327390EC0B() { return Native::Invoke<Any>(0x6571E4327390EC0B); }
	static Any _0xE6DC9B21AC7A8729() { return Native::Invoke<Any>(0xE6DC9B21AC7A8729); }
	static Any _0x7CEF4AC79F7E7FAD() { return Native::Invoke<Any>(0x7CEF4AC79F7E7FAD); }
	static Any _0xA72773C3134F9A57() { return Native::Invoke<Any>(0xA72773C3134F9A57); }
	static Any _0x7E002A36AEFCFB55() { return Native::Invoke<Any>(0x7E002A36AEFCFB55); }
	static Any _0xF9F14080D80937BD() { return Native::Invoke<Any>(0xF9F14080D80937BD); }
	static Any _0xF37A2149BC9A8A27() { return Native::Invoke<Any>(0xF37A2149BC9A8A27); }
	static Any _0xE26970A7AE0F28E9() { return Native::Invoke<Any>(0xE26970A7AE0F28E9); }
	static Any _0xE57529D23541D2DD() { return Native::Invoke<Any>(0xE57529D23541D2DD); }
	static Any _0xCF63EF77B0DF0397() { return Native::Invoke<Any>(0xCF63EF77B0DF0397); }
	static Any _0x2C24AF8EEEEF8A55() { return Native::Invoke<Any>(0x2C24AF8EEEEF8A55); }
	static Any _0x16B23D4F7A1F50D9() { return Native::Invoke<Any>(0x16B23D4F7A1F50D9); }
	static Any _0x8127C5AA05C5A210() { return Native::Invoke<Any>(0x8127C5AA05C5A210); }
	static Any _0x80A02D9F948A8BCA() { return Native::Invoke<Any>(0x80A02D9F948A8BCA); }
	static Any _0xF184B3ECE36219CF() { return Native::Invoke<Any>(0xF184B3ECE36219CF); }
	static Any _0xAB43D1C80B5E9500() { return Native::Invoke<Any>(0xAB43D1C80B5E9500); }
	static Any _0x52FA31DB8F3AD25D() { return Native::Invoke<Any>(0x52FA31DB8F3AD25D); }
	static Any _0xB204BF9F30298D77() { return Native::Invoke<Any>(0xB204BF9F30298D77); }
	static Any _0x476038B5A0734C10() { return Native::Invoke<Any>(0x476038B5A0734C10); }
	static Any _0x4AC38DFD286DAD14() { return Native::Invoke<Any>(0x4AC38DFD286DAD14); }
	static Any _0xED22BE4C5A399E63() { return Native::Invoke<Any>(0xED22BE4C5A399E63); }
	static Any _0xF0D54E0651DD7E07() { return Native::Invoke<Any>(0xF0D54E0651DD7E07); }
	static Any _0x415FE28ED44BFF14() { return Native::Invoke<Any>(0x415FE28ED44BFF14); }
	static Any _0xC3ADF4880784FA9C() { return Native::Invoke<Any>(0xC3ADF4880784FA9C); }
	static Any _0x317D9C9560529CC2() { return Native::Invoke<Any>(0x317D9C9560529CC2); }
	static Any _0x32C2939564D74BFF() { return Native::Invoke<Any>(0x32C2939564D74BFF); }
	static Any _0xFF9052BC7A3B7D33() { return Native::Invoke<Any>(0xFF9052BC7A3B7D33); }
	static Any _0xE67AF24C5A3B6058() { return Native::Invoke<Any>(0xE67AF24C5A3B6058); }
	static Any _0x3255D4D2082C6339() { return Native::Invoke<Any>(0x3255D4D2082C6339); }
	static Any _0xE9F24081D84931B8() { return Native::Invoke<Any>(0xE9F24081D84931B8); }
	static Any _0x3180E991D4B8F248() { return Native::Invoke<Any>(0x3180E991D4B8F248); }
	static Any _0x40914CCF2A1AB531() { return Native::Invoke<Any>(0x40914CCF2A1AB531); }
}
namespace TXD
{
	static Any _0xBA0163B277C2D2D0(Any p0) { return Native::Invoke<Any, Any>(0xBA0163B277C2D2D0, p0); }
	static void _0xDB1BD07FB464584D(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xDB1BD07FB464584D, p0, p1); }
	static Any _0xBE72591D1509FFE4(Any p0) { return Native::Invoke<Any, Any>(0xBE72591D1509FFE4, p0); }
	static void _0x8232F37DF762ACB2(Any p0) { return Native::Invoke<void, Any>(0x8232F37DF762ACB2, p0); }
	static Any _0x7332461FC59EB7EC(Any p0) { return Native::Invoke<Any, Any>(0x7332461FC59EB7EC, p0); }
	static void REQUEST_STREAMED_TEXTURE_DICT(char* textureDict, BOOL unused) { return Native::Invoke<void, char*, BOOL>(N::REQUEST_STREAMED_TEXTURE_DICT, textureDict, unused); }
	static BOOL HAS_STREAMED_TEXTURE_DICT_LOADED(char* textureDict) { return Native::Invoke<BOOL, char*>(N::HAS_STREAMED_TEXTURE_DICT_LOADED, textureDict); }
	static void SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(char* textureDict) { return Native::Invoke<void, char*>(N::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED, textureDict); }
}
namespace UIAPPS
{
	static Any _IS_APP_ACTIVE(Any p0) { return Native::Invoke<Any, Any>(N::_IS_APP_ACTIVE, p0); }
	static Any _0xAC959AB99AAF3D9F() { return Native::Invoke<Any>(0xAC959AB99AAF3D9F); }
	static Any _IS_APP_RUNNING(Any p0) { return Native::Invoke<Any, Any>(N::_IS_APP_RUNNING, p0); }
	static Any _IS_ANY_APP_RUNNING() { return Native::Invoke<Any>(N::_IS_ANY_APP_RUNNING); }
	static Any _0x96FD694FE5BE55DC() { return Native::Invoke<Any>(0x96FD694FE5BE55DC); }
	static void _CLOSE_APP_BY_HASH(Any p0) { return Native::Invoke<void, Any>(N::_CLOSE_APP_BY_HASH, p0); }
	static void _CLOSE_APP_BY_HASH_IMMEDIATE(Any p0) { return Native::Invoke<void, Any>(N::_CLOSE_APP_BY_HASH_IMMEDIATE, p0); }
	static Any _0x818C6CA9B659E8EC() { return Native::Invoke<Any>(0x818C6CA9B659E8EC); }
	static void _CLOSE_APP(Any p0) { return Native::Invoke<void, Any>(N::_CLOSE_APP, p0); }
	static void _CLOSE_ALL_APPS() { return Native::Invoke<void>(N::_CLOSE_ALL_APPS); }
	static Any _0x12769EEB8DBD7A7B() { return Native::Invoke<Any>(0x12769EEB8DBD7A7B); }
	static Any _LAUNCH_APP_BY_HASH_WITH_ENTRY(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(N::_LAUNCH_APP_BY_HASH_WITH_ENTRY, p0, p1); }
	static Any _LAUNCH_APP_BY_HASH(Any p0) { return Native::Invoke<Any, Any>(N::_LAUNCH_APP_BY_HASH, p0); }
	static Any _LAUNCH_APP_WITH_ENTRY(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(N::_LAUNCH_APP_WITH_ENTRY, p0, p1); }
	static Any _0x16F47D434B6086BF() { return Native::Invoke<Any>(0x16F47D434B6086BF); }
	static Any _CAN_LAUNCH_APP_BY_HASH(Any p0) { return Native::Invoke<Any, Any>(N::_CAN_LAUNCH_APP_BY_HASH, p0); }
	static Any _UIAPP_REQUEST_TRANSITION_BY_HASH(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(N::_UIAPP_REQUEST_TRANSITION_BY_HASH, p0, p1); }
}
namespace UIEVENTS
{
	static Any _IS_EVENT_PENDING(Any p0) { return Native::Invoke<Any, Any>(N::_IS_EVENT_PENDING, p0); }
	static Any _0xE24E957294241444() { return Native::Invoke<Any>(0xE24E957294241444); }
	static Any _PEEK_EVENT(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(N::_PEEK_EVENT, p0, p1); }
	static void _POP_EVENT(Any p0) { return Native::Invoke<void, Any>(N::_POP_EVENT, p0); }
}
namespace _NAMESPACE71
{
	static Any _0x049D5C615BD38BAD(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(0x049D5C615BD38BAD, p0, p1, p2); }
	static Any _0xD05590C1AB38F068(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<Any, Any, Any, Any, Any>(0xD05590C1AB38F068, p0, p1, p2, p3); }
	static Any _0xCEDBF17EFCC0E4A4(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(0xCEDBF17EFCC0E4A4, p0, p1, p2); }
	static Any _0xB2920B9760F0F36B(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(0xB2920B9760F0F36B, p0, p1, p2); }
	static Any _0x26E87218390E6729(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<Any, Any, Any, Any, Any>(0x26E87218390E6729, p0, p1, p2, p3); }
	static Any _0xAFF5BE9BA496CE40() { return Native::Invoke<Any>(0xAFF5BE9BA496CE40); }
	static Any _0xC927890AA64E9661() { return Native::Invoke<Any>(0xC927890AA64E9661); }
	static Any _0x3F9FDDBA79117C69() { return Native::Invoke<Any>(0x3F9FDDBA79117C69); }
	static Any _0x18D6869FBFFEC0F8(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<Any, Any, Any, Any, Any>(0x18D6869FBFFEC0F8, p0, p1, p2, p3); }
	static Any _0xB249EBCB30DD88E0(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(0xB249EBCB30DD88E0, p0, p1, p2); }
	static Any _0x2024F4F333095FB1(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(0x2024F4F333095FB1, p0, p1, p2); }
	static Any _0x893128CDB4B81FBB() { return Native::Invoke<Any>(0x893128CDB4B81FBB); }
	static Any _0x860DDFE97CC94DF0() { return Native::Invoke<Any>(0x860DDFE97CC94DF0); }
	static Any _0xA6F4216AB10EB08E() { return Native::Invoke<Any>(0xA6F4216AB10EB08E); }
	static Any _0x02BCC0FE9EBA3529() { return Native::Invoke<Any>(0x02BCC0FE9EBA3529); }
	static Any _0x8D1249BD28791878() { return Native::Invoke<Any>(0x8D1249BD28791878); }
	static Any _0xC48152BC6B3E821C() { return Native::Invoke<Any>(0xC48152BC6B3E821C); }
	static void _0xDD1232B332CBB9E7(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0xDD1232B332CBB9E7, p0, p1, p2); }
	static void _0x6035E8FBCA32AC5E() { return Native::Invoke<void>(0x6035E8FBCA32AC5E); }
	static void _0x2F901291EF177B02(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x2F901291EF177B02, p0, p1); }
	static Any _0x6D85126F6CCF02C9() { return Native::Invoke<Any>(0x6D85126F6CCF02C9); }
	static Any _0x4E88A65968A55C78(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x4E88A65968A55C78, p0, p1); }
	static Any _0x0FD07141AD048AAE(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x0FD07141AD048AAE, p0, p1); }
	static Any _0x59FA676177DBE4C9(Any p0) { return Native::Invoke<Any, Any>(0x59FA676177DBE4C9, p0); }
	static Any _0xC17F69E1418CD11F(Any p0) { return Native::Invoke<Any, Any>(0xC17F69E1418CD11F, p0); }
	static Any _0xB7223B91CD6B7E07() { return Native::Invoke<Any>(0xB7223B91CD6B7E07); }
}
namespace UILOG
{
	static Any _LOG_IS_ENTRY_REGISTERED(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(N::_LOG_IS_ENTRY_REGISTERED, p0, p1); }
	static void _LOG_ADD_ENTRY_HASH(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any, Any, Any>(N::_LOG_ADD_ENTRY_HASH, p0, p1, p2, p3, p4, p5, p6, p7); }
	static Any _0x49C63FDF69744A27() { return Native::Invoke<Any>(0x49C63FDF69744A27); }
	static void _LOG_SET_ENTRY_ICON_TEXTURE(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<void, Any, Any, Any, Any>(N::_LOG_SET_ENTRY_ICON_TEXTURE, p0, p1, p2, p3); }
	static void _LOG_SET_ENTRY_BRIEF_TEXTURE(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<void, Any, Any, Any, Any>(N::_LOG_SET_ENTRY_BRIEF_TEXTURE, p0, p1, p2, p3); }
	static void _LOG_UPDATE_ENTRY_SUBHEADER(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(N::_LOG_UPDATE_ENTRY_SUBHEADER, p0, p1, p2); }
	static void _LOG_SET_ENTRY_PINNED(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(N::_LOG_SET_ENTRY_PINNED, p0, p1, p2); }
	static void _MARK_MISSION_COMPLETED(Any p0) { return Native::Invoke<void, Any>(N::_MARK_MISSION_COMPLETED, p0); }
	static void _MARK_ENTRY_AVAILABILITY(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<void, Any, Any, Any, Any>(N::_MARK_ENTRY_AVAILABILITY, p0, p1, p2, p3); }
	static void _MARK_ALL_ENTRIES_AVAILABILITY(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(N::_MARK_ALL_ENTRIES_AVAILABILITY, p0, p1); }
	static void _REMOVE_LOG_ENTRY(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(N::_REMOVE_LOG_ENTRY, p0, p1); }
	static Any _0xA31013798FADCADC() { return Native::Invoke<Any>(0xA31013798FADCADC); }
	static Any _0xA49D6D503E3EA847() { return Native::Invoke<Any>(0xA49D6D503E3EA847); }
	static Any _0x763637F9B838B0A7() { return Native::Invoke<Any>(0x763637F9B838B0A7); }
	static void _CLEAR_LOG_ENTRIES() { return Native::Invoke<void>(N::_CLEAR_LOG_ENTRIES); }
	static void _LOG_ADD_OR_UPDATE_OBJECTIVE(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any>(N::_LOG_ADD_OR_UPDATE_OBJECTIVE, p0, p1, p2, p3, p4, p5); }
	static Any _0xA20398536B7F1134() { return Native::Invoke<Any>(0xA20398536B7F1134); }
	static void _LOG_SET_CACHED_OBJECTIVE(Any p0) { return Native::Invoke<void, Any>(N::_LOG_SET_CACHED_OBJECTIVE, p0); }
	static void _LOG_CLEAR_CACHED_OBJECTIVE() { return Native::Invoke<void>(N::_LOG_CLEAR_CACHED_OBJECTIVE); }
	static Any _LOG_HAS_DISPLAYED_CACHED_OBJECTIVE() { return Native::Invoke<Any>(N::_LOG_HAS_DISPLAYED_CACHED_OBJECTIVE); }
	static void _LOG_CLEAR_HAS_DISPLAYED_CACHED_OBJECTIVE() { return Native::Invoke<void>(N::_LOG_CLEAR_HAS_DISPLAYED_CACHED_OBJECTIVE); }
	static void _LOG_SET_HAS_DISPLAYED_CACHED_OBJECTIVE() { return Native::Invoke<void>(N::_LOG_SET_HAS_DISPLAYED_CACHED_OBJECTIVE); }
	static Any _LOG_GET_CACHED_OBJECTIVE() { return Native::Invoke<Any>(N::_LOG_GET_CACHED_OBJECTIVE); }
	static void _LOG_PRINT_CACHED_OBJECTIVE() { return Native::Invoke<void>(N::_LOG_PRINT_CACHED_OBJECTIVE); }
	static Any _SET_PENDING_DETAILS_ID(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(N::_SET_PENDING_DETAILS_ID, p0, p1); }
	static Any _0x2A4765812202E671() { return Native::Invoke<Any>(0x2A4765812202E671); }
	static void _ADD_TOTAL_TAKE_ENTRY(Any p0, Any p1, Any p2, Any p3, Any p4) { return Native::Invoke<void, Any, Any, Any, Any, Any>(N::_ADD_TOTAL_TAKE_ENTRY, p0, p1, p2, p3, p4); }
	static void _SET_TOTAL_TAKE_SUMMARY(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(N::_SET_TOTAL_TAKE_SUMMARY, p0, p1); }
	static Any _POST_NOTIFICATION(Any p0) { return Native::Invoke<Any, Any>(N::_POST_NOTIFICATION, p0); }
	static Any _0xDA0A30153FCC0FFD() { return Native::Invoke<Any>(0xDA0A30153FCC0FFD); }
}
namespace _NAMESPACE73
{
	static Any _0x3138582E0A13BFAB() { return Native::Invoke<Any>(0x3138582E0A13BFAB); }
}
namespace UITUTORIAL
{
	static Any _GET_IS_THREAT_INDICATOR_CAPABLE_RADAR_SHOWN() { return Native::Invoke<Any>(N::_GET_IS_THREAT_INDICATOR_CAPABLE_RADAR_SHOWN); }
	static Any _GET_IS_THREAT_INDICATOR_ON() { return Native::Invoke<Any>(N::_GET_IS_THREAT_INDICATOR_ON); }
	static void _SET_RPG_ICON_VISIBILITY(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(N::_SET_RPG_ICON_VISIBILITY, p0, p1); }
}
namespace UISTATEMACHINE
{
	static Any _REQUEST_FLOW_BLOCK(Any p0) { return Native::Invoke<Any, Any>(N::_REQUEST_FLOW_BLOCK, p0); }
	static void _RELEASE_FLOW_BLOCK(Any p0) { return Native::Invoke<void, Any>(N::_RELEASE_FLOW_BLOCK, p0); }
	static Any _IS_FLOW_BLOCK_LOADED(Any p0) { return Native::Invoke<Any, Any>(N::_IS_FLOW_BLOCK_LOADED, p0); }
	static Any _ENTER_FLOW_BLOCK(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(N::_ENTER_FLOW_BLOCK, p0, p1); }
	static Any _DOES_STATE_MACHINE_EXIST(Any p0) { return Native::Invoke<Any, Any>(N::_DOES_STATE_MACHINE_EXIST, p0); }
	static Any _STATE_MACHINE_CREATE(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(N::_STATE_MACHINE_CREATE, p0, p1); }
	static Any _0xF7C180F57F85D0B8() { return Native::Invoke<Any>(0xF7C180F57F85D0B8); }
	static Any _STATE_MACHINE_REQUEST_TRANSITION(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(N::_STATE_MACHINE_REQUEST_TRANSITION, p0, p1); }
	static Any _0x6B9FE4F0BA521A19() { return Native::Invoke<Any>(0x6B9FE4F0BA521A19); }
	static Any _0x11E73195E735B25B() { return Native::Invoke<Any>(0x11E73195E735B25B); }
	static void _STATE_MACHINE_DESTROY(Any p0) { return Native::Invoke<void, Any>(N::_STATE_MACHINE_DESTROY, p0); }
	static Any _0x2738D68D2B4E09E7() { return Native::Invoke<Any>(0x2738D68D2B4E09E7); }
}
namespace _NAMESPACE76
{
	static Any _0x9F2CC2439A04E7BA(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(0x9F2CC2439A04E7BA, p0, p1, p2); }
	static Any _0x815C4065AE6E6071(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(0x815C4065AE6E6071, p0, p1, p2); }
	static Any _0x339E16B41780FC35(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(0x339E16B41780FC35, p0, p1, p2); }
	static Any _0xBC6F454E310124DA() { return Native::Invoke<Any>(0xBC6F454E310124DA); }
	static void _0x00A15B94CBA4F76F(Any p0) { return Native::Invoke<void, Any>(0x00A15B94CBA4F76F, p0); }
	static Any _0xC5C395C60B542A3C(Any p0) { return Native::Invoke<Any, Any>(0xC5C395C60B542A3C, p0); }
	static Any _0xF8806EC3FF840FDC() { return Native::Invoke<Any>(0xF8806EC3FF840FDC); }
	static Any _0x07954320D77F6A3D(Any p0) { return Native::Invoke<Any, Any>(0x07954320D77F6A3D, p0); }
}
namespace UNLOCK
{
	static Any _0x6B6369647F26F09F() { return Native::Invoke<Any>(0x6B6369647F26F09F); }
	static Any _UNLOCK_IS_UNLOCKED(Any p0) { return Native::Invoke<Any, Any>(N::_UNLOCK_IS_UNLOCKED, p0); }
	static void _UNLOCK_SET_UNLOCKED(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(N::_UNLOCK_SET_UNLOCKED, p0, p1); }
	static Any _UNLOCK_IS_VISIBLE(Any p0) { return Native::Invoke<Any, Any>(N::_UNLOCK_IS_VISIBLE, p0); }
	static void _UNLOCK_SET_VISIBLE(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(N::_UNLOCK_SET_VISIBLE, p0, p1); }
	static Any _UNLOCK_IS_NEW(Any p0) { return Native::Invoke<Any, Any>(N::_UNLOCK_IS_NEW, p0); }
	static void _UNLOCK_SET_NEW(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(N::_UNLOCK_SET_NEW, p0, p1); }
	static Any _0x66BF197E066050DE() { return Native::Invoke<Any>(0x66BF197E066050DE); }
	static Any _0x7C1C2062CFAD06FE() { return Native::Invoke<Any>(0x7C1C2062CFAD06FE); }
}
namespace VEHICLE
{
	static void _0x6355602C02EDC6DF(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x6355602C02EDC6DF, p0, p1); }
	static Any _0xCE1531927AD6C9F8() { return Native::Invoke<Any>(0xCE1531927AD6C9F8); }
	static Vehicle CREATE_VEHICLE(Hash modelHash, float x, float y, float z, float heading, BOOL isNetwork, BOOL thisScriptCheck, Any p7, Any p8) { return Native::Invoke<Vehicle, Hash, float, float, float, float, BOOL, BOOL, Any, Any>(N::CREATE_VEHICLE, modelHash, x, y, z, heading, isNetwork, thisScriptCheck, p7, p8); }
	static Any _0x214651FB1DFEBA89(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9) { return Native::Invoke<Any, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any>(0x214651FB1DFEBA89, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); }
	static void DELETE_VEHICLE(Vehicle* vehicle) { return Native::Invoke<void, Vehicle*>(N::DELETE_VEHICLE, vehicle); }
	static Any _0x35DC1877312FBA0F() { return Native::Invoke<Any>(0x35DC1877312FBA0F); }
	static Any _0x5136B284B67B35C7() { return Native::Invoke<Any>(0x5136B284B67B35C7); }
	static Any _0x1240E8596A8308B9() { return Native::Invoke<Any>(0x1240E8596A8308B9); }
	static Any SET_VEHICLE_ALLOW_NO_PASSENGERS_LOCKON() { return Native::Invoke<Any>(N::SET_VEHICLE_ALLOW_NO_PASSENGERS_LOCKON); }
	static BOOL IS_VEHICLE_MODEL(Vehicle vehicle, Hash model) { return Native::Invoke<BOOL, Vehicle, Hash>(N::IS_VEHICLE_MODEL, vehicle, model); }
	static void _0x424FFCB9F0D2D4B5(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x424FFCB9F0D2D4B5, p0, p1); }
	static void SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(float minX, float minY, float minZ, float maxX, float maxY, float maxZ, BOOL p6, BOOL p7) { return Native::Invoke<void, float, float, float, float, float, float, BOOL, BOOL>(N::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA, minX, minY, minZ, maxX, maxY, maxZ, p6, p7); }
	static void SET_ALL_VEHICLE_GENERATORS_ACTIVE() { return Native::Invoke<void>(N::SET_ALL_VEHICLE_GENERATORS_ACTIVE); }
	static BOOL SET_VEHICLE_ON_GROUND_PROPERLY(Vehicle vehicle, Any p1) { return Native::Invoke<BOOL, Vehicle, Any>(N::SET_VEHICLE_ON_GROUND_PROPERLY, vehicle, p1); }
	static BOOL IS_VEHICLE_STOPPED(Vehicle vehicle) { return Native::Invoke<BOOL, Vehicle>(N::IS_VEHICLE_STOPPED, vehicle); }
	static int GET_VEHICLE_NUMBER_OF_PASSENGERS(Vehicle vehicle) { return Native::Invoke<int, Vehicle>(N::GET_VEHICLE_NUMBER_OF_PASSENGERS, vehicle); }
	static Any GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS() { return Native::Invoke<Any>(N::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS); }
	static int GET_VEHICLE_MODEL_NUMBER_OF_SEATS(Hash modelHash) { return Native::Invoke<int, Hash>(N::GET_VEHICLE_MODEL_NUMBER_OF_SEATS, modelHash); }
	static Any IS_SEAT_WARP_ONLY() { return Native::Invoke<Any>(N::IS_SEAT_WARP_ONLY); }
	static Any _0xFF5791B7639C2A46(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0xFF5791B7639C2A46, p0, p1); }
	static Any _0xA9E185D498B9AC67(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0xA9E185D498B9AC67, p0, p1); }
	static void SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(float multiplier) { return Native::Invoke<void, float>(N::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME, multiplier); }
	static void SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(float multiplier) { return Native::Invoke<void, float>(N::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME, multiplier); }
	static void SET_PARKED_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(float multiplier) { return Native::Invoke<void, float>(N::SET_PARKED_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME, multiplier); }
	static void SET_DISABLE_RANDOM_TRAINS_THIS_FRAME(Any p0) { return Native::Invoke<void, Any>(N::SET_DISABLE_RANDOM_TRAINS_THIS_FRAME, p0); }
	static void SET_VEHICLE_DOORS_LOCKED(int* vehicle, float* doorLockStatus) { return Native::Invoke<void, int*, float*>(N::SET_VEHICLE_DOORS_LOCKED, vehicle, doorLockStatus); }
	static void _SET_VEHICLE_DOOR_DESTROY_TYPE(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(N::_SET_VEHICLE_DOOR_DESTROY_TYPE, p0, p1, p2); }
	static void SET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(Vehicle vehicle, Player player, BOOL toggle) { return Native::Invoke<void, Vehicle, Player, BOOL>(N::SET_VEHICLE_DOORS_LOCKED_FOR_PLAYER, vehicle, player, toggle); }
	static Any GET_VEHICLE_DOORS_LOCKED_FOR_PLAYER() { return Native::Invoke<Any>(N::GET_VEHICLE_DOORS_LOCKED_FOR_PLAYER); }
	static Any SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS() { return Native::Invoke<Any>(N::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS); }
	static Any SET_VEHICLE_DOORS_LOCKED_FOR_TEAM() { return Native::Invoke<Any>(N::SET_VEHICLE_DOORS_LOCKED_FOR_TEAM); }
	static Any _0xDD1E1393D966D39A() { return Native::Invoke<Any>(0xDD1E1393D966D39A); }
	static void EXPLODE_VEHICLE(Vehicle vehicle, BOOL isAudible, BOOL isInvisible, Any p3) { return Native::Invoke<void, Vehicle, BOOL, BOOL, Any>(N::EXPLODE_VEHICLE, vehicle, isAudible, isInvisible, p3); }
	static void _0x750D42C013F64AE7(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x750D42C013F64AE7, p0, p1); }
	static void _0xE78993FF9022C064(Any p0) { return Native::Invoke<void, Any>(0xE78993FF9022C064, p0); }
	static void _0x9868C0D0134855F7(Any p0) { return Native::Invoke<void, Any>(0x9868C0D0134855F7, p0); }
	static void _0x201B8ED4FF7FE9F5(Any p0) { return Native::Invoke<void, Any>(0x201B8ED4FF7FE9F5, p0); }
	static void _0x41CDA90EE3450921(Any p0) { return Native::Invoke<void, Any>(0x41CDA90EE3450921, p0); }
	static void _0xD21A3D421E7F09F7(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xD21A3D421E7F09F7, p0, p1); }
	static void _0xA13028E22564A1BD(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xA13028E22564A1BD, p0, p1); }
	static Any _0x485B05EF05B9AEE9() { return Native::Invoke<Any>(0x485B05EF05B9AEE9); }
	static void SET_BOAT_ANCHOR(Vehicle vehicle, BOOL toggle) { return Native::Invoke<void, Vehicle, BOOL>(N::SET_BOAT_ANCHOR, vehicle, toggle); }
	static void _0x6B53F4B811E583D2(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x6B53F4B811E583D2, p0, p1); }
	static Any _CAN_BOAT_BE_ANCHORED() { return Native::Invoke<Any>(N::_CAN_BOAT_BE_ANCHORED); }
	static void _SET_BOAT_FROZEN_WHEN_ANCHORED(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(N::_SET_BOAT_FROZEN_WHEN_ANCHORED, p0, p1, p2); }
	static Any _0x75B49ACD73617437() { return Native::Invoke<Any>(0x75B49ACD73617437); }
	static void _SET_BOAT_ANCHOR_BUOYANCY_COEFFICIENT(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(N::_SET_BOAT_ANCHOR_BUOYANCY_COEFFICIENT, p0, p1); }
	static void _SET_BOAT_EXPLODES_ON_WRECKED_ACTION(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(N::_SET_BOAT_EXPLODES_ON_WRECKED_ACTION, p0, p1); }
	static void _0x1098CDA477890165(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x1098CDA477890165, p0, p1); }
	static void _0x98A7598C579EE871(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0x98A7598C579EE871, p0, p1, p2); }
	static void _0x9E8711C81AA17876(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x9E8711C81AA17876, p0, p1); }
	static void SET_VEHICLE_STRONG(Vehicle vehicle, BOOL toggle) { return Native::Invoke<void, Vehicle, BOOL>(N::SET_VEHICLE_STRONG, vehicle, toggle); }
	static BOOL IS_VEHICLE_SEAT_FREE(Vehicle vehicle, int seatIndex) { return Native::Invoke<BOOL, Vehicle, int>(N::IS_VEHICLE_SEAT_FREE, vehicle, seatIndex); }
	static Ped GET_PED_IN_VEHICLE_SEAT(Vehicle vehicle, int index) { return Native::Invoke<Ped, Vehicle, int>(N::GET_PED_IN_VEHICLE_SEAT, vehicle, index); }
	static Any GET_LAST_PED_IN_VEHICLE_SEAT() { return Native::Invoke<Any>(N::GET_LAST_PED_IN_VEHICLE_SEAT); }
	static Any _0xEA44E97849E9F3DD(Any p0) { return Native::Invoke<Any, Any>(0xEA44E97849E9F3DD, p0); }
	static Any _0xA8BA0BAE0173457B(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0xA8BA0BAE0173457B, p0, p1); }
	static void SET_VEHICLE_FORWARD_SPEED(Vehicle vehicle, float speed) { return Native::Invoke<void, Vehicle, float>(N::SET_VEHICLE_FORWARD_SPEED, vehicle, speed); }
	static void BRING_VEHICLE_TO_HALT(Vehicle vehicle, float distance, int type, BOOL unknown) { return Native::Invoke<void, Vehicle, float, int, BOOL>(N::BRING_VEHICLE_TO_HALT, vehicle, distance, type, unknown); }
	static Any _0x404527BC03DA0E6C(Any p0) { return Native::Invoke<Any, Any>(0x404527BC03DA0E6C, p0); }
	static void _0x7C06330BFDDA182E(Any p0) { return Native::Invoke<void, Any>(0x7C06330BFDDA182E, p0); }
	static void _0xE12F5ED49F44D40D(Any p0) { return Native::Invoke<void, Any>(0xE12F5ED49F44D40D, p0); }
	static void _0xF6E3D38869D0F7AD(Any p0) { return Native::Invoke<void, Any>(0xF6E3D38869D0F7AD, p0); }
	static void SET_VEHICLE_DOORS_SHUT(Vehicle vehicle, BOOL closeInstantly) { return Native::Invoke<void, Vehicle, BOOL>(N::SET_VEHICLE_DOORS_SHUT, vehicle, closeInstantly); }
	static Any SET_VEHICLE_TYRES_CAN_BURST() { return Native::Invoke<Any>(N::SET_VEHICLE_TYRES_CAN_BURST); }
	static Any SET_VEHICLE_WHEELS_CAN_BREAK(Vehicle vehicle, BOOL enabled) { return Native::Invoke<Any, Vehicle, BOOL>(N::SET_VEHICLE_WHEELS_CAN_BREAK, vehicle, enabled); }
	static void SET_VEHICLE_DOOR_OPEN(Vehicle vehicle, int doorIndex, BOOL loose, BOOL openInstantly) { return Native::Invoke<void, Vehicle, int, BOOL, BOOL>(N::SET_VEHICLE_DOOR_OPEN, vehicle, doorIndex, loose, openInstantly); }
	static Any REMOVE_VEHICLE_WINDOW() { return Native::Invoke<Any>(N::REMOVE_VEHICLE_WINDOW); }
	static void _0x8878FF3EEE2868A9(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x8878FF3EEE2868A9, p0, p1); }
	static Any _0xBAE0EEDF93F05EAA() { return Native::Invoke<Any>(0xBAE0EEDF93F05EAA); }
	static void _0x4D15E49764CB328A(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x4D15E49764CB328A, p0, p1); }
	static void SET_VEHICLE_LIGHTS(Vehicle vehicle, int state) { return Native::Invoke<void, Vehicle, int>(N::SET_VEHICLE_LIGHTS, vehicle, state); }
	static void SET_RANDOM_TRAINS(BOOL toggle) { return Native::Invoke<void, BOOL>(N::SET_RANDOM_TRAINS, toggle); }
	static Any _0x331CBD247FC5DAA8(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return Native::Invoke<Any, Any, Any, Any, Any, Any, Any>(0x331CBD247FC5DAA8, p0, p1, p2, p3, p4, p5); }
	static Any _0x0516FAE561276EFC(Any p0) { return Native::Invoke<Any, Any>(0x0516FAE561276EFC, p0); }
	static Any _0x45853F4E17D847D5(Any p0) { return Native::Invoke<Any, Any>(0x45853F4E17D847D5, p0); }
	static Any _0x6E585A616ABB8401(Any p0) { return Native::Invoke<Any, Any>(0x6E585A616ABB8401, p0); }
	static void _0x15206E88FF7617DF(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x15206E88FF7617DF, p0, p1); }
	static void _0xA7966807953A18EE(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xA7966807953A18EE, p0, p1); }
	static void _0x6B34BE961F639E21(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x6B34BE961F639E21, p0, p1); }
	static Any _0xE6BD7DD3FD474415() { return Native::Invoke<Any>(0xE6BD7DD3FD474415); }
	static void _0x615B3B8E73634509(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x615B3B8E73634509, p0, p1); }
	static void _0x38E7DD70A242D5CB(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x38E7DD70A242D5CB, p0, p1); }
	static void _0x63509DDF102E08E8(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x63509DDF102E08E8, p0, p1); }
	static void _0x7408B5C66BA31ADB(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any>(0x7408B5C66BA31ADB, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); }
	static void _0x41365DB586CD9E8E(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x41365DB586CD9E8E, p0, p1); }
	static void _0xD0AABE5B9F8FA589(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xD0AABE5B9F8FA589, p0, p1); }
	static void _0x427C919E9809E370(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x427C919E9809E370, p0, p1); }
	static Any _0xC29996A337BDD099(Any p0) { return Native::Invoke<Any, Any>(0xC29996A337BDD099, p0); }
	static Any _0x1E8A921112891651(Any p0) { return Native::Invoke<Any, Any>(0x1E8A921112891651, p0); }
	static Any _0xB4241AD8F5AEE9ED(Any p0) { return Native::Invoke<Any, Any>(0xB4241AD8F5AEE9ED, p0); }
	static void _0xA230A5DDE12ED374(Any p0) { return Native::Invoke<void, Any>(0xA230A5DDE12ED374, p0); }
	static void _0x0D5FDF0D36FA10CD(Any p0) { return Native::Invoke<void, Any>(0x0D5FDF0D36FA10CD, p0); }
	static void _0xE682002DB1F30669(Any p0) { return Native::Invoke<void, Any>(0xE682002DB1F30669, p0); }
	static void _0x718EB706B6E998A0(Any p0) { return Native::Invoke<void, Any>(0x718EB706B6E998A0, p0); }
	static Any _0xF05DFAF1ADFEF2CD(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return Native::Invoke<Any, Any, Any, Any, Any, Any, Any>(0xF05DFAF1ADFEF2CD, p0, p1, p2, p3, p4, p5); }
	static Any _0xD1DF5E54F4ACBE1A(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return Native::Invoke<Any, Any, Any, Any, Any, Any, Any, Any>(0xD1DF5E54F4ACBE1A, p0, p1, p2, p3, p4, p5, p6); }
	static Any _0x0FDDEE66E3465726(Any p0) { return Native::Invoke<Any, Any>(0x0FDDEE66E3465726, p0); }
	static void _0x4C05B42A8D937796() { return Native::Invoke<void>(0x4C05B42A8D937796); }
	static void _0xB961DD799A837BD7() { return Native::Invoke<void>(0xB961DD799A837BD7); }
	static void _0x16B86A49E072AA85() { return Native::Invoke<void>(0x16B86A49E072AA85); }
	static void _0x2A7413168F6CD5A8() { return Native::Invoke<void>(0x2A7413168F6CD5A8); }
	static void _0xFFFE15B433300B8C(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0xFFFE15B433300B8C, p0, p1, p2); }
	static void _0x6EA1273D525427F4(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0x6EA1273D525427F4, p0, p1, p2); }
	static Any _0x7BE0746539DEF0C8() { return Native::Invoke<Any>(0x7BE0746539DEF0C8); }
	static Any _0x6C87F49BFA181DB5(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(0x6C87F49BFA181DB5, p0, p1, p2); }
	static Any _0x85D39F5E3B6D7EB0(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(0x85D39F5E3B6D7EB0, p0, p1, p2); }
	static Any _0x6DE03BCC15E81710(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(0x6DE03BCC15E81710, p0, p1, p2); }
	static void DELETE_ALL_TRAINS() { return Native::Invoke<void>(N::DELETE_ALL_TRAINS); }
	static Any _0x0E558D3A49D759D6(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x0E558D3A49D759D6, p0, p1); }
	static void _0xD4907EF4334C7602(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xD4907EF4334C7602, p0, p1); }
	static void _0x68830738A6BFB370(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x68830738A6BFB370, p0, p1); }
	static Any SET_TRAIN_SPEED(Vehicle train, float speed) { return Native::Invoke<Any, Vehicle, float>(N::SET_TRAIN_SPEED, train, speed); }
	static void _0x9F29999DFDF2AEB8(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x9F29999DFDF2AEB8, p0, p1); }
	static Any SET_TRAIN_CRUISE_SPEED(Vehicle train, float speed) { return Native::Invoke<Any, Vehicle, float>(N::SET_TRAIN_CRUISE_SPEED, train, speed); }
	static Any _0x60B7D1DCC312697D(Any p0) { return Native::Invoke<Any, Any>(0x60B7D1DCC312697D, p0); }
	static Any _0x8DF5F6A19F99F0D5(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x8DF5F6A19F99F0D5, p0, p1); }
	static Any _0x635423D55CA84FC8(Any p0) { return Native::Invoke<Any, Any>(0x635423D55CA84FC8, p0); }
	static Any _0x671A07C9A1CD50A5(Any p0) { return Native::Invoke<Any, Any>(0x671A07C9A1CD50A5, p0); }
	static void _0x4182C037AA1F0091(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x4182C037AA1F0091, p0, p1); }
	static void _0xDD100CE1EBBF37E3(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xDD100CE1EBBF37E3, p0, p1); }
	static void _0x160C1B5AB48AB87C(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x160C1B5AB48AB87C, p0, p1); }
	static Any _0xE887BD31D97793F6(Any p0) { return Native::Invoke<Any, Any>(0xE887BD31D97793F6, p0); }
	static void _0x3660BCAB3A6BB734(Any p0) { return Native::Invoke<void, Any>(0x3660BCAB3A6BB734, p0); }
	static void _0x787E43477746876F(Any p0) { return Native::Invoke<void, Any>(0x787E43477746876F, p0); }
	static Any SET_RANDOM_BOATS(BOOL toggle) { return Native::Invoke<Any, BOOL>(N::SET_RANDOM_BOATS, toggle); }
	static void REQUEST_VEHICLE_RECORDING(int i, char* name) { return Native::Invoke<void, int, char*>(N::REQUEST_VEHICLE_RECORDING, i, name); }
	static BOOL HAS_VEHICLE_RECORDING_BEEN_LOADED(Any p0, Any* p1) { return Native::Invoke<BOOL, Any, Any*>(N::HAS_VEHICLE_RECORDING_BEEN_LOADED, p0, p1); }
	static void REMOVE_VEHICLE_RECORDING(Any p0, Any* p1) { return Native::Invoke<void, Any, Any*>(N::REMOVE_VEHICLE_RECORDING, p0, p1); }
	static Vector3 GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(int p0, float p1, char* p2) { return Native::Invoke<Vector3, int, float, char*>(N::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME, p0, p1, p2); }
	static int GET_ROTATION_OF_VEHICLE_RECORDING_AT_TIME(Any p0, float p1, Any* p2) { return Native::Invoke<int, Any, float, Any*>(N::GET_ROTATION_OF_VEHICLE_RECORDING_AT_TIME, p0, p1, p2); }
	static float GET_TIME_POSITION_IN_RECORDING(Any p0) { return Native::Invoke<float, Any>(N::GET_TIME_POSITION_IN_RECORDING, p0); }
	static void START_PLAYBACK_RECORDED_VEHICLE(Vehicle vehicle, int p1, char* playback, BOOL p3) { return Native::Invoke<void, Vehicle, int, char*, BOOL>(N::START_PLAYBACK_RECORDED_VEHICLE, vehicle, p1, playback, p3); }
	static void _0x59ECA796021B0539(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x59ECA796021B0539, p0, p1); }
	static void STOP_PLAYBACK_RECORDED_VEHICLE(Vehicle vehicle) { return Native::Invoke<void, Vehicle>(N::STOP_PLAYBACK_RECORDED_VEHICLE, vehicle); }
	static BOOL IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Vehicle vehicle) { return Native::Invoke<BOOL, Vehicle>(N::IS_PLAYBACK_GOING_ON_FOR_VEHICLE, vehicle); }
	static BOOL IS_PLAYBACK_USING_AI_GOING_ON_FOR_VEHICLE(Any p0) { return Native::Invoke<BOOL, Any>(N::IS_PLAYBACK_USING_AI_GOING_ON_FOR_VEHICLE, p0); }
	static void SET_PLAYBACK_SPEED(Vehicle vehicle, float speed) { return Native::Invoke<void, Vehicle, float>(N::SET_PLAYBACK_SPEED, vehicle, speed); }
	static void SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Any p0, float p1) { return Native::Invoke<void, Any, float>(N::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE, p0, p1); }
	static Vehicle GET_CLOSEST_VEHICLE(float x, float y, float z, float radius, Hash modelHash, int flags) { return Native::Invoke<Vehicle, float, float, float, float, Hash, int>(N::GET_CLOSEST_VEHICLE, x, y, z, radius, modelHash, flags); }
	static Entity GET_TRAIN_CARRIAGE(Vehicle train, int trailerNumber) { return Native::Invoke<Entity, Vehicle, int>(N::GET_TRAIN_CARRIAGE, train, trailerNumber); }
	static void DELETE_MISSION_TRAIN(Vehicle* train) { return Native::Invoke<void, Vehicle*>(N::DELETE_MISSION_TRAIN, train); }
	static void SET_MISSION_TRAIN_AS_NO_LONGER_NEEDED(Vehicle* train, BOOL p1) { return Native::Invoke<void, Vehicle*, BOOL>(N::SET_MISSION_TRAIN_AS_NO_LONGER_NEEDED, train, p1); }
	static void SET_MISSION_TRAIN_COORDS(Vehicle train, float x, float y, float z) { return Native::Invoke<void, Vehicle, float, float, float>(N::SET_MISSION_TRAIN_COORDS, train, x, y, z); }
	static void _0xC9EA26893C9E4024(Any p0, Any p1, Any p2, Any p3, Any p4) { return Native::Invoke<void, Any, Any, Any, Any, Any>(0xC9EA26893C9E4024, p0, p1, p2, p3, p4); }
	static void _0xA72B1BF3857B94D7(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xA72B1BF3857B94D7, p0, p1); }
	static Any _0xB9D5BDDA88E1BB66(Any p0) { return Native::Invoke<Any, Any>(0xB9D5BDDA88E1BB66, p0); }
	static BOOL IS_THIS_MODEL_A_BOAT(Hash model) { return Native::Invoke<BOOL, Hash>(N::IS_THIS_MODEL_A_BOAT, model); }
	static BOOL IS_THIS_MODEL_A_TRAIN(Hash model) { return Native::Invoke<BOOL, Hash>(N::IS_THIS_MODEL_A_TRAIN, model); }
	static void SET_VEHICLE_CAN_BE_TARGETTED(Vehicle vehicle, BOOL state) { return Native::Invoke<void, Vehicle, BOOL>(N::SET_VEHICLE_CAN_BE_TARGETTED, vehicle, state); }
	static void _0x63DC1F22C903B709(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x63DC1F22C903B709, p0, p1); }
	static void SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(Vehicle vehicle, BOOL state) { return Native::Invoke<void, Vehicle, BOOL>(N::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED, vehicle, state); }
	static void _0xC903855E028A05F2(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xC903855E028A05F2, p0, p1); }
	static Any _0x33992A808DF1C1BA() { return Native::Invoke<Any>(0x33992A808DF1C1BA); }
	static Any _0x065D03A9D6B2C6B5() { return Native::Invoke<Any>(0x065D03A9D6B2C6B5); }
	static void SET_VEHICLE_DIRT_LEVEL(Vehicle vehicle, float dirtLevel) { return Native::Invoke<void, Vehicle, float>(N::SET_VEHICLE_DIRT_LEVEL, vehicle, dirtLevel); }
	static BOOL IS_VEHICLE_DOOR_FULLY_OPEN(Vehicle v, int doorIndex) { return Native::Invoke<BOOL, Vehicle, int>(N::IS_VEHICLE_DOOR_FULLY_OPEN, v, doorIndex); }
	static void SET_VEHICLE_ENGINE_ON(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(N::SET_VEHICLE_ENGINE_ON, p0, p1, p2); }
	static void SET_VEHICLE_UNDRIVEABLE(Vehicle vehicle, BOOL toggle) { return Native::Invoke<void, Vehicle, BOOL>(N::SET_VEHICLE_UNDRIVEABLE, vehicle, toggle); }
	static void SET_VEHICLE_PROVIDES_COVER(Vehicle vehicle, BOOL toggle) { return Native::Invoke<void, Vehicle, BOOL>(N::SET_VEHICLE_PROVIDES_COVER, vehicle, toggle); }
	static void _0x3053064F909B5F42(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x3053064F909B5F42, p0, p1); }
	static void SET_VEHICLE_DOOR_CONTROL(Vehicle vehicle, int doorIndex, int speed, float angle) { return Native::Invoke<void, Vehicle, int, int, float>(N::SET_VEHICLE_DOOR_CONTROL, vehicle, doorIndex, speed, angle); }
	static void SET_VEHICLE_DOOR_LATCHED(Vehicle vehicle, int doorIndex, BOOL forceClose, BOOL lock, BOOL p4) { return Native::Invoke<void, Vehicle, int, BOOL, BOOL, BOOL>(N::SET_VEHICLE_DOOR_LATCHED, vehicle, doorIndex, forceClose, lock, p4); }
	static void SET_VEHICLE_DOOR_SHUT(Vehicle vehicle, int doorIndex, BOOL closeInstantly) { return Native::Invoke<void, Vehicle, int, BOOL>(N::SET_VEHICLE_DOOR_SHUT, vehicle, doorIndex, closeInstantly); }
	static void SET_VEHICLE_DOOR_BROKEN(Vehicle vehicle, int doorIndex, BOOL deleteDoor) { return Native::Invoke<void, Vehicle, int, BOOL>(N::SET_VEHICLE_DOOR_BROKEN, vehicle, doorIndex, deleteDoor); }
	static void SET_VEHICLE_CAN_BREAK(Vehicle vehicle, BOOL toggle) { return Native::Invoke<void, Vehicle, BOOL>(N::SET_VEHICLE_CAN_BREAK, vehicle, toggle); }
	static void SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Vehicle vehicle, BOOL toggle) { return Native::Invoke<void, Vehicle, BOOL>(N::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER, vehicle, toggle); }
	static Any _0x7549B9E841940695() { return Native::Invoke<Any>(0x7549B9E841940695); }
	static int GET_VEHICLE_DOOR_LOCK_STATUS(Vehicle vehicle) { return Native::Invoke<int, Vehicle>(N::GET_VEHICLE_DOOR_LOCK_STATUS, vehicle); }
	static void _SET_VEHICLE_DOOR_CAN_BREAK(Vehicle vehicle, int doorIndex, BOOL isBreakable) { return Native::Invoke<void, Vehicle, int, BOOL>(N::_SET_VEHICLE_DOOR_CAN_BREAK, vehicle, doorIndex, isBreakable); }
	static BOOL IS_VEHICLE_ON_ALL_WHEELS(Vehicle vehicle) { return Native::Invoke<BOOL, Vehicle>(N::IS_VEHICLE_ON_ALL_WHEELS, vehicle); }
	static Any _0x3C9628A811CBD724() { return Native::Invoke<Any>(0x3C9628A811CBD724); }
	static Any _0x67995318F5FAA496(Any p0) { return Native::Invoke<Any, Any>(0x67995318F5FAA496, p0); }
	static Any _0x09034479E6E3E269() { return Native::Invoke<Any>(0x09034479E6E3E269); }
	static Any _0x86AFC343CF7F0B34(Any p0, Any p1, Any p2, Any p3, Any p4) { return Native::Invoke<Any, Any, Any, Any, Any, Any>(0x86AFC343CF7F0B34, p0, p1, p2, p3, p4); }
	static Any _0xD9BF3ED8EFB67EA3(Any p0, Any p1, Any p2, Any p3, Any p4) { return Native::Invoke<Any, Any, Any, Any, Any, Any>(0xD9BF3ED8EFB67EA3, p0, p1, p2, p3, p4); }
	static Any _0x785639D89F8451AB(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x785639D89F8451AB, p0, p1); }
	static void _0xE6C5E2125EB210C1(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0xE6C5E2125EB210C1, p0, p1, p2); }
	static void _0x3ABFA128F5BF5A70(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0x3ABFA128F5BF5A70, p0, p1, p2); }
	static Any _0x2C46D2A591D8C322(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(0x2C46D2A591D8C322, p0, p1, p2); }
	static Any _0xCAFF2C9747103C02(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(0xCAFF2C9747103C02, p0, p1, p2); }
	static Any _0x138398153824E332() { return Native::Invoke<Any>(0x138398153824E332); }
	static void _0x34BCF6209B9668A7(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x34BCF6209B9668A7, p0, p1); }
	static void _0xD0BA1853D76683C8(Any p0, Any p1, Any p2, Any p3, Any p4) { return Native::Invoke<void, Any, Any, Any, Any, Any>(0xD0BA1853D76683C8, p0, p1, p2, p3, p4); }
	static Any _0x8EC47DD4300BF063() { return Native::Invoke<Any>(0x8EC47DD4300BF063); }
	static void _0xDC69F6913CCA0B99(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xDC69F6913CCA0B99, p0, p1); }
	static Any _0x7840576C50A13DBA() { return Native::Invoke<Any>(0x7840576C50A13DBA); }
	static Any _0xD0116DF21E6C7B36(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0xD0116DF21E6C7B36, p0, p1); }
	static void _0x54CBDD6E1B4CB4DF(Any p0) { return Native::Invoke<void, Any>(0x54CBDD6E1B4CB4DF, p0); }
	static Any _0x1180A2974D251B7B(Any p0) { return Native::Invoke<Any, Any>(0x1180A2974D251B7B, p0); }
	static Any _0x86FA6D8B48667D75(Any p0) { return Native::Invoke<Any, Any>(0x86FA6D8B48667D75, p0); }
	static Any _0x9CC94A948EAF5372(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x9CC94A948EAF5372, p0, p1); }
	static Any _0xDE8C5B9F65017FA1(Any p0) { return Native::Invoke<Any, Any>(0xDE8C5B9F65017FA1, p0); }
	static Any _0xAF787E081AC4A8EE(Any p0) { return Native::Invoke<Any, Any>(0xAF787E081AC4A8EE, p0); }
	static Any _0xBA958F68031DDBFC(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0xBA958F68031DDBFC, p0, p1); }
	static Any _0x865FEC2FA899F29C(Any p0) { return Native::Invoke<Any, Any>(0x865FEC2FA899F29C, p0); }
	static void _0x1A861F899EBBE17C(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x1A861F899EBBE17C, p0, p1); }
	static void _0xF8F7DA13CFBD4532(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xF8F7DA13CFBD4532, p0, p1); }
	static void _0xCFE122EC635CC2B2(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<void, Any, Any, Any, Any>(0xCFE122EC635CC2B2, p0, p1, p2, p3); }
	static void _0x2BB2B5BCF0DF8008(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x2BB2B5BCF0DF8008, p0, p1); }
	static void _0x6703872EC09BC158(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x6703872EC09BC158, p0, p1); }
	static void _0x1BFBAFCC6760FF02(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x1BFBAFCC6760FF02, p0, p1); }
	static Any _0xF5EA41C1408695FB(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<Any, Any, Any, Any, Any>(0xF5EA41C1408695FB, p0, p1, p2, p3); }
	static void SET_VEHICLE_FIXED(Vehicle vehicle) { return Native::Invoke<void, Vehicle>(N::SET_VEHICLE_FIXED, vehicle); }
	static void SET_DISABLE_VEHICLE_PETROL_TANK_FIRES(Vehicle vehicle, BOOL toggle) { return Native::Invoke<void, Vehicle, BOOL>(N::SET_DISABLE_VEHICLE_PETROL_TANK_FIRES, vehicle, toggle); }
	static void SET_DISABLE_VEHICLE_PETROL_TANK_DAMAGE(Vehicle vehicle, BOOL toggle) { return Native::Invoke<void, Vehicle, BOOL>(N::SET_DISABLE_VEHICLE_PETROL_TANK_DAMAGE, vehicle, toggle); }
	static void _0xD146EE5F2B06B95E(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xD146EE5F2B06B95E, p0, p1); }
	static void _0x8F75941C86EEBFCA(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x8F75941C86EEBFCA, p0, p1); }
	static void _0xC84E138448507567(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xC84E138448507567, p0, p1); }
	static void REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any>(N::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA, p0, p1, p2, p3, p4, p5); }
	static Any SET_VEHICLE_STEER_BIAS() { return Native::Invoke<Any>(N::SET_VEHICLE_STEER_BIAS); }
	static BOOL IS_VEHICLE_EXTRA_TURNED_ON(Vehicle vehicle, int extraId) { return Native::Invoke<BOOL, Vehicle, int>(N::IS_VEHICLE_EXTRA_TURNED_ON, vehicle, extraId); }
	static void SET_VEHICLE_EXTRA(Vehicle vehicle, int extraId, BOOL disable) { return Native::Invoke<void, Vehicle, int, BOOL>(N::SET_VEHICLE_EXTRA, vehicle, extraId, disable); }
	static BOOL DOES_EXTRA_EXIST(Vehicle vehicle, int extraId) { return Native::Invoke<BOOL, Vehicle, int>(N::DOES_EXTRA_EXIST, vehicle, extraId); }
	static void SET_VEHICLE_DAMAGE(Vehicle vehicle, float xOffset, float yOffset, float zOffset, float damage, float radius, BOOL p6) { return Native::Invoke<void, Vehicle, float, float, float, float, float, BOOL>(N::SET_VEHICLE_DAMAGE, vehicle, xOffset, yOffset, zOffset, damage, radius, p6); }
	static Any GET_VEHICLE_ENGINE_HEALTH() { return Native::Invoke<Any>(N::GET_VEHICLE_ENGINE_HEALTH); }
	static void SET_VEHICLE_ENGINE_HEALTH(Vehicle vehicle, float health) { return Native::Invoke<void, Vehicle, float>(N::SET_VEHICLE_ENGINE_HEALTH, vehicle, health); }
	static Any GET_VEHICLE_PETROL_TANK_HEALTH() { return Native::Invoke<Any>(N::GET_VEHICLE_PETROL_TANK_HEALTH); }
	static void SET_VEHICLE_PETROL_TANK_HEALTH(Vehicle vehicle, float health) { return Native::Invoke<void, Vehicle, float>(N::SET_VEHICLE_PETROL_TANK_HEALTH, vehicle, health); }
	static BOOL IS_VEHICLE_STUCK_TIMER_UP(Vehicle vehicle, int p1, int p2) { return Native::Invoke<BOOL, Vehicle, int, int>(N::IS_VEHICLE_STUCK_TIMER_UP, vehicle, p1, p2); }
	static void RESET_VEHICLE_STUCK_TIMER(Vehicle vehicle, int nullAttributes) { return Native::Invoke<void, Vehicle, int>(N::RESET_VEHICLE_STUCK_TIMER, vehicle, nullAttributes); }
	static BOOL IS_VEHICLE_DRIVEABLE(Vehicle vehicle, BOOL isOnFireCheck, Any p2) { return Native::Invoke<BOOL, Vehicle, BOOL, Any>(N::IS_VEHICLE_DRIVEABLE, vehicle, isOnFireCheck, p2); }
	static Any _0xDDBEA5506C848227(Any p0) { return Native::Invoke<Any, Any>(0xDDBEA5506C848227, p0); }
	static Any _0x0E3BF7ED4169EC43(Any p0) { return Native::Invoke<Any, Any>(0x0E3BF7ED4169EC43, p0); }
	static void SET_VEHICLE_HAS_BEEN_OWNED_BY_PLAYER(Vehicle vehicle, BOOL owned) { return Native::Invoke<void, Vehicle, BOOL>(N::SET_VEHICLE_HAS_BEEN_OWNED_BY_PLAYER, vehicle, owned); }
	static void START_VEHICLE_HORN(Vehicle vehicle, int duration, Hash mode, BOOL forever) { return Native::Invoke<void, Vehicle, int, Hash, BOOL>(N::START_VEHICLE_HORN, vehicle, duration, mode, forever); }
	static void SET_VEHICLE_HAS_STRONG_AXLES(Vehicle vehicle, BOOL toggle) { return Native::Invoke<void, Vehicle, BOOL>(N::SET_VEHICLE_HAS_STRONG_AXLES, vehicle, toggle); }
	static void _0x6F73EFAB11651D7F(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x6F73EFAB11651D7F, p0, p1); }
	static void _0x5AABB09F6FBD1F87(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x5AABB09F6FBD1F87, p0, p1); }
	static void _0x8268B098F6FCA4E2(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x8268B098F6FCA4E2, p0, p1); }
	static void _0xF89D82A0582E46ED(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xF89D82A0582E46ED, p0, p1); }
	static Any _0xA44D65E6C624526F(Any p0) { return Native::Invoke<Any, Any>(0xA44D65E6C624526F, p0); }
	static Any _0xBB765B8FD49A796C() { return Native::Invoke<Any>(0xBB765B8FD49A796C); }
	static Any ARE_ANY_VEHICLE_SEATS_FREE() { return Native::Invoke<Any>(N::ARE_ANY_VEHICLE_SEATS_FREE); }
	static void SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(Vehicle vehicle, BOOL toggle) { return Native::Invoke<void, Vehicle, BOOL>(N::SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE, vehicle, toggle); }
	static Any _0x8D3230A0ED7DE39F() { return Native::Invoke<Any>(0x8D3230A0ED7DE39F); }
	static BOOL IS_ANY_VEHICLE_NEAR_POINT(float x, float y, float z, float radius) { return Native::Invoke<BOOL, float, float, float, float>(N::IS_ANY_VEHICLE_NEAR_POINT, x, y, z, radius); }
	static void REQUEST_VEHICLE_HIGH_DETAIL_MODEL(Vehicle vehicle) { return Native::Invoke<void, Vehicle>(N::REQUEST_VEHICLE_HIGH_DETAIL_MODEL, vehicle); }
	static void REQUEST_VEHICLE_ASSET(Hash vehicleHash, int vehicleAsset) { return Native::Invoke<void, Hash, int>(N::REQUEST_VEHICLE_ASSET, vehicleHash, vehicleAsset); }
	static void _0xCF9DA72002FC16BF(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0xCF9DA72002FC16BF, p0, p1, p2); }
	static BOOL HAS_VEHICLE_ASSET_LOADED(int vehicleAsset) { return Native::Invoke<BOOL, int>(N::HAS_VEHICLE_ASSET_LOADED, vehicleAsset); }
	static void REMOVE_VEHICLE_ASSET(int vehicleAsset) { return Native::Invoke<void, int>(N::REMOVE_VEHICLE_ASSET, vehicleAsset); }
	static Any SET_VEHICLE_AUTOMATICALLY_ATTACHES() { return Native::Invoke<Any>(N::SET_VEHICLE_AUTOMATICALLY_ATTACHES); }
	static void _0x104D9A7B1C0D0783(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x104D9A7B1C0D0783, p0, p1); }
	static BOOL IS_VEHICLE_IN_BURNOUT(Vehicle vehicle) { return Native::Invoke<BOOL, Vehicle>(N::IS_VEHICLE_IN_BURNOUT, vehicle); }
	static void SET_VEHICLE_HANDBRAKE(Vehicle vehicle, BOOL toggle) { return Native::Invoke<void, Vehicle, BOOL>(N::SET_VEHICLE_HANDBRAKE, vehicle, toggle); }
	static void _0x1FF00DB43026B12F() { return Native::Invoke<void>(0x1FF00DB43026B12F); }
	static Any _0x2701D01D5E18FC31() { return Native::Invoke<Any>(0x2701D01D5E18FC31); }
	static Any GET_VEHICLE_TRAILER_VEHICLE() { return Native::Invoke<Any>(N::GET_VEHICLE_TRAILER_VEHICLE); }
	static Any GET_VEHICLE_ESTIMATED_MAX_SPEED(Any p0) { return Native::Invoke<Any, Any>(N::GET_VEHICLE_ESTIMATED_MAX_SPEED, p0); }
	static int _ADD_SPEED_ZONE_FOR_COORD(float x, float y, float z, float radius, float speed, BOOL p5, Any p6, Any p7, Any p8, Any p9, Any p10) { return Native::Invoke<int, float, float, float, float, float, BOOL, Any, Any, Any, Any, Any>(N::_ADD_SPEED_ZONE_FOR_COORD, x, y, z, radius, speed, p5, p6, p7, p8, p9, p10); }
	static BOOL _REMOVE_SPEED_ZONE(int speedzone) { return Native::Invoke<BOOL, int>(N::_REMOVE_SPEED_ZONE, speedzone); }
	static Any _0x80DDCCB2F4A3EB57(Any p0, Any p1, Any p2, Any p3, Any p4) { return Native::Invoke<Any, Any, Any, Any, Any, Any>(0x80DDCCB2F4A3EB57, p0, p1, p2, p3, p4); }
	static Any CAN_SHUFFLE_SEAT() { return Native::Invoke<Any>(N::CAN_SHUFFLE_SEAT); }
	static void MODIFY_VEHICLE_TOP_SPEED(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(N::MODIFY_VEHICLE_TOP_SPEED, p0, p1); }
	static void _0x23A3AB86E0807721(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x23A3AB86E0807721, p0, p1); }
	static void _0xC1842F40FD501DA2(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xC1842F40FD501DA2, p0, p1); }
	static Any _0x30D86B2B7622D0EB(Any p0) { return Native::Invoke<Any, Any>(0x30D86B2B7622D0EB, p0); }
	static void _0x09C970AE59ABF6B2(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x09C970AE59ABF6B2, p0, p1); }
	static Any _0x1EF36558FBDE2DAA() { return Native::Invoke<Any>(0x1EF36558FBDE2DAA); }
	static Vehicle GET_LAST_DRIVEN_VEHICLE() { return Native::Invoke<Vehicle>(N::GET_LAST_DRIVEN_VEHICLE); }
	static void CLEAR_LAST_DRIVEN_VEHICLE() { return Native::Invoke<void>(N::CLEAR_LAST_DRIVEN_VEHICLE); }
	static void _0x838C216C2B05A009(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x838C216C2B05A009, p0, p1); }
	static Any _0xB729679356A889AE() { return Native::Invoke<Any>(0xB729679356A889AE); }
	static void SET_VEHICLE_LOD_MULTIPLIER(Vehicle vehicle, float multiplier) { return Native::Invoke<void, Vehicle, float>(N::SET_VEHICLE_LOD_MULTIPLIER, vehicle, multiplier); }
	static void _0x3FA7D7D1E0EA809E(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x3FA7D7D1E0EA809E, p0, p1); }
	static Any _0x7F8E2B131E1DCA6C() { return Native::Invoke<Any>(0x7F8E2B131E1DCA6C); }
	static Any COPY_VEHICLE_DAMAGES() { return Native::Invoke<Any>(N::COPY_VEHICLE_DAMAGES); }
	static void SET_VEHICLE_SHOOT_AT_TARGET(Ped driver, Entity entity, float xTarget, float yTarget, float zTarget, Any p5) { return Native::Invoke<void, Ped, Entity, float, float, float, Any>(N::SET_VEHICLE_SHOOT_AT_TARGET, driver, entity, xTarget, yTarget, zTarget, p5); }
	static void SET_FORCE_HD_VEHICLE(Vehicle vehicle, BOOL toggle) { return Native::Invoke<void, Vehicle, BOOL>(N::SET_FORCE_HD_VEHICLE, vehicle, toggle); }
	static void TRACK_VEHICLE_VISIBILITY(Vehicle vehicle) { return Native::Invoke<void, Vehicle>(N::TRACK_VEHICLE_VISIBILITY, vehicle); }
	static BOOL IS_VEHICLE_VISIBLE(Vehicle vehicle) { return Native::Invoke<BOOL, Vehicle>(N::IS_VEHICLE_VISIBLE, vehicle); }
	static Any _0x13C190302369308B(Any p0) { return Native::Invoke<Any, Any>(0x13C190302369308B, p0); }
	static Any _0x73F1E4F6DF26FE30() { return Native::Invoke<Any>(0x73F1E4F6DF26FE30); }
	static void SET_VEHICLE_INACTIVE_DURING_PLAYBACK(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(N::SET_VEHICLE_INACTIVE_DURING_PLAYBACK, p0, p1); }
	static Any SET_VEHICLE_ENGINE_CAN_DEGRADE() { return Native::Invoke<Any>(N::SET_VEHICLE_ENGINE_CAN_DEGRADE); }
	static Any SET_VEHICLE_IS_STOLEN(Vehicle vehicle, BOOL isStolen) { return Native::Invoke<Any, Vehicle, BOOL>(N::SET_VEHICLE_IS_STOLEN, vehicle, isStolen); }
	static void _0xCBF88256E44D5D39(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xCBF88256E44D5D39, p0, p1); }
	static void _0xC325A6BAA62CF8A2(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xC325A6BAA62CF8A2, p0, p1); }
	static void _0x0CD7914D17A970AB(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x0CD7914D17A970AB, p0, p1); }
	static void _0x23F66C36F8E5EAAB(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x23F66C36F8E5EAAB, p0, p1); }
	static void _0x697DF68F3A761A50(Any p0) { return Native::Invoke<void, Any>(0x697DF68F3A761A50, p0); }
	static void _0x27E3F2B57209FA54(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x27E3F2B57209FA54, p0, p1); }
	static void DISABLE_VEHICLE_WEAPON(BOOL disabled, Hash weaponHash, Vehicle vehicle, Ped owner) { return Native::Invoke<void, BOOL, Hash, Vehicle, Ped>(N::DISABLE_VEHICLE_WEAPON, disabled, weaponHash, vehicle, owner); }
	static void SET_VEHICLE_CAN_BE_USED_BY_FLEEING_PEDS(Vehicle vehicle, BOOL toggle) { return Native::Invoke<void, Vehicle, BOOL>(N::SET_VEHICLE_CAN_BE_USED_BY_FLEEING_PEDS, vehicle, toggle); }
	static void _SET_VEHICLE_JET_ENGINE_ON(Vehicle vehicle, BOOL toggle) { return Native::Invoke<void, Vehicle, BOOL>(N::_SET_VEHICLE_JET_ENGINE_ON, vehicle, toggle); }
	static void SET_VEHICLE_WHEELS_CAN_BREAK_OFF_WHEN_BLOW_UP(Vehicle vehicle, BOOL toggle) { return Native::Invoke<void, Vehicle, BOOL>(N::SET_VEHICLE_WHEELS_CAN_BREAK_OFF_WHEN_BLOW_UP, vehicle, toggle); }
	static Any SET_VEHICLE_EXCLUSIVE_DRIVER() { return Native::Invoke<Any>(N::SET_VEHICLE_EXCLUSIVE_DRIVER); }
	static void _SET_VEHICLE_EXCLUSIVE_DRIVER_2(Vehicle vehicle, Ped ped, int p2) { return Native::Invoke<void, Vehicle, Ped, int>(N::_SET_VEHICLE_EXCLUSIVE_DRIVER_2, vehicle, ped, p2); }
	static Any _0xB213D2A560B2E48B(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(0xB213D2A560B2E48B, p0, p1, p2); }
	static void _0xDC0556D0F484ECAA(Any p0) { return Native::Invoke<void, Any>(0xDC0556D0F484ECAA, p0); }
	static float GET_VEHICLE_BODY_HEALTH(Vehicle vehicle) { return Native::Invoke<float, Vehicle>(N::GET_VEHICLE_BODY_HEALTH, vehicle); }
	static void SET_VEHICLE_BODY_HEALTH(Vehicle vehicle, float value) { return Native::Invoke<void, Vehicle, float>(N::SET_VEHICLE_BODY_HEALTH, vehicle, value); }
	static Any _0xE777DDF3E78397E8(Any p0) { return Native::Invoke<Any, Any>(0xE777DDF3E78397E8, p0); }
	static void _0xCEC4CA2CAB8FA98C(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xCEC4CA2CAB8FA98C, p0, p1); }
	static void _0x012701ED938B85DE(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x012701ED938B85DE, p0, p1); }
	static void _0x8379E05871AD24E0() { return Native::Invoke<void>(0x8379E05871AD24E0); }
	static void _0xF5FFB08976911B50(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<void, Any, Any, Any, Any>(0xF5FFB08976911B50, p0, p1, p2, p3); }
	static Any _0x316CDB5B6E8F4110(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(0x316CDB5B6E8F4110, p0, p1, p2); }
	static Any _0x4402960666000E62(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x4402960666000E62, p0, p1); }
	static Any _0xB36D3EC70963BE60(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0xB36D3EC70963BE60, p0, p1); }
	static void _0x0F7F603BDE08C4D3(Any p0) { return Native::Invoke<void, Any>(0x0F7F603BDE08C4D3, p0); }
	static Any _0x5B1A26BB18E7D451(Any p0) { return Native::Invoke<Any, Any>(0x5B1A26BB18E7D451, p0); }
	static Any _0x35D302397E524939(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return Native::Invoke<Any, Any, Any, Any, Any, Any, Any>(0x35D302397E524939, p0, p1, p2, p3, p4, p5); }
	static void _0xC399CC89FBA05DA0(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xC399CC89FBA05DA0, p0, p1); }
	static void _0xA6E210FB4283B767(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0xA6E210FB4283B767, p0, p1, p2); }
	static Any _0x2963B5C1637E8A27(Any p0) { return Native::Invoke<Any, Any>(0x2963B5C1637E8A27, p0); }
	static void _0xF489F94BFEE12BB0(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xF489F94BFEE12BB0, p0, p1); }
	static Any _0x0BA4250D20007C2E(Any p0) { return Native::Invoke<Any, Any>(0x0BA4250D20007C2E, p0); }
	static void _0x2200AB13CBD10F4E(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any>(0x2200AB13CBD10F4E, p0, p1, p2, p3, p4, p5); }
	static void _0xB42C87521D1BDD2F(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<void, Any, Any, Any, Any>(0xB42C87521D1BDD2F, p0, p1, p2, p3); }
	static void _0xC351394B932A6A50(Any p0) { return Native::Invoke<void, Any>(0xC351394B932A6A50, p0); }
	static void _0x172E9DD35858DCD7(Any p0) { return Native::Invoke<void, Any>(0x172E9DD35858DCD7, p0); }
	static Any _0xE015CF1F2C0959D8(Any p0) { return Native::Invoke<Any, Any>(0xE015CF1F2C0959D8, p0); }
	static Any _0x877EA24EB1614495(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(0x877EA24EB1614495, p0, p1, p2); }
	static Any _0x58F2244C1286D09A(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x58F2244C1286D09A, p0, p1); }
	static Any _0x2FA86833E3617E2D(Any p0) { return Native::Invoke<Any, Any>(0x2FA86833E3617E2D, p0); }
	static void _0xBC4735F48CD983EF(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xBC4735F48CD983EF, p0, p1); }
	static void _0x9D12796EF4BF9EA9(Any p0) { return Native::Invoke<void, Any>(0x9D12796EF4BF9EA9, p0); }
	static void _0x850CE59DEC2028F3(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x850CE59DEC2028F3, p0, p1); }
	static void _0x0355FE37240E2C77(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x0355FE37240E2C77, p0, p1); }
	static void _0x3D86997A86FEEF0D(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x3D86997A86FEEF0D, p0, p1); }
	static void _0xD826690B5CF3BEFF(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xD826690B5CF3BEFF, p0, p1); }
	static void _0xC372B6A88F6E4AD8(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0xC372B6A88F6E4AD8, p0, p1, p2); }
	static Any _0xA19447D83294E29F(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(0xA19447D83294E29F, p0, p1, p2); }
	static void _0x165BE2001E5E4B75(Any p0) { return Native::Invoke<void, Any>(0x165BE2001E5E4B75, p0); }
	static void _0x6090A031C69F384E(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x6090A031C69F384E, p0, p1); }
	static void _0x226C6A4E3346D288(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x226C6A4E3346D288, p0, p1); }
	static void _0x41503629D1139ABC(Any p0, Any p1, Any p2, Any p3, Any p4) { return Native::Invoke<void, Any, Any, Any, Any, Any>(0x41503629D1139ABC, p0, p1, p2, p3, p4); }
	static void _0x0794199B25E499E1(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x0794199B25E499E1, p0, p1); }
	static void _0x73118A3EE9C9B6DB(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0x73118A3EE9C9B6DB, p0, p1, p2); }
	static Any _0xE1C0F8781BF130C2(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0xE1C0F8781BF130C2, p0, p1); }
	static Any _0xCB2CA620C48BC875() { return Native::Invoke<Any>(0xCB2CA620C48BC875); }
	static Any _0x18714953CCED17D3(Any p0) { return Native::Invoke<Any, Any>(0x18714953CCED17D3, p0); }
	static void _0x41F0B254DDF71473(Any p0) { return Native::Invoke<void, Any>(0x41F0B254DDF71473, p0); }
	static Any _0x8E5DA070BAD3279E() { return Native::Invoke<Any>(0x8E5DA070BAD3279E); }
	static Any _0xE979BB5602AD3402(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0xE979BB5602AD3402, p0, p1); }
	static Any _0xD4F5EFB55769D272(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0xD4F5EFB55769D272, p0, p1); }
	static Any _0xE1A83D4A3B5D7938(Any p0) { return Native::Invoke<Any, Any>(0xE1A83D4A3B5D7938, p0); }
	static void _0x6DE072AC8A95FFC1(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x6DE072AC8A95FFC1, p0, p1); }
	static void _0x0C3F0F7F92CA847C(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x0C3F0F7F92CA847C, p0, p1); }
	static Any _0xC6D7DDC843176701(Any p0) { return Native::Invoke<Any, Any>(0xC6D7DDC843176701, p0); }
	static Any _0xC4A2C11FC0D41916() { return Native::Invoke<Any>(0xC4A2C11FC0D41916); }
	static void _0xFC4F15A7DDDC47B1(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xFC4F15A7DDDC47B1, p0, p1); }
	static void _0x4C60C333F9CCA2B6(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x4C60C333F9CCA2B6, p0, p1); }
	static void _0xCF342503CA4C8DF1(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xCF342503CA4C8DF1, p0, p1); }
	static Any _0x06A09A6E0C6D2A84() { return Native::Invoke<Any>(0x06A09A6E0C6D2A84); }
	static void _0xAE7E66A61E7C17A5(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xAE7E66A61E7C17A5, p0, p1); }
	static void _0xEF28A614B4B264B8(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xEF28A614B4B264B8, p0, p1); }
	static void _0x04F0579DBDD32F34(Any p0) { return Native::Invoke<void, Any>(0x04F0579DBDD32F34, p0); }
	static void _0x12F6C6ED3EFF42DE(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<void, Any, Any, Any, Any>(0x12F6C6ED3EFF42DE, p0, p1, p2, p3); }
	static void _0x87B974E54C71BA7B(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x87B974E54C71BA7B, p0, p1); }
	static Any _0xBD3C4A2ED509205E(Any p0) { return Native::Invoke<Any, Any>(0xBD3C4A2ED509205E, p0); }
	static Any _0xC239DBD9A57D2A71(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { return Native::Invoke<Any, Any, Any, Any, Any, Any, Any, Any, Any>(0xC239DBD9A57D2A71, p0, p1, p2, p3, p4, p5, p6, p7); }
	static void _0xD1EFA8D68BF5D63D(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<void, Any, Any, Any, Any>(0xD1EFA8D68BF5D63D, p0, p1, p2, p3); }
	static Any _0x1121B07088ED3013(Any p0) { return Native::Invoke<Any, Any>(0x1121B07088ED3013, p0); }
	static Any _0x42404D57D621601A(Any p0) { return Native::Invoke<Any, Any>(0x42404D57D621601A, p0); }
	static Any _0x288CBB414C3C2FBB(Any p0) { return Native::Invoke<Any, Any>(0x288CBB414C3C2FBB, p0); }
	static void _0x6FD7BDF10304363A(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x6FD7BDF10304363A, p0, p1); }
	static void _0xCEB1F1EED484A5B4(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xCEB1F1EED484A5B4, p0, p1); }
	static Any _0xF57DB8E83DCD8349() { return Native::Invoke<Any>(0xF57DB8E83DCD8349); }
	static void _0x7C9E45A4CED2E8DA(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x7C9E45A4CED2E8DA, p0, p1); }
	static void _0x87344305778E5415(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x87344305778E5415, p0, p1); }
	static void _0x6835AFEA10E186F4(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x6835AFEA10E186F4, p0, p1); }
	static void _0x8C6D9A399126C194(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x8C6D9A399126C194, p0, p1); }
	static Any _0x14DA8C4BC2CCD90A() { return Native::Invoke<Any>(0x14DA8C4BC2CCD90A); }
	static Any _0xCACAB2B123BBDBD6() { return Native::Invoke<Any>(0xCACAB2B123BBDBD6); }
	static void _0xFF2B1F59FB892F14(Any p0) { return Native::Invoke<void, Any>(0xFF2B1F59FB892F14, p0); }
	static void _0x5AADC7BBBB1BCEEB(Any p0, Any p1, Any p2, Any p3, Any p4) { return Native::Invoke<void, Any, Any, Any, Any, Any>(0x5AADC7BBBB1BCEEB, p0, p1, p2, p3, p4); }
	static Any _0xD798DF5DB67B1659() { return Native::Invoke<Any>(0xD798DF5DB67B1659); }
	static Any _0x31F343383F19C987() { return Native::Invoke<Any>(0x31F343383F19C987); }
	static void _0x07E2E21E799080A0(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x07E2E21E799080A0, p0, p1); }
	static void _0xC2E62678D602853C(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any, Any>(0xC2E62678D602853C, p0, p1, p2, p3, p4, p5, p6); }
	static void _0x873AAF600CC36DAC(Any p0) { return Native::Invoke<void, Any>(0x873AAF600CC36DAC, p0); }
	static Any _0x51C7694E140FAE43(Any p0) { return Native::Invoke<Any, Any>(0x51C7694E140FAE43, p0); }
	static void _0x8DECD262602548B9(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x8DECD262602548B9, p0, p1); }
	static void _0xCBC7B6F9A56B79F6(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xCBC7B6F9A56B79F6, p0, p1); }
	static Any _0x37D238BE69F7378A(Any p0) { return Native::Invoke<Any, Any>(0x37D238BE69F7378A, p0); }
	static void _0x703D4FB366DA4452(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x703D4FB366DA4452, p0, p1); }
	static void _0x762FDC4C19E5A981(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x762FDC4C19E5A981, p0, p1); }
	static Any _0x2045429505158D1A(Any p0) { return Native::Invoke<Any, Any>(0x2045429505158D1A, p0); }
	static void _0x13EB275BF81636D1(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x13EB275BF81636D1, p0, p1); }
}
namespace _NAMESPACE79
{
	static Any _0xCCF71FCFA0070B1A() { return Native::Invoke<Any>(0xCCF71FCFA0070B1A); }
	static Any _0x79F478FF5F9F4F05() { return Native::Invoke<Any>(0x79F478FF5F9F4F05); }
	static Any _0xAA35FD9ABAB490A3() { return Native::Invoke<Any>(0xAA35FD9ABAB490A3); }
	static Any _0x356135B9B10A2A82() { return Native::Invoke<Any>(0x356135B9B10A2A82); }
	static Any _0xEF6F2A35FAAF2ED7() { return Native::Invoke<Any>(0xEF6F2A35FAAF2ED7); }
	static Any _0x49623BCFC3A3D829() { return Native::Invoke<Any>(0x49623BCFC3A3D829); }
	static Any _0x919AF2D93E9AA89D() { return Native::Invoke<Any>(0x919AF2D93E9AA89D); }
	static Any _0x0DED260A1958A82E() { return Native::Invoke<Any>(0x0DED260A1958A82E); }
	static Any _0x8E462DB1EAA9C47C() { return Native::Invoke<Any>(0x8E462DB1EAA9C47C); }
	static Any _0x5CA7FB7D6DE49DCC() { return Native::Invoke<Any>(0x5CA7FB7D6DE49DCC); }
	static Any _0x58125B691F6827D5() { return Native::Invoke<Any>(0x58125B691F6827D5); }
	static Any _0x2F82CAB262C8AE26() { return Native::Invoke<Any>(0x2F82CAB262C8AE26); }
	static Any _0x08797A8C03868CB8() { return Native::Invoke<Any>(0x08797A8C03868CB8); }
	static Any _0xB779F4FA19269AEC() { return Native::Invoke<Any>(0xB779F4FA19269AEC); }
	static Any _0x1FBF7F5BA7E4BE3A() { return Native::Invoke<Any>(0x1FBF7F5BA7E4BE3A); }
	static Any _0xDC9B361CB7776673() { return Native::Invoke<Any>(0xDC9B361CB7776673); }
	static Any _0xEC8703E4536A9952() { return Native::Invoke<Any>(0xEC8703E4536A9952); }
	static Any _0xDB622ECD3DCBE078() { return Native::Invoke<Any>(0xDB622ECD3DCBE078); }
	static Any _0xB6E79850B759A30E() { return Native::Invoke<Any>(0xB6E79850B759A30E); }
	static void _0x4791899615D70FA2(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0x4791899615D70FA2, p0, p1, p2); }
	static Any _0xF8938CF3984092A5() { return Native::Invoke<Any>(0xF8938CF3984092A5); }
	static Any _0x767931C727DF2ED7() { return Native::Invoke<Any>(0x767931C727DF2ED7); }
	static Any _0x1C38C3577901AF1F() { return Native::Invoke<Any>(0x1C38C3577901AF1F); }
	static Any _0xB3E8841F6BDAF83E() { return Native::Invoke<Any>(0xB3E8841F6BDAF83E); }
}
namespace WATER
{
	static Any _0x502022FA1AF9DC86(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9) { return Native::Invoke<Any, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any>(0x502022FA1AF9DC86, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); }
	static Any _0xDF85637F22706891(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { return Native::Invoke<Any, Any, Any, Any, Any, Any, Any, Any, Any, Any>(0xDF85637F22706891, p0, p1, p2, p3, p4, p5, p6, p7, p8); }
	static Any _0x0522D4774B82E3E6(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { return Native::Invoke<Any, Any, Any, Any, Any, Any, Any, Any, Any, Any>(0x0522D4774B82E3E6, p0, p1, p2, p3, p4, p5, p6, p7, p8); }
	static Any _0xB3FB80A32BAE3065(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { return Native::Invoke<Any, Any, Any, Any, Any, Any, Any, Any, Any, Any>(0xB3FB80A32BAE3065, p0, p1, p2, p3, p4, p5, p6, p7, p8); }
	static Any _0x59F6F5C1D129F106() { return Native::Invoke<Any>(0x59F6F5C1D129F106); }
	static Any _0x1F85E4AC774A201E(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10) { return Native::Invoke<Any, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any>(0x1F85E4AC774A201E, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); }
	static Any _0x0EB78C2B156635B1(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9) { return Native::Invoke<Any, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any>(0x0EB78C2B156635B1, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); }
	static void _0xBE551C2CC421185D(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xBE551C2CC421185D, p0, p1); }
	static void _0x5B23DFF8E0948BB2(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x5B23DFF8E0948BB2, p0, p1); }
	static Any _0xFD0E389CD44434B6() { return Native::Invoke<Any>(0xFD0E389CD44434B6); }
	static Any _0xBBE768E3AE76E07C(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12, Any p13, Any p14) { return Native::Invoke<Any, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any>(0xBBE768E3AE76E07C, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14); }
	static Any _0xF68485C7495D848E(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9) { return Native::Invoke<Any, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any>(0xF68485C7495D848E, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); }
	static Any _0xDF1E350EDDF06E59(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9) { return Native::Invoke<Any, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any>(0xDF1E350EDDF06E59, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); }
	static Any _0x10157BC3247FF3BA(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9) { return Native::Invoke<Any, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any>(0x10157BC3247FF3BA, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); }
	static Any _0x5D580DE6398BB162(Any p0) { return Native::Invoke<Any, Any>(0x5D580DE6398BB162, p0); }
	static void _0x6E0D3C3F828DA773(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x6E0D3C3F828DA773, p0, p1); }
	static Any _0xF92FA8890DECECF6() { return Native::Invoke<Any>(0xF92FA8890DECECF6); }
	static void _0x12FCAA23F2320422(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any>(0x12FCAA23F2320422, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); }
	static void _0x39816F6F94F385AD(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any>(0x39816F6F94F385AD, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); }
	static void _0xBCE668AAF83608BE(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any>(0xBCE668AAF83608BE, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); }
	static void _0x5B7D7BF36D2DE18B(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any>(0x5B7D7BF36D2DE18B, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); }
	static void _0x43F867EF5C463A53(Any p0) { return Native::Invoke<void, Any>(0x43F867EF5C463A53, p0); }
	static Any _0x92A78D0BEDB332A3(Any p0) { return Native::Invoke<Any, Any>(0x92A78D0BEDB332A3, p0); }
	static Any _0xF256A75210C5C0EB(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<Any, Any, Any, Any, Any>(0xF256A75210C5C0EB, p0, p1, p2, p3); }
	static Any _0xF70F00013A62F866(Any p0) { return Native::Invoke<Any, Any>(0xF70F00013A62F866, p0); }
	static Any _0x541B8576615C33DE(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<Any, Any, Any, Any, Any>(0x541B8576615C33DE, p0, p1, p2, p3); }
	static Any _0x18675BC914891122(Any p0) { return Native::Invoke<Any, Any>(0x18675BC914891122, p0); }
	static Any _0xA07CF1B21B56F041(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<Any, Any, Any, Any, Any>(0xA07CF1B21B56F041, p0, p1, p2, p3); }
	static Any _0x3E2A25B2416DD67E(Any p0) { return Native::Invoke<Any, Any>(0x3E2A25B2416DD67E, p0); }
	static Any _0xA46E98BDC407E23D(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<Any, Any, Any, Any, Any>(0xA46E98BDC407E23D, p0, p1, p2, p3); }
	static void _0x5737199AF2DC609F(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0x5737199AF2DC609F, p0, p1, p2); }
	static void _0x748C5F51A18CB8F0(Any p0) { return Native::Invoke<void, Any>(0x748C5F51A18CB8F0, p0); }
	static Any _0x2B32B11520626229() { return Native::Invoke<Any>(0x2B32B11520626229); }
	static Any _0x40F769D31A00D5A0(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x40F769D31A00D5A0, p0, p1); }
	static Any _0xD882C5B3991575B7() { return Native::Invoke<Any>(0xD882C5B3991575B7); }
	static void _0xB469CFD9E065EB99(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xB469CFD9E065EB99, p0, p1); }
	static Any _0x7FD78DFD0C5D7B9B(Any p0) { return Native::Invoke<Any, Any>(0x7FD78DFD0C5D7B9B, p0); }
	static Any _0xEE1D6FF54CAF7714(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0xEE1D6FF54CAF7714, p0, p1); }
	static void _0xD52DF30355EA7C8E(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0xD52DF30355EA7C8E, p0, p1, p2); }
	static void _0xE2BE6FFA4A13CBB0(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0xE2BE6FFA4A13CBB0, p0, p1, p2); }
	static void _0x6D5F9E69BA1BE783(Any p0) { return Native::Invoke<void, Any>(0x6D5F9E69BA1BE783, p0); }
	static void _0x998202B206872672(Any p0) { return Native::Invoke<void, Any>(0x998202B206872672, p0); }
	static void _0x4A8FEFC43FD8AC9B(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0x4A8FEFC43FD8AC9B, p0, p1, p2); }
	static void _0xF3A2FBA5985C8CD5(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<void, Any, Any, Any, Any>(0xF3A2FBA5985C8CD5, p0, p1, p2, p3); }
	static void _0x53D05D60E5F5B40C(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<void, Any, Any, Any, Any>(0x53D05D60E5F5B40C, p0, p1, p2, p3); }
	static Any _0xCA5C90D40665D5CE(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0xCA5C90D40665D5CE, p0, p1); }
	static void _0x3EFABB21E14A6BD1(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0x3EFABB21E14A6BD1, p0, p1, p2); }
	static Any _0xFEFF01B5725BCD22() { return Native::Invoke<Any>(0xFEFF01B5725BCD22); }
	static Any _0x00BBF7CEAE8C666A(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return Native::Invoke<Any, Any, Any, Any, Any, Any, Any>(0x00BBF7CEAE8C666A, p0, p1, p2, p3, p4, p5); }
	static Any _0xF383E96C4904DF0C(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<Any, Any, Any, Any, Any>(0xF383E96C4904DF0C, p0, p1, p2, p3); }
	static Any _0xF6A8A652A6B186CD(Any p0) { return Native::Invoke<Any, Any>(0xF6A8A652A6B186CD, p0); }
	static Any _0xC4019CF9AE8E931A(Any p0) { return Native::Invoke<Any, Any>(0xC4019CF9AE8E931A, p0); }
	static Any _0xF6CE6F9C3897804E(Any p0) { return Native::Invoke<Any, Any>(0xF6CE6F9C3897804E, p0); }
	static Any _0xF6F5447D418DAA82(Any p0) { return Native::Invoke<Any, Any>(0xF6F5447D418DAA82, p0); }
	static void _0xD4FA73FE628FEC63(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xD4FA73FE628FEC63, p0, p1); }
	static void _0xB440F4E35393FC39(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xB440F4E35393FC39, p0, p1); }
	static void _0xD460135C98940274(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xD460135C98940274, p0, p1); }
	static Any _0xEBA87B9273835CF3() { return Native::Invoke<Any>(0xEBA87B9273835CF3); }
	static Any _0xAA9EE2AAFC717623(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return Native::Invoke<Any, Any, Any, Any, Any, Any, Any>(0xAA9EE2AAFC717623, p0, p1, p2, p3, p4, p5); }
	static Any _0x870E9981ED27C815(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return Native::Invoke<Any, Any, Any, Any, Any, Any, Any>(0x870E9981ED27C815, p0, p1, p2, p3, p4, p5); }
	static Any _0x397769175A7DBB30(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return Native::Invoke<Any, Any, Any, Any, Any, Any, Any, Any>(0x397769175A7DBB30, p0, p1, p2, p3, p4, p5, p6); }
	static Any _0x769BB7626B8CDB06(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return Native::Invoke<Any, Any, Any, Any, Any, Any, Any, Any>(0x769BB7626B8CDB06, p0, p1, p2, p3, p4, p5, p6); }
	static Any _0x51E52C9687FCDEEC(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return Native::Invoke<Any, Any, Any, Any, Any, Any, Any, Any>(0x51E52C9687FCDEEC, p0, p1, p2, p3, p4, p5, p6); }
	static Any _0x77A6E4AD0C496F81() { return Native::Invoke<Any>(0x77A6E4AD0C496F81); }
	static Any _0xEC43C2FFB70E3F30() { return Native::Invoke<Any>(0xEC43C2FFB70E3F30); }
	static void _0x695DAC2DB928F308(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x695DAC2DB928F308, p0, p1); }
	static void _0xFDFECC6EE4491E11(Any p0) { return Native::Invoke<void, Any>(0xFDFECC6EE4491E11, p0); }
	static void _0xAC355980681A7F89(Any p0) { return Native::Invoke<void, Any>(0xAC355980681A7F89, p0); }
	static Any _0xF14BCEF290F869E1() { return Native::Invoke<Any>(0xF14BCEF290F869E1); }
	static Any _0x183C0B6CFEFFCAE4(Any p0) { return Native::Invoke<Any, Any>(0x183C0B6CFEFFCAE4, p0); }
	static Any _0xA4A4359320345B34(Any p0) { return Native::Invoke<Any, Any>(0xA4A4359320345B34, p0); }
	static Any _0xB33A604345F58202(Any p0) { return Native::Invoke<Any, Any>(0xB33A604345F58202, p0); }
	static Any _0x351D71B8B72B858B(Any p0) { return Native::Invoke<Any, Any>(0x351D71B8B72B858B, p0); }
	static Any _0xFA15C9A320E707B0() { return Native::Invoke<Any>(0xFA15C9A320E707B0); }
	static void _0x52572B331E693AED(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0x52572B331E693AED, p0, p1, p2); }
	static void _0x128FC3A893BF853A(Any p0) { return Native::Invoke<void, Any>(0x128FC3A893BF853A, p0); }
	static void _0xFD010A2154B40676(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xFD010A2154B40676, p0, p1); }
	static Any _0x666C2F53ABEFC952(Any p0) { return Native::Invoke<Any, Any>(0x666C2F53ABEFC952, p0); }
}
namespace _NAMESPACE81
{
	static void _0x754616EC6965D1FB() { return Native::Invoke<void>(0x754616EC6965D1FB); }
	static void _0x754616EC6965D1BF() { return Native::Invoke<void>(0x754616EC6965D1BF); }
	static BOOL GET_WATER_HEIGHT(float x, float y, float A, float* height) { return Native::Invoke<BOOL, float, float, float, float*>(N::GET_WATER_HEIGHT, x, y, A, height); }
	static BOOL GET_WATER_HEIGHT_NO_WAVES(float B, float y, float z, float* height) { return Native::Invoke<BOOL, float, float, float, float*>(N::GET_WATER_HEIGHT_NO_WAVES, B, y, z, height); }
	static int TEST_PROBE_AGAINST_ALL_WATER(float x1, float y1, float z1, float x2, float y2, float z2, int type, Vector3* result) { return Native::Invoke<int, float, float, float, float, float, float, int, Vector3*>(N::TEST_PROBE_AGAINST_ALL_WATER, x1, y1, z1, x2, y2, z2, type, result); }
	static BOOL TEST_VERTICAL_PROBE_AGAINST_ALL_WATER(float x, float y, float z, float p3, float* height) { return Native::Invoke<BOOL, float, float, float, float, float*>(N::TEST_VERTICAL_PROBE_AGAINST_ALL_WATER, x, y, z, p3, height); }
	static void _REMOVE_CURRENT_RISE(int riseHandle) { return Native::Invoke<void, int>(N::_REMOVE_CURRENT_RISE, riseHandle); }
	static void _0x09A1C7DFDCE54FBC(Any p0) { return Native::Invoke<void, Any>(0x09A1C7DFDCE54FBC, p0); }
	static void _0xF0FBF193F1F5C0EA(Any p0) { return Native::Invoke<void, Any>(0xF0FBF193F1F5C0EA, p0); }
	static void _0xA33F5069B0CB89B8() { return Native::Invoke<void>(0xA33F5069B0CB89B8); }
	static void _0xB34A6009A0DB80B8(Any p0) { return Native::Invoke<void, Any>(0xB34A6009A0DB80B8, p0); }
	static void _0xC63540AEF8384732(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { return Native::Invoke<void, Any, Any, Any, Any, Any, Any, Any, Any, Any>(0xC63540AEF8384732, p0, p1, p2, p3, p4, p5, p6, p7, p8); }
	static void _0xC63540AEF8384769() { return Native::Invoke<void>(0xC63540AEF8384769); }
	static void _0xE8770EE02AEE45C2(Any p0) { return Native::Invoke<void, Any>(0xE8770EE02AEE45C2, p0); }
	static Any _0x189739A7631C1867() { return Native::Invoke<Any>(0x189739A7631C1867); }
	static void _0x0DCEC6A92E497E17(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x0DCEC6A92E497E17, p0, p1); }
	static void _0xE8126623008372AA() { return Native::Invoke<void>(0xE8126623008372AA); }
}
namespace WEAPON
{
	static Any _0x865F36299079FB75(Any p0) { return Native::Invoke<Any, Any>(0x865F36299079FB75, p0); }
	static void _0xB190BCA3F4042F95(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<void, Any, Any, Any, Any>(0xB190BCA3F4042F95, p0, p1, p2, p3); }
	static void _0x106A811C6D3035F3(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<void, Any, Any, Any, Any>(0x106A811C6D3035F3, p0, p1, p2, p3); }
	static void _0xF4823C813CB8277D(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<void, Any, Any, Any, Any>(0xF4823C813CB8277D, p0, p1, p2, p3); }
	static void _0xB6CFEC32E3742779(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<void, Any, Any, Any, Any>(0xB6CFEC32E3742779, p0, p1, p2, p3); }
	static void _0x1B83C0DEEBCBB214(Any p0) { return Native::Invoke<void, Any>(0x1B83C0DEEBCBB214, p0); }
	static void SET_PED_AMMO(Ped ped, Hash weaponHash, int ammo) { return Native::Invoke<void, Ped, Hash, int>(N::SET_PED_AMMO, ped, weaponHash, ammo); }
	static void _0x8A779706DA5CA3DD(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0x8A779706DA5CA3DD, p0, p1, p2); }
	static void _0x9409C62504A8F9E9(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x9409C62504A8F9E9, p0, p1); }
	static void _0x56CB3B4305A4F7CE(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<void, Any, Any, Any, Any>(0x56CB3B4305A4F7CE, p0, p1, p2, p3); }
	static Any _0xBF5987E1CDE63501(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<Any, Any, Any, Any, Any>(0xBF5987E1CDE63501, p0, p1, p2, p3); }
	static void _0x194D877FC5597B7D(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<void, Any, Any, Any, Any>(0x194D877FC5597B7D, p0, p1, p2, p3); }
	static void SET_PED_INFINITE_AMMO(Ped ped, BOOL toggle, Hash weaponHash) { return Native::Invoke<void, Ped, BOOL, Hash>(N::SET_PED_INFINITE_AMMO, ped, toggle, weaponHash); }
	static void _0xFBAA1E06B6BCA741(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xFBAA1E06B6BCA741, p0, p1); }
	static int GET_AMMO_IN_PED_WEAPON(Ped ped, Hash weaponhash) { return Native::Invoke<int, Ped, Hash>(N::GET_AMMO_IN_PED_WEAPON, ped, weaponhash); }
	static int GET_MAX_AMMO_IN_CLIP(Ped ped, Hash weaponHash, BOOL p2) { return Native::Invoke<int, Ped, Hash, BOOL>(N::GET_MAX_AMMO_IN_CLIP, ped, weaponHash, p2); }
	static BOOL GET_AMMO_IN_CLIP(Ped ped, Hash weaponHash, int* ammo) { return Native::Invoke<BOOL, Ped, Hash, int*>(N::GET_AMMO_IN_CLIP, ped, weaponHash, ammo); }
	static Any _0x678F00858980F516() { return Native::Invoke<Any>(0x678F00858980F516); }
	static BOOL SET_AMMO_IN_CLIP(Ped ped, Hash weaponHash, int ammo) { return Native::Invoke<BOOL, Ped, Hash, int>(N::SET_AMMO_IN_CLIP, ped, weaponHash, ammo); }
	static Any _0xDF4A3404D022ADDE() { return Native::Invoke<Any>(0xDF4A3404D022ADDE); }
	static BOOL GET_MAX_AMMO(Ped ped, Hash weaponHash, int* ammo) { return Native::Invoke<BOOL, Ped, Hash, int*>(N::GET_MAX_AMMO, ped, weaponHash, ammo); }
	static void SET_PED_AMMO_BY_TYPE(Ped ped, Hash ammoType, int ammo) { return Native::Invoke<void, Ped, Hash, int>(N::SET_PED_AMMO_BY_TYPE, ped, ammoType, ammo); }
	static int GET_PED_AMMO_BY_TYPE(Ped ped, Hash ammoType) { return Native::Invoke<int, Ped, Hash>(N::GET_PED_AMMO_BY_TYPE, ped, ammoType); }
	static Any SET_PED_AMMO_TO_DROP() { return Native::Invoke<Any>(N::SET_PED_AMMO_TO_DROP); }
	static Any _0x5C2EA6C44F515F34(Any p0) { return Native::Invoke<Any, Any>(0x5C2EA6C44F515F34, p0); }
	static Hash GET_PED_AMMO_TYPE_FROM_WEAPON(Ped ped, Hash weaponHash) { return Native::Invoke<Hash, Ped, Hash>(N::GET_PED_AMMO_TYPE_FROM_WEAPON, ped, weaponHash); }
	static Any _0x7AA043F6C41D151E(Any p0) { return Native::Invoke<Any, Any>(0x7AA043F6C41D151E, p0); }
	static Any _0x59DE03442B6C9598(Any p0) { return Native::Invoke<Any, Any>(0x59DE03442B6C9598, p0); }
	static Any _0xF70825EB340E7D15(Any p0) { return Native::Invoke<Any, Any>(0xF70825EB340E7D15, p0); }
	static Any _0x46F032B8DDF46CDE() { return Native::Invoke<Any>(0x46F032B8DDF46CDE); }
	static Hash GET_WEAPONTYPE_GROUP(Hash weaponHash) { return Native::Invoke<Hash, Hash>(N::GET_WEAPONTYPE_GROUP, weaponHash); }
	static Any _0xF8204EF17410BF43(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<Any, Any, Any, Any, Any>(0xF8204EF17410BF43, p0, p1, p2, p3); }
	static Any _0x6ABAD7B0A854F8FB(Any p0) { return Native::Invoke<Any, Any>(0x6ABAD7B0A854F8FB, p0); }
	static Any _0x49E40483948AF062(Any p0) { return Native::Invoke<Any, Any>(0x49E40483948AF062, p0); }
	static Any _0xC4DEC3CA8C365A5D(Any p0) { return Native::Invoke<Any, Any>(0xC4DEC3CA8C365A5D, p0); }
	static Any _0x79407D33328286C6(Any p0) { return Native::Invoke<Any, Any>(0x79407D33328286C6, p0); }
	static Any _0x506F1DE1BFC75304(Any p0) { return Native::Invoke<Any, Any>(0x506F1DE1BFC75304, p0); }
	static Any _0xBE7E42B07FD317AC(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(0xBE7E42B07FD317AC, p0, p1, p2); }
	static Any _0x5E3BDDBCB83F3D84(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11) { return Native::Invoke<Any, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any, Any>(0x5E3BDDBCB83F3D84, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); }
	static void _0x5230D3F6EE56CFE6(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x5230D3F6EE56CFE6, p0, p1); }
	static Any _0x9F0E1892C7F228A8(Any p0) { return Native::Invoke<Any, Any>(0x9F0E1892C7F228A8, p0); }
	static void _0x94A3C1B804D291EC(Any p0, Any p1, Any p2, Any p3, Any p4) { return Native::Invoke<void, Any, Any, Any, Any, Any>(0x94A3C1B804D291EC, p0, p1, p2, p3, p4); }
	static void _0xFCCC886EDE3C63EC(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0xFCCC886EDE3C63EC, p0, p1, p2); }
	static void _0x4820A6939D7CEF28(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x4820A6939D7CEF28, p0, p1); }
	static void SET_CURRENT_PED_WEAPON(Ped ped, Hash weaponHash, BOOL equipNow, Any p3, Any p4, Any p5) { return Native::Invoke<void, Ped, Hash, BOOL, Any, Any, Any>(N::SET_CURRENT_PED_WEAPON, ped, weaponHash, equipNow, p3, p4, p5); }
	static BOOL GET_CURRENT_PED_WEAPON(Ped ped, Hash* weaponHash, BOOL unused, Any p3, Any p4) { return Native::Invoke<BOOL, Ped, Hash*, BOOL, Any, Any>(N::GET_CURRENT_PED_WEAPON, ped, weaponHash, unused, p3, p4); }
	static Entity GET_CURRENT_PED_WEAPON_ENTITY_INDEX(Ped ped, Any p1) { return Native::Invoke<Entity, Ped, Any>(N::GET_CURRENT_PED_WEAPON_ENTITY_INDEX, ped, p1); }
	static Any _0xC395355843BE134B(Any p0) { return Native::Invoke<Any, Any>(0xC395355843BE134B, p0); }
	static Any _0xC71FE230A513C30F() { return Native::Invoke<Any>(0xC71FE230A513C30F); }
	static Any _0xDA37A053C1522F5D(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<Any, Any, Any, Any, Any>(0xDA37A053C1522F5D, p0, p1, p2, p3); }
	static Hash GET_BEST_PED_WEAPON(Ped ped, BOOL p1, Any p2) { return Native::Invoke<Hash, Ped, BOOL, Any>(N::GET_BEST_PED_WEAPON, ped, p1, p2); }
	static Any _0xF52BD94B47CCF736() { return Native::Invoke<Any>(0xF52BD94B47CCF736); }
	static Any _0x6929E22158E52265(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(0x6929E22158E52265, p0, p1, p2); }
	static Any _0x9F67929D98E7C6E8(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<Any, Any, Any, Any, Any>(0x9F67929D98E7C6E8, p0, p1, p2, p3); }
	static Any _0x08FF1099ED2E6E21(Any p0) { return Native::Invoke<Any, Any>(0x08FF1099ED2E6E21, p0); }
	static void _0xBDDA0C290C228159(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0xBDDA0C290C228159, p0, p1, p2); }
	static BOOL SET_CURRENT_PED_VEHICLE_WEAPON(Ped ped, Hash weaponHash) { return Native::Invoke<BOOL, Ped, Hash>(N::SET_CURRENT_PED_VEHICLE_WEAPON, ped, weaponHash); }
	static BOOL GET_CURRENT_PED_VEHICLE_WEAPON(Ped ped, Hash* weaponHash) { return Native::Invoke<BOOL, Ped, Hash*>(N::GET_CURRENT_PED_VEHICLE_WEAPON, ped, weaponHash); }
	static Any _0xCB690F680A3EA971(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0xCB690F680A3EA971, p0, p1); }
	static Any _0xA2091482ED42EF85(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0xA2091482ED42EF85, p0, p1); }
	static Any _0x2387D6E9C6B478AA(Any p0) { return Native::Invoke<Any, Any>(0x2387D6E9C6B478AA, p0); }
	static BOOL IS_WEAPON_VALID(Hash weaponHash) { return Native::Invoke<BOOL, Hash>(N::IS_WEAPON_VALID, weaponHash); }
	static Any _0x1F7977C9101F807F(Any p0) { return Native::Invoke<Any, Any>(0x1F7977C9101F807F, p0); }
	static Any _0x23BF601A42F329A0(Any p0) { return Native::Invoke<Any, Any>(0x23BF601A42F329A0, p0); }
	static Any _0xF29A186ED428B552(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0xF29A186ED428B552, p0, p1); }
	static BOOL HAS_PED_GOT_WEAPON(Ped ped, Hash weaponHash, BOOL p2, Any p3) { return Native::Invoke<BOOL, Ped, Hash, BOOL, Any>(N::HAS_PED_GOT_WEAPON, ped, weaponHash, p2, p3); }
	static Any _0x07E1C35F0078C3F9(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x07E1C35F0078C3F9, p0, p1); }
	static BOOL IS_PED_WEAPON_READY_TO_SHOOT(Ped ped) { return Native::Invoke<BOOL, Ped>(N::IS_PED_WEAPON_READY_TO_SHOOT, ped); }
	static Any _0xDBC4B552B2AE9A83(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0xDBC4B552B2AE9A83, p0, p1); }
	static Any GIVE_DELAYED_WEAPON_TO_PED() { return Native::Invoke<Any>(N::GIVE_DELAYED_WEAPON_TO_PED); }
	static void REMOVE_ALL_PED_WEAPONS(Ped ped, BOOL unused, Any p2) { return Native::Invoke<void, Ped, BOOL, Any>(N::REMOVE_ALL_PED_WEAPONS, ped, unused, p2); }
	static void REMOVE_WEAPON_FROM_PED(Ped ped, Hash weaponHash, Any p2, Any p3) { return Native::Invoke<void, Ped, Hash, Any, Any>(N::REMOVE_WEAPON_FROM_PED, ped, weaponHash, p2, p3); }
	static void HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(Ped ped, BOOL toggle) { return Native::Invoke<void, Ped, BOOL>(N::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE, ped, toggle); }
	static void SET_PED_CURRENT_WEAPON_VISIBLE(Ped ped, BOOL visible, BOOL deselectWeapon, BOOL p3, BOOL p4) { return Native::Invoke<void, Ped, BOOL, BOOL, BOOL, BOOL>(N::SET_PED_CURRENT_WEAPON_VISIBLE, ped, visible, deselectWeapon, p3, p4); }
	static void _0x67E21ACC5C0C970C(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0x67E21ACC5C0C970C, p0, p1, p2); }
	static void _0x4F806A6CFED89468(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x4F806A6CFED89468, p0, p1); }
	static void SET_PED_DROPS_WEAPONS_WHEN_DEAD(Ped ped, BOOL toggle) { return Native::Invoke<void, Ped, BOOL>(N::SET_PED_DROPS_WEAPONS_WHEN_DEAD, ped, toggle); }
	static Any _0x431240A58484D5D0() { return Native::Invoke<Any>(0x431240A58484D5D0); }
	static Any _0x45E57FDD531C9477() { return Native::Invoke<Any>(0x45E57FDD531C9477); }
	static Any _0xF08D8FEB455F2C8C() { return Native::Invoke<Any>(0xF08D8FEB455F2C8C); }
	static Any _0x16D9841A85FA627E() { return Native::Invoke<Any>(0x16D9841A85FA627E); }
	static BOOL GET_PED_LAST_WEAPON_IMPACT_COORD(Ped ped, Vector3* coords) { return Native::Invoke<BOOL, Ped, Vector3*>(N::GET_PED_LAST_WEAPON_IMPACT_COORD, ped, coords); }
	static void _0x087D8F4BC65F68E4(Any p0) { return Native::Invoke<void, Any>(0x087D8F4BC65F68E4, p0); }
	static Any _0xDCF06D0CDFF68424(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(0xDCF06D0CDFF68424, p0, p1, p2); }
	static void SET_PED_DROPS_INVENTORY_WEAPON(Ped ped, Hash weaponHash, float xOffset, float yOffset, float zOffset, int ammoCount) { return Native::Invoke<void, Ped, Hash, float, float, float, int>(N::SET_PED_DROPS_INVENTORY_WEAPON, ped, weaponHash, xOffset, yOffset, zOffset, ammoCount); }
	static void _0xB0FB9B196A3D13F0(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0xB0FB9B196A3D13F0, p0, p1, p2); }
	static Any _0x2EBF70E1D8C06683() { return Native::Invoke<Any>(0x2EBF70E1D8C06683); }
	static Any _0x63B83A526329AFBC() { return Native::Invoke<Any>(0x63B83A526329AFBC); }
	static Any _0x79E1E511FF7EFB13(Any p0) { return Native::Invoke<Any, Any>(0x79E1E511FF7EFB13, p0); }
	static Any _0x0A2AB7B7ABC055F4(Any p0) { return Native::Invoke<Any, Any>(0x0A2AB7B7ABC055F4, p0); }
	static Any _0xCEF4C65DE502D367(Any p0, Any p1, Any p2, Any p3, Any p4) { return Native::Invoke<Any, Any, Any, Any, Any, Any>(0xCEF4C65DE502D367, p0, p1, p2, p3, p4); }
	static Any _0x8425C5F057012DAB(Any p0) { return Native::Invoke<Any, Any>(0x8425C5F057012DAB, p0); }
	static void _0x78030C7867D8B9B6(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x78030C7867D8B9B6, p0, p1); }
	static void _0xA3716A77DCF17424(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0xA3716A77DCF17424, p0, p1, p2); }
	static Any _0x3799EFCC3C8CD5E1(Any p0) { return Native::Invoke<Any, Any>(0x3799EFCC3C8CD5E1, p0); }
	static Any _0x79B1A6E780266DB0(Any p0) { return Native::Invoke<Any, Any>(0x79B1A6E780266DB0, p0); }
	static void _0x19F70C4D80494FF8(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0x19F70C4D80494FF8, p0, p1, p2); }
	static Any _0xBBC67A6F965C688A(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(0xBBC67A6F965C688A, p0, p1, p2); }
	static Any _0xBDD9C235D8D1052E(Any p0) { return Native::Invoke<Any, Any>(0xBDD9C235D8D1052E, p0); }
	static Any _0xD2209866B0CB72EA(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0xD2209866B0CB72EA, p0, p1); }
	static void _0x72D4CB5DB927009C(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0x72D4CB5DB927009C, p0, p1, p2); }
	static Any _0xFF07CF465F48B830(Any p0) { return Native::Invoke<Any, Any>(0xFF07CF465F48B830, p0); }
	static void _0xC3896D03E2852236(Any p0) { return Native::Invoke<void, Any>(0xC3896D03E2852236, p0); }
	static void _0xE9B3FEC825668291(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0xE9B3FEC825668291, p0, p1, p2); }
	static Any _0x9CCA3131E6B53C68() { return Native::Invoke<Any>(0x9CCA3131E6B53C68); }
	static Any _0x6D3AC61694A791C5() { return Native::Invoke<Any>(0x6D3AC61694A791C5); }
	static Any _0x89CF5FF3D363311E(Any p0) { return Native::Invoke<Any, Any>(0x89CF5FF3D363311E, p0); }
	static Any _0x7A56D66C78D8EF8E(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x7A56D66C78D8EF8E, p0, p1); }
	static void _0xB832F1A686B9B810(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0xB832F1A686B9B810, p0, p1, p2); }
	static Any _0x5A695BD328586B44() { return Native::Invoke<Any>(0x5A695BD328586B44); }
	static Any _0x641351E9AD103890() { return Native::Invoke<Any>(0x641351E9AD103890); }
	static Any _0x739B9C6D0E7F7F93() { return Native::Invoke<Any>(0x739B9C6D0E7F7F93); }
	static Any _0xBE711B14A159E84F() { return Native::Invoke<Any>(0xBE711B14A159E84F); }
	static void _0xE9BD19F8121ADE3E(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xE9BD19F8121ADE3E, p0, p1); }
	static void _0x14FF0C2545527F9B(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0x14FF0C2545527F9B, p0, p1, p2); }
	static Any _0xAFFD0CCF31F469B8(Any p0) { return Native::Invoke<Any, Any>(0xAFFD0CCF31F469B8, p0); }
	static Any _0x8EC44AE8DECFF841() { return Native::Invoke<Any>(0x8EC44AE8DECFF841); }
	static Any _0x9E2D5D6BC97A5F1E(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(0x9E2D5D6BC97A5F1E, p0, p1, p2); }
	static Any _0x90EB1CB189923587() { return Native::Invoke<Any>(0x90EB1CB189923587); }
	static Any _0x9888652B8BA77F73(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return Native::Invoke<Any, Any, Any, Any, Any, Any, Any, Any>(0x9888652B8BA77F73, p0, p1, p2, p3, p4, p5, p6); }
	static void REMOVE_WEAPON_COMPONENT_FROM_WEAPON_OBJECT(Object weaponObject, Hash component) { return Native::Invoke<void, Object, Hash>(N::REMOVE_WEAPON_COMPONENT_FROM_WEAPON_OBJECT, weaponObject, component); }
	static BOOL HAS_WEAPON_GOT_WEAPON_COMPONENT(Object weapon, Hash addonHash) { return Native::Invoke<BOOL, Object, Hash>(N::HAS_WEAPON_GOT_WEAPON_COMPONENT, weapon, addonHash); }
	static void _0x1A47699E8D533E8F(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<void, Any, Any, Any, Any>(0x1A47699E8D533E8F, p0, p1, p2, p3); }
	static Any _0xC6A6789BB405D11C(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0xC6A6789BB405D11C, p0, p1); }
	static Any _0x6CA484C9A7377E4F(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x6CA484C9A7377E4F, p0, p1); }
	static void _0x74C9090FDD1BB48E(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<void, Any, Any, Any, Any>(0x74C9090FDD1BB48E, p0, p1, p2, p3); }
	static void _0x74C9080FDD1BB48E(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x74C9080FDD1BB48E, p0, p1); }
	static void _0x74C9080FDD1BB48F(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x74C9080FDD1BB48F, p0, p1); }
	static void _0x74C2365FDD1BB48F(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x74C2365FDD1BB48F, p0, p1); }
	static void _0x74C90AAACC1DD48F(Any p0) { return Native::Invoke<void, Any>(0x74C90AAACC1DD48F, p0); }
	static Any _0x74C8000FDD1BB111(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x74C8000FDD1BB111, p0, p1); }
	static Any _0x74C8000FDD1BB222(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x74C8000FDD1BB222, p0, p1); }
	static Any _0xF4601C1203B1A78D() { return Native::Invoke<Any>(0xF4601C1203B1A78D); }
	static Any _0x01F661BB9C71B465() { return Native::Invoke<Any>(0x01F661BB9C71B465); }
	static Any _0x6554ECCE226F2A2A() { return Native::Invoke<Any>(0x6554ECCE226F2A2A); }
	static Any _0xD42514C182121C23(Any p0) { return Native::Invoke<Any, Any>(0xD42514C182121C23, p0); }
	static void _0x899A04AFCC725D04(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x899A04AFCC725D04, p0, p1); }
	static Any _0xF252A85B8F3F8C58(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0xF252A85B8F3F8C58, p0, p1); }
	static Any _0x9EEFD670F10656D7(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x9EEFD670F10656D7, p0, p1); }
	static Any _0xF2F585411E748B9C(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0xF2F585411E748B9C, p0, p1); }
	static Any _0xD3750CCC00635FC2(Any p0) { return Native::Invoke<Any, Any>(0xD3750CCC00635FC2, p0); }
	static void _0xA769D753922B031B(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0xA769D753922B031B, p0, p1, p2); }
	static void _0xC5899C4CD2E2495D(Any p0) { return Native::Invoke<void, Any>(0xC5899C4CD2E2495D, p0); }
	static Any _0x918990BD9CE08582() { return Native::Invoke<Any>(0x918990BD9CE08582); }
	static void _0x83B8D50EB9446BBA(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x83B8D50EB9446BBA, p0, p1); }
	static Any _0x44C8F4908F1B2622() { return Native::Invoke<Any>(0x44C8F4908F1B2622); }
	static Any _0x792E3EF76C911959(Any p0) { return Native::Invoke<Any, Any>(0x792E3EF76C911959, p0); }
	static Any _0xC212F1D05A8232BB(Any p0) { return Native::Invoke<Any, Any>(0xC212F1D05A8232BB, p0); }
	static Any _0xDDC64F5E31EEDAB6(Any p0) { return Native::Invoke<Any, Any>(0xDDC64F5E31EEDAB6, p0); }
	static Any _0xDDB2578E95EF7138(Any p0) { return Native::Invoke<Any, Any>(0xDDB2578E95EF7138, p0); }
	static Any _0x0A82317B7EBFC420(Any p0) { return Native::Invoke<Any, Any>(0x0A82317B7EBFC420, p0); }
	static Any _0xC75386174ECE95D5(Any p0) { return Native::Invoke<Any, Any>(0xC75386174ECE95D5, p0); }
	static Any _0x6AD66548840472E5(Any p0) { return Native::Invoke<Any, Any>(0x6AD66548840472E5, p0); }
	static Any _0x959383DCD42040DA(Any p0) { return Native::Invoke<Any, Any>(0x959383DCD42040DA, p0); }
	static Any _0x30E7C16B12DA8211(Any p0) { return Native::Invoke<Any, Any>(0x30E7C16B12DA8211, p0); }
	static Any _0x6E4E1A82081EABED() { return Native::Invoke<Any>(0x6E4E1A82081EABED); }
	static Any _0xC853230E76A152DF() { return Native::Invoke<Any>(0xC853230E76A152DF); }
	static Any _0x705BE297EEBDB95D(Any p0) { return Native::Invoke<Any, Any>(0x705BE297EEBDB95D, p0); }
	static Any _0x0556E9D2ECF39D01(Any p0) { return Native::Invoke<Any, Any>(0x0556E9D2ECF39D01, p0); }
	static Any _0xD955FEE4B87AFA07(Any p0) { return Native::Invoke<Any, Any>(0xD955FEE4B87AFA07, p0); }
	static Any _0x5809DBCA0A37C82B(Any p0) { return Native::Invoke<Any, Any>(0x5809DBCA0A37C82B, p0); }
	static Any _0xEA522F991E120D45(Any p0) { return Native::Invoke<Any, Any>(0xEA522F991E120D45, p0); }
	static Any _0x7EFACC589B98C488() { return Native::Invoke<Any>(0x7EFACC589B98C488); }
	static Any _0x2C83212A7AA51D3D(Any p0) { return Native::Invoke<Any, Any>(0x2C83212A7AA51D3D, p0); }
	static Any _0x5B235F24472F2C3B(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x5B235F24472F2C3B, p0, p1); }
	static Any _0xBFCA7AFABF9D7967(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0xBFCA7AFABF9D7967, p0, p1); }
	static Any _0x495A04CAEC263AF8(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x495A04CAEC263AF8, p0, p1); }
	static Any _0x95CA12E2C68043E5(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x95CA12E2C68043E5, p0, p1); }
	static Any _0xABC18A28BAD4B46F() { return Native::Invoke<Any>(0xABC18A28BAD4B46F); }
	static Any _0x80BB243789008A82(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x80BB243789008A82, p0, p1); }
	static Any _0x904103D5D2333977() { return Native::Invoke<Any>(0x904103D5D2333977); }
	static void _0xE22060121602493B(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0xE22060121602493B, p0, p1, p2); }
	static Any _0x810E8AE9AFEA7E54() { return Native::Invoke<Any>(0x810E8AE9AFEA7E54); }
	static void _0x812CE61DEBCAB948(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0x812CE61DEBCAB948, p0, p1, p2); }
	static Any _0x4BF66F8878F67663() { return Native::Invoke<Any>(0x4BF66F8878F67663); }
	static void _0xA9EF4AD10BDDDB57(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0xA9EF4AD10BDDDB57, p0, p1, p2); }
	static void _0xD4071EFC83794B2F(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xD4071EFC83794B2F, p0, p1); }
	static Any _0x0D78E1097F89E637(Any p0) { return Native::Invoke<Any, Any>(0x0D78E1097F89E637, p0); }
	static Any _0xD56E5F336C675EFA(Any p0) { return Native::Invoke<Any, Any>(0xD56E5F336C675EFA, p0); }
	static void _0xA7A57E89E965D839(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xA7A57E89E965D839, p0, p1); }
	static Any _0xDA5D3F2C6DD5B5D4() { return Native::Invoke<Any>(0xDA5D3F2C6DD5B5D4); }
	static Any _0x22084CA699219624(Any p0) { return Native::Invoke<Any, Any>(0x22084CA699219624, p0); }
	static void _0xC3544AD0522E69B4(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xC3544AD0522E69B4, p0, p1); }
	static Any _0x58425FCA3D3A2D15() { return Native::Invoke<Any>(0x58425FCA3D3A2D15); }
	static Any _0xEC97101A8F311282(Any p0) { return Native::Invoke<Any, Any>(0xEC97101A8F311282, p0); }
	static Any _0x7E7B19A4355FEE13(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x7E7B19A4355FEE13, p0, p1); }
	static Any _0xAF9D167A5656D6A6() { return Native::Invoke<Any>(0xAF9D167A5656D6A6); }
	static Any _0xC570B881754DF609() { return Native::Invoke<Any>(0xC570B881754DF609); }
	static void _0xCC9C4393523833E2(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0xCC9C4393523833E2, p0, p1, p2); }
	static void _0x183CE355115B6E75(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x183CE355115B6E75, p0, p1); }
	static Any _0xEBE46B501BC3FBCF() { return Native::Invoke<Any>(0xEBE46B501BC3FBCF); }
	static Any _0xFDCEDFB0577A390D() { return Native::Invoke<Any>(0xFDCEDFB0577A390D); }
	static Any _0xF0D728EEA3C99775() { return Native::Invoke<Any>(0xF0D728EEA3C99775); }
	static void _0xAA5A52204E077883(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xAA5A52204E077883, p0, p1); }
	static void _0xD63B4BA3A02A99E0(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xD63B4BA3A02A99E0, p0, p1); }
	static Any _0x23FB9FACA28779C1() { return Native::Invoke<Any>(0x23FB9FACA28779C1); }
	static void _0x3B7B7908B7ADFB4B(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x3B7B7908B7ADFB4B, p0, p1); }
	static void _0x404514D231DB27A0(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x404514D231DB27A0, p0, p1); }
	static void _0xD53846B9C931C181(Any p0, Any p1, Any p2) { return Native::Invoke<void, Any, Any, Any>(0xD53846B9C931C181, p0, p1, p2); }
	static void _0x000FA7A4A8443AF7(Any p0) { return Native::Invoke<void, Any>(0x000FA7A4A8443AF7, p0); }
	static void _0xECBB26529A737EF6(Any p0) { return Native::Invoke<void, Any>(0xECBB26529A737EF6, p0); }
	static Any _0xCAD4FE9398820D24(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0xCAD4FE9398820D24, p0, p1); }
	static Any _0x4823F13A21F51964(Any p0, Any p1) { return Native::Invoke<Any, Any, Any>(0x4823F13A21F51964, p0, p1); }
	static Any _0x12FB95FE3D579238() { return Native::Invoke<Any>(0x12FB95FE3D579238); }
}
namespace _NAMESPACE83
{
	static Any _0x43AD8FC02B429D33(Any p0, Any p1, Any p2, Any p3) { return Native::Invoke<Any, Any, Any, Any, Any>(0x43AD8FC02B429D33, p0, p1, p2, p3); }
	static Any _0x5BA7A68A346A5A91(Any p0, Any p1, Any p2) { return Native::Invoke<Any, Any, Any, Any>(0x5BA7A68A346A5A91, p0, p1, p2); }
}
namespace _NAMESPACE84
{
	static void _0xB6FD96420C0126A1(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0xB6FD96420C0126A1, p0, p1); }
	static void _0x74BCCEB233AD95B2(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x74BCCEB233AD95B2, p0, p1); }
	static void _0x29C733459A9011EB(Any p0, Any p1) { return Native::Invoke<void, Any, Any>(0x29C733459A9011EB, p0, p1); }
	static Any _0x7AF1BB4504EA5ED9() { return Native::Invoke<Any>(0x7AF1BB4504EA5ED9); }
	static void _0xCCB4635A071FB62D() { return Native::Invoke<void>(0xCCB4635A071FB62D); }
}
