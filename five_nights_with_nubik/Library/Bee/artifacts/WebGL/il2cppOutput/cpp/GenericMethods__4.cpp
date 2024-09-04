#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif




template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtualActionInvoker3Invoker;
template <typename T1, typename T2, typename T3>
struct VirtualActionInvoker3Invoker<T1*, T2*, T3*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1* p1, T2* p2, T3* p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		void* params[3] = { p1, p2, p3 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[2]);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1Invoker;
template <typename T1>
struct InterfaceActionInvoker1Invoker<T1*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[0]);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2Invoker;
template <typename T1, typename T2>
struct InterfaceActionInvoker2Invoker<T1, T2*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2* p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		void* params[2] = { &p1, p2 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[1]);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, params[0]);
	}
};

struct ABSTweenPlugin_3_tC26278B0CA053BAF4547345679D3E8D1F748AC12;
struct ABSTweenPlugin_3_t2B071FD0D9C7410BEDE633CDB14F13654FC2A973;
struct ABSTweenPlugin_3_t7A4F79038C7079DFB69340991577802A9439A59D;
struct ABSTweenPlugin_3_t79D91C3E0DB82A874E072CF1EF486B5F78D7F8DE;
struct ABSTweenPlugin_3_t7341CD6BAA9CD38815B6A9E3CFF47989DE634ABF;
struct ABSTweenPlugin_3_tD50BA08812AFCD7C2C34161AA370ADAD96ED9147;
struct ABSTweenPlugin_3_t7A2E1B65C126514AD320331036B9ACCE74AD21D9;
struct ABSTweenPlugin_3_t3823C0F935A3168B9E48DC90ABD9A0CED3D7BB82;
struct ABSTweenPlugin_3_tA51581359A1B697A7A0A8F2FFDE00794FA1E67F4;
struct ABSTweenPlugin_3_t60F4DE5120CFD5986925189A0E775FAEAB4C59B9;
struct ABSTweenPlugin_3_t76C40FFA153363CF88C31D954E2AE740916B5B22;
struct ABSTweenPlugin_3_t303ADD886C8A7272DE43A8D065EEB864F5E03BF4;
struct ABSTweenPlugin_3_t4082710A2BB933E2D055E454B3EFAC4C0A319444;
struct ABSTweenPlugin_3_t6D32722320E631CCB96F0ADA615C9F5E568C4720;
struct ABSTweenPlugin_3_t053B27021E31B21883DF289A9875BD9EB5381671;
struct ABSTweenPlugin_3_tE5A78BE46D046C07A6356B8AB596B2D00F9295E7;
struct ABSTweenPlugin_3_t9F8F8099624B165B75CB1E0C53FA9762CB2815FC;
struct ABSTweenPlugin_3_tDC724E2B66EA33E0E50BFC9D5D6DA6B3C5FA16A1;
struct ConcurrentDictionary_2_tF598E45B2A3ECB23FD311D829FB0AB32B1201ACF;
struct ConcurrentDictionary_2_t889EC4BD07B5DCB6087E2226ACC8A5E5590E48AB;
struct ConcurrentDictionary_2_tE5A8639D8AE0AF65ED6A8B7C1089E9F12ADD7B91;
struct DOGetter_1_t4DFFF7454A1BCD259676FED36CCF2114E34B5B95;
struct DOGetter_1_t70E6A9734FBC296B3CB5063E8F4EE3C37A648D54;
struct DOGetter_1_tBBA11DAFDBCE2EA3888D6532DC2E9A31FD2571F1;
struct DOGetter_1_t126D20ADA2999ECC8E5336D1EDE57C560F53784B;
struct DOGetter_1_tB91953D825596DF9261D34075CD34AEBD9EBF7D2;
struct DOGetter_1_t423CA9B377A96EA7C69ABA0C83C81B8D5B045E85;
struct DOGetter_1_tB89DD12456B8E79576BB70E1CA6DF899686410D3;
struct DOGetter_1_t64F1C0E113DC45CC9A1FD194A80B7B4C40AC4923;
struct DOGetter_1_tE8B39477E96408653D0242624F4D7E48ABFD1B03;
struct DOGetter_1_t187AC9EC362AB6EF9475A1B6469E2261EDF9DEE1;
struct DOGetter_1_tF4FBD9712869BD6129C41ADBD9D3DCD51CBB4746;
struct DOGetter_1_t13276681BE97FCE6AB699EF1F894EA98C825FE66;
struct DOGetter_1_t709462C08281F3AA5DFEF36CAF91404B1004C338;
struct DOGetter_1_t7663EC1A34326612C559E1AC30ED719944D21731;
struct DOGetter_1_t8DA6E4433ACD8058D6EAE625137110D1FB3DFC14;
struct DOSetter_1_t5E2B8A5C7040616545D7D029D20C4BF5F3E6DA89;
struct DOSetter_1_t41F9F9F15EDD1C77118E90D2FB8D86655B6D8B95;
struct DOSetter_1_t4B1A4782CD18775DA1DED50CE3D612E44203BAF1;
struct DOSetter_1_t034B092AF3597985E5ACEBF7D43ED7297EF3C6A8;
struct DOSetter_1_t3D1FA50DC1B5C50FA55EFD9A39EECC7D2F841917;
struct DOSetter_1_t6889207117879689DE539960755CE5F277F65C0F;
struct DOSetter_1_t9EFF8DD70A15F455A6FE698A22BD0FE9683AC28E;
struct DOSetter_1_t1682EBCD9936CA04E27CEC6CFD3F7C8CD8584CDD;
struct DOSetter_1_t48D41DB8CE0BFC91A1844C4CC49A8A7222A69200;
struct DOSetter_1_tD132DAEA45806BE3693620C9FBBABB556336C1E5;
struct DOSetter_1_t88E79937FFFCB0EA500E064661BF5F6BDA9E94B0;
struct DOSetter_1_t0DAD29F0B667B9ED214C9F6B9C4D7093FE7C0D9C;
struct DOSetter_1_t02E8F9920F174322F1CF5AC8BCDEAABD14A03358;
struct DOSetter_1_tD317D77AA1F91A2D7941174E732F54F68ACE8FA3;
struct DOSetter_1_t856F6D96CAAFD28A21A398D2B3838D27D7E9BD16;
struct Func_1_t3FCE602A80D3F788D4898853BA8282C009C88FE2;
struct Func_1_t32EEA16CED0DB34319C289C678DEADF9C939FD0B;
struct Func_1_t6810F34C7AB650D465D2B9B6A1F0B277DAA46A3C;
struct Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4;
struct Func_1_t41D01DF7E7DCF728A5AC2E27578C9EF76548EF27;
struct Func_1_t35CA8359B05764A8BDAC8FE106B7288508C45185;
struct Func_1_t9EB8CE9DFD9B703BC79F2087B16EA394B7A9F9A1;
struct Func_1_t0CA4D46E5CA022D9CB87FD09DBA3CCC56AD63B73;
struct Func_1_t58C51DB29153B53A9136AE397958F3FCC1F596EC;
struct Func_1_tBB4369E1B40CFC6872EA9A0B73B958E474BE3CF2;
struct Func_1_t704C051013549CDD77A31AEC405EA270221633B3;
struct Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431;
struct Func_3_t6E57AF981293DC26E9631AA2A14D231440CC20A3;
struct IConstructorWithCount_1_tC3042548D942C583F578CE19FEE25F9677510768;
struct IConstructor_1_t943F43022B5DD77D92BF54CCD22377BDC30F631E;
struct IConstructor_1_tB4817FCBFD3A44F10C3F86B2C4E1B216E1FCEDB5;
struct IConstructor_1_t5F6E2B4293606962F689E382293BFEA5BAFA4D7B;
struct IConstructor_1_tF408ED285A722109CD256529A452F0C8B90C2101;
struct IConstructor_1_tD7B6D5CB4C166AECE81DFE2E93550110CB916F83;
struct IConstructor_1_t6FA853DE1714937284489E312FC02C6D71684DC5;
struct IConstructor_1_t7F6FD109056FB1FE5D7570824C6DF7CF8CF22DD1;
struct IConstructor_1_tCAAA8904A519EE31D72C324815D1EB2AE1787D35;
struct IConstructor_1_t4631143593FC24BBF94A4E795827088BD3DA703F;
struct IConstructor_1_tBE817905EB5CBB305A5EC9728AFE0557F4D8593A;
struct IConstructor_1_tB61A6DC28CC36BDA676C6269DEA6667BC2224C2B;
struct IConstructor_1_t0A1BDA41023F58D7C236102BED6FD1C1B1D69338;
struct IEqualityComparer_1_t0C79004BFE79D9DBCE6C2250109D31D468A9A68E;
struct IPropertyBag_1_t36BB94A0E64BDC3C7B44E3C33CD0562C77748D3F;
struct ITypeConstructor_1_t81670FEA206550EF92A986F4A63FC5302AB1D638;
struct ITypeConstructor_1_t3B0FE01881012CC548F6EE132D9D04AA93EDE092;
struct ITypeConstructor_1_t2957C3F3F922000D05C6AE59163AF0088BB8D2E4;
struct ITypeConstructor_1_t73C3366FF37ECFD1CC6142A80D1A0E31E89DDB04;
struct ITypeConstructor_1_t0FE2B73907C0A0AEB0E84716E021DD7420B23A2B;
struct ITypeConstructor_1_t5E4FD8D127EC0F24B375DF611109A9783C9949D0;
struct ITypeConstructor_1_tCC196E183FB5A7CF798C682F9C3B70CDDA50CFFF;
struct ITypeConstructor_1_tADCE5163310B602EB1878CA0050295BFB0F6B542;
struct ITypeConstructor_1_t61D5D3D9EDD28391B0FE316A5641A34D7FF16FD0;
struct ITypeConstructor_1_t5B814DBA70C191660AF27E38032998417073D7A2;
struct ITypeConstructor_1_t63AA3F84ED218C4C0589371B74758F62E3EFCF85;
struct ITypeConstructor_1_t38B0D0EFBEAA57884DFAE0A863E841E681DE2224;
struct List_1_t6EF58ECBFCFA6FA99AC1281CE3A14BB083B08524;
struct ObjectPool_1_tA6230762362A6BA6FEB38B9912D0463FB059A05A;
struct Tables_t6037A68AF76F1F1F11530A3316850BA0C19358EC;
struct TweenCallback_1_tF0ADCA0C226C9C243ACB55E67D852E4BB53AEB67;
struct TweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3;
struct TweenerCore_3_tEAA0D8AFDE65BA4B76FB61D33C4769C339E17949;
struct TweenerCore_3_tD1EF4B796EFD7E02D28B6A0E0DD08737178F54E9;
struct TweenerCore_3_t9535EBAA281A1D58F2F4C103D11394072D85754C;
struct TweenerCore_3_t5D0EC4E2435A9E48640918EEBB42A14E29F9E554;
struct TweenerCore_3_t309A316DD98511F745EEA5D99CEC7179C868AB59;
struct TweenerCore_3_tA6865573C9B15C90F5AF42AA9F04D8D11822B687;
struct TweenerCore_3_t392C54729BB024F5802F8E205C583653C4E886E3;
struct TweenerCore_3_tE0A3D42393A2015849880D806418B2EDD0187D5D;
struct TweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1;
struct TweenerCore_3_t9016EC0FCFBD1032D87C4B0BB3E45F37DEF005D2;
struct TweenerCore_3_t2043A56E4E5C035C8690037B5961DF809EF6002B;
struct TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271;
struct TweenerCore_3_t588FE764FFE6D341E358B05F0CB12A449ABF8B9C;
struct TweenerCore_3_t76519FA34EF184090B81F1F9F8F10E7EC238AB9C;
struct TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77;
struct TweenerCore_3_t963D77C15EC065D01436953D600312198028FDA3;
struct TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB;
struct TypeConstructor_1_t6BD2119030A7BD8FE6604F7A5DF2CEF572ECA695;
struct TypeConstructor_1_t2C599EF20D66173546174E1FEE9032865749569B;
struct TypeConstructor_1_t1112ACFFD3ED7A595EEC07CE30579944DC35A084;
struct TypeConstructor_1_tE2168F7D76AF24C3CDBD874E68275064267A7878;
struct TypeConstructor_1_tB483B7FBA1AB31F8944236CE6F404C0070EE46AF;
struct TypeConstructor_1_t1C87E458BAAB4AD6530734CF23FBF63EB6941B16;
struct TypeConstructor_1_t4B02051589066DA6CAD76A46B2FB0896FB6F1353;
struct TypeConstructor_1_t9D3BD244EB1B72A274F2DF3BD2871FE3D1103947;
struct TypeConstructor_1_t015B6532B2D88703CA87ACDD65D1F95F946DEBBC;
struct TypeConstructor_1_t0B54B8DEF0851D113A157F922D908DE987F2BB1B;
struct TypeConstructor_1_tE50E3531CF764328151098BCE662D4FF81F9F4CA;
struct TypeConstructor_1_tC9E50C3E7F5087C5A4FFA5280FCE1E9C36B42AF6;
struct KeyValuePair_2U5BU5D_t146564E6A49A4F28A57A5ED01FB1A805D98D62E6;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299;
struct PowerOvflU5BU5D_t8BB6F43AF19F1F7C7558815B4684875BC320735B;
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
struct BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832;
struct BatchDrawCommand_t9DAB9B739DA9EBC6B1BB0D2DD51AF65B12F66BF0;
struct BatchDrawRange_t736D745E918A629658B80A0F7D2D17DAFBA6172F;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct DOTweenComponent_tEA6C5A1520B40681AE6FA1703529F60EBC3691DC;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct EaseFunction_t0F945D9D726B0915C5FBF30862E987EC3AC12A04;
struct Exception_t;
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IPropertyBag_t602D45F19F9BFA3E370929AC5023258AAF62E8C2;
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C;
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
struct ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MethodBase_t;
struct MethodInfo_t;
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E;
struct Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C;
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C;
struct String_t;
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
struct Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C;
struct TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24;
struct Type_t;
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct ITypeConstructor_tAEA6BC4B87F0F3739E4457F21908EF55F666EB08;
struct TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ITypeConstructor_tAEA6BC4B87F0F3739E4457F21908EF55F666EB08_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral07624473F417C06C74D59C64840A1532FCE2C626;
IL2CPP_EXTERN_C String_t* _stringLiteral1FFBA8CC2A329F0612696574F8F4DD7FBA8E3BE0;
IL2CPP_EXTERN_C String_t* _stringLiteral3477F5F15DC74EADC79ED337F3988716EE1670E9;
IL2CPP_EXTERN_C String_t* _stringLiteral63D67EDF1DFC329AF697D485FCB2431349E3E836;
IL2CPP_EXTERN_C String_t* _stringLiteral766954CA6C416DC5101A89F56696617F86FFF3AE;
IL2CPP_EXTERN_C String_t* _stringLiteralAEEC35A7704ECFD616CD15F38FB2BD30AFF7D21B;
IL2CPP_EXTERN_C String_t* _stringLiteralB17952A14247828F6A41642FA1C04CD14AE7C12A;
IL2CPP_EXTERN_C String_t* _stringLiteralB9E39E6666EEBD98BA9B0F0CC91867E890B97377;
IL2CPP_EXTERN_C String_t* _stringLiteralDF29F6D97E24431ECD5F1657989D9AD6B5FF2A0E;
IL2CPP_EXTERN_C String_t* _stringLiteralE1EDA87E9ED31C4E7C14E0517587FE44416755AE;
IL2CPP_EXTERN_C String_t* _stringLiteralE310274B02A605A3985345944A620D7D2E019A1A;
IL2CPP_EXTERN_C String_t* _stringLiteralF1A902BAD5B9128E503E43473944346B65454351;
IL2CPP_EXTERN_C String_t* _stringLiteralF5F6CA609FD7E424D80133DE3BA7D5A6FE53EED3;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentDictionary_2_set_Item_m050171C2656C2982971EECEA9026CADF5AEF72B1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct ABSTweenPlugin_3_tC26278B0CA053BAF4547345679D3E8D1F748AC12  : public RuntimeObject
{
};
struct ABSTweenPlugin_3_tD50BA08812AFCD7C2C34161AA370ADAD96ED9147  : public RuntimeObject
{
};
struct ABSTweenPlugin_3_t7A2E1B65C126514AD320331036B9ACCE74AD21D9  : public RuntimeObject
{
};
struct ABSTweenPlugin_3_t3823C0F935A3168B9E48DC90ABD9A0CED3D7BB82  : public RuntimeObject
{
};
struct ABSTweenPlugin_3_tA51581359A1B697A7A0A8F2FFDE00794FA1E67F4  : public RuntimeObject
{
};
struct ABSTweenPlugin_3_t60F4DE5120CFD5986925189A0E775FAEAB4C59B9  : public RuntimeObject
{
};
struct ABSTweenPlugin_3_t76C40FFA153363CF88C31D954E2AE740916B5B22  : public RuntimeObject
{
};
struct ABSTweenPlugin_3_t303ADD886C8A7272DE43A8D065EEB864F5E03BF4  : public RuntimeObject
{
};
struct ABSTweenPlugin_3_t4082710A2BB933E2D055E454B3EFAC4C0A319444  : public RuntimeObject
{
};
struct ABSTweenPlugin_3_t6D32722320E631CCB96F0ADA615C9F5E568C4720  : public RuntimeObject
{
};
struct ABSTweenPlugin_3_t053B27021E31B21883DF289A9875BD9EB5381671  : public RuntimeObject
{
};
struct ABSTweenPlugin_3_tE5A78BE46D046C07A6356B8AB596B2D00F9295E7  : public RuntimeObject
{
};
struct ABSTweenPlugin_3_t9F8F8099624B165B75CB1E0C53FA9762CB2815FC  : public RuntimeObject
{
};
struct ABSTweenPlugin_3_tDC724E2B66EA33E0E50BFC9D5D6DA6B3C5FA16A1  : public RuntimeObject
{
};
struct ConcurrentDictionary_2_tE5A8639D8AE0AF65ED6A8B7C1089E9F12ADD7B91  : public RuntimeObject
{
	Tables_t6037A68AF76F1F1F11530A3316850BA0C19358EC* ____tables;
	RuntimeObject* ____comparer;
	bool ____growLockArray;
	int32_t ____budget;
	KeyValuePair_2U5BU5D_t146564E6A49A4F28A57A5ED01FB1A805D98D62E6* ____serializationArray;
	int32_t ____serializationConcurrencyLevel;
	int32_t ____serializationCapacity;
};
struct TypeConstructor_1_t6BD2119030A7BD8FE6604F7A5DF2CEF572ECA695  : public RuntimeObject
{
	Func_1_t3FCE602A80D3F788D4898853BA8282C009C88FE2* ___m_ExplicitConstructor;
	Func_1_t3FCE602A80D3F788D4898853BA8282C009C88FE2* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct TypeConstructor_1_t2C599EF20D66173546174E1FEE9032865749569B  : public RuntimeObject
{
	Func_1_t32EEA16CED0DB34319C289C678DEADF9C939FD0B* ___m_ExplicitConstructor;
	Func_1_t32EEA16CED0DB34319C289C678DEADF9C939FD0B* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct TypeConstructor_1_t1112ACFFD3ED7A595EEC07CE30579944DC35A084  : public RuntimeObject
{
	Func_1_t6810F34C7AB650D465D2B9B6A1F0B277DAA46A3C* ___m_ExplicitConstructor;
	Func_1_t6810F34C7AB650D465D2B9B6A1F0B277DAA46A3C* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct TypeConstructor_1_tE2168F7D76AF24C3CDBD874E68275064267A7878  : public RuntimeObject
{
	Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* ___m_ExplicitConstructor;
	Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct TypeConstructor_1_tB483B7FBA1AB31F8944236CE6F404C0070EE46AF  : public RuntimeObject
{
	Func_1_t41D01DF7E7DCF728A5AC2E27578C9EF76548EF27* ___m_ExplicitConstructor;
	Func_1_t41D01DF7E7DCF728A5AC2E27578C9EF76548EF27* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct TypeConstructor_1_t1C87E458BAAB4AD6530734CF23FBF63EB6941B16  : public RuntimeObject
{
	Func_1_t35CA8359B05764A8BDAC8FE106B7288508C45185* ___m_ExplicitConstructor;
	Func_1_t35CA8359B05764A8BDAC8FE106B7288508C45185* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct TypeConstructor_1_t4B02051589066DA6CAD76A46B2FB0896FB6F1353  : public RuntimeObject
{
	Func_1_t9EB8CE9DFD9B703BC79F2087B16EA394B7A9F9A1* ___m_ExplicitConstructor;
	Func_1_t9EB8CE9DFD9B703BC79F2087B16EA394B7A9F9A1* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct TypeConstructor_1_t9D3BD244EB1B72A274F2DF3BD2871FE3D1103947  : public RuntimeObject
{
	Func_1_t0CA4D46E5CA022D9CB87FD09DBA3CCC56AD63B73* ___m_ExplicitConstructor;
	Func_1_t0CA4D46E5CA022D9CB87FD09DBA3CCC56AD63B73* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct TypeConstructor_1_t015B6532B2D88703CA87ACDD65D1F95F946DEBBC  : public RuntimeObject
{
	Func_1_t58C51DB29153B53A9136AE397958F3FCC1F596EC* ___m_ExplicitConstructor;
	Func_1_t58C51DB29153B53A9136AE397958F3FCC1F596EC* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct TypeConstructor_1_t0B54B8DEF0851D113A157F922D908DE987F2BB1B  : public RuntimeObject
{
	Func_1_tBB4369E1B40CFC6872EA9A0B73B958E474BE3CF2* ___m_ExplicitConstructor;
	Func_1_tBB4369E1B40CFC6872EA9A0B73B958E474BE3CF2* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct TypeConstructor_1_tE50E3531CF764328151098BCE662D4FF81F9F4CA  : public RuntimeObject
{
	Func_1_t704C051013549CDD77A31AEC405EA270221633B3* ___m_ExplicitConstructor;
	Func_1_t704C051013549CDD77A31AEC405EA270221633B3* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct TypeConstructor_1_tC9E50C3E7F5087C5A4FFA5280FCE1E9C36B42AF6  : public RuntimeObject
{
	Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431* ___m_ExplicitConstructor;
	Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13  : public RuntimeObject
{
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03  : public RuntimeObject
{
};
struct Unsafe_t013486CBD5A88F5F394651AB34F2AC5AE97E71E4  : public RuntimeObject
{
};
struct UnsafeUtility_tC3E6B7D52A973A81739E8BD97D6E757BA8371D46  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct Vector_t246EF05F1CA5F494FB8B48AB2724DFCD2C2C5A9A  : public RuntimeObject
{
};
struct Volatile_tC26FEDFD254742AD25E4B908FA81293FBBF4ECB0  : public RuntimeObject
{
};
struct TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F  : public RuntimeObject
{
	RuntimeObject* ___TypeConstructor;
};
struct Cache_1_t3D5B27BB72DB559823D975C81EB8746985435377 
{
	union
	{
		struct
		{
		};
		uint8_t Cache_1_tB7C8F25DA26549A8A98B68AFB46FBDD5723178DA__padding[1];
	};
};
struct Cache_1_t6A09774E9EC924515184CB0FBF6689D74CD57526 
{
	union
	{
		struct
		{
		};
		uint8_t Cache_1_tB7C8F25DA26549A8A98B68AFB46FBDD5723178DA__padding[1];
	};
};
struct Cache_1_t1EC3F18F5B6510EED65B625CE37A6C73B0F46377 
{
	union
	{
		struct
		{
		};
		uint8_t Cache_1_tB7C8F25DA26549A8A98B68AFB46FBDD5723178DA__padding[1];
	};
};
struct Cache_1_tB8D73F5DFD6D8711956A5D57AEEA41C64DD59FE6 
{
	union
	{
		struct
		{
		};
		uint8_t Cache_1_tB7C8F25DA26549A8A98B68AFB46FBDD5723178DA__padding[1];
	};
};
struct Cache_1_t60D29BA616C245A5283CB0B5BD4B19DCB7EDCF1C 
{
	union
	{
		struct
		{
		};
		uint8_t Cache_1_tB7C8F25DA26549A8A98B68AFB46FBDD5723178DA__padding[1];
	};
};
struct Cache_1_t4ED442C7D3A39C62CE6AD3207C2A7F04760D2F3C 
{
	union
	{
		struct
		{
		};
		uint8_t Cache_1_tB7C8F25DA26549A8A98B68AFB46FBDD5723178DA__padding[1];
	};
};
struct Cache_1_tC0A5B4DEAAD4F636D5EB7222F76AFA30C44BD765 
{
	union
	{
		struct
		{
		};
		uint8_t Cache_1_tB7C8F25DA26549A8A98B68AFB46FBDD5723178DA__padding[1];
	};
};
struct Cache_1_t1734B78F91A5E97A0376AADF017CDD9C28F0D1E8 
{
	union
	{
		struct
		{
		};
		uint8_t Cache_1_tB7C8F25DA26549A8A98B68AFB46FBDD5723178DA__padding[1];
	};
};
struct Cache_1_t165F6C79CDB8F92D5632BF06B4D2859B4F8CB803 
{
	union
	{
		struct
		{
		};
		uint8_t Cache_1_tB7C8F25DA26549A8A98B68AFB46FBDD5723178DA__padding[1];
	};
};
struct Cache_1_t9D717A73959DD798ED20109ED37309FA61F9047D 
{
	union
	{
		struct
		{
		};
		uint8_t Cache_1_tB7C8F25DA26549A8A98B68AFB46FBDD5723178DA__padding[1];
	};
};
struct Cache_1_t2AE8DCA73B885EC1BE3528F43866A2B28BA27459 
{
	union
	{
		struct
		{
		};
		uint8_t Cache_1_tB7C8F25DA26549A8A98B68AFB46FBDD5723178DA__padding[1];
	};
};
struct Cache_1_tC191D4861D1556D15EB5651A45361205B0FFEB36 
{
	union
	{
		struct
		{
		};
		uint8_t Cache_1_tB7C8F25DA26549A8A98B68AFB46FBDD5723178DA__padding[1];
	};
};
struct BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D 
{
	BatchDrawCommand_t9DAB9B739DA9EBC6B1BB0D2DD51AF65B12F66BF0* ___drawCommands;
	int32_t* ___visibleInstances;
	BatchDrawRange_t736D745E918A629658B80A0F7D2D17DAFBA6172F* ___drawRanges;
	float* ___instanceSortingPositions;
	int32_t* ___drawCommandPickingInstanceIDs;
	int32_t ___drawCommandCount;
	int32_t ___visibleInstanceCount;
	int32_t ___drawRangeCount;
	int32_t ___instanceSortingPositionFloatCount;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	Il2CppChar ___m_value;
};
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	float ___r;
	float ___g;
	float ___b;
	float ___a;
};
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___rgba;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___r;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_OffsetPadding[1];
			uint8_t ___g;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_OffsetPadding[2];
			uint8_t ___b;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_OffsetPadding[3];
			uint8_t ___a;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_forAlignmentOnly;
		};
	};
};
struct ColorOptions_t9F2151E3A21F3FE2A41BEEF7D288D670C2685F39 
{
	bool ___alphaOnly;
};
struct ColorOptions_t9F2151E3A21F3FE2A41BEEF7D288D670C2685F39_marshaled_pinvoke
{
	int32_t ___alphaOnly;
};
struct ColorOptions_t9F2151E3A21F3FE2A41BEEF7D288D670C2685F39_marshaled_com
{
	int32_t ___alphaOnly;
};
struct Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___flags;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___flags_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___hi_OffsetPadding[4];
			int32_t ___hi;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___hi_OffsetPadding_forAlignmentOnly[4];
			int32_t ___hi_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___lo_OffsetPadding[8];
			int32_t ___lo;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___lo_OffsetPadding_forAlignmentOnly[8];
			int32_t ___lo_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___mid_OffsetPadding[12];
			int32_t ___mid;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___mid_OffsetPadding_forAlignmentOnly[12];
			int32_t ___mid_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ulomidLE_OffsetPadding[8];
			uint64_t ___ulomidLE;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ulomidLE_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___ulomidLE_forAlignmentOnly;
		};
	};
};
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	double ___m_value;
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
struct FloatOptions_t8A9B05DB7CF6CC90A27F300C2977D91A48B3FEF5 
{
	bool ___snapping;
};
struct FloatOptions_t8A9B05DB7CF6CC90A27F300C2977D91A48B3FEF5_marshaled_pinvoke
{
	int32_t ___snapping;
};
struct FloatOptions_t8A9B05DB7CF6CC90A27F300C2977D91A48B3FEF5_marshaled_com
{
	int32_t ___snapping;
};
struct GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D 
{
	int32_t ___m_X;
	int32_t ___m_Y;
	int32_t ___m_Width;
	int32_t ___m_Height;
};
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	int16_t ___m_value;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	int64_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 
{
	float ___m_red;
	float ___m_green;
	float ___m_blue;
	float ___m_intensity;
};
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	float ___m00;
	float ___m10;
	float ___m20;
	float ___m30;
	float ___m01;
	float ___m11;
	float ___m21;
	float ___m31;
	float ___m02;
	float ___m12;
	float ___m22;
	float ___m32;
	float ___m03;
	float ___m13;
	float ___m23;
	float ___m33;
};
struct MethodBase_t  : public MemberInfo_t
{
};
struct NavMeshBuildMarkup_tC2D636663691297A05F32A8B2B8CAA7108FEE8AC 
{
	int32_t ___m_OverrideArea;
	int32_t ___m_Area;
	int32_t ___m_InheritIgnoreFromBuild;
	int32_t ___m_IgnoreFromBuild;
	int32_t ___m_OverrideGenerateLinks;
	int32_t ___m_GenerateLinks;
	int32_t ___m_InstanceID;
	int32_t ___m_IgnoreChildren;
};
struct NoOptions_t2B4A2CA3C472B5AC37AACC090B1D0B27BCF4307E 
{
	union
	{
		struct
		{
		};
		uint8_t NoOptions_t2B4A2CA3C472B5AC37AACC090B1D0B27BCF4307E__padding[1];
	};
};
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	float ___m_XMin;
	float ___m_YMin;
	float ___m_Width;
	float ___m_Height;
};
struct RectOptions_tCE72F3B850FF80059E448A0ED2AA3FF16EE5EDAC 
{
	bool ___snapping;
};
struct RectOptions_tCE72F3B850FF80059E448A0ED2AA3FF16EE5EDAC_marshaled_pinvoke
{
	int32_t ___snapping;
};
struct RectOptions_tCE72F3B850FF80059E448A0ED2AA3FF16EE5EDAC_marshaled_com
{
	int32_t ___snapping;
};
struct Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___byte_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___byte_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_1_OffsetPadding[1];
			uint8_t ___byte_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_1_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___byte_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_2_OffsetPadding[2];
			uint8_t ___byte_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_2_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___byte_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_3_OffsetPadding[3];
			uint8_t ___byte_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_3_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___byte_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_4_OffsetPadding[4];
			uint8_t ___byte_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_4_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___byte_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_5_OffsetPadding[5];
			uint8_t ___byte_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_5_OffsetPadding_forAlignmentOnly[5];
			uint8_t ___byte_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_6_OffsetPadding[6];
			uint8_t ___byte_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_6_OffsetPadding_forAlignmentOnly[6];
			uint8_t ___byte_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_7_OffsetPadding[7];
			uint8_t ___byte_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_7_OffsetPadding_forAlignmentOnly[7];
			uint8_t ___byte_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_8_OffsetPadding[8];
			uint8_t ___byte_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_8_OffsetPadding_forAlignmentOnly[8];
			uint8_t ___byte_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_9_OffsetPadding[9];
			uint8_t ___byte_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_9_OffsetPadding_forAlignmentOnly[9];
			uint8_t ___byte_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_10_OffsetPadding[10];
			uint8_t ___byte_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_10_OffsetPadding_forAlignmentOnly[10];
			uint8_t ___byte_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_11_OffsetPadding[11];
			uint8_t ___byte_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_11_OffsetPadding_forAlignmentOnly[11];
			uint8_t ___byte_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_12_OffsetPadding[12];
			uint8_t ___byte_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_12_OffsetPadding_forAlignmentOnly[12];
			uint8_t ___byte_12_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_13_OffsetPadding[13];
			uint8_t ___byte_13;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_13_OffsetPadding_forAlignmentOnly[13];
			uint8_t ___byte_13_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_14_OffsetPadding[14];
			uint8_t ___byte_14;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_14_OffsetPadding_forAlignmentOnly[14];
			uint8_t ___byte_14_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_15_OffsetPadding[15];
			uint8_t ___byte_15;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_15_OffsetPadding_forAlignmentOnly[15];
			uint8_t ___byte_15_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int8_t ___sbyte_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___sbyte_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_1_OffsetPadding[1];
			int8_t ___sbyte_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_1_OffsetPadding_forAlignmentOnly[1];
			int8_t ___sbyte_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_2_OffsetPadding[2];
			int8_t ___sbyte_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_2_OffsetPadding_forAlignmentOnly[2];
			int8_t ___sbyte_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_3_OffsetPadding[3];
			int8_t ___sbyte_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_3_OffsetPadding_forAlignmentOnly[3];
			int8_t ___sbyte_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_4_OffsetPadding[4];
			int8_t ___sbyte_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___sbyte_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_5_OffsetPadding[5];
			int8_t ___sbyte_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_5_OffsetPadding_forAlignmentOnly[5];
			int8_t ___sbyte_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_6_OffsetPadding[6];
			int8_t ___sbyte_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_6_OffsetPadding_forAlignmentOnly[6];
			int8_t ___sbyte_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_7_OffsetPadding[7];
			int8_t ___sbyte_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_7_OffsetPadding_forAlignmentOnly[7];
			int8_t ___sbyte_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_8_OffsetPadding[8];
			int8_t ___sbyte_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_8_OffsetPadding_forAlignmentOnly[8];
			int8_t ___sbyte_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_9_OffsetPadding[9];
			int8_t ___sbyte_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_9_OffsetPadding_forAlignmentOnly[9];
			int8_t ___sbyte_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_10_OffsetPadding[10];
			int8_t ___sbyte_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_10_OffsetPadding_forAlignmentOnly[10];
			int8_t ___sbyte_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_11_OffsetPadding[11];
			int8_t ___sbyte_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_11_OffsetPadding_forAlignmentOnly[11];
			int8_t ___sbyte_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_12_OffsetPadding[12];
			int8_t ___sbyte_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_12_OffsetPadding_forAlignmentOnly[12];
			int8_t ___sbyte_12_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_13_OffsetPadding[13];
			int8_t ___sbyte_13;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_13_OffsetPadding_forAlignmentOnly[13];
			int8_t ___sbyte_13_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_14_OffsetPadding[14];
			int8_t ___sbyte_14;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_14_OffsetPadding_forAlignmentOnly[14];
			int8_t ___sbyte_14_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_15_OffsetPadding[15];
			int8_t ___sbyte_15;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_15_OffsetPadding_forAlignmentOnly[15];
			int8_t ___sbyte_15_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint16_t ___uint16_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint16_t ___uint16_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_1_OffsetPadding[2];
			uint16_t ___uint16_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_1_OffsetPadding_forAlignmentOnly[2];
			uint16_t ___uint16_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_2_OffsetPadding[4];
			uint16_t ___uint16_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_2_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___uint16_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_3_OffsetPadding[6];
			uint16_t ___uint16_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_3_OffsetPadding_forAlignmentOnly[6];
			uint16_t ___uint16_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_4_OffsetPadding[8];
			uint16_t ___uint16_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_4_OffsetPadding_forAlignmentOnly[8];
			uint16_t ___uint16_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_5_OffsetPadding[10];
			uint16_t ___uint16_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_5_OffsetPadding_forAlignmentOnly[10];
			uint16_t ___uint16_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_6_OffsetPadding[12];
			uint16_t ___uint16_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_6_OffsetPadding_forAlignmentOnly[12];
			uint16_t ___uint16_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_7_OffsetPadding[14];
			uint16_t ___uint16_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_7_OffsetPadding_forAlignmentOnly[14];
			uint16_t ___uint16_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int16_t ___int16_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___int16_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_1_OffsetPadding[2];
			int16_t ___int16_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_1_OffsetPadding_forAlignmentOnly[2];
			int16_t ___int16_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_2_OffsetPadding[4];
			int16_t ___int16_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_2_OffsetPadding_forAlignmentOnly[4];
			int16_t ___int16_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_3_OffsetPadding[6];
			int16_t ___int16_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_3_OffsetPadding_forAlignmentOnly[6];
			int16_t ___int16_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_4_OffsetPadding[8];
			int16_t ___int16_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_4_OffsetPadding_forAlignmentOnly[8];
			int16_t ___int16_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_5_OffsetPadding[10];
			int16_t ___int16_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_5_OffsetPadding_forAlignmentOnly[10];
			int16_t ___int16_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_6_OffsetPadding[12];
			int16_t ___int16_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_6_OffsetPadding_forAlignmentOnly[12];
			int16_t ___int16_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_7_OffsetPadding[14];
			int16_t ___int16_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_7_OffsetPadding_forAlignmentOnly[14];
			int16_t ___int16_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint32_t ___uint32_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint32_t ___uint32_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint32_1_OffsetPadding[4];
			uint32_t ___uint32_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint32_1_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___uint32_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint32_2_OffsetPadding[8];
			uint32_t ___uint32_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint32_2_OffsetPadding_forAlignmentOnly[8];
			uint32_t ___uint32_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint32_3_OffsetPadding[12];
			uint32_t ___uint32_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint32_3_OffsetPadding_forAlignmentOnly[12];
			uint32_t ___uint32_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___int32_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___int32_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int32_1_OffsetPadding[4];
			int32_t ___int32_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int32_1_OffsetPadding_forAlignmentOnly[4];
			int32_t ___int32_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int32_2_OffsetPadding[8];
			int32_t ___int32_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int32_2_OffsetPadding_forAlignmentOnly[8];
			int32_t ___int32_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int32_3_OffsetPadding[12];
			int32_t ___int32_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int32_3_OffsetPadding_forAlignmentOnly[12];
			int32_t ___int32_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint64_t ___uint64_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint64_t ___uint64_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint64_1_OffsetPadding[8];
			uint64_t ___uint64_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint64_1_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___uint64_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int64_t ___int64_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___int64_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int64_1_OffsetPadding[8];
			int64_t ___int64_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int64_1_OffsetPadding_forAlignmentOnly[8];
			int64_t ___int64_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			float ___single_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___single_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___single_1_OffsetPadding[4];
			float ___single_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___single_1_OffsetPadding_forAlignmentOnly[4];
			float ___single_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___single_2_OffsetPadding[8];
			float ___single_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___single_2_OffsetPadding_forAlignmentOnly[8];
			float ___single_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___single_3_OffsetPadding[12];
			float ___single_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___single_3_OffsetPadding_forAlignmentOnly[12];
			float ___single_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			double ___double_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___double_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___double_1_OffsetPadding[8];
			double ___double_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___double_1_OffsetPadding_forAlignmentOnly[8];
			double ___double_1_forAlignmentOnly;
		};
	};
};
struct SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5 
{
	int8_t ___m_value;
};
struct SafeModeReport_t36C3527D96D574F81DB1748D1E856C7A539A25B9 
{
	int32_t ___U3CtotMissingTargetOrFieldErrorsU3Ek__BackingField;
	int32_t ___U3CtotCallbackErrorsU3Ek__BackingField;
	int32_t ___U3CtotStartupErrorsU3Ek__BackingField;
	int32_t ___U3CtotUnsetErrorsU3Ek__BackingField;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct UILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC 
{
	int32_t ___startCharIdx;
	int32_t ___height;
	float ___topY;
	float ___leading;
};
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	uint16_t ___m_value;
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value;
};
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	uint64_t ___m_value;
};
struct UIntPtr_t 
{
	void* ____pointer;
};
struct UintOptions_t06BB035A1F0801FF6D4721F6F98F36DDD93E53A3 
{
	bool ___isNegativeChangeValue;
};
struct UintOptions_t06BB035A1F0801FF6D4721F6F98F36DDD93E53A3_marshaled_pinvoke
{
	int32_t ___isNegativeChangeValue;
};
struct UintOptions_t06BB035A1F0801FF6D4721F6F98F36DDD93E53A3_marshaled_com
{
	int32_t ___isNegativeChangeValue;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	float ___x;
	float ___y;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	float ___x;
	float ___y;
	float ___z;
};
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};
struct OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 
{
	int32_t ___order;
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___callback;
};
struct OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_marshaled_pinvoke
{
	int32_t ___order;
	Il2CppMethodPointer ___callback;
};
struct OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_marshaled_com
{
	int32_t ___order;
	Il2CppMethodPointer ___callback;
};
struct DecCalc_t0E9BD1BAF25BAD15940FF4BAB400D012A8DEBCA9 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			uint32_t ___uflags;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint32_t ___uflags_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uhi_OffsetPadding[4];
			uint32_t ___uhi;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uhi_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___uhi_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ulo_OffsetPadding[8];
			uint32_t ___ulo;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ulo_OffsetPadding_forAlignmentOnly[8];
			uint32_t ___ulo_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___umid_OffsetPadding[12];
			uint32_t ___umid;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___umid_OffsetPadding_forAlignmentOnly[12];
			uint32_t ___umid_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ulomidLE_OffsetPadding[8];
			uint64_t ___ulomidLE;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ulomidLE_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___ulomidLE_forAlignmentOnly;
		};
	};
};
struct LoadTextures_t5266AA4DE267A7C97DF5540A2EA6B6CCC3C10849 
{
	String_t* ___link;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___texture;
};
struct LoadTextures_t5266AA4DE267A7C97DF5540A2EA6B6CCC3C10849_marshaled_pinvoke
{
	char* ___link;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___texture;
};
struct LoadTextures_t5266AA4DE267A7C97DF5540A2EA6B6CCC3C10849_marshaled_com
{
	Il2CppChar* ___link;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___texture;
};
struct SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC 
{
	Il2CppChar ___First;
	Il2CppChar ___Last;
};
struct SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC_marshaled_pinvoke
{
	uint8_t ___First;
	uint8_t ___Last;
};
struct SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC_marshaled_com
{
	uint8_t ___First;
	uint8_t ___Last;
};
struct WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 
{
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* ___m_DelagateCallback;
	RuntimeObject* ___m_DelagateState;
	ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* ___m_WaitHandle;
};
struct WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_marshaled_pinvoke
{
	Il2CppMethodPointer ___m_DelagateCallback;
	Il2CppIUnknown* ___m_DelagateState;
	ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* ___m_WaitHandle;
};
struct WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_marshaled_com
{
	Il2CppMethodPointer ___m_DelagateCallback;
	Il2CppIUnknown* ___m_DelagateState;
	ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* ___m_WaitHandle;
};
struct VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99 
{
	RuntimeObject* ___Value;
};
struct VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99_marshaled_pinvoke
{
	RuntimeObject* ___Value;
};
struct VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99_marshaled_com
{
	RuntimeObject* ___Value;
};
struct DigitsAndNullTerminator_tEF216B2D9886B3B6EBDBBA0E540214C013C02ECA 
{
	union
	{
		struct
		{
		};
		uint8_t DigitsAndNullTerminator_tEF216B2D9886B3B6EBDBBA0E540214C013C02ECA__padding[102];
	};
};
struct Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 
{
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A ___register;
};
struct Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A 
{
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A ___register;
};
struct Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 
{
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A ___register;
};
struct AutoPlay_t384F947DD2D760EFBA1BE8CDD9D7C36F84CA9BAA 
{
	int32_t ___value__;
};
struct AxisConstraint_t44CDC917B5BB2911F8930F8886A6581C09901AB6 
{
	int32_t ___value__;
};
struct CollisionPairHeaderFlags_tBA40F470BC1564B84C3093CEA5761804FA0650C3 
{
	uint16_t ___value__;
};
struct Color2_t35316BB1AA7A5F82C686D69DA763B9E99A72EEAA 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___ca;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___cb;
};
struct CombineInstance_t77DDB096E69D0AD2690C57046C5ACD1239451BBE 
{
	int32_t ___m_MeshInstanceID;
	int32_t ___m_SubMeshIndex;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_Transform;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_LightmapScaleOffset;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RealtimeLightmapScaleOffset;
};
struct CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___sphereCenter;
	float ___sphereRadius;
	int32_t ___cullingPlaneOffset;
	int32_t ___cullingPlaneCount;
	float ___cascadeBlendCullingFactor;
	float ___nearPlane;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___cullingMatrix;
};
struct Delegate_t  : public RuntimeObject
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	RuntimeObject* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	bool ___method_is_virtual;
};
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Ease_t1A7F82C47C5B94B9CF9DF46FC58F80488BC6A7EB 
{
	int32_t ___value__;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct FalloffType_tE9BECCB411DA63109760103AF7476F422A01376D 
{
	uint8_t ___value__;
};
struct Int32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C 
{
	int32_t ___value__;
};
struct LightMode_t058E4E7AAE5689BCFF46BB8E0259D90D227E7FF9 
{
	uint8_t ___value__;
};
struct LightType_t97C5050F2F742FBF050FEB8FC5131A9A8DB50D26 
{
	uint8_t ___value__;
};
struct LogBehaviour_t2FD320D27583DB4381604A338ACB97E18D9AEB2D 
{
	int32_t ___value__;
};
struct LoopType_t3128AD2C907BAF825D244B38F274987C1AA08FE5 
{
	int32_t ___value__;
};
struct ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960 
{
	intptr_t ___actor;
	intptr_t ___otherActor;
	intptr_t ___shape;
	intptr_t ___otherShape;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___otherRotation;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___otherPosition;
	int32_t ___numContacts;
	intptr_t ___contacts;
};
struct NavMeshBuildSourceShape_t0D044D75712305894A038997DAFB311723771268 
{
	int32_t ___value__;
};
struct NestedTweenFailureBehaviour_tCE5490C534CDFB141BBF7E191869C7AF9545A0DE 
{
	int32_t ___value__;
};
struct OrientType_tF2E494A2222A1F08B76638C94EAA2DAB5256B94F 
{
	int32_t ___value__;
};
struct PathMode_tAA26E77DB867E2EC38977ED3CA47F083379B29FD 
{
	int32_t ___value__;
};
struct Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal;
	float ___m_Distance;
};
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module;
	float ___distance;
	float ___index;
	int32_t ___depth;
	int32_t ___sortingGroupID;
	int32_t ___sortingGroupOrder;
	int32_t ___sortingLayer;
	int32_t ___sortingOrder;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition;
	int32_t ___displayIndex;
};
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_pinvoke
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module;
	float ___distance;
	float ___index;
	int32_t ___depth;
	int32_t ___sortingGroupID;
	int32_t ___sortingGroupOrder;
	int32_t ___sortingLayer;
	int32_t ___sortingOrder;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition;
	int32_t ___displayIndex;
};
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_com
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module;
	float ___distance;
	float ___index;
	int32_t ___depth;
	int32_t ___sortingGroupID;
	int32_t ___sortingGroupOrder;
	int32_t ___sortingLayer;
	int32_t ___sortingOrder;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition;
	int32_t ___displayIndex;
};
struct RewindCallbackMode_t402F5CAC86F25ECE57B222149279FEA57F7E0038 
{
	int32_t ___value__;
};
struct RotateMode_t572EF776099E2A765339DCF87AF895107C77A989 
{
	int32_t ___value__;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct SafeModeLogBehaviour_tD95FFDF3834C7C85E9BA3B67DEB7D37A92CC1076 
{
	int32_t ___value__;
};
struct ScrambleMode_t21D45529B4B9E069A015791B7C203D93BE14401C 
{
	int32_t ___value__;
};
struct SomeStruct_tF35320787FA3D2839B1E75EBDCD3D6CCA6155BF9 
{
	int32_t ___Int;
	float ___Float;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Vector;
};
struct SpecialStartupMode_t872762964D80B3C1F6CE4024236A20D3D889AC44 
{
	int32_t ___value__;
};
struct TweenType_t50BBF64E13F70041085C51B9E0CB40FA61212F3E 
{
	int32_t ___value__;
};
struct UICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___cursorPos;
	float ___charWidth;
};
struct UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___normal;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___tangent;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___uv0;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___uv1;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___uv2;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___uv3;
};
struct UpdateType_tA521F450D94A1E8A88C6967093E093777BBA4C57 
{
	int32_t ___value__;
};
struct SafeModeReportType_tA09ECB3EEAC8B926F9D34CE6FC23F28FB2045C8E 
{
	int32_t ___value__;
};
struct ABSSequentiable_t05DF85FC63E3650D2D4CF6ABBA0F43263EB8CE89  : public RuntimeObject
{
	int32_t ___tweenType;
	float ___sequencedPosition;
	float ___sequencedEndPosition;
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onStart;
};
struct ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B 
{
	int32_t ___m_BodyID;
	int32_t ___m_OtherBodyID;
	intptr_t ___m_StartPtr;
	uint32_t ___m_NbPairs;
	uint16_t ___m_Flags;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity;
};
struct LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21 
{
	int32_t ___instanceID;
	int32_t ___cookieID;
	float ___cookieScale;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___color;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___indirectColor;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orientation;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position;
	float ___range;
	float ___coneAngle;
	float ___innerConeAngle;
	float ___shape0;
	float ___shape1;
	uint8_t ___type;
	uint8_t ___mode;
	uint8_t ___shadow;
	uint8_t ___falloff;
};
struct MulticastDelegate_t  : public Delegate_t
{
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates;
};
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates;
};
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates;
};
struct NavMeshBuildSource_tAC4DFC9A75D986628DC167421C2ECB3606F0C5DD 
{
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_Transform;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Size;
	int32_t ___m_Shape;
	int32_t ___m_Area;
	int32_t ___m_InstanceID;
	int32_t ___m_ComponentID;
	int32_t ___m_GenerateLinks;
};
struct PathOptions_t76F1CBAC082454349D530B799121EB15BFA4CB3A 
{
	int32_t ___mode;
	int32_t ___orientType;
	int32_t ___lockPositionAxis;
	int32_t ___lockRotationAxis;
	bool ___isClosedPath;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lookAtPosition;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___lookAtTransform;
	float ___lookAhead;
	bool ___hasCustomForwardDirection;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___forward;
	bool ___useLocalPosition;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent;
	bool ___isRigidbody;
	bool ___isRigidbody2D;
	bool ___stableZRotation;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___startupRot;
	float ___startupZRot;
	bool ___addedExtraStartWp;
	bool ___addedExtraEndWp;
};
struct PathOptions_t76F1CBAC082454349D530B799121EB15BFA4CB3A_marshaled_pinvoke
{
	int32_t ___mode;
	int32_t ___orientType;
	int32_t ___lockPositionAxis;
	int32_t ___lockRotationAxis;
	int32_t ___isClosedPath;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lookAtPosition;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___lookAtTransform;
	float ___lookAhead;
	int32_t ___hasCustomForwardDirection;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___forward;
	int32_t ___useLocalPosition;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent;
	int32_t ___isRigidbody;
	int32_t ___isRigidbody2D;
	int32_t ___stableZRotation;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___startupRot;
	float ___startupZRot;
	int32_t ___addedExtraStartWp;
	int32_t ___addedExtraEndWp;
};
struct PathOptions_t76F1CBAC082454349D530B799121EB15BFA4CB3A_marshaled_com
{
	int32_t ___mode;
	int32_t ___orientType;
	int32_t ___lockPositionAxis;
	int32_t ___lockRotationAxis;
	int32_t ___isClosedPath;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lookAtPosition;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___lookAtTransform;
	float ___lookAhead;
	int32_t ___hasCustomForwardDirection;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___forward;
	int32_t ___useLocalPosition;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent;
	int32_t ___isRigidbody;
	int32_t ___isRigidbody2D;
	int32_t ___stableZRotation;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___startupRot;
	float ___startupZRot;
	int32_t ___addedExtraStartWp;
	int32_t ___addedExtraEndWp;
};
struct QuaternionOptions_t1B83700718F7417854E4B6FB0E1726E183F69718 
{
	int32_t ___rotateMode;
	int32_t ___axisConstraint;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___up;
	bool ___dynamicLookAt;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___dynamicLookAtWorldPosition;
};
struct QuaternionOptions_t1B83700718F7417854E4B6FB0E1726E183F69718_marshaled_pinvoke
{
	int32_t ___rotateMode;
	int32_t ___axisConstraint;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___up;
	int32_t ___dynamicLookAt;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___dynamicLookAtWorldPosition;
};
struct QuaternionOptions_t1B83700718F7417854E4B6FB0E1726E183F69718_marshaled_com
{
	int32_t ___rotateMode;
	int32_t ___axisConstraint;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___up;
	int32_t ___dynamicLookAt;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___dynamicLookAtWorldPosition;
};
struct StringOptions_tC70D70DB6854CE62E6BBC3AA066517835919E9FA 
{
	bool ___richTextEnabled;
	int32_t ___scrambleMode;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___scrambledChars;
	int32_t ___startValueStrippedLength;
	int32_t ___changeValueStrippedLength;
};
struct StringOptions_tC70D70DB6854CE62E6BBC3AA066517835919E9FA_marshaled_pinvoke
{
	int32_t ___richTextEnabled;
	int32_t ___scrambleMode;
	uint8_t* ___scrambledChars;
	int32_t ___startValueStrippedLength;
	int32_t ___changeValueStrippedLength;
};
struct StringOptions_tC70D70DB6854CE62E6BBC3AA066517835919E9FA_marshaled_com
{
	int32_t ___richTextEnabled;
	int32_t ___scrambleMode;
	uint8_t* ___scrambledChars;
	int32_t ___startValueStrippedLength;
	int32_t ___changeValueStrippedLength;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct Vector3ArrayOptions_t0F50A7A54A860E4604486511E285C952557C6644 
{
	int32_t ___axisConstraint;
	bool ___snapping;
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___durations;
};
struct Vector3ArrayOptions_t0F50A7A54A860E4604486511E285C952557C6644_marshaled_pinvoke
{
	int32_t ___axisConstraint;
	int32_t ___snapping;
	Il2CppSafeArray* ___durations;
};
struct Vector3ArrayOptions_t0F50A7A54A860E4604486511E285C952557C6644_marshaled_com
{
	int32_t ___axisConstraint;
	int32_t ___snapping;
	Il2CppSafeArray* ___durations;
};
struct VectorOptions_t2814CC842518C92C9DFC5DE6F7A73824758D3EF9 
{
	int32_t ___axisConstraint;
	bool ___snapping;
};
struct VectorOptions_t2814CC842518C92C9DFC5DE6F7A73824758D3EF9_marshaled_pinvoke
{
	int32_t ___axisConstraint;
	int32_t ___snapping;
};
struct VectorOptions_t2814CC842518C92C9DFC5DE6F7A73824758D3EF9_marshaled_com
{
	int32_t ___axisConstraint;
	int32_t ___snapping;
};
struct DOGetter_1_t4DFFF7454A1BCD259676FED36CCF2114E34B5B95  : public MulticastDelegate_t
{
};
struct DOGetter_1_t423CA9B377A96EA7C69ABA0C83C81B8D5B045E85  : public MulticastDelegate_t
{
};
struct DOGetter_1_tB89DD12456B8E79576BB70E1CA6DF899686410D3  : public MulticastDelegate_t
{
};
struct DOGetter_1_t64F1C0E113DC45CC9A1FD194A80B7B4C40AC4923  : public MulticastDelegate_t
{
};
struct DOGetter_1_tE8B39477E96408653D0242624F4D7E48ABFD1B03  : public MulticastDelegate_t
{
};
struct DOGetter_1_t187AC9EC362AB6EF9475A1B6469E2261EDF9DEE1  : public MulticastDelegate_t
{
};
struct DOGetter_1_tF4FBD9712869BD6129C41ADBD9D3DCD51CBB4746  : public MulticastDelegate_t
{
};
struct DOGetter_1_t13276681BE97FCE6AB699EF1F894EA98C825FE66  : public MulticastDelegate_t
{
};
struct DOGetter_1_t709462C08281F3AA5DFEF36CAF91404B1004C338  : public MulticastDelegate_t
{
};
struct DOGetter_1_t7663EC1A34326612C559E1AC30ED719944D21731  : public MulticastDelegate_t
{
};
struct DOGetter_1_t8DA6E4433ACD8058D6EAE625137110D1FB3DFC14  : public MulticastDelegate_t
{
};
struct DOSetter_1_t5E2B8A5C7040616545D7D029D20C4BF5F3E6DA89  : public MulticastDelegate_t
{
};
struct DOSetter_1_t9EFF8DD70A15F455A6FE698A22BD0FE9683AC28E  : public MulticastDelegate_t
{
};
struct DOSetter_1_t0DAD29F0B667B9ED214C9F6B9C4D7093FE7C0D9C  : public MulticastDelegate_t
{
};
struct DOSetter_1_t02E8F9920F174322F1CF5AC8BCDEAABD14A03358  : public MulticastDelegate_t
{
};
struct DOSetter_1_t856F6D96CAAFD28A21A398D2B3838D27D7E9BD16  : public MulticastDelegate_t
{
};
struct Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4  : public MulticastDelegate_t
{
};
struct Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431  : public MulticastDelegate_t
{
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C  : public ABSSequentiable_t05DF85FC63E3650D2D4CF6ABBA0F43263EB8CE89
{
	float ___timeScale;
	bool ___isBackwards;
	bool ___isInverted;
	RuntimeObject* ___id;
	String_t* ___stringId;
	int32_t ___intId;
	RuntimeObject* ___target;
	int32_t ___updateType;
	bool ___isIndependentUpdate;
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onPlay;
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onPause;
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onRewind;
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onUpdate;
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onStepComplete;
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onComplete;
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onKill;
	TweenCallback_1_tF0ADCA0C226C9C243ACB55E67D852E4BB53AEB67* ___onWaypointChange;
	bool ___isFrom;
	bool ___isBlendable;
	bool ___isRecyclable;
	bool ___isSpeedBased;
	bool ___autoKill;
	float ___duration;
	int32_t ___loops;
	int32_t ___loopType;
	float ___delay;
	bool ___U3CisRelativeU3Ek__BackingField;
	int32_t ___easeType;
	EaseFunction_t0F945D9D726B0915C5FBF30862E987EC3AC12A04* ___customEase;
	float ___easeOvershootOrAmplitude;
	float ___easePeriod;
	String_t* ___debugTargetId;
	Type_t* ___typeofT1;
	Type_t* ___typeofT2;
	Type_t* ___typeofTPlugOptions;
	bool ___U3CactiveU3Ek__BackingField;
	bool ___isSequenced;
	Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* ___sequenceParent;
	int32_t ___activeId;
	int32_t ___specialStartupMode;
	bool ___creationLocked;
	bool ___startupDone;
	bool ___U3CplayedOnceU3Ek__BackingField;
	float ___U3CpositionU3Ek__BackingField;
	float ___fullDuration;
	int32_t ___completedLoops;
	bool ___isPlaying;
	bool ___isComplete;
	float ___elapsedDelay;
	bool ___delayComplete;
	int32_t ___miscInt;
};
struct Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140  : public Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C
{
	bool ___hasManuallySetStartValue;
	bool ___isFromAllowed;
};
struct TweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3  : public Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___startValue;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___endValue;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___changeValue;
	ColorOptions_t9F2151E3A21F3FE2A41BEEF7D288D670C2685F39 ___plugOptions;
	DOGetter_1_t4DFFF7454A1BCD259676FED36CCF2114E34B5B95* ___getter;
	DOSetter_1_t5E2B8A5C7040616545D7D029D20C4BF5F3E6DA89* ___setter;
	ABSTweenPlugin_3_tC26278B0CA053BAF4547345679D3E8D1F748AC12* ___tweenPlugin;
	Type_t* ____colorType;
	Type_t* ____color32Type;
};
struct TweenerCore_3_tEAA0D8AFDE65BA4B76FB61D33C4769C339E17949  : public Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140
{
	Color2_t35316BB1AA7A5F82C686D69DA763B9E99A72EEAA ___startValue;
	Color2_t35316BB1AA7A5F82C686D69DA763B9E99A72EEAA ___endValue;
	Color2_t35316BB1AA7A5F82C686D69DA763B9E99A72EEAA ___changeValue;
	ColorOptions_t9F2151E3A21F3FE2A41BEEF7D288D670C2685F39 ___plugOptions;
	DOGetter_1_t70E6A9734FBC296B3CB5063E8F4EE3C37A648D54* ___getter;
	DOSetter_1_t41F9F9F15EDD1C77118E90D2FB8D86655B6D8B95* ___setter;
	ABSTweenPlugin_3_t2B071FD0D9C7410BEDE633CDB14F13654FC2A973* ___tweenPlugin;
	Type_t* ____colorType;
	Type_t* ____color32Type;
};
struct TweenerCore_3_tD1EF4B796EFD7E02D28B6A0E0DD08737178F54E9  : public Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140
{
	double ___startValue;
	double ___endValue;
	double ___changeValue;
	NoOptions_t2B4A2CA3C472B5AC37AACC090B1D0B27BCF4307E ___plugOptions;
	DOGetter_1_tBBA11DAFDBCE2EA3888D6532DC2E9A31FD2571F1* ___getter;
	DOSetter_1_t4B1A4782CD18775DA1DED50CE3D612E44203BAF1* ___setter;
	ABSTweenPlugin_3_t7A4F79038C7079DFB69340991577802A9439A59D* ___tweenPlugin;
	Type_t* ____colorType;
	Type_t* ____color32Type;
};
struct TweenerCore_3_t9535EBAA281A1D58F2F4C103D11394072D85754C  : public Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140
{
	int32_t ___startValue;
	int32_t ___endValue;
	int32_t ___changeValue;
	NoOptions_t2B4A2CA3C472B5AC37AACC090B1D0B27BCF4307E ___plugOptions;
	DOGetter_1_t126D20ADA2999ECC8E5336D1EDE57C560F53784B* ___getter;
	DOSetter_1_t034B092AF3597985E5ACEBF7D43ED7297EF3C6A8* ___setter;
	ABSTweenPlugin_3_t79D91C3E0DB82A874E072CF1EF486B5F78D7F8DE* ___tweenPlugin;
	Type_t* ____colorType;
	Type_t* ____color32Type;
};
struct TweenerCore_3_t5D0EC4E2435A9E48640918EEBB42A14E29F9E554  : public Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140
{
	int64_t ___startValue;
	int64_t ___endValue;
	int64_t ___changeValue;
	NoOptions_t2B4A2CA3C472B5AC37AACC090B1D0B27BCF4307E ___plugOptions;
	DOGetter_1_tB91953D825596DF9261D34075CD34AEBD9EBF7D2* ___getter;
	DOSetter_1_t3D1FA50DC1B5C50FA55EFD9A39EECC7D2F841917* ___setter;
	ABSTweenPlugin_3_t7341CD6BAA9CD38815B6A9E3CFF47989DE634ABF* ___tweenPlugin;
	Type_t* ____colorType;
	Type_t* ____color32Type;
};
struct TweenerCore_3_t309A316DD98511F745EEA5D99CEC7179C868AB59  : public Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140
{
	RuntimeObject* ___startValue;
	RuntimeObject* ___endValue;
	RuntimeObject* ___changeValue;
	NoOptions_t2B4A2CA3C472B5AC37AACC090B1D0B27BCF4307E ___plugOptions;
	DOGetter_1_t423CA9B377A96EA7C69ABA0C83C81B8D5B045E85* ___getter;
	DOSetter_1_t6889207117879689DE539960755CE5F277F65C0F* ___setter;
	ABSTweenPlugin_3_tD50BA08812AFCD7C2C34161AA370ADAD96ED9147* ___tweenPlugin;
	Type_t* ____colorType;
	Type_t* ____color32Type;
};
struct TweenerCore_3_tA6865573C9B15C90F5AF42AA9F04D8D11822B687  : public Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140
{
	RuntimeObject* ___startValue;
	RuntimeObject* ___endValue;
	RuntimeObject* ___changeValue;
	StringOptions_tC70D70DB6854CE62E6BBC3AA066517835919E9FA ___plugOptions;
	DOGetter_1_t423CA9B377A96EA7C69ABA0C83C81B8D5B045E85* ___getter;
	DOSetter_1_t6889207117879689DE539960755CE5F277F65C0F* ___setter;
	ABSTweenPlugin_3_t7A2E1B65C126514AD320331036B9ACCE74AD21D9* ___tweenPlugin;
	Type_t* ____colorType;
	Type_t* ____color32Type;
};
struct TweenerCore_3_t392C54729BB024F5802F8E205C583653C4E886E3  : public Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___startValue;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___endValue;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___changeValue;
	QuaternionOptions_t1B83700718F7417854E4B6FB0E1726E183F69718 ___plugOptions;
	DOGetter_1_tB89DD12456B8E79576BB70E1CA6DF899686410D3* ___getter;
	DOSetter_1_t9EFF8DD70A15F455A6FE698A22BD0FE9683AC28E* ___setter;
	ABSTweenPlugin_3_t3823C0F935A3168B9E48DC90ABD9A0CED3D7BB82* ___tweenPlugin;
	Type_t* ____colorType;
	Type_t* ____color32Type;
};
struct TweenerCore_3_tE0A3D42393A2015849880D806418B2EDD0187D5D  : public Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140
{
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___startValue;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___endValue;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___changeValue;
	RectOptions_tCE72F3B850FF80059E448A0ED2AA3FF16EE5EDAC ___plugOptions;
	DOGetter_1_t64F1C0E113DC45CC9A1FD194A80B7B4C40AC4923* ___getter;
	DOSetter_1_t1682EBCD9936CA04E27CEC6CFD3F7C8CD8584CDD* ___setter;
	ABSTweenPlugin_3_tA51581359A1B697A7A0A8F2FFDE00794FA1E67F4* ___tweenPlugin;
	Type_t* ____colorType;
	Type_t* ____color32Type;
};
struct TweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1  : public Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140
{
	float ___startValue;
	float ___endValue;
	float ___changeValue;
	FloatOptions_t8A9B05DB7CF6CC90A27F300C2977D91A48B3FEF5 ___plugOptions;
	DOGetter_1_tE8B39477E96408653D0242624F4D7E48ABFD1B03* ___getter;
	DOSetter_1_t48D41DB8CE0BFC91A1844C4CC49A8A7222A69200* ___setter;
	ABSTweenPlugin_3_t60F4DE5120CFD5986925189A0E775FAEAB4C59B9* ___tweenPlugin;
	Type_t* ____colorType;
	Type_t* ____color32Type;
};
struct TweenerCore_3_t9016EC0FCFBD1032D87C4B0BB3E45F37DEF005D2  : public Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140
{
	uint32_t ___startValue;
	uint32_t ___endValue;
	uint32_t ___changeValue;
	UintOptions_t06BB035A1F0801FF6D4721F6F98F36DDD93E53A3 ___plugOptions;
	DOGetter_1_t187AC9EC362AB6EF9475A1B6469E2261EDF9DEE1* ___getter;
	DOSetter_1_tD132DAEA45806BE3693620C9FBBABB556336C1E5* ___setter;
	ABSTweenPlugin_3_t76C40FFA153363CF88C31D954E2AE740916B5B22* ___tweenPlugin;
	Type_t* ____colorType;
	Type_t* ____color32Type;
};
struct TweenerCore_3_t2043A56E4E5C035C8690037B5961DF809EF6002B  : public Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140
{
	uint64_t ___startValue;
	uint64_t ___endValue;
	uint64_t ___changeValue;
	NoOptions_t2B4A2CA3C472B5AC37AACC090B1D0B27BCF4307E ___plugOptions;
	DOGetter_1_tF4FBD9712869BD6129C41ADBD9D3DCD51CBB4746* ___getter;
	DOSetter_1_t88E79937FFFCB0EA500E064661BF5F6BDA9E94B0* ___setter;
	ABSTweenPlugin_3_t303ADD886C8A7272DE43A8D065EEB864F5E03BF4* ___tweenPlugin;
	Type_t* ____colorType;
	Type_t* ____color32Type;
};
struct TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271  : public Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___startValue;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___endValue;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___changeValue;
	VectorOptions_t2814CC842518C92C9DFC5DE6F7A73824758D3EF9 ___plugOptions;
	DOGetter_1_t13276681BE97FCE6AB699EF1F894EA98C825FE66* ___getter;
	DOSetter_1_t0DAD29F0B667B9ED214C9F6B9C4D7093FE7C0D9C* ___setter;
	ABSTweenPlugin_3_t4082710A2BB933E2D055E454B3EFAC4C0A319444* ___tweenPlugin;
	Type_t* ____colorType;
	Type_t* ____color32Type;
};
struct TweenerCore_3_t588FE764FFE6D341E358B05F0CB12A449ABF8B9C  : public Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140
{
	RuntimeObject* ___startValue;
	RuntimeObject* ___endValue;
	RuntimeObject* ___changeValue;
	PathOptions_t76F1CBAC082454349D530B799121EB15BFA4CB3A ___plugOptions;
	DOGetter_1_t709462C08281F3AA5DFEF36CAF91404B1004C338* ___getter;
	DOSetter_1_t02E8F9920F174322F1CF5AC8BCDEAABD14A03358* ___setter;
	ABSTweenPlugin_3_t6D32722320E631CCB96F0ADA615C9F5E568C4720* ___tweenPlugin;
	Type_t* ____colorType;
	Type_t* ____color32Type;
};
struct TweenerCore_3_t76519FA34EF184090B81F1F9F8F10E7EC238AB9C  : public Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140
{
	RuntimeObject* ___startValue;
	RuntimeObject* ___endValue;
	RuntimeObject* ___changeValue;
	Vector3ArrayOptions_t0F50A7A54A860E4604486511E285C952557C6644 ___plugOptions;
	DOGetter_1_t709462C08281F3AA5DFEF36CAF91404B1004C338* ___getter;
	DOSetter_1_t02E8F9920F174322F1CF5AC8BCDEAABD14A03358* ___setter;
	ABSTweenPlugin_3_t053B27021E31B21883DF289A9875BD9EB5381671* ___tweenPlugin;
	Type_t* ____colorType;
	Type_t* ____color32Type;
};
struct TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77  : public Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___startValue;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___endValue;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___changeValue;
	VectorOptions_t2814CC842518C92C9DFC5DE6F7A73824758D3EF9 ___plugOptions;
	DOGetter_1_t709462C08281F3AA5DFEF36CAF91404B1004C338* ___getter;
	DOSetter_1_t02E8F9920F174322F1CF5AC8BCDEAABD14A03358* ___setter;
	ABSTweenPlugin_3_tE5A78BE46D046C07A6356B8AB596B2D00F9295E7* ___tweenPlugin;
	Type_t* ____colorType;
	Type_t* ____color32Type;
};
struct TweenerCore_3_t963D77C15EC065D01436953D600312198028FDA3  : public Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___startValue;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___endValue;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___changeValue;
	VectorOptions_t2814CC842518C92C9DFC5DE6F7A73824758D3EF9 ___plugOptions;
	DOGetter_1_t7663EC1A34326612C559E1AC30ED719944D21731* ___getter;
	DOSetter_1_tD317D77AA1F91A2D7941174E732F54F68ACE8FA3* ___setter;
	ABSTweenPlugin_3_t9F8F8099624B165B75CB1E0C53FA9762CB2815FC* ___tweenPlugin;
	Type_t* ____colorType;
	Type_t* ____color32Type;
};
struct TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB : public Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140 {};
struct ConcurrentDictionary_2_tE5A8639D8AE0AF65ED6A8B7C1089E9F12ADD7B91_StaticFields
{
	bool ___s_isValueWriteAtomic;
};
struct DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_StaticFields
{
	String_t* ___Version;
	bool ___useSafeMode;
	int32_t ___safeModeLogBehaviour;
	int32_t ___nestedTweenFailureBehaviour;
	bool ___showUnityEditorReport;
	float ___timeScale;
	float ___unscaledTimeScale;
	bool ___useSmoothDeltaTime;
	float ___maxSmoothUnscaledTime;
	int32_t ___rewindCallbackMode;
	int32_t ____logBehaviour;
	Func_3_t6E57AF981293DC26E9631AA2A14D231440CC20A3* ___onWillLog;
	bool ___drawGizmos;
	bool ___debugMode;
	bool ____fooDebugStoreTargetId;
	int32_t ___defaultUpdateType;
	bool ___defaultTimeScaleIndependent;
	int32_t ___defaultAutoPlay;
	bool ___defaultAutoKill;
	int32_t ___defaultLoopType;
	bool ___defaultRecyclable;
	int32_t ___defaultEaseType;
	float ___defaultEaseOvershootOrAmplitude;
	float ___defaultEasePeriod;
	DOTweenComponent_tEA6C5A1520B40681AE6FA1703529F60EBC3691DC* ___instance;
	bool ____foo_isQuitting;
	int32_t ___maxActiveTweenersReached;
	int32_t ___maxActiveSequencesReached;
	SafeModeReport_t36C3527D96D574F81DB1748D1E856C7A539A25B9 ___safeModeReport;
	List_1_t6EF58ECBFCFA6FA99AC1281CE3A14BB083B08524* ___GizmosDelegates;
	bool ___initialized;
	int32_t ____isQuittingFrame;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticFields
{
	ConcurrentDictionary_2_tE5A8639D8AE0AF65ED6A8B7C1089E9F12ADD7B91* ___s_TypeConstructors;
	MethodInfo_t* ___s_CreateTypeConstructor;
	ConcurrentDictionary_2_t889EC4BD07B5DCB6087E2226ACC8A5E5590E48AB* ___s_CachedResolvedName;
	ObjectPool_1_tA6230762362A6BA6FEB38B9912D0463FB059A05A* ___s_Builders;
	RuntimeObject* ___syncedPoolObject;
};
struct Cache_1_t3D5B27BB72DB559823D975C81EB8746985435377_StaticFields
{
	RuntimeObject* ___TypeConstructor;
};
struct Cache_1_t6A09774E9EC924515184CB0FBF6689D74CD57526_StaticFields
{
	RuntimeObject* ___TypeConstructor;
};
struct Cache_1_t1EC3F18F5B6510EED65B625CE37A6C73B0F46377_StaticFields
{
	RuntimeObject* ___TypeConstructor;
};
struct Cache_1_tB8D73F5DFD6D8711956A5D57AEEA41C64DD59FE6_StaticFields
{
	RuntimeObject* ___TypeConstructor;
};
struct Cache_1_t60D29BA616C245A5283CB0B5BD4B19DCB7EDCF1C_StaticFields
{
	RuntimeObject* ___TypeConstructor;
};
struct Cache_1_t4ED442C7D3A39C62CE6AD3207C2A7F04760D2F3C_StaticFields
{
	RuntimeObject* ___TypeConstructor;
};
struct Cache_1_tC0A5B4DEAAD4F636D5EB7222F76AFA30C44BD765_StaticFields
{
	RuntimeObject* ___TypeConstructor;
};
struct Cache_1_t1734B78F91A5E97A0376AADF017CDD9C28F0D1E8_StaticFields
{
	RuntimeObject* ___TypeConstructor;
};
struct Cache_1_t165F6C79CDB8F92D5632BF06B4D2859B4F8CB803_StaticFields
{
	RuntimeObject* ___TypeConstructor;
};
struct Cache_1_t9D717A73959DD798ED20109ED37309FA61F9047D_StaticFields
{
	RuntimeObject* ___TypeConstructor;
};
struct Cache_1_t2AE8DCA73B885EC1BE3528F43866A2B28BA27459_StaticFields
{
	RuntimeObject* ___TypeConstructor;
};
struct Cache_1_tC191D4861D1556D15EB5651A45361205B0FFEB36_StaticFields
{
	RuntimeObject* ___TypeConstructor;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1;
};
struct Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_StaticFields
{
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___Zero;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___One;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MinusOne;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MaxValue;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MinValue;
};
struct GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D_StaticFields
{
	GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D ___s_ZeroGlyphRect;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix;
};
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion;
};
struct UIntPtr_t_StaticFields
{
	uintptr_t ___Zero;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector;
};
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector;
};
struct DecCalc_t0E9BD1BAF25BAD15940FF4BAB400D012A8DEBCA9_StaticFields
{
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___s_powers10;
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___s_ulongPowers10;
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___s_doublePowers10;
	PowerOvflU5BU5D_t8BB6F43AF19F1F7C7558815B4684875BC320735B* ___PowerOvflValues;
};
struct Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489_StaticFields
{
	int32_t ___s_count;
	Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___s_zero;
	Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___s_one;
	Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___s_allOnes;
};
struct Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A_StaticFields
{
	int32_t ___s_count;
	Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A ___s_zero;
	Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A ___s_one;
	Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A ___s_allOnes;
};
struct Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2_StaticFields
{
	int32_t ___s_count;
	Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 ___s_zero;
	Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 ___s_one;
	Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 ___s_allOnes;
};
struct Exception_t_StaticFields
{
	RuntimeObject* ___s_EDILock;
};
struct UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207_StaticFields
{
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_DefaultColor;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___s_DefaultTangent;
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 ___simpleVert;
};
struct Type_t_StaticFields
{
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder;
	Il2CppChar ___Delimiter;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes;
	RuntimeObject* ___Missing;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tweener_DOStartupSpecials_TisRuntimeObject_TisRuntimeObject_TisNoOptions_t2B4A2CA3C472B5AC37AACC090B1D0B27BCF4307E_mF5F9E7CD9D6898B2D10BBA53AE3520E9C3849F47_gshared (TweenerCore_3_t309A316DD98511F745EEA5D99CEC7179C868AB59* ___0_t, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DOGetter_1_Invoke_m2E3E6152AEB758D99AEC826BB5830B5C8BDB36EB_gshared_inline (DOGetter_1_t423CA9B377A96EA7C69ABA0C83C81B8D5B045E85* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tweener_DOStartupDurationBased_TisRuntimeObject_TisRuntimeObject_TisNoOptions_t2B4A2CA3C472B5AC37AACC090B1D0B27BCF4307E_m797F458C42ABDA791EDCFC8910DAFED2B5D8033F_gshared (TweenerCore_3_t309A316DD98511F745EEA5D99CEC7179C868AB59* ___0_t, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tweener_DOStartupSpecials_TisRuntimeObject_TisRuntimeObject_TisStringOptions_tC70D70DB6854CE62E6BBC3AA066517835919E9FA_m653E1C62D7F677D340991D88371F4F41731DFB0E_gshared (TweenerCore_3_tA6865573C9B15C90F5AF42AA9F04D8D11822B687* ___0_t, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tweener_DOStartupDurationBased_TisRuntimeObject_TisRuntimeObject_TisStringOptions_tC70D70DB6854CE62E6BBC3AA066517835919E9FA_m58075B3769522C5557C81AAF1530EEB4DE4081FF_gshared (TweenerCore_3_tA6865573C9B15C90F5AF42AA9F04D8D11822B687* ___0_t, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tweener_DOStartupSpecials_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_TisQuaternionOptions_t1B83700718F7417854E4B6FB0E1726E183F69718_mE8603C06ED5A9676DA693ED7200EB44AE00781A5_gshared (TweenerCore_3_t392C54729BB024F5802F8E205C583653C4E886E3* ___0_t, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 DOGetter_1_Invoke_m371680D24D99D662F517503519BCBDC9B73F61B8_gshared_inline (DOGetter_1_tB89DD12456B8E79576BB70E1CA6DF899686410D3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tweener_DOStartupDurationBased_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_TisQuaternionOptions_t1B83700718F7417854E4B6FB0E1726E183F69718_m1C1F0D1336EEE4BADDC0921EA2467B65C4583662_gshared (TweenerCore_3_t392C54729BB024F5802F8E205C583653C4E886E3* ___0_t, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tweener_DOStartupSpecials_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_TisRectOptions_tCE72F3B850FF80059E448A0ED2AA3FF16EE5EDAC_m5254EA64BCC607DA62603B74A2C252F342774116_gshared (TweenerCore_3_tE0A3D42393A2015849880D806418B2EDD0187D5D* ___0_t, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D DOGetter_1_Invoke_m31C3B7B68D6A7D1D2804D66A2C1C7B9C7B4A3B89_gshared_inline (DOGetter_1_t64F1C0E113DC45CC9A1FD194A80B7B4C40AC4923* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tweener_DOStartupDurationBased_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_TisRectOptions_tCE72F3B850FF80059E448A0ED2AA3FF16EE5EDAC_mFDA92D3A4DFAE0602C4D60678B3C932A89B3562D_gshared (TweenerCore_3_tE0A3D42393A2015849880D806418B2EDD0187D5D* ___0_t, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tweener_DOStartupSpecials_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisFloatOptions_t8A9B05DB7CF6CC90A27F300C2977D91A48B3FEF5_m0E0177555202BD2BF5E11AA0507716CD1E8A4EFD_gshared (TweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1* ___0_t, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float DOGetter_1_Invoke_m2F5C065E2F5DDECAB3FD41881B295B9DC733EF52_gshared_inline (DOGetter_1_tE8B39477E96408653D0242624F4D7E48ABFD1B03* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tweener_DOStartupDurationBased_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisFloatOptions_t8A9B05DB7CF6CC90A27F300C2977D91A48B3FEF5_mC18D98168F97645649E9462C5BE1620930DA9648_gshared (TweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1* ___0_t, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tweener_DOStartupSpecials_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisUintOptions_t06BB035A1F0801FF6D4721F6F98F36DDD93E53A3_mC385C56F0D7DE0487FB4C1BFB4A7495EC2680716_gshared (TweenerCore_3_t9016EC0FCFBD1032D87C4B0BB3E45F37DEF005D2* ___0_t, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t DOGetter_1_Invoke_m9872D509AF7B5CCA6FA8EAC070C88AE5DDEFA786_gshared_inline (DOGetter_1_t187AC9EC362AB6EF9475A1B6469E2261EDF9DEE1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tweener_DOStartupDurationBased_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisUintOptions_t06BB035A1F0801FF6D4721F6F98F36DDD93E53A3_m0DED754E0F43684EB156B3152591E1A3EA996CD9_gshared (TweenerCore_3_t9016EC0FCFBD1032D87C4B0BB3E45F37DEF005D2* ___0_t, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tweener_DOStartupSpecials_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisNoOptions_t2B4A2CA3C472B5AC37AACC090B1D0B27BCF4307E_m75DD594782DCF353B523243E56594747BECABDB0_gshared (TweenerCore_3_t2043A56E4E5C035C8690037B5961DF809EF6002B* ___0_t, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t DOGetter_1_Invoke_m8E364315F35A30983963B78D07FE87C11D434F86_gshared_inline (DOGetter_1_tF4FBD9712869BD6129C41ADBD9D3DCD51CBB4746* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tweener_DOStartupDurationBased_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisNoOptions_t2B4A2CA3C472B5AC37AACC090B1D0B27BCF4307E_mDF557A1BF7096657737B79028D5C6389F2C40646_gshared (TweenerCore_3_t2043A56E4E5C035C8690037B5961DF809EF6002B* ___0_t, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tweener_DOStartupSpecials_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_TisVectorOptions_t2814CC842518C92C9DFC5DE6F7A73824758D3EF9_mF48E10D572DB156BC867D2EF37838E23C0C06962_gshared (TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271* ___0_t, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 DOGetter_1_Invoke_mEAE67401967EACB6626BF325E4D5A4549B591E24_gshared_inline (DOGetter_1_t13276681BE97FCE6AB699EF1F894EA98C825FE66* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tweener_DOStartupDurationBased_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_TisVectorOptions_t2814CC842518C92C9DFC5DE6F7A73824758D3EF9_mB54B503C58F9B5054A507BCE9A6E03969121D7AD_gshared (TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271* ___0_t, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tweener_DOStartupSpecials_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_TisRuntimeObject_TisPathOptions_t76F1CBAC082454349D530B799121EB15BFA4CB3A_mD3AE336F5DC51942EF291D90E691B99A59B9791D_gshared (TweenerCore_3_t588FE764FFE6D341E358B05F0CB12A449ABF8B9C* ___0_t, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 DOGetter_1_Invoke_m705D63DDD8D645F289BFC35E1BCE02E731AE6F34_gshared_inline (DOGetter_1_t709462C08281F3AA5DFEF36CAF91404B1004C338* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tweener_DOStartupDurationBased_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_TisRuntimeObject_TisPathOptions_t76F1CBAC082454349D530B799121EB15BFA4CB3A_mAA99795FB9D051D18DD616241E1BD5A455B21209_gshared (TweenerCore_3_t588FE764FFE6D341E358B05F0CB12A449ABF8B9C* ___0_t, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tweener_DOStartupSpecials_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_TisRuntimeObject_TisVector3ArrayOptions_t0F50A7A54A860E4604486511E285C952557C6644_m0F3CC64B428A423A50077A257AF223A66B537649_gshared (TweenerCore_3_t76519FA34EF184090B81F1F9F8F10E7EC238AB9C* ___0_t, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tweener_DOStartupDurationBased_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_TisRuntimeObject_TisVector3ArrayOptions_t0F50A7A54A860E4604486511E285C952557C6644_mCF07906D19B5571FC45E0FB0688C6AB45F7C3E9D_gshared (TweenerCore_3_t76519FA34EF184090B81F1F9F8F10E7EC238AB9C* ___0_t, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tweener_DOStartupSpecials_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_TisVectorOptions_t2814CC842518C92C9DFC5DE6F7A73824758D3EF9_mD5213475CDE0FD66943180B0FC94F593823987CB_gshared (TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* ___0_t, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tweener_DOStartupDurationBased_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_TisVectorOptions_t2814CC842518C92C9DFC5DE6F7A73824758D3EF9_m788928E71460C6D9B70C2AD74145858422318960_gshared (TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* ___0_t, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tweener_DOStartupSpecials_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_TisVectorOptions_t2814CC842518C92C9DFC5DE6F7A73824758D3EF9_mCA9912E8C97C86A7954E958C3275D4A6AAC225CF_gshared (TweenerCore_3_t963D77C15EC065D01436953D600312198028FDA3* ___0_t, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 DOGetter_1_Invoke_m1DA7F4565AC91CD75B46CA73C3D72341775D7022_gshared_inline (DOGetter_1_t7663EC1A34326612C559E1AC30ED719944D21731* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tweener_DOStartupDurationBased_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_TisVectorOptions_t2814CC842518C92C9DFC5DE6F7A73824758D3EF9_m58FF505A1865B731A941E9E3C09D2BFF26654BE0_gshared (TweenerCore_3_t963D77C15EC065D01436953D600312198028FDA3* ___0_t, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ABSTweenPlugin_3_tC26278B0CA053BAF4547345679D3E8D1F748AC12* PluginsManager_GetDefaultPlugin_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_TisColorOptions_t9F2151E3A21F3FE2A41BEEF7D288D670C2685F39_m4630F82AABA4153B465D16065F705B393173A916_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ABSTweenPlugin_3_t3823C0F935A3168B9E48DC90ABD9A0CED3D7BB82* PluginsManager_GetDefaultPlugin_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_TisQuaternionOptions_t1B83700718F7417854E4B6FB0E1726E183F69718_m9EE869EEC1DF6CD93ED5807AB2F6CB6F4A98EBBB_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ABSTweenPlugin_3_t4082710A2BB933E2D055E454B3EFAC4C0A319444* PluginsManager_GetDefaultPlugin_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_TisVectorOptions_t2814CC842518C92C9DFC5DE6F7A73824758D3EF9_m8D47A3E8012365B59B264D57A46CB4737343CD5E_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ABSTweenPlugin_3_t6D32722320E631CCB96F0ADA615C9F5E568C4720* PluginsManager_GetDefaultPlugin_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_TisRuntimeObject_TisPathOptions_t76F1CBAC082454349D530B799121EB15BFA4CB3A_mFE0DF13E4834B27D61AD1561390BD333345A230E_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ABSTweenPlugin_3_tE5A78BE46D046C07A6356B8AB596B2D00F9295E7* PluginsManager_GetDefaultPlugin_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_TisVectorOptions_t2814CC842518C92C9DFC5DE6F7A73824758D3EF9_m621AF432ED28B62EE208BE52003B251AE9EE1830_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1__ctor_mA44AE4CA2839F2717B9950321247E9AA135D7B5C_gshared (TypeConstructor_1_t6BD2119030A7BD8FE6604F7A5DF2CEF572ECA695* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2_set_Item_m95DD60ECF2EBCA55F2EC3B0AC122FE0C0D7D4E39_gshared (ConcurrentDictionary_2_tF598E45B2A3ECB23FD311D829FB0AB32B1201ACF* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1__ctor_mBDEC850104319B918A6CBE0A5FC8CF72FE449073_gshared (TypeConstructor_1_t2C599EF20D66173546174E1FEE9032865749569B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1__ctor_m59D284115DFA693528774482859F9EAE2D2574A3_gshared (TypeConstructor_1_t1112ACFFD3ED7A595EEC07CE30579944DC35A084* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1__ctor_m02302139520CED9AE781B727D6E067D5D860B16E_gshared (TypeConstructor_1_tE2168F7D76AF24C3CDBD874E68275064267A7878* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1__ctor_mD1ED26178C74371350CCA90F7F0AA542DA05C0D2_gshared (TypeConstructor_1_tB483B7FBA1AB31F8944236CE6F404C0070EE46AF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1__ctor_m57EBE4991938D5FD61C4CC1CBA2995AD683397E0_gshared (TypeConstructor_1_t1C87E458BAAB4AD6530734CF23FBF63EB6941B16* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1__ctor_m74203C1B59EBD226404F82D4FE8ECCE279763902_gshared (TypeConstructor_1_t4B02051589066DA6CAD76A46B2FB0896FB6F1353* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1__ctor_mDE1389C84380C4456818EB59CA7C49951026B1D6_gshared (TypeConstructor_1_t9D3BD244EB1B72A274F2DF3BD2871FE3D1103947* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1__ctor_mF487A9F2F4B6893A278DDD2CA281144354953FB1_gshared (TypeConstructor_1_t015B6532B2D88703CA87ACDD65D1F95F946DEBBC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1__ctor_mDAFDA633F7A4D154406F63CE7E031CA7299715DE_gshared (TypeConstructor_1_t0B54B8DEF0851D113A157F922D908DE987F2BB1B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1__ctor_mE6B1A176CB56765080C95ECB263601E5ECC97ADB_gshared (TypeConstructor_1_tE50E3531CF764328151098BCE662D4FF81F9F4CA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisRuntimeObject_m4E17F588B090C1DADAE2D986BDA407DECEAC020F_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_GetTypeConstructor_TisRuntimeObject_m16C0BB9AC6C9E7396BA85526EC8A55AF216579DB_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A Vector_1_op_Explicit_m5E44D3923BF92F437AEC34CDE0CBD6130883B0B7_gshared (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 Vector_1_Equals_m6F913845CB1E8A1A753B3C187A8EB840C36F5ADF_gshared_inline (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___0_left, Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m16C827D0F6107B7998F6C99B57F7CC2F181E2198_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisBoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485_m8F344250A2F9E6EE6DDBA6BA833BB36D0F272B66_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mBBCB804F367E06EA4D482F1B69165DD2B5BF38FF_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m2C5F5CF80D13B041768C7845C5AAEEC02BB683BA_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisRectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8_mF6949D9EDD480E6666CD975C66487AAD6ABC7D11_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mE0C65F4221E48BB07F75856972A0CCDAE284AB9F_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisVector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_mC8EF710494C8986B279262C6C64947BE2C1DC55C_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m1AB8BF0921C24186B3C43FC4341AAD2F6FE87C4D_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_mB00220519A80AA5ACE36B7DBA2E6A6CB796302AF_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mED1DC338E5DB62F3E64F6272A9F12150DA5CC1B9_gshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27_gshared (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector_1_ScalarEquals_m4E13E30219B0D2AADB58AD6E5CB2B54B9FCBFAAE_gshared_inline (uint16_t ___0_left, uint16_t ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector_1__ctor_m46ADEA122EFBA7AEF487716891A8ADD284FD12E3_gshared (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, void* ___0_dataPointer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector_1__ctor_m48CD7847B9597F3193C9C0BA97ED64E276F4340A_gshared (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* ___0_existingRegister, const RuntimeMethod* method) ;

inline bool Tweener_DOStartupSpecials_TisRuntimeObject_TisRuntimeObject_TisNoOptions_t2B4A2CA3C472B5AC37AACC090B1D0B27BCF4307E_mF5F9E7CD9D6898B2D10BBA53AE3520E9C3849F47 (TweenerCore_3_t309A316DD98511F745EEA5D99CEC7179C868AB59* ___0_t, const RuntimeMethod* method)
{
	return ((  bool (*) (TweenerCore_3_t309A316DD98511F745EEA5D99CEC7179C868AB59*, const RuntimeMethod*))Tweener_DOStartupSpecials_TisRuntimeObject_TisRuntimeObject_TisNoOptions_t2B4A2CA3C472B5AC37AACC090B1D0B27BCF4307E_mF5F9E7CD9D6898B2D10BBA53AE3520E9C3849F47_gshared)(___0_t, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Tween_get_isRelative_mC31C34D21C3953F9AA7F25C0429BEBE45D2DBAE2_inline (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Tween_set_isRelative_m881085052780C20122B970FA26766E551DA3B8EB_inline (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* __this, bool ___0_value, const RuntimeMethod* method) ;
inline RuntimeObject* DOGetter_1_Invoke_m2E3E6152AEB758D99AEC826BB5830B5C8BDB36EB_inline (DOGetter_1_t423CA9B377A96EA7C69ABA0C83C81B8D5B045E85* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (DOGetter_1_t423CA9B377A96EA7C69ABA0C83C81B8D5B045E85*, const RuntimeMethod*))DOGetter_1_Invoke_m2E3E6152AEB758D99AEC826BB5830B5C8BDB36EB_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Debugger_ShouldLogSafeModeCapturedError_m5EE800D2A5FD98C95C119D9AF68035095A123C47 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodBase_t* Exception_get_TargetSite_m0CE79BBF864CCEA96B72ED52EC66753CFBE5ED6A (Exception_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debugger_LogSafeModeCapturedError_m0EE4B4F14B9243B4A9BD757853CAB77B5A888ED6 (RuntimeObject* ___0_message, Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___1_t, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeModeReport_Add_mC993434DFE20DDF1E44389DACD34085F31E6ED20 (SafeModeReport_t36C3527D96D574F81DB1748D1E856C7A539A25B9* __this, int32_t ___0_type, const RuntimeMethod* method) ;
inline void Tweener_DOStartupDurationBased_TisRuntimeObject_TisRuntimeObject_TisNoOptions_t2B4A2CA3C472B5AC37AACC090B1D0B27BCF4307E_m797F458C42ABDA791EDCFC8910DAFED2B5D8033F (TweenerCore_3_t309A316DD98511F745EEA5D99CEC7179C868AB59* ___0_t, const RuntimeMethod* method)
{
	((  void (*) (TweenerCore_3_t309A316DD98511F745EEA5D99CEC7179C868AB59*, const RuntimeMethod*))Tweener_DOStartupDurationBased_TisRuntimeObject_TisRuntimeObject_TisNoOptions_t2B4A2CA3C472B5AC37AACC090B1D0B27BCF4307E_m797F458C42ABDA791EDCFC8910DAFED2B5D8033F_gshared)(___0_t, method);
}
inline bool Tweener_DOStartupSpecials_TisRuntimeObject_TisRuntimeObject_TisStringOptions_tC70D70DB6854CE62E6BBC3AA066517835919E9FA_m653E1C62D7F677D340991D88371F4F41731DFB0E (TweenerCore_3_tA6865573C9B15C90F5AF42AA9F04D8D11822B687* ___0_t, const RuntimeMethod* method)
{
	return ((  bool (*) (TweenerCore_3_tA6865573C9B15C90F5AF42AA9F04D8D11822B687*, const RuntimeMethod*))Tweener_DOStartupSpecials_TisRuntimeObject_TisRuntimeObject_TisStringOptions_tC70D70DB6854CE62E6BBC3AA066517835919E9FA_m653E1C62D7F677D340991D88371F4F41731DFB0E_gshared)(___0_t, method);
}
inline void Tweener_DOStartupDurationBased_TisRuntimeObject_TisRuntimeObject_TisStringOptions_tC70D70DB6854CE62E6BBC3AA066517835919E9FA_m58075B3769522C5557C81AAF1530EEB4DE4081FF (TweenerCore_3_tA6865573C9B15C90F5AF42AA9F04D8D11822B687* ___0_t, const RuntimeMethod* method)
{
	((  void (*) (TweenerCore_3_tA6865573C9B15C90F5AF42AA9F04D8D11822B687*, const RuntimeMethod*))Tweener_DOStartupDurationBased_TisRuntimeObject_TisRuntimeObject_TisStringOptions_tC70D70DB6854CE62E6BBC3AA066517835919E9FA_m58075B3769522C5557C81AAF1530EEB4DE4081FF_gshared)(___0_t, method);
}
inline bool Tweener_DOStartupSpecials_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_TisQuaternionOptions_t1B83700718F7417854E4B6FB0E1726E183F69718_mE8603C06ED5A9676DA693ED7200EB44AE00781A5 (TweenerCore_3_t392C54729BB024F5802F8E205C583653C4E886E3* ___0_t, const RuntimeMethod* method)
{
	return ((  bool (*) (TweenerCore_3_t392C54729BB024F5802F8E205C583653C4E886E3*, const RuntimeMethod*))Tweener_DOStartupSpecials_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_TisQuaternionOptions_t1B83700718F7417854E4B6FB0E1726E183F69718_mE8603C06ED5A9676DA693ED7200EB44AE00781A5_gshared)(___0_t, method);
}
inline Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 DOGetter_1_Invoke_m371680D24D99D662F517503519BCBDC9B73F61B8_inline (DOGetter_1_tB89DD12456B8E79576BB70E1CA6DF899686410D3* __this, const RuntimeMethod* method)
{
	return ((  Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 (*) (DOGetter_1_tB89DD12456B8E79576BB70E1CA6DF899686410D3*, const RuntimeMethod*))DOGetter_1_Invoke_m371680D24D99D662F517503519BCBDC9B73F61B8_gshared_inline)(__this, method);
}
inline void Tweener_DOStartupDurationBased_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_TisQuaternionOptions_t1B83700718F7417854E4B6FB0E1726E183F69718_m1C1F0D1336EEE4BADDC0921EA2467B65C4583662 (TweenerCore_3_t392C54729BB024F5802F8E205C583653C4E886E3* ___0_t, const RuntimeMethod* method)
{
	((  void (*) (TweenerCore_3_t392C54729BB024F5802F8E205C583653C4E886E3*, const RuntimeMethod*))Tweener_DOStartupDurationBased_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_TisQuaternionOptions_t1B83700718F7417854E4B6FB0E1726E183F69718_m1C1F0D1336EEE4BADDC0921EA2467B65C4583662_gshared)(___0_t, method);
}
inline bool Tweener_DOStartupSpecials_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_TisRectOptions_tCE72F3B850FF80059E448A0ED2AA3FF16EE5EDAC_m5254EA64BCC607DA62603B74A2C252F342774116 (TweenerCore_3_tE0A3D42393A2015849880D806418B2EDD0187D5D* ___0_t, const RuntimeMethod* method)
{
	return ((  bool (*) (TweenerCore_3_tE0A3D42393A2015849880D806418B2EDD0187D5D*, const RuntimeMethod*))Tweener_DOStartupSpecials_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_TisRectOptions_tCE72F3B850FF80059E448A0ED2AA3FF16EE5EDAC_m5254EA64BCC607DA62603B74A2C252F342774116_gshared)(___0_t, method);
}
inline Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D DOGetter_1_Invoke_m31C3B7B68D6A7D1D2804D66A2C1C7B9C7B4A3B89_inline (DOGetter_1_t64F1C0E113DC45CC9A1FD194A80B7B4C40AC4923* __this, const RuntimeMethod* method)
{
	return ((  Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D (*) (DOGetter_1_t64F1C0E113DC45CC9A1FD194A80B7B4C40AC4923*, const RuntimeMethod*))DOGetter_1_Invoke_m31C3B7B68D6A7D1D2804D66A2C1C7B9C7B4A3B89_gshared_inline)(__this, method);
}
inline void Tweener_DOStartupDurationBased_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_TisRectOptions_tCE72F3B850FF80059E448A0ED2AA3FF16EE5EDAC_mFDA92D3A4DFAE0602C4D60678B3C932A89B3562D (TweenerCore_3_tE0A3D42393A2015849880D806418B2EDD0187D5D* ___0_t, const RuntimeMethod* method)
{
	((  void (*) (TweenerCore_3_tE0A3D42393A2015849880D806418B2EDD0187D5D*, const RuntimeMethod*))Tweener_DOStartupDurationBased_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_TisRectOptions_tCE72F3B850FF80059E448A0ED2AA3FF16EE5EDAC_mFDA92D3A4DFAE0602C4D60678B3C932A89B3562D_gshared)(___0_t, method);
}
inline bool Tweener_DOStartupSpecials_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisFloatOptions_t8A9B05DB7CF6CC90A27F300C2977D91A48B3FEF5_m0E0177555202BD2BF5E11AA0507716CD1E8A4EFD (TweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1* ___0_t, const RuntimeMethod* method)
{
	return ((  bool (*) (TweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1*, const RuntimeMethod*))Tweener_DOStartupSpecials_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisFloatOptions_t8A9B05DB7CF6CC90A27F300C2977D91A48B3FEF5_m0E0177555202BD2BF5E11AA0507716CD1E8A4EFD_gshared)(___0_t, method);
}
inline float DOGetter_1_Invoke_m2F5C065E2F5DDECAB3FD41881B295B9DC733EF52_inline (DOGetter_1_tE8B39477E96408653D0242624F4D7E48ABFD1B03* __this, const RuntimeMethod* method)
{
	return ((  float (*) (DOGetter_1_tE8B39477E96408653D0242624F4D7E48ABFD1B03*, const RuntimeMethod*))DOGetter_1_Invoke_m2F5C065E2F5DDECAB3FD41881B295B9DC733EF52_gshared_inline)(__this, method);
}
inline void Tweener_DOStartupDurationBased_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisFloatOptions_t8A9B05DB7CF6CC90A27F300C2977D91A48B3FEF5_mC18D98168F97645649E9462C5BE1620930DA9648 (TweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1* ___0_t, const RuntimeMethod* method)
{
	((  void (*) (TweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1*, const RuntimeMethod*))Tweener_DOStartupDurationBased_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisFloatOptions_t8A9B05DB7CF6CC90A27F300C2977D91A48B3FEF5_mC18D98168F97645649E9462C5BE1620930DA9648_gshared)(___0_t, method);
}
inline bool Tweener_DOStartupSpecials_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisUintOptions_t06BB035A1F0801FF6D4721F6F98F36DDD93E53A3_mC385C56F0D7DE0487FB4C1BFB4A7495EC2680716 (TweenerCore_3_t9016EC0FCFBD1032D87C4B0BB3E45F37DEF005D2* ___0_t, const RuntimeMethod* method)
{
	return ((  bool (*) (TweenerCore_3_t9016EC0FCFBD1032D87C4B0BB3E45F37DEF005D2*, const RuntimeMethod*))Tweener_DOStartupSpecials_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisUintOptions_t06BB035A1F0801FF6D4721F6F98F36DDD93E53A3_mC385C56F0D7DE0487FB4C1BFB4A7495EC2680716_gshared)(___0_t, method);
}
inline uint32_t DOGetter_1_Invoke_m9872D509AF7B5CCA6FA8EAC070C88AE5DDEFA786_inline (DOGetter_1_t187AC9EC362AB6EF9475A1B6469E2261EDF9DEE1* __this, const RuntimeMethod* method)
{
	return ((  uint32_t (*) (DOGetter_1_t187AC9EC362AB6EF9475A1B6469E2261EDF9DEE1*, const RuntimeMethod*))DOGetter_1_Invoke_m9872D509AF7B5CCA6FA8EAC070C88AE5DDEFA786_gshared_inline)(__this, method);
}
inline void Tweener_DOStartupDurationBased_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisUintOptions_t06BB035A1F0801FF6D4721F6F98F36DDD93E53A3_m0DED754E0F43684EB156B3152591E1A3EA996CD9 (TweenerCore_3_t9016EC0FCFBD1032D87C4B0BB3E45F37DEF005D2* ___0_t, const RuntimeMethod* method)
{
	((  void (*) (TweenerCore_3_t9016EC0FCFBD1032D87C4B0BB3E45F37DEF005D2*, const RuntimeMethod*))Tweener_DOStartupDurationBased_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisUintOptions_t06BB035A1F0801FF6D4721F6F98F36DDD93E53A3_m0DED754E0F43684EB156B3152591E1A3EA996CD9_gshared)(___0_t, method);
}
inline bool Tweener_DOStartupSpecials_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisNoOptions_t2B4A2CA3C472B5AC37AACC090B1D0B27BCF4307E_m75DD594782DCF353B523243E56594747BECABDB0 (TweenerCore_3_t2043A56E4E5C035C8690037B5961DF809EF6002B* ___0_t, const RuntimeMethod* method)
{
	return ((  bool (*) (TweenerCore_3_t2043A56E4E5C035C8690037B5961DF809EF6002B*, const RuntimeMethod*))Tweener_DOStartupSpecials_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisNoOptions_t2B4A2CA3C472B5AC37AACC090B1D0B27BCF4307E_m75DD594782DCF353B523243E56594747BECABDB0_gshared)(___0_t, method);
}
inline uint64_t DOGetter_1_Invoke_m8E364315F35A30983963B78D07FE87C11D434F86_inline (DOGetter_1_tF4FBD9712869BD6129C41ADBD9D3DCD51CBB4746* __this, const RuntimeMethod* method)
{
	return ((  uint64_t (*) (DOGetter_1_tF4FBD9712869BD6129C41ADBD9D3DCD51CBB4746*, const RuntimeMethod*))DOGetter_1_Invoke_m8E364315F35A30983963B78D07FE87C11D434F86_gshared_inline)(__this, method);
}
inline void Tweener_DOStartupDurationBased_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisNoOptions_t2B4A2CA3C472B5AC37AACC090B1D0B27BCF4307E_mDF557A1BF7096657737B79028D5C6389F2C40646 (TweenerCore_3_t2043A56E4E5C035C8690037B5961DF809EF6002B* ___0_t, const RuntimeMethod* method)
{
	((  void (*) (TweenerCore_3_t2043A56E4E5C035C8690037B5961DF809EF6002B*, const RuntimeMethod*))Tweener_DOStartupDurationBased_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisNoOptions_t2B4A2CA3C472B5AC37AACC090B1D0B27BCF4307E_mDF557A1BF7096657737B79028D5C6389F2C40646_gshared)(___0_t, method);
}
inline bool Tweener_DOStartupSpecials_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_TisVectorOptions_t2814CC842518C92C9DFC5DE6F7A73824758D3EF9_mF48E10D572DB156BC867D2EF37838E23C0C06962 (TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271* ___0_t, const RuntimeMethod* method)
{
	return ((  bool (*) (TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271*, const RuntimeMethod*))Tweener_DOStartupSpecials_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_TisVectorOptions_t2814CC842518C92C9DFC5DE6F7A73824758D3EF9_mF48E10D572DB156BC867D2EF37838E23C0C06962_gshared)(___0_t, method);
}
inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 DOGetter_1_Invoke_mEAE67401967EACB6626BF325E4D5A4549B591E24_inline (DOGetter_1_t13276681BE97FCE6AB699EF1F894EA98C825FE66* __this, const RuntimeMethod* method)
{
	return ((  Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 (*) (DOGetter_1_t13276681BE97FCE6AB699EF1F894EA98C825FE66*, const RuntimeMethod*))DOGetter_1_Invoke_mEAE67401967EACB6626BF325E4D5A4549B591E24_gshared_inline)(__this, method);
}
inline void Tweener_DOStartupDurationBased_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_TisVectorOptions_t2814CC842518C92C9DFC5DE6F7A73824758D3EF9_mB54B503C58F9B5054A507BCE9A6E03969121D7AD (TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271* ___0_t, const RuntimeMethod* method)
{
	((  void (*) (TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271*, const RuntimeMethod*))Tweener_DOStartupDurationBased_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_TisVectorOptions_t2814CC842518C92C9DFC5DE6F7A73824758D3EF9_mB54B503C58F9B5054A507BCE9A6E03969121D7AD_gshared)(___0_t, method);
}
inline bool Tweener_DOStartupSpecials_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_TisRuntimeObject_TisPathOptions_t76F1CBAC082454349D530B799121EB15BFA4CB3A_mD3AE336F5DC51942EF291D90E691B99A59B9791D (TweenerCore_3_t588FE764FFE6D341E358B05F0CB12A449ABF8B9C* ___0_t, const RuntimeMethod* method)
{
	return ((  bool (*) (TweenerCore_3_t588FE764FFE6D341E358B05F0CB12A449ABF8B9C*, const RuntimeMethod*))Tweener_DOStartupSpecials_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_TisRuntimeObject_TisPathOptions_t76F1CBAC082454349D530B799121EB15BFA4CB3A_mD3AE336F5DC51942EF291D90E691B99A59B9791D_gshared)(___0_t, method);
}
inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 DOGetter_1_Invoke_m705D63DDD8D645F289BFC35E1BCE02E731AE6F34_inline (DOGetter_1_t709462C08281F3AA5DFEF36CAF91404B1004C338* __this, const RuntimeMethod* method)
{
	return ((  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 (*) (DOGetter_1_t709462C08281F3AA5DFEF36CAF91404B1004C338*, const RuntimeMethod*))DOGetter_1_Invoke_m705D63DDD8D645F289BFC35E1BCE02E731AE6F34_gshared_inline)(__this, method);
}
inline void Tweener_DOStartupDurationBased_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_TisRuntimeObject_TisPathOptions_t76F1CBAC082454349D530B799121EB15BFA4CB3A_mAA99795FB9D051D18DD616241E1BD5A455B21209 (TweenerCore_3_t588FE764FFE6D341E358B05F0CB12A449ABF8B9C* ___0_t, const RuntimeMethod* method)
{
	((  void (*) (TweenerCore_3_t588FE764FFE6D341E358B05F0CB12A449ABF8B9C*, const RuntimeMethod*))Tweener_DOStartupDurationBased_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_TisRuntimeObject_TisPathOptions_t76F1CBAC082454349D530B799121EB15BFA4CB3A_mAA99795FB9D051D18DD616241E1BD5A455B21209_gshared)(___0_t, method);
}
inline bool Tweener_DOStartupSpecials_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_TisRuntimeObject_TisVector3ArrayOptions_t0F50A7A54A860E4604486511E285C952557C6644_m0F3CC64B428A423A50077A257AF223A66B537649 (TweenerCore_3_t76519FA34EF184090B81F1F9F8F10E7EC238AB9C* ___0_t, const RuntimeMethod* method)
{
	return ((  bool (*) (TweenerCore_3_t76519FA34EF184090B81F1F9F8F10E7EC238AB9C*, const RuntimeMethod*))Tweener_DOStartupSpecials_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_TisRuntimeObject_TisVector3ArrayOptions_t0F50A7A54A860E4604486511E285C952557C6644_m0F3CC64B428A423A50077A257AF223A66B537649_gshared)(___0_t, method);
}
inline void Tweener_DOStartupDurationBased_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_TisRuntimeObject_TisVector3ArrayOptions_t0F50A7A54A860E4604486511E285C952557C6644_mCF07906D19B5571FC45E0FB0688C6AB45F7C3E9D (TweenerCore_3_t76519FA34EF184090B81F1F9F8F10E7EC238AB9C* ___0_t, const RuntimeMethod* method)
{
	((  void (*) (TweenerCore_3_t76519FA34EF184090B81F1F9F8F10E7EC238AB9C*, const RuntimeMethod*))Tweener_DOStartupDurationBased_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_TisRuntimeObject_TisVector3ArrayOptions_t0F50A7A54A860E4604486511E285C952557C6644_mCF07906D19B5571FC45E0FB0688C6AB45F7C3E9D_gshared)(___0_t, method);
}
inline bool Tweener_DOStartupSpecials_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_TisVectorOptions_t2814CC842518C92C9DFC5DE6F7A73824758D3EF9_mD5213475CDE0FD66943180B0FC94F593823987CB (TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* ___0_t, const RuntimeMethod* method)
{
	return ((  bool (*) (TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77*, const RuntimeMethod*))Tweener_DOStartupSpecials_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_TisVectorOptions_t2814CC842518C92C9DFC5DE6F7A73824758D3EF9_mD5213475CDE0FD66943180B0FC94F593823987CB_gshared)(___0_t, method);
}
inline void Tweener_DOStartupDurationBased_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_TisVectorOptions_t2814CC842518C92C9DFC5DE6F7A73824758D3EF9_m788928E71460C6D9B70C2AD74145858422318960 (TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* ___0_t, const RuntimeMethod* method)
{
	((  void (*) (TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77*, const RuntimeMethod*))Tweener_DOStartupDurationBased_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_TisVectorOptions_t2814CC842518C92C9DFC5DE6F7A73824758D3EF9_m788928E71460C6D9B70C2AD74145858422318960_gshared)(___0_t, method);
}
inline bool Tweener_DOStartupSpecials_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_TisVectorOptions_t2814CC842518C92C9DFC5DE6F7A73824758D3EF9_mCA9912E8C97C86A7954E958C3275D4A6AAC225CF (TweenerCore_3_t963D77C15EC065D01436953D600312198028FDA3* ___0_t, const RuntimeMethod* method)
{
	return ((  bool (*) (TweenerCore_3_t963D77C15EC065D01436953D600312198028FDA3*, const RuntimeMethod*))Tweener_DOStartupSpecials_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_TisVectorOptions_t2814CC842518C92C9DFC5DE6F7A73824758D3EF9_mCA9912E8C97C86A7954E958C3275D4A6AAC225CF_gshared)(___0_t, method);
}
inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 DOGetter_1_Invoke_m1DA7F4565AC91CD75B46CA73C3D72341775D7022_inline (DOGetter_1_t7663EC1A34326612C559E1AC30ED719944D21731* __this, const RuntimeMethod* method)
{
	return ((  Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 (*) (DOGetter_1_t7663EC1A34326612C559E1AC30ED719944D21731*, const RuntimeMethod*))DOGetter_1_Invoke_m1DA7F4565AC91CD75B46CA73C3D72341775D7022_gshared_inline)(__this, method);
}
inline void Tweener_DOStartupDurationBased_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_TisVectorOptions_t2814CC842518C92C9DFC5DE6F7A73824758D3EF9_m58FF505A1865B731A941E9E3C09D2BFF26654BE0 (TweenerCore_3_t963D77C15EC065D01436953D600312198028FDA3* ___0_t, const RuntimeMethod* method)
{
	((  void (*) (TweenerCore_3_t963D77C15EC065D01436953D600312198028FDA3*, const RuntimeMethod*))Tweener_DOStartupDurationBased_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_TisVectorOptions_t2814CC842518C92C9DFC5DE6F7A73824758D3EF9_m58FF505A1865B731A941E9E3C09D2BFF26654BE0_gshared)(___0_t, method);
}
inline ABSTweenPlugin_3_tC26278B0CA053BAF4547345679D3E8D1F748AC12* PluginsManager_GetDefaultPlugin_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_TisColorOptions_t9F2151E3A21F3FE2A41BEEF7D288D670C2685F39_m4630F82AABA4153B465D16065F705B393173A916 (const RuntimeMethod* method)
{
	return ((  ABSTweenPlugin_3_tC26278B0CA053BAF4547345679D3E8D1F748AC12* (*) (const RuntimeMethod*))PluginsManager_GetDefaultPlugin_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_TisColorOptions_t9F2151E3A21F3FE2A41BEEF7D288D670C2685F39_m4630F82AABA4153B465D16065F705B393173A916_gshared)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debugger_LogError_mBAD7F720F13F12B84A27F564F83F00B66EEE6B9E (RuntimeObject* ___0_message, Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___1_t, const RuntimeMethod* method) ;
inline ABSTweenPlugin_3_t3823C0F935A3168B9E48DC90ABD9A0CED3D7BB82* PluginsManager_GetDefaultPlugin_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_TisQuaternionOptions_t1B83700718F7417854E4B6FB0E1726E183F69718_m9EE869EEC1DF6CD93ED5807AB2F6CB6F4A98EBBB (const RuntimeMethod* method)
{
	return ((  ABSTweenPlugin_3_t3823C0F935A3168B9E48DC90ABD9A0CED3D7BB82* (*) (const RuntimeMethod*))PluginsManager_GetDefaultPlugin_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_TisQuaternionOptions_t1B83700718F7417854E4B6FB0E1726E183F69718_m9EE869EEC1DF6CD93ED5807AB2F6CB6F4A98EBBB_gshared)(method);
}
inline ABSTweenPlugin_3_t4082710A2BB933E2D055E454B3EFAC4C0A319444* PluginsManager_GetDefaultPlugin_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_TisVectorOptions_t2814CC842518C92C9DFC5DE6F7A73824758D3EF9_m8D47A3E8012365B59B264D57A46CB4737343CD5E (const RuntimeMethod* method)
{
	return ((  ABSTweenPlugin_3_t4082710A2BB933E2D055E454B3EFAC4C0A319444* (*) (const RuntimeMethod*))PluginsManager_GetDefaultPlugin_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_TisVectorOptions_t2814CC842518C92C9DFC5DE6F7A73824758D3EF9_m8D47A3E8012365B59B264D57A46CB4737343CD5E_gshared)(method);
}
inline ABSTweenPlugin_3_t6D32722320E631CCB96F0ADA615C9F5E568C4720* PluginsManager_GetDefaultPlugin_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_TisRuntimeObject_TisPathOptions_t76F1CBAC082454349D530B799121EB15BFA4CB3A_mFE0DF13E4834B27D61AD1561390BD333345A230E (const RuntimeMethod* method)
{
	return ((  ABSTweenPlugin_3_t6D32722320E631CCB96F0ADA615C9F5E568C4720* (*) (const RuntimeMethod*))PluginsManager_GetDefaultPlugin_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_TisRuntimeObject_TisPathOptions_t76F1CBAC082454349D530B799121EB15BFA4CB3A_mFE0DF13E4834B27D61AD1561390BD333345A230E_gshared)(method);
}
inline ABSTweenPlugin_3_tE5A78BE46D046C07A6356B8AB596B2D00F9295E7* PluginsManager_GetDefaultPlugin_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_TisVectorOptions_t2814CC842518C92C9DFC5DE6F7A73824758D3EF9_m621AF432ED28B62EE208BE52003B251AE9EE1830 (const RuntimeMethod* method)
{
	return ((  ABSTweenPlugin_3_tE5A78BE46D046C07A6356B8AB596B2D00F9295E7* (*) (const RuntimeMethod*))PluginsManager_GetDefaultPlugin_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_TisVectorOptions_t2814CC842518C92C9DFC5DE6F7A73824758D3EF9_m621AF432ED28B62EE208BE52003B251AE9EE1830_gshared)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
inline void TypeConstructor_1__ctor_mA44AE4CA2839F2717B9950321247E9AA135D7B5C (TypeConstructor_1_t6BD2119030A7BD8FE6604F7A5DF2CEF572ECA695* __this, const RuntimeMethod* method)
{
	((  void (*) (TypeConstructor_1_t6BD2119030A7BD8FE6604F7A5DF2CEF572ECA695*, const RuntimeMethod*))TypeConstructor_1__ctor_mA44AE4CA2839F2717B9950321247E9AA135D7B5C_gshared)(__this, method);
}
inline void ConcurrentDictionary_2_set_Item_m050171C2656C2982971EECEA9026CADF5AEF72B1 (ConcurrentDictionary_2_tE5A8639D8AE0AF65ED6A8B7C1089E9F12ADD7B91* __this, Type_t* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (ConcurrentDictionary_2_tE5A8639D8AE0AF65ED6A8B7C1089E9F12ADD7B91*, Type_t*, RuntimeObject*, const RuntimeMethod*))ConcurrentDictionary_2_set_Item_m95DD60ECF2EBCA55F2EC3B0AC122FE0C0D7D4E39_gshared)(__this, ___0_key, ___1_value, method);
}
inline void TypeConstructor_1__ctor_mBDEC850104319B918A6CBE0A5FC8CF72FE449073 (TypeConstructor_1_t2C599EF20D66173546174E1FEE9032865749569B* __this, const RuntimeMethod* method)
{
	((  void (*) (TypeConstructor_1_t2C599EF20D66173546174E1FEE9032865749569B*, const RuntimeMethod*))TypeConstructor_1__ctor_mBDEC850104319B918A6CBE0A5FC8CF72FE449073_gshared)(__this, method);
}
inline void TypeConstructor_1__ctor_m59D284115DFA693528774482859F9EAE2D2574A3 (TypeConstructor_1_t1112ACFFD3ED7A595EEC07CE30579944DC35A084* __this, const RuntimeMethod* method)
{
	((  void (*) (TypeConstructor_1_t1112ACFFD3ED7A595EEC07CE30579944DC35A084*, const RuntimeMethod*))TypeConstructor_1__ctor_m59D284115DFA693528774482859F9EAE2D2574A3_gshared)(__this, method);
}
inline void TypeConstructor_1__ctor_m02302139520CED9AE781B727D6E067D5D860B16E (TypeConstructor_1_tE2168F7D76AF24C3CDBD874E68275064267A7878* __this, const RuntimeMethod* method)
{
	((  void (*) (TypeConstructor_1_tE2168F7D76AF24C3CDBD874E68275064267A7878*, const RuntimeMethod*))TypeConstructor_1__ctor_m02302139520CED9AE781B727D6E067D5D860B16E_gshared)(__this, method);
}
inline void TypeConstructor_1__ctor_mD1ED26178C74371350CCA90F7F0AA542DA05C0D2 (TypeConstructor_1_tB483B7FBA1AB31F8944236CE6F404C0070EE46AF* __this, const RuntimeMethod* method)
{
	((  void (*) (TypeConstructor_1_tB483B7FBA1AB31F8944236CE6F404C0070EE46AF*, const RuntimeMethod*))TypeConstructor_1__ctor_mD1ED26178C74371350CCA90F7F0AA542DA05C0D2_gshared)(__this, method);
}
inline void TypeConstructor_1__ctor_m57EBE4991938D5FD61C4CC1CBA2995AD683397E0 (TypeConstructor_1_t1C87E458BAAB4AD6530734CF23FBF63EB6941B16* __this, const RuntimeMethod* method)
{
	((  void (*) (TypeConstructor_1_t1C87E458BAAB4AD6530734CF23FBF63EB6941B16*, const RuntimeMethod*))TypeConstructor_1__ctor_m57EBE4991938D5FD61C4CC1CBA2995AD683397E0_gshared)(__this, method);
}
inline void TypeConstructor_1__ctor_m74203C1B59EBD226404F82D4FE8ECCE279763902 (TypeConstructor_1_t4B02051589066DA6CAD76A46B2FB0896FB6F1353* __this, const RuntimeMethod* method)
{
	((  void (*) (TypeConstructor_1_t4B02051589066DA6CAD76A46B2FB0896FB6F1353*, const RuntimeMethod*))TypeConstructor_1__ctor_m74203C1B59EBD226404F82D4FE8ECCE279763902_gshared)(__this, method);
}
inline void TypeConstructor_1__ctor_mDE1389C84380C4456818EB59CA7C49951026B1D6 (TypeConstructor_1_t9D3BD244EB1B72A274F2DF3BD2871FE3D1103947* __this, const RuntimeMethod* method)
{
	((  void (*) (TypeConstructor_1_t9D3BD244EB1B72A274F2DF3BD2871FE3D1103947*, const RuntimeMethod*))TypeConstructor_1__ctor_mDE1389C84380C4456818EB59CA7C49951026B1D6_gshared)(__this, method);
}
inline void TypeConstructor_1__ctor_mF487A9F2F4B6893A278DDD2CA281144354953FB1 (TypeConstructor_1_t015B6532B2D88703CA87ACDD65D1F95F946DEBBC* __this, const RuntimeMethod* method)
{
	((  void (*) (TypeConstructor_1_t015B6532B2D88703CA87ACDD65D1F95F946DEBBC*, const RuntimeMethod*))TypeConstructor_1__ctor_mF487A9F2F4B6893A278DDD2CA281144354953FB1_gshared)(__this, method);
}
inline void TypeConstructor_1__ctor_mDAFDA633F7A4D154406F63CE7E031CA7299715DE (TypeConstructor_1_t0B54B8DEF0851D113A157F922D908DE987F2BB1B* __this, const RuntimeMethod* method)
{
	((  void (*) (TypeConstructor_1_t0B54B8DEF0851D113A157F922D908DE987F2BB1B*, const RuntimeMethod*))TypeConstructor_1__ctor_mDAFDA633F7A4D154406F63CE7E031CA7299715DE_gshared)(__this, method);
}
inline void TypeConstructor_1__ctor_mE6B1A176CB56765080C95ECB263601E5ECC97ADB (TypeConstructor_1_tE50E3531CF764328151098BCE662D4FF81F9F4CA* __this, const RuntimeMethod* method)
{
	((  void (*) (TypeConstructor_1_tE50E3531CF764328151098BCE662D4FF81F9F4CA*, const RuntimeMethod*))TypeConstructor_1__ctor_mE6B1A176CB56765080C95ECB263601E5ECC97ADB_gshared)(__this, method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisRuntimeObject_m4E17F588B090C1DADAE2D986BDA407DECEAC020F (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisRuntimeObject_m4E17F588B090C1DADAE2D986BDA407DECEAC020F_gshared)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_GetTypeConstructor_m46157C15601C266EE0DB2324E834E1CE4CBFE1DC (Type_t* ___0_type, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeUtility_CheckIsAssignableFrom_m284900A7E86ACD68227E5E3DCC9430EEC7E1E03E (Type_t* ___0_type, Type_t* ___1_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeUtility_CheckCanBeInstantiated_mB2C921D41DC94D83758FC5CFDFEE26911F62B14F (RuntimeObject* ___0_constructor, Type_t* ___1_type, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, RuntimeObject* ___3_arg2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673 (Type_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeArray* Array_CreateInstance_m13B202130951A03AF5F52470A19E17D3AD2A8983 (Type_t* ___0_elementType, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PropertyBagStore_GetPropertyBag_m90F2EBB48D60993594856358C572964C8011143E (Type_t* ___0_type, const RuntimeMethod* method) ;
inline RuntimeObject* TypeUtility_GetTypeConstructor_TisRuntimeObject_m16C0BB9AC6C9E7396BA85526EC8A55AF216579DB (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_GetTypeConstructor_TisRuntimeObject_m16C0BB9AC6C9E7396BA85526EC8A55AF216579DB_gshared)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D (void* ___0_value, const RuntimeMethod* method) ;
inline Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A Vector_1_op_Explicit_m5E44D3923BF92F437AEC34CDE0CBD6130883B0B7 (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___0_value, const RuntimeMethod* method)
{
	return ((  Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A (*) (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489, const RuntimeMethod*))Vector_1_op_Explicit_m5E44D3923BF92F437AEC34CDE0CBD6130883B0B7_gshared)(___0_value, method);
}
inline Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 Vector_1_Equals_m6F913845CB1E8A1A753B3C187A8EB840C36F5ADF_inline (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___0_left, Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___1_right, const RuntimeMethod* method)
{
	return ((  Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 (*) (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489, Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489, const RuntimeMethod*))Vector_1_Equals_m6F913845CB1E8A1A753B3C187A8EB840C36F5ADF_gshared_inline)(___0_left, ___1_right, method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m16C827D0F6107B7998F6C99B57F7CC2F181E2198 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m16C827D0F6107B7998F6C99B57F7CC2F181E2198_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisBoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485_m8F344250A2F9E6EE6DDBA6BA833BB36D0F272B66 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisBoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485_m8F344250A2F9E6EE6DDBA6BA833BB36D0F272B66_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mBBCB804F367E06EA4D482F1B69165DD2B5BF38FF (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mBBCB804F367E06EA4D482F1B69165DD2B5BF38FF_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m2C5F5CF80D13B041768C7845C5AAEEC02BB683BA (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m2C5F5CF80D13B041768C7845C5AAEEC02BB683BA_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisRectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8_mF6949D9EDD480E6666CD975C66487AAD6ABC7D11 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisRectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8_mF6949D9EDD480E6666CD975C66487AAD6ABC7D11_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mE0C65F4221E48BB07F75856972A0CCDAE284AB9F (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mE0C65F4221E48BB07F75856972A0CCDAE284AB9F_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisVector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_mC8EF710494C8986B279262C6C64947BE2C1DC55C (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisVector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_mC8EF710494C8986B279262C6C64947BE2C1DC55C_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m1AB8BF0921C24186B3C43FC4341AAD2F6FE87C4D (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m1AB8BF0921C24186B3C43FC4341AAD2F6FE87C4D_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_mB00220519A80AA5ACE36B7DBA2E6A6CB796302AF (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_mB00220519A80AA5ACE36B7DBA2E6A6CB796302AF_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mED1DC338E5DB62F3E64F6272A9F12150DA5CC1B9 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mED1DC338E5DB62F3E64F6272A9F12150DA5CC1B9_gshared)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector_get_IsHardwareAccelerated_m783509258751EBED64CBD9F387EC1BB4A15088AA (const RuntimeMethod* method) ;
inline int32_t Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_gshared_inline)(method);
}
inline uint16_t Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27 (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  uint16_t (*) (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489*, int32_t, const RuntimeMethod*))Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27_gshared)(__this, ___0_index, method);
}
inline bool Vector_1_ScalarEquals_m4E13E30219B0D2AADB58AD6E5CB2B54B9FCBFAAE_inline (uint16_t ___0_left, uint16_t ___1_right, const RuntimeMethod* method)
{
	return ((  bool (*) (uint16_t, uint16_t, const RuntimeMethod*))Vector_1_ScalarEquals_m4E13E30219B0D2AADB58AD6E5CB2B54B9FCBFAAE_gshared_inline)(___0_left, ___1_right, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline (const RuntimeMethod* method) ;
inline void Vector_1__ctor_m46ADEA122EFBA7AEF487716891A8ADD284FD12E3 (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, void* ___0_dataPointer, const RuntimeMethod* method)
{
	((  void (*) (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489*, void*, const RuntimeMethod*))Vector_1__ctor_m46ADEA122EFBA7AEF487716891A8ADD284FD12E3_gshared)(__this, ___0_dataPointer, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int8_t ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int16_t ConstantHelper_GetInt16WithAllBitsSet_m70C5F99E624490970E2D4093FE6E800D1849DDFC_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t ConstantHelper_GetUInt32WithAllBitsSet_m78CBFE0C29CF227C16D2A9021972A0D54744BCAF_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ConstantHelper_GetInt32WithAllBitsSet_m245101340DDE7277600327D319DF86F1FFEA4FD0_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t ConstantHelper_GetUInt64WithAllBitsSet_mB7F3E046EE6B1B20C552BF7CF619416E239A5A96_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t ConstantHelper_GetInt64WithAllBitsSet_m56A9AB64BA5DDD9ECC99424875824591DEFD5C40_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ConstantHelper_GetSingleWithAllBitsSet_m66FC11C0680F744EB8315278910061C9535818C0_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double ConstantHelper_GetDoubleWithAllBitsSet_mF43AF77A6C93B7590B35B20458E80F2BC66AD5F2_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, String_t* ___0_message, const RuntimeMethod* method) ;
inline void Vector_1__ctor_m48CD7847B9597F3193C9C0BA97ED64E276F4340A (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* ___0_existingRegister, const RuntimeMethod* method)
{
	((  void (*) (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489*, Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*, const RuntimeMethod*))Vector_1__ctor_m48CD7847B9597F3193C9C0BA97ED64E276F4340A_gshared)(__this, ___0_existingRegister, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tweener_DoStartup_TisRuntimeObject_TisRuntimeObject_TisNoOptions_t2B4A2CA3C472B5AC37AACC090B1D0B27BCF4307E_m9638835125CFA71D256B46DFE336F220D381C8A3_gshared (TweenerCore_3_t309A316DD98511F745EEA5D99CEC7179C868AB59* ___0_t, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Exception_t* V_0 = NULL;
	bool V_1 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	TweenerCore_3_t309A316DD98511F745EEA5D99CEC7179C868AB59* G_B8_0 = NULL;
	TweenerCore_3_t309A316DD98511F745EEA5D99CEC7179C868AB59* G_B7_0 = NULL;
	int32_t G_B9_0 = 0;
	TweenerCore_3_t309A316DD98511F745EEA5D99CEC7179C868AB59* G_B9_1 = NULL;
	TweenerCore_3_t309A316DD98511F745EEA5D99CEC7179C868AB59* G_B18_0 = NULL;
	TweenerCore_3_t309A316DD98511F745EEA5D99CEC7179C868AB59* G_B17_0 = NULL;
	int32_t G_B19_0 = 0;
	TweenerCore_3_t309A316DD98511F745EEA5D99CEC7179C868AB59* G_B19_1 = NULL;
	{
		TweenerCore_3_t309A316DD98511F745EEA5D99CEC7179C868AB59* L_0 = ___0_t;
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_0)->___startupDone = (bool)1;
		TweenerCore_3_t309A316DD98511F745EEA5D99CEC7179C868AB59* L_1 = ___0_t;
		int32_t L_2 = ((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_1)->___specialStartupMode;
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		TweenerCore_3_t309A316DD98511F745EEA5D99CEC7179C868AB59* L_3 = ___0_t;
		bool L_4;
		L_4 = Tweener_DOStartupSpecials_TisRuntimeObject_TisRuntimeObject_TisNoOptions_t2B4A2CA3C472B5AC37AACC090B1D0B27BCF4307E_mF5F9E7CD9D6898B2D10BBA53AE3520E9C3849F47(L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
		if (L_4)
		{
			goto IL_0019;
		}
	}
	{
		return (bool)0;
	}

IL_0019:
	{
		TweenerCore_3_t309A316DD98511F745EEA5D99CEC7179C868AB59* L_5 = ___0_t;
		bool L_6 = ((Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140*)L_5)->___hasManuallySetStartValue;
		if (L_6)
		{
			goto IL_00f8;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		bool L_7 = ((DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var))->___useSafeMode;
		if (!L_7)
		{
			goto IL_00af;
		}
	}
	try
	{
		{
			TweenerCore_3_t309A316DD98511F745EEA5D99CEC7179C868AB59* L_8 = ___0_t;
			bool L_9 = ((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_8)->___isFrom;
			if (!L_9)
			{
				goto IL_005a_1;
			}
		}
		{
			TweenerCore_3_t309A316DD98511F745EEA5D99CEC7179C868AB59* L_10 = ___0_t;
			TweenerCore_3_t309A316DD98511F745EEA5D99CEC7179C868AB59* L_11 = ___0_t;
			bool L_12;
			L_12 = Tween_get_isRelative_mC31C34D21C3953F9AA7F25C0429BEBE45D2DBAE2_inline((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_11, NULL);
			if (!L_12)
			{
				G_B8_0 = L_10;
				goto IL_004a_1;
			}
			G_B7_0 = L_10;
		}
		{
			TweenerCore_3_t309A316DD98511F745EEA5D99CEC7179C868AB59* L_13 = ___0_t;
			bool L_14 = ((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_13)->___isBlendable;
			G_B9_0 = ((((int32_t)L_14) == ((int32_t)0))? 1 : 0);
			G_B9_1 = G_B7_0;
			goto IL_004b_1;
		}

IL_004a_1:
		{
			G_B9_0 = 0;
			G_B9_1 = G_B8_0;
		}

IL_004b_1:
		{
			Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_15;
			L_15 = VirtualFuncInvoker1< Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140*, bool >::Invoke(8, (Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140*)G_B9_1, (bool)G_B9_0);
			TweenerCore_3_t309A316DD98511F745EEA5D99CEC7179C868AB59* L_16 = ___0_t;
			Tween_set_isRelative_m881085052780C20122B970FA26766E551DA3B8EB_inline((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_16, (bool)0, NULL);
			goto IL_0077_1;
		}

IL_005a_1:
		{
			TweenerCore_3_t309A316DD98511F745EEA5D99CEC7179C868AB59* L_17 = ___0_t;
			TweenerCore_3_t309A316DD98511F745EEA5D99CEC7179C868AB59* L_18 = ___0_t;
			ABSTweenPlugin_3_tD50BA08812AFCD7C2C34161AA370ADAD96ED9147* L_19 = L_18->___tweenPlugin;
			TweenerCore_3_t309A316DD98511F745EEA5D99CEC7179C868AB59* L_20 = ___0_t;
			TweenerCore_3_t309A316DD98511F745EEA5D99CEC7179C868AB59* L_21 = ___0_t;
			DOGetter_1_t423CA9B377A96EA7C69ABA0C83C81B8D5B045E85* L_22 = L_21->___getter;
			RuntimeObject* L_23;
			L_23 = DOGetter_1_Invoke_m2E3E6152AEB758D99AEC826BB5830B5C8BDB36EB_inline(L_22, il2cpp_rgctx_method(method->rgctx_data, 4));
			RuntimeObject* L_24;
			L_24 = VirtualFuncInvoker2< RuntimeObject*, TweenerCore_3_t309A316DD98511F745EEA5D99CEC7179C868AB59*, RuntimeObject* >::Invoke(7, L_19, L_20, L_23);
			L_17->___startValue = L_24;
			Il2CppCodeGenWriteBarrier((void**)(&L_17->___startValue), (void*)L_24);
		}

IL_0077_1:
		{
			goto IL_00f8;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0079;
		}
		throw e;
	}

CATCH_0079:
	{
		{
			Exception_t* L_25 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
			V_0 = L_25;
			bool L_26;
			L_26 = Debugger_ShouldLogSafeModeCapturedError_m5EE800D2A5FD98C95C119D9AF68035095A123C47(NULL);
			if (!L_26)
			{
				goto IL_009d;
			}
		}
		{
			Exception_t* L_27 = V_0;
			MethodBase_t* L_28;
			L_28 = Exception_get_TargetSite_m0CE79BBF864CCEA96B72ED52EC66753CFBE5ED6A(L_27, NULL);
			Exception_t* L_29 = V_0;
			String_t* L_30;
			L_30 = VirtualFuncInvoker0< String_t* >::Invoke(5, L_29);
			String_t* L_31;
			L_31 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAEEC35A7704ECFD616CD15F38FB2BD30AFF7D21B)), (RuntimeObject*)L_28, (RuntimeObject*)L_30, NULL);
			TweenerCore_3_t309A316DD98511F745EEA5D99CEC7179C868AB59* L_32 = ___0_t;
			Debugger_LogSafeModeCapturedError_m0EE4B4F14B9243B4A9BD757853CAB77B5A888ED6((RuntimeObject*)L_31, (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_32, NULL);
		}

IL_009d:
		{
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var)));
			SafeModeReport_Add_mC993434DFE20DDF1E44389DACD34085F31E6ED20((&((DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var))))->___safeModeReport), (int32_t)3, NULL);
			V_1 = (bool)0;
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_0135;
		}
	}

IL_00af:
	{
		TweenerCore_3_t309A316DD98511F745EEA5D99CEC7179C868AB59* L_33 = ___0_t;
		bool L_34 = ((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_33)->___isFrom;
		if (!L_34)
		{
			goto IL_00db;
		}
	}
	{
		TweenerCore_3_t309A316DD98511F745EEA5D99CEC7179C868AB59* L_35 = ___0_t;
		TweenerCore_3_t309A316DD98511F745EEA5D99CEC7179C868AB59* L_36 = ___0_t;
		bool L_37;
		L_37 = Tween_get_isRelative_mC31C34D21C3953F9AA7F25C0429BEBE45D2DBAE2_inline((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_36, NULL);
		if (!L_37)
		{
			G_B18_0 = L_35;
			goto IL_00cb;
		}
		G_B17_0 = L_35;
	}
	{
		TweenerCore_3_t309A316DD98511F745EEA5D99CEC7179C868AB59* L_38 = ___0_t;
		bool L_39 = ((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_38)->___isBlendable;
		G_B19_0 = ((((int32_t)L_39) == ((int32_t)0))? 1 : 0);
		G_B19_1 = G_B17_0;
		goto IL_00cc;
	}

IL_00cb:
	{
		G_B19_0 = 0;
		G_B19_1 = G_B18_0;
	}

IL_00cc:
	{
		Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_40;
		L_40 = VirtualFuncInvoker1< Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140*, bool >::Invoke(8, (Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140*)G_B19_1, (bool)G_B19_0);
		TweenerCore_3_t309A316DD98511F745EEA5D99CEC7179C868AB59* L_41 = ___0_t;
		Tween_set_isRelative_m881085052780C20122B970FA26766E551DA3B8EB_inline((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_41, (bool)0, NULL);
		goto IL_00f8;
	}

IL_00db:
	{
		TweenerCore_3_t309A316DD98511F745EEA5D99CEC7179C868AB59* L_42 = ___0_t;
		TweenerCore_3_t309A316DD98511F745EEA5D99CEC7179C868AB59* L_43 = ___0_t;
		ABSTweenPlugin_3_tD50BA08812AFCD7C2C34161AA370ADAD96ED9147* L_44 = L_43->___tweenPlugin;
		TweenerCore_3_t309A316DD98511F745EEA5D99CEC7179C868AB59* L_45 = ___0_t;
		TweenerCore_3_t309A316DD98511F745EEA5D99CEC7179C868AB59* L_46 = ___0_t;
		DOGetter_1_t423CA9B377A96EA7C69ABA0C83C81B8D5B045E85* L_47 = L_46->___getter;
		RuntimeObject* L_48;
		L_48 = DOGetter_1_Invoke_m2E3E6152AEB758D99AEC826BB5830B5C8BDB36EB_inline(L_47, il2cpp_rgctx_method(method->rgctx_data, 4));
		RuntimeObject* L_49;
		L_49 = VirtualFuncInvoker2< RuntimeObject*, TweenerCore_3_t309A316DD98511F745EEA5D99CEC7179C868AB59*, RuntimeObject* >::Invoke(7, L_44, L_45, L_48);
		L_42->___startValue = L_49;
		Il2CppCodeGenWriteBarrier((void**)(&L_42->___startValue), (void*)L_49);
	}

IL_00f8:
	{
		TweenerCore_3_t309A316DD98511F745EEA5D99CEC7179C868AB59* L_50 = ___0_t;
		bool L_51;
		L_51 = Tween_get_isRelative_mC31C34D21C3953F9AA7F25C0429BEBE45D2DBAE2_inline((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_50, NULL);
		if (!L_51)
		{
			goto IL_010c;
		}
	}
	{
		TweenerCore_3_t309A316DD98511F745EEA5D99CEC7179C868AB59* L_52 = ___0_t;
		ABSTweenPlugin_3_tD50BA08812AFCD7C2C34161AA370ADAD96ED9147* L_53 = L_52->___tweenPlugin;
		TweenerCore_3_t309A316DD98511F745EEA5D99CEC7179C868AB59* L_54 = ___0_t;
		VirtualActionInvoker1< TweenerCore_3_t309A316DD98511F745EEA5D99CEC7179C868AB59* >::Invoke(8, L_53, L_54);
	}

IL_010c:
	{
		TweenerCore_3_t309A316DD98511F745EEA5D99CEC7179C868AB59* L_55 = ___0_t;
		ABSTweenPlugin_3_tD50BA08812AFCD7C2C34161AA370ADAD96ED9147* L_56 = L_55->___tweenPlugin;
		TweenerCore_3_t309A316DD98511F745EEA5D99CEC7179C868AB59* L_57 = ___0_t;
		VirtualActionInvoker1< TweenerCore_3_t309A316DD98511F745EEA5D99CEC7179C868AB59* >::Invoke(9, L_56, L_57);
		TweenerCore_3_t309A316DD98511F745EEA5D99CEC7179C868AB59* L_58 = ___0_t;
		Tweener_DOStartupDurationBased_TisRuntimeObject_TisRuntimeObject_TisNoOptions_t2B4A2CA3C472B5AC37AACC090B1D0B27BCF4307E_m797F458C42ABDA791EDCFC8910DAFED2B5D8033F(L_58, il2cpp_rgctx_method(method->rgctx_data, 10));
		TweenerCore_3_t309A316DD98511F745EEA5D99CEC7179C868AB59* L_59 = ___0_t;
		float L_60 = ((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_59)->___duration;
		if ((!(((float)L_60) <= ((float)(0.0f)))))
		{
			goto IL_0133;
		}
	}
	{
		TweenerCore_3_t309A316DD98511F745EEA5D99CEC7179C868AB59* L_61 = ___0_t;
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_61)->___easeType = (int32_t)((int32_t)36);
	}

IL_0133:
	{
		return (bool)1;
	}

IL_0135:
	{
		bool L_62 = V_1;
		return L_62;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tweener_DoStartup_TisRuntimeObject_TisRuntimeObject_TisStringOptions_tC70D70DB6854CE62E6BBC3AA066517835919E9FA_m5A8B820FEEDB51C71ECB3C1AE61B0ECC3615A447_gshared (TweenerCore_3_tA6865573C9B15C90F5AF42AA9F04D8D11822B687* ___0_t, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Exception_t* V_0 = NULL;
	bool V_1 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	TweenerCore_3_tA6865573C9B15C90F5AF42AA9F04D8D11822B687* G_B8_0 = NULL;
	TweenerCore_3_tA6865573C9B15C90F5AF42AA9F04D8D11822B687* G_B7_0 = NULL;
	int32_t G_B9_0 = 0;
	TweenerCore_3_tA6865573C9B15C90F5AF42AA9F04D8D11822B687* G_B9_1 = NULL;
	TweenerCore_3_tA6865573C9B15C90F5AF42AA9F04D8D11822B687* G_B18_0 = NULL;
	TweenerCore_3_tA6865573C9B15C90F5AF42AA9F04D8D11822B687* G_B17_0 = NULL;
	int32_t G_B19_0 = 0;
	TweenerCore_3_tA6865573C9B15C90F5AF42AA9F04D8D11822B687* G_B19_1 = NULL;
	{
		TweenerCore_3_tA6865573C9B15C90F5AF42AA9F04D8D11822B687* L_0 = ___0_t;
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_0)->___startupDone = (bool)1;
		TweenerCore_3_tA6865573C9B15C90F5AF42AA9F04D8D11822B687* L_1 = ___0_t;
		int32_t L_2 = ((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_1)->___specialStartupMode;
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		TweenerCore_3_tA6865573C9B15C90F5AF42AA9F04D8D11822B687* L_3 = ___0_t;
		bool L_4;
		L_4 = Tweener_DOStartupSpecials_TisRuntimeObject_TisRuntimeObject_TisStringOptions_tC70D70DB6854CE62E6BBC3AA066517835919E9FA_m653E1C62D7F677D340991D88371F4F41731DFB0E(L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
		if (L_4)
		{
			goto IL_0019;
		}
	}
	{
		return (bool)0;
	}

IL_0019:
	{
		TweenerCore_3_tA6865573C9B15C90F5AF42AA9F04D8D11822B687* L_5 = ___0_t;
		bool L_6 = ((Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140*)L_5)->___hasManuallySetStartValue;
		if (L_6)
		{
			goto IL_00f8;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		bool L_7 = ((DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var))->___useSafeMode;
		if (!L_7)
		{
			goto IL_00af;
		}
	}
	try
	{
		{
			TweenerCore_3_tA6865573C9B15C90F5AF42AA9F04D8D11822B687* L_8 = ___0_t;
			bool L_9 = ((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_8)->___isFrom;
			if (!L_9)
			{
				goto IL_005a_1;
			}
		}
		{
			TweenerCore_3_tA6865573C9B15C90F5AF42AA9F04D8D11822B687* L_10 = ___0_t;
			TweenerCore_3_tA6865573C9B15C90F5AF42AA9F04D8D11822B687* L_11 = ___0_t;
			bool L_12;
			L_12 = Tween_get_isRelative_mC31C34D21C3953F9AA7F25C0429BEBE45D2DBAE2_inline((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_11, NULL);
			if (!L_12)
			{
				G_B8_0 = L_10;
				goto IL_004a_1;
			}
			G_B7_0 = L_10;
		}
		{
			TweenerCore_3_tA6865573C9B15C90F5AF42AA9F04D8D11822B687* L_13 = ___0_t;
			bool L_14 = ((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_13)->___isBlendable;
			G_B9_0 = ((((int32_t)L_14) == ((int32_t)0))? 1 : 0);
			G_B9_1 = G_B7_0;
			goto IL_004b_1;
		}

IL_004a_1:
		{
			G_B9_0 = 0;
			G_B9_1 = G_B8_0;
		}

IL_004b_1:
		{
			Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_15;
			L_15 = VirtualFuncInvoker1< Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140*, bool >::Invoke(8, (Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140*)G_B9_1, (bool)G_B9_0);
			TweenerCore_3_tA6865573C9B15C90F5AF42AA9F04D8D11822B687* L_16 = ___0_t;
			Tween_set_isRelative_m881085052780C20122B970FA26766E551DA3B8EB_inline((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_16, (bool)0, NULL);
			goto IL_0077_1;
		}

IL_005a_1:
		{
			TweenerCore_3_tA6865573C9B15C90F5AF42AA9F04D8D11822B687* L_17 = ___0_t;
			TweenerCore_3_tA6865573C9B15C90F5AF42AA9F04D8D11822B687* L_18 = ___0_t;
			ABSTweenPlugin_3_t7A2E1B65C126514AD320331036B9ACCE74AD21D9* L_19 = L_18->___tweenPlugin;
			TweenerCore_3_tA6865573C9B15C90F5AF42AA9F04D8D11822B687* L_20 = ___0_t;
			TweenerCore_3_tA6865573C9B15C90F5AF42AA9F04D8D11822B687* L_21 = ___0_t;
			DOGetter_1_t423CA9B377A96EA7C69ABA0C83C81B8D5B045E85* L_22 = L_21->___getter;
			RuntimeObject* L_23;
			L_23 = DOGetter_1_Invoke_m2E3E6152AEB758D99AEC826BB5830B5C8BDB36EB_inline(L_22, il2cpp_rgctx_method(method->rgctx_data, 4));
			RuntimeObject* L_24;
			L_24 = VirtualFuncInvoker2< RuntimeObject*, TweenerCore_3_tA6865573C9B15C90F5AF42AA9F04D8D11822B687*, RuntimeObject* >::Invoke(7, L_19, L_20, L_23);
			L_17->___startValue = L_24;
			Il2CppCodeGenWriteBarrier((void**)(&L_17->___startValue), (void*)L_24);
		}

IL_0077_1:
		{
			goto IL_00f8;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0079;
		}
		throw e;
	}

CATCH_0079:
	{
		{
			Exception_t* L_25 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
			V_0 = L_25;
			bool L_26;
			L_26 = Debugger_ShouldLogSafeModeCapturedError_m5EE800D2A5FD98C95C119D9AF68035095A123C47(NULL);
			if (!L_26)
			{
				goto IL_009d;
			}
		}
		{
			Exception_t* L_27 = V_0;
			MethodBase_t* L_28;
			L_28 = Exception_get_TargetSite_m0CE79BBF864CCEA96B72ED52EC66753CFBE5ED6A(L_27, NULL);
			Exception_t* L_29 = V_0;
			String_t* L_30;
			L_30 = VirtualFuncInvoker0< String_t* >::Invoke(5, L_29);
			String_t* L_31;
			L_31 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAEEC35A7704ECFD616CD15F38FB2BD30AFF7D21B)), (RuntimeObject*)L_28, (RuntimeObject*)L_30, NULL);
			TweenerCore_3_tA6865573C9B15C90F5AF42AA9F04D8D11822B687* L_32 = ___0_t;
			Debugger_LogSafeModeCapturedError_m0EE4B4F14B9243B4A9BD757853CAB77B5A888ED6((RuntimeObject*)L_31, (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_32, NULL);
		}

IL_009d:
		{
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var)));
			SafeModeReport_Add_mC993434DFE20DDF1E44389DACD34085F31E6ED20((&((DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var))))->___safeModeReport), (int32_t)3, NULL);
			V_1 = (bool)0;
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_0135;
		}
	}

IL_00af:
	{
		TweenerCore_3_tA6865573C9B15C90F5AF42AA9F04D8D11822B687* L_33 = ___0_t;
		bool L_34 = ((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_33)->___isFrom;
		if (!L_34)
		{
			goto IL_00db;
		}
	}
	{
		TweenerCore_3_tA6865573C9B15C90F5AF42AA9F04D8D11822B687* L_35 = ___0_t;
		TweenerCore_3_tA6865573C9B15C90F5AF42AA9F04D8D11822B687* L_36 = ___0_t;
		bool L_37;
		L_37 = Tween_get_isRelative_mC31C34D21C3953F9AA7F25C0429BEBE45D2DBAE2_inline((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_36, NULL);
		if (!L_37)
		{
			G_B18_0 = L_35;
			goto IL_00cb;
		}
		G_B17_0 = L_35;
	}
	{
		TweenerCore_3_tA6865573C9B15C90F5AF42AA9F04D8D11822B687* L_38 = ___0_t;
		bool L_39 = ((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_38)->___isBlendable;
		G_B19_0 = ((((int32_t)L_39) == ((int32_t)0))? 1 : 0);
		G_B19_1 = G_B17_0;
		goto IL_00cc;
	}

IL_00cb:
	{
		G_B19_0 = 0;
		G_B19_1 = G_B18_0;
	}

IL_00cc:
	{
		Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_40;
		L_40 = VirtualFuncInvoker1< Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140*, bool >::Invoke(8, (Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140*)G_B19_1, (bool)G_B19_0);
		TweenerCore_3_tA6865573C9B15C90F5AF42AA9F04D8D11822B687* L_41 = ___0_t;
		Tween_set_isRelative_m881085052780C20122B970FA26766E551DA3B8EB_inline((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_41, (bool)0, NULL);
		goto IL_00f8;
	}

IL_00db:
	{
		TweenerCore_3_tA6865573C9B15C90F5AF42AA9F04D8D11822B687* L_42 = ___0_t;
		TweenerCore_3_tA6865573C9B15C90F5AF42AA9F04D8D11822B687* L_43 = ___0_t;
		ABSTweenPlugin_3_t7A2E1B65C126514AD320331036B9ACCE74AD21D9* L_44 = L_43->___tweenPlugin;
		TweenerCore_3_tA6865573C9B15C90F5AF42AA9F04D8D11822B687* L_45 = ___0_t;
		TweenerCore_3_tA6865573C9B15C90F5AF42AA9F04D8D11822B687* L_46 = ___0_t;
		DOGetter_1_t423CA9B377A96EA7C69ABA0C83C81B8D5B045E85* L_47 = L_46->___getter;
		RuntimeObject* L_48;
		L_48 = DOGetter_1_Invoke_m2E3E6152AEB758D99AEC826BB5830B5C8BDB36EB_inline(L_47, il2cpp_rgctx_method(method->rgctx_data, 4));
		RuntimeObject* L_49;
		L_49 = VirtualFuncInvoker2< RuntimeObject*, TweenerCore_3_tA6865573C9B15C90F5AF42AA9F04D8D11822B687*, RuntimeObject* >::Invoke(7, L_44, L_45, L_48);
		L_42->___startValue = L_49;
		Il2CppCodeGenWriteBarrier((void**)(&L_42->___startValue), (void*)L_49);
	}

IL_00f8:
	{
		TweenerCore_3_tA6865573C9B15C90F5AF42AA9F04D8D11822B687* L_50 = ___0_t;
		bool L_51;
		L_51 = Tween_get_isRelative_mC31C34D21C3953F9AA7F25C0429BEBE45D2DBAE2_inline((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_50, NULL);
		if (!L_51)
		{
			goto IL_010c;
		}
	}
	{
		TweenerCore_3_tA6865573C9B15C90F5AF42AA9F04D8D11822B687* L_52 = ___0_t;
		ABSTweenPlugin_3_t7A2E1B65C126514AD320331036B9ACCE74AD21D9* L_53 = L_52->___tweenPlugin;
		TweenerCore_3_tA6865573C9B15C90F5AF42AA9F04D8D11822B687* L_54 = ___0_t;
		VirtualActionInvoker1< TweenerCore_3_tA6865573C9B15C90F5AF42AA9F04D8D11822B687* >::Invoke(8, L_53, L_54);
	}

IL_010c:
	{
		TweenerCore_3_tA6865573C9B15C90F5AF42AA9F04D8D11822B687* L_55 = ___0_t;
		ABSTweenPlugin_3_t7A2E1B65C126514AD320331036B9ACCE74AD21D9* L_56 = L_55->___tweenPlugin;
		TweenerCore_3_tA6865573C9B15C90F5AF42AA9F04D8D11822B687* L_57 = ___0_t;
		VirtualActionInvoker1< TweenerCore_3_tA6865573C9B15C90F5AF42AA9F04D8D11822B687* >::Invoke(9, L_56, L_57);
		TweenerCore_3_tA6865573C9B15C90F5AF42AA9F04D8D11822B687* L_58 = ___0_t;
		Tweener_DOStartupDurationBased_TisRuntimeObject_TisRuntimeObject_TisStringOptions_tC70D70DB6854CE62E6BBC3AA066517835919E9FA_m58075B3769522C5557C81AAF1530EEB4DE4081FF(L_58, il2cpp_rgctx_method(method->rgctx_data, 10));
		TweenerCore_3_tA6865573C9B15C90F5AF42AA9F04D8D11822B687* L_59 = ___0_t;
		float L_60 = ((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_59)->___duration;
		if ((!(((float)L_60) <= ((float)(0.0f)))))
		{
			goto IL_0133;
		}
	}
	{
		TweenerCore_3_tA6865573C9B15C90F5AF42AA9F04D8D11822B687* L_61 = ___0_t;
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_61)->___easeType = (int32_t)((int32_t)36);
	}

IL_0133:
	{
		return (bool)1;
	}

IL_0135:
	{
		bool L_62 = V_1;
		return L_62;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tweener_DoStartup_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_TisQuaternionOptions_t1B83700718F7417854E4B6FB0E1726E183F69718_mF9BFD5B44B0DFFE2DB7BBCF3DC1FBCD9CF65F61A_gshared (TweenerCore_3_t392C54729BB024F5802F8E205C583653C4E886E3* ___0_t, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Exception_t* V_0 = NULL;
	bool V_1 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	TweenerCore_3_t392C54729BB024F5802F8E205C583653C4E886E3* G_B8_0 = NULL;
	TweenerCore_3_t392C54729BB024F5802F8E205C583653C4E886E3* G_B7_0 = NULL;
	int32_t G_B9_0 = 0;
	TweenerCore_3_t392C54729BB024F5802F8E205C583653C4E886E3* G_B9_1 = NULL;
	TweenerCore_3_t392C54729BB024F5802F8E205C583653C4E886E3* G_B18_0 = NULL;
	TweenerCore_3_t392C54729BB024F5802F8E205C583653C4E886E3* G_B17_0 = NULL;
	int32_t G_B19_0 = 0;
	TweenerCore_3_t392C54729BB024F5802F8E205C583653C4E886E3* G_B19_1 = NULL;
	{
		TweenerCore_3_t392C54729BB024F5802F8E205C583653C4E886E3* L_0 = ___0_t;
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_0)->___startupDone = (bool)1;
		TweenerCore_3_t392C54729BB024F5802F8E205C583653C4E886E3* L_1 = ___0_t;
		int32_t L_2 = ((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_1)->___specialStartupMode;
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		TweenerCore_3_t392C54729BB024F5802F8E205C583653C4E886E3* L_3 = ___0_t;
		bool L_4;
		L_4 = Tweener_DOStartupSpecials_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_TisQuaternionOptions_t1B83700718F7417854E4B6FB0E1726E183F69718_mE8603C06ED5A9676DA693ED7200EB44AE00781A5(L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
		if (L_4)
		{
			goto IL_0019;
		}
	}
	{
		return (bool)0;
	}

IL_0019:
	{
		TweenerCore_3_t392C54729BB024F5802F8E205C583653C4E886E3* L_5 = ___0_t;
		bool L_6 = ((Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140*)L_5)->___hasManuallySetStartValue;
		if (L_6)
		{
			goto IL_00f8;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		bool L_7 = ((DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var))->___useSafeMode;
		if (!L_7)
		{
			goto IL_00af;
		}
	}
	try
	{
		{
			TweenerCore_3_t392C54729BB024F5802F8E205C583653C4E886E3* L_8 = ___0_t;
			bool L_9 = ((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_8)->___isFrom;
			if (!L_9)
			{
				goto IL_005a_1;
			}
		}
		{
			TweenerCore_3_t392C54729BB024F5802F8E205C583653C4E886E3* L_10 = ___0_t;
			TweenerCore_3_t392C54729BB024F5802F8E205C583653C4E886E3* L_11 = ___0_t;
			bool L_12;
			L_12 = Tween_get_isRelative_mC31C34D21C3953F9AA7F25C0429BEBE45D2DBAE2_inline((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_11, NULL);
			if (!L_12)
			{
				G_B8_0 = L_10;
				goto IL_004a_1;
			}
			G_B7_0 = L_10;
		}
		{
			TweenerCore_3_t392C54729BB024F5802F8E205C583653C4E886E3* L_13 = ___0_t;
			bool L_14 = ((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_13)->___isBlendable;
			G_B9_0 = ((((int32_t)L_14) == ((int32_t)0))? 1 : 0);
			G_B9_1 = G_B7_0;
			goto IL_004b_1;
		}

IL_004a_1:
		{
			G_B9_0 = 0;
			G_B9_1 = G_B8_0;
		}

IL_004b_1:
		{
			Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_15;
			L_15 = VirtualFuncInvoker1< Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140*, bool >::Invoke(8, (Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140*)G_B9_1, (bool)G_B9_0);
			TweenerCore_3_t392C54729BB024F5802F8E205C583653C4E886E3* L_16 = ___0_t;
			Tween_set_isRelative_m881085052780C20122B970FA26766E551DA3B8EB_inline((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_16, (bool)0, NULL);
			goto IL_0077_1;
		}

IL_005a_1:
		{
			TweenerCore_3_t392C54729BB024F5802F8E205C583653C4E886E3* L_17 = ___0_t;
			TweenerCore_3_t392C54729BB024F5802F8E205C583653C4E886E3* L_18 = ___0_t;
			ABSTweenPlugin_3_t3823C0F935A3168B9E48DC90ABD9A0CED3D7BB82* L_19 = L_18->___tweenPlugin;
			TweenerCore_3_t392C54729BB024F5802F8E205C583653C4E886E3* L_20 = ___0_t;
			TweenerCore_3_t392C54729BB024F5802F8E205C583653C4E886E3* L_21 = ___0_t;
			DOGetter_1_tB89DD12456B8E79576BB70E1CA6DF899686410D3* L_22 = L_21->___getter;
			Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_23;
			L_23 = DOGetter_1_Invoke_m371680D24D99D662F517503519BCBDC9B73F61B8_inline(L_22, il2cpp_rgctx_method(method->rgctx_data, 4));
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
			L_24 = VirtualFuncInvoker2< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, TweenerCore_3_t392C54729BB024F5802F8E205C583653C4E886E3*, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 >::Invoke(7, L_19, L_20, L_23);
			L_17->___startValue = L_24;
		}

IL_0077_1:
		{
			goto IL_00f8;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0079;
		}
		throw e;
	}

CATCH_0079:
	{
		{
			Exception_t* L_25 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
			V_0 = L_25;
			bool L_26;
			L_26 = Debugger_ShouldLogSafeModeCapturedError_m5EE800D2A5FD98C95C119D9AF68035095A123C47(NULL);
			if (!L_26)
			{
				goto IL_009d;
			}
		}
		{
			Exception_t* L_27 = V_0;
			MethodBase_t* L_28;
			L_28 = Exception_get_TargetSite_m0CE79BBF864CCEA96B72ED52EC66753CFBE5ED6A(L_27, NULL);
			Exception_t* L_29 = V_0;
			String_t* L_30;
			L_30 = VirtualFuncInvoker0< String_t* >::Invoke(5, L_29);
			String_t* L_31;
			L_31 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAEEC35A7704ECFD616CD15F38FB2BD30AFF7D21B)), (RuntimeObject*)L_28, (RuntimeObject*)L_30, NULL);
			TweenerCore_3_t392C54729BB024F5802F8E205C583653C4E886E3* L_32 = ___0_t;
			Debugger_LogSafeModeCapturedError_m0EE4B4F14B9243B4A9BD757853CAB77B5A888ED6((RuntimeObject*)L_31, (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_32, NULL);
		}

IL_009d:
		{
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var)));
			SafeModeReport_Add_mC993434DFE20DDF1E44389DACD34085F31E6ED20((&((DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var))))->___safeModeReport), (int32_t)3, NULL);
			V_1 = (bool)0;
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_0135;
		}
	}

IL_00af:
	{
		TweenerCore_3_t392C54729BB024F5802F8E205C583653C4E886E3* L_33 = ___0_t;
		bool L_34 = ((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_33)->___isFrom;
		if (!L_34)
		{
			goto IL_00db;
		}
	}
	{
		TweenerCore_3_t392C54729BB024F5802F8E205C583653C4E886E3* L_35 = ___0_t;
		TweenerCore_3_t392C54729BB024F5802F8E205C583653C4E886E3* L_36 = ___0_t;
		bool L_37;
		L_37 = Tween_get_isRelative_mC31C34D21C3953F9AA7F25C0429BEBE45D2DBAE2_inline((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_36, NULL);
		if (!L_37)
		{
			G_B18_0 = L_35;
			goto IL_00cb;
		}
		G_B17_0 = L_35;
	}
	{
		TweenerCore_3_t392C54729BB024F5802F8E205C583653C4E886E3* L_38 = ___0_t;
		bool L_39 = ((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_38)->___isBlendable;
		G_B19_0 = ((((int32_t)L_39) == ((int32_t)0))? 1 : 0);
		G_B19_1 = G_B17_0;
		goto IL_00cc;
	}

IL_00cb:
	{
		G_B19_0 = 0;
		G_B19_1 = G_B18_0;
	}

IL_00cc:
	{
		Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_40;
		L_40 = VirtualFuncInvoker1< Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140*, bool >::Invoke(8, (Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140*)G_B19_1, (bool)G_B19_0);
		TweenerCore_3_t392C54729BB024F5802F8E205C583653C4E886E3* L_41 = ___0_t;
		Tween_set_isRelative_m881085052780C20122B970FA26766E551DA3B8EB_inline((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_41, (bool)0, NULL);
		goto IL_00f8;
	}

IL_00db:
	{
		TweenerCore_3_t392C54729BB024F5802F8E205C583653C4E886E3* L_42 = ___0_t;
		TweenerCore_3_t392C54729BB024F5802F8E205C583653C4E886E3* L_43 = ___0_t;
		ABSTweenPlugin_3_t3823C0F935A3168B9E48DC90ABD9A0CED3D7BB82* L_44 = L_43->___tweenPlugin;
		TweenerCore_3_t392C54729BB024F5802F8E205C583653C4E886E3* L_45 = ___0_t;
		TweenerCore_3_t392C54729BB024F5802F8E205C583653C4E886E3* L_46 = ___0_t;
		DOGetter_1_tB89DD12456B8E79576BB70E1CA6DF899686410D3* L_47 = L_46->___getter;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_48;
		L_48 = DOGetter_1_Invoke_m371680D24D99D662F517503519BCBDC9B73F61B8_inline(L_47, il2cpp_rgctx_method(method->rgctx_data, 4));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49;
		L_49 = VirtualFuncInvoker2< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, TweenerCore_3_t392C54729BB024F5802F8E205C583653C4E886E3*, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 >::Invoke(7, L_44, L_45, L_48);
		L_42->___startValue = L_49;
	}

IL_00f8:
	{
		TweenerCore_3_t392C54729BB024F5802F8E205C583653C4E886E3* L_50 = ___0_t;
		bool L_51;
		L_51 = Tween_get_isRelative_mC31C34D21C3953F9AA7F25C0429BEBE45D2DBAE2_inline((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_50, NULL);
		if (!L_51)
		{
			goto IL_010c;
		}
	}
	{
		TweenerCore_3_t392C54729BB024F5802F8E205C583653C4E886E3* L_52 = ___0_t;
		ABSTweenPlugin_3_t3823C0F935A3168B9E48DC90ABD9A0CED3D7BB82* L_53 = L_52->___tweenPlugin;
		TweenerCore_3_t392C54729BB024F5802F8E205C583653C4E886E3* L_54 = ___0_t;
		VirtualActionInvoker1< TweenerCore_3_t392C54729BB024F5802F8E205C583653C4E886E3* >::Invoke(8, L_53, L_54);
	}

IL_010c:
	{
		TweenerCore_3_t392C54729BB024F5802F8E205C583653C4E886E3* L_55 = ___0_t;
		ABSTweenPlugin_3_t3823C0F935A3168B9E48DC90ABD9A0CED3D7BB82* L_56 = L_55->___tweenPlugin;
		TweenerCore_3_t392C54729BB024F5802F8E205C583653C4E886E3* L_57 = ___0_t;
		VirtualActionInvoker1< TweenerCore_3_t392C54729BB024F5802F8E205C583653C4E886E3* >::Invoke(9, L_56, L_57);
		TweenerCore_3_t392C54729BB024F5802F8E205C583653C4E886E3* L_58 = ___0_t;
		Tweener_DOStartupDurationBased_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_TisQuaternionOptions_t1B83700718F7417854E4B6FB0E1726E183F69718_m1C1F0D1336EEE4BADDC0921EA2467B65C4583662(L_58, il2cpp_rgctx_method(method->rgctx_data, 10));
		TweenerCore_3_t392C54729BB024F5802F8E205C583653C4E886E3* L_59 = ___0_t;
		float L_60 = ((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_59)->___duration;
		if ((!(((float)L_60) <= ((float)(0.0f)))))
		{
			goto IL_0133;
		}
	}
	{
		TweenerCore_3_t392C54729BB024F5802F8E205C583653C4E886E3* L_61 = ___0_t;
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_61)->___easeType = (int32_t)((int32_t)36);
	}

IL_0133:
	{
		return (bool)1;
	}

IL_0135:
	{
		bool L_62 = V_1;
		return L_62;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tweener_DoStartup_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_TisRectOptions_tCE72F3B850FF80059E448A0ED2AA3FF16EE5EDAC_mD52BD6CEEE81C26618A20FA2FDCC56EB8365DE9C_gshared (TweenerCore_3_tE0A3D42393A2015849880D806418B2EDD0187D5D* ___0_t, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Exception_t* V_0 = NULL;
	bool V_1 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	TweenerCore_3_tE0A3D42393A2015849880D806418B2EDD0187D5D* G_B8_0 = NULL;
	TweenerCore_3_tE0A3D42393A2015849880D806418B2EDD0187D5D* G_B7_0 = NULL;
	int32_t G_B9_0 = 0;
	TweenerCore_3_tE0A3D42393A2015849880D806418B2EDD0187D5D* G_B9_1 = NULL;
	TweenerCore_3_tE0A3D42393A2015849880D806418B2EDD0187D5D* G_B18_0 = NULL;
	TweenerCore_3_tE0A3D42393A2015849880D806418B2EDD0187D5D* G_B17_0 = NULL;
	int32_t G_B19_0 = 0;
	TweenerCore_3_tE0A3D42393A2015849880D806418B2EDD0187D5D* G_B19_1 = NULL;
	{
		TweenerCore_3_tE0A3D42393A2015849880D806418B2EDD0187D5D* L_0 = ___0_t;
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_0)->___startupDone = (bool)1;
		TweenerCore_3_tE0A3D42393A2015849880D806418B2EDD0187D5D* L_1 = ___0_t;
		int32_t L_2 = ((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_1)->___specialStartupMode;
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		TweenerCore_3_tE0A3D42393A2015849880D806418B2EDD0187D5D* L_3 = ___0_t;
		bool L_4;
		L_4 = Tweener_DOStartupSpecials_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_TisRectOptions_tCE72F3B850FF80059E448A0ED2AA3FF16EE5EDAC_m5254EA64BCC607DA62603B74A2C252F342774116(L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
		if (L_4)
		{
			goto IL_0019;
		}
	}
	{
		return (bool)0;
	}

IL_0019:
	{
		TweenerCore_3_tE0A3D42393A2015849880D806418B2EDD0187D5D* L_5 = ___0_t;
		bool L_6 = ((Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140*)L_5)->___hasManuallySetStartValue;
		if (L_6)
		{
			goto IL_00f8;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		bool L_7 = ((DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var))->___useSafeMode;
		if (!L_7)
		{
			goto IL_00af;
		}
	}
	try
	{
		{
			TweenerCore_3_tE0A3D42393A2015849880D806418B2EDD0187D5D* L_8 = ___0_t;
			bool L_9 = ((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_8)->___isFrom;
			if (!L_9)
			{
				goto IL_005a_1;
			}
		}
		{
			TweenerCore_3_tE0A3D42393A2015849880D806418B2EDD0187D5D* L_10 = ___0_t;
			TweenerCore_3_tE0A3D42393A2015849880D806418B2EDD0187D5D* L_11 = ___0_t;
			bool L_12;
			L_12 = Tween_get_isRelative_mC31C34D21C3953F9AA7F25C0429BEBE45D2DBAE2_inline((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_11, NULL);
			if (!L_12)
			{
				G_B8_0 = L_10;
				goto IL_004a_1;
			}
			G_B7_0 = L_10;
		}
		{
			TweenerCore_3_tE0A3D42393A2015849880D806418B2EDD0187D5D* L_13 = ___0_t;
			bool L_14 = ((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_13)->___isBlendable;
			G_B9_0 = ((((int32_t)L_14) == ((int32_t)0))? 1 : 0);
			G_B9_1 = G_B7_0;
			goto IL_004b_1;
		}

IL_004a_1:
		{
			G_B9_0 = 0;
			G_B9_1 = G_B8_0;
		}

IL_004b_1:
		{
			Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_15;
			L_15 = VirtualFuncInvoker1< Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140*, bool >::Invoke(8, (Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140*)G_B9_1, (bool)G_B9_0);
			TweenerCore_3_tE0A3D42393A2015849880D806418B2EDD0187D5D* L_16 = ___0_t;
			Tween_set_isRelative_m881085052780C20122B970FA26766E551DA3B8EB_inline((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_16, (bool)0, NULL);
			goto IL_0077_1;
		}

IL_005a_1:
		{
			TweenerCore_3_tE0A3D42393A2015849880D806418B2EDD0187D5D* L_17 = ___0_t;
			TweenerCore_3_tE0A3D42393A2015849880D806418B2EDD0187D5D* L_18 = ___0_t;
			ABSTweenPlugin_3_tA51581359A1B697A7A0A8F2FFDE00794FA1E67F4* L_19 = L_18->___tweenPlugin;
			TweenerCore_3_tE0A3D42393A2015849880D806418B2EDD0187D5D* L_20 = ___0_t;
			TweenerCore_3_tE0A3D42393A2015849880D806418B2EDD0187D5D* L_21 = ___0_t;
			DOGetter_1_t64F1C0E113DC45CC9A1FD194A80B7B4C40AC4923* L_22 = L_21->___getter;
			Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_23;
			L_23 = DOGetter_1_Invoke_m31C3B7B68D6A7D1D2804D66A2C1C7B9C7B4A3B89_inline(L_22, il2cpp_rgctx_method(method->rgctx_data, 4));
			Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_24;
			L_24 = VirtualFuncInvoker2< Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D, TweenerCore_3_tE0A3D42393A2015849880D806418B2EDD0187D5D*, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D >::Invoke(7, L_19, L_20, L_23);
			L_17->___startValue = L_24;
		}

IL_0077_1:
		{
			goto IL_00f8;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0079;
		}
		throw e;
	}

CATCH_0079:
	{
		{
			Exception_t* L_25 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
			V_0 = L_25;
			bool L_26;
			L_26 = Debugger_ShouldLogSafeModeCapturedError_m5EE800D2A5FD98C95C119D9AF68035095A123C47(NULL);
			if (!L_26)
			{
				goto IL_009d;
			}
		}
		{
			Exception_t* L_27 = V_0;
			MethodBase_t* L_28;
			L_28 = Exception_get_TargetSite_m0CE79BBF864CCEA96B72ED52EC66753CFBE5ED6A(L_27, NULL);
			Exception_t* L_29 = V_0;
			String_t* L_30;
			L_30 = VirtualFuncInvoker0< String_t* >::Invoke(5, L_29);
			String_t* L_31;
			L_31 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAEEC35A7704ECFD616CD15F38FB2BD30AFF7D21B)), (RuntimeObject*)L_28, (RuntimeObject*)L_30, NULL);
			TweenerCore_3_tE0A3D42393A2015849880D806418B2EDD0187D5D* L_32 = ___0_t;
			Debugger_LogSafeModeCapturedError_m0EE4B4F14B9243B4A9BD757853CAB77B5A888ED6((RuntimeObject*)L_31, (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_32, NULL);
		}

IL_009d:
		{
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var)));
			SafeModeReport_Add_mC993434DFE20DDF1E44389DACD34085F31E6ED20((&((DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var))))->___safeModeReport), (int32_t)3, NULL);
			V_1 = (bool)0;
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_0135;
		}
	}

IL_00af:
	{
		TweenerCore_3_tE0A3D42393A2015849880D806418B2EDD0187D5D* L_33 = ___0_t;
		bool L_34 = ((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_33)->___isFrom;
		if (!L_34)
		{
			goto IL_00db;
		}
	}
	{
		TweenerCore_3_tE0A3D42393A2015849880D806418B2EDD0187D5D* L_35 = ___0_t;
		TweenerCore_3_tE0A3D42393A2015849880D806418B2EDD0187D5D* L_36 = ___0_t;
		bool L_37;
		L_37 = Tween_get_isRelative_mC31C34D21C3953F9AA7F25C0429BEBE45D2DBAE2_inline((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_36, NULL);
		if (!L_37)
		{
			G_B18_0 = L_35;
			goto IL_00cb;
		}
		G_B17_0 = L_35;
	}
	{
		TweenerCore_3_tE0A3D42393A2015849880D806418B2EDD0187D5D* L_38 = ___0_t;
		bool L_39 = ((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_38)->___isBlendable;
		G_B19_0 = ((((int32_t)L_39) == ((int32_t)0))? 1 : 0);
		G_B19_1 = G_B17_0;
		goto IL_00cc;
	}

IL_00cb:
	{
		G_B19_0 = 0;
		G_B19_1 = G_B18_0;
	}

IL_00cc:
	{
		Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_40;
		L_40 = VirtualFuncInvoker1< Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140*, bool >::Invoke(8, (Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140*)G_B19_1, (bool)G_B19_0);
		TweenerCore_3_tE0A3D42393A2015849880D806418B2EDD0187D5D* L_41 = ___0_t;
		Tween_set_isRelative_m881085052780C20122B970FA26766E551DA3B8EB_inline((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_41, (bool)0, NULL);
		goto IL_00f8;
	}

IL_00db:
	{
		TweenerCore_3_tE0A3D42393A2015849880D806418B2EDD0187D5D* L_42 = ___0_t;
		TweenerCore_3_tE0A3D42393A2015849880D806418B2EDD0187D5D* L_43 = ___0_t;
		ABSTweenPlugin_3_tA51581359A1B697A7A0A8F2FFDE00794FA1E67F4* L_44 = L_43->___tweenPlugin;
		TweenerCore_3_tE0A3D42393A2015849880D806418B2EDD0187D5D* L_45 = ___0_t;
		TweenerCore_3_tE0A3D42393A2015849880D806418B2EDD0187D5D* L_46 = ___0_t;
		DOGetter_1_t64F1C0E113DC45CC9A1FD194A80B7B4C40AC4923* L_47 = L_46->___getter;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_48;
		L_48 = DOGetter_1_Invoke_m31C3B7B68D6A7D1D2804D66A2C1C7B9C7B4A3B89_inline(L_47, il2cpp_rgctx_method(method->rgctx_data, 4));
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_49;
		L_49 = VirtualFuncInvoker2< Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D, TweenerCore_3_tE0A3D42393A2015849880D806418B2EDD0187D5D*, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D >::Invoke(7, L_44, L_45, L_48);
		L_42->___startValue = L_49;
	}

IL_00f8:
	{
		TweenerCore_3_tE0A3D42393A2015849880D806418B2EDD0187D5D* L_50 = ___0_t;
		bool L_51;
		L_51 = Tween_get_isRelative_mC31C34D21C3953F9AA7F25C0429BEBE45D2DBAE2_inline((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_50, NULL);
		if (!L_51)
		{
			goto IL_010c;
		}
	}
	{
		TweenerCore_3_tE0A3D42393A2015849880D806418B2EDD0187D5D* L_52 = ___0_t;
		ABSTweenPlugin_3_tA51581359A1B697A7A0A8F2FFDE00794FA1E67F4* L_53 = L_52->___tweenPlugin;
		TweenerCore_3_tE0A3D42393A2015849880D806418B2EDD0187D5D* L_54 = ___0_t;
		VirtualActionInvoker1< TweenerCore_3_tE0A3D42393A2015849880D806418B2EDD0187D5D* >::Invoke(8, L_53, L_54);
	}

IL_010c:
	{
		TweenerCore_3_tE0A3D42393A2015849880D806418B2EDD0187D5D* L_55 = ___0_t;
		ABSTweenPlugin_3_tA51581359A1B697A7A0A8F2FFDE00794FA1E67F4* L_56 = L_55->___tweenPlugin;
		TweenerCore_3_tE0A3D42393A2015849880D806418B2EDD0187D5D* L_57 = ___0_t;
		VirtualActionInvoker1< TweenerCore_3_tE0A3D42393A2015849880D806418B2EDD0187D5D* >::Invoke(9, L_56, L_57);
		TweenerCore_3_tE0A3D42393A2015849880D806418B2EDD0187D5D* L_58 = ___0_t;
		Tweener_DOStartupDurationBased_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_TisRectOptions_tCE72F3B850FF80059E448A0ED2AA3FF16EE5EDAC_mFDA92D3A4DFAE0602C4D60678B3C932A89B3562D(L_58, il2cpp_rgctx_method(method->rgctx_data, 10));
		TweenerCore_3_tE0A3D42393A2015849880D806418B2EDD0187D5D* L_59 = ___0_t;
		float L_60 = ((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_59)->___duration;
		if ((!(((float)L_60) <= ((float)(0.0f)))))
		{
			goto IL_0133;
		}
	}
	{
		TweenerCore_3_tE0A3D42393A2015849880D806418B2EDD0187D5D* L_61 = ___0_t;
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_61)->___easeType = (int32_t)((int32_t)36);
	}

IL_0133:
	{
		return (bool)1;
	}

IL_0135:
	{
		bool L_62 = V_1;
		return L_62;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tweener_DoStartup_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisFloatOptions_t8A9B05DB7CF6CC90A27F300C2977D91A48B3FEF5_mD9ABC82F60919A20CC4140802CE466D6B275CD68_gshared (TweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1* ___0_t, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Exception_t* V_0 = NULL;
	bool V_1 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	TweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1* G_B8_0 = NULL;
	TweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1* G_B7_0 = NULL;
	int32_t G_B9_0 = 0;
	TweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1* G_B9_1 = NULL;
	TweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1* G_B18_0 = NULL;
	TweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1* G_B17_0 = NULL;
	int32_t G_B19_0 = 0;
	TweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1* G_B19_1 = NULL;
	{
		TweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1* L_0 = ___0_t;
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_0)->___startupDone = (bool)1;
		TweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1* L_1 = ___0_t;
		int32_t L_2 = ((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_1)->___specialStartupMode;
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		TweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1* L_3 = ___0_t;
		bool L_4;
		L_4 = Tweener_DOStartupSpecials_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisFloatOptions_t8A9B05DB7CF6CC90A27F300C2977D91A48B3FEF5_m0E0177555202BD2BF5E11AA0507716CD1E8A4EFD(L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
		if (L_4)
		{
			goto IL_0019;
		}
	}
	{
		return (bool)0;
	}

IL_0019:
	{
		TweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1* L_5 = ___0_t;
		bool L_6 = ((Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140*)L_5)->___hasManuallySetStartValue;
		if (L_6)
		{
			goto IL_00f8;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		bool L_7 = ((DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var))->___useSafeMode;
		if (!L_7)
		{
			goto IL_00af;
		}
	}
	try
	{
		{
			TweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1* L_8 = ___0_t;
			bool L_9 = ((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_8)->___isFrom;
			if (!L_9)
			{
				goto IL_005a_1;
			}
		}
		{
			TweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1* L_10 = ___0_t;
			TweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1* L_11 = ___0_t;
			bool L_12;
			L_12 = Tween_get_isRelative_mC31C34D21C3953F9AA7F25C0429BEBE45D2DBAE2_inline((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_11, NULL);
			if (!L_12)
			{
				G_B8_0 = L_10;
				goto IL_004a_1;
			}
			G_B7_0 = L_10;
		}
		{
			TweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1* L_13 = ___0_t;
			bool L_14 = ((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_13)->___isBlendable;
			G_B9_0 = ((((int32_t)L_14) == ((int32_t)0))? 1 : 0);
			G_B9_1 = G_B7_0;
			goto IL_004b_1;
		}

IL_004a_1:
		{
			G_B9_0 = 0;
			G_B9_1 = G_B8_0;
		}

IL_004b_1:
		{
			Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_15;
			L_15 = VirtualFuncInvoker1< Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140*, bool >::Invoke(8, (Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140*)G_B9_1, (bool)G_B9_0);
			TweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1* L_16 = ___0_t;
			Tween_set_isRelative_m881085052780C20122B970FA26766E551DA3B8EB_inline((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_16, (bool)0, NULL);
			goto IL_0077_1;
		}

IL_005a_1:
		{
			TweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1* L_17 = ___0_t;
			TweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1* L_18 = ___0_t;
			ABSTweenPlugin_3_t60F4DE5120CFD5986925189A0E775FAEAB4C59B9* L_19 = L_18->___tweenPlugin;
			TweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1* L_20 = ___0_t;
			TweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1* L_21 = ___0_t;
			DOGetter_1_tE8B39477E96408653D0242624F4D7E48ABFD1B03* L_22 = L_21->___getter;
			float L_23;
			L_23 = DOGetter_1_Invoke_m2F5C065E2F5DDECAB3FD41881B295B9DC733EF52_inline(L_22, il2cpp_rgctx_method(method->rgctx_data, 4));
			float L_24;
			L_24 = VirtualFuncInvoker2< float, TweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1*, float >::Invoke(7, L_19, L_20, L_23);
			L_17->___startValue = L_24;
		}

IL_0077_1:
		{
			goto IL_00f8;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0079;
		}
		throw e;
	}

CATCH_0079:
	{
		{
			Exception_t* L_25 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
			V_0 = L_25;
			bool L_26;
			L_26 = Debugger_ShouldLogSafeModeCapturedError_m5EE800D2A5FD98C95C119D9AF68035095A123C47(NULL);
			if (!L_26)
			{
				goto IL_009d;
			}
		}
		{
			Exception_t* L_27 = V_0;
			MethodBase_t* L_28;
			L_28 = Exception_get_TargetSite_m0CE79BBF864CCEA96B72ED52EC66753CFBE5ED6A(L_27, NULL);
			Exception_t* L_29 = V_0;
			String_t* L_30;
			L_30 = VirtualFuncInvoker0< String_t* >::Invoke(5, L_29);
			String_t* L_31;
			L_31 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAEEC35A7704ECFD616CD15F38FB2BD30AFF7D21B)), (RuntimeObject*)L_28, (RuntimeObject*)L_30, NULL);
			TweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1* L_32 = ___0_t;
			Debugger_LogSafeModeCapturedError_m0EE4B4F14B9243B4A9BD757853CAB77B5A888ED6((RuntimeObject*)L_31, (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_32, NULL);
		}

IL_009d:
		{
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var)));
			SafeModeReport_Add_mC993434DFE20DDF1E44389DACD34085F31E6ED20((&((DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var))))->___safeModeReport), (int32_t)3, NULL);
			V_1 = (bool)0;
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_0135;
		}
	}

IL_00af:
	{
		TweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1* L_33 = ___0_t;
		bool L_34 = ((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_33)->___isFrom;
		if (!L_34)
		{
			goto IL_00db;
		}
	}
	{
		TweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1* L_35 = ___0_t;
		TweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1* L_36 = ___0_t;
		bool L_37;
		L_37 = Tween_get_isRelative_mC31C34D21C3953F9AA7F25C0429BEBE45D2DBAE2_inline((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_36, NULL);
		if (!L_37)
		{
			G_B18_0 = L_35;
			goto IL_00cb;
		}
		G_B17_0 = L_35;
	}
	{
		TweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1* L_38 = ___0_t;
		bool L_39 = ((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_38)->___isBlendable;
		G_B19_0 = ((((int32_t)L_39) == ((int32_t)0))? 1 : 0);
		G_B19_1 = G_B17_0;
		goto IL_00cc;
	}

IL_00cb:
	{
		G_B19_0 = 0;
		G_B19_1 = G_B18_0;
	}

IL_00cc:
	{
		Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_40;
		L_40 = VirtualFuncInvoker1< Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140*, bool >::Invoke(8, (Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140*)G_B19_1, (bool)G_B19_0);
		TweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1* L_41 = ___0_t;
		Tween_set_isRelative_m881085052780C20122B970FA26766E551DA3B8EB_inline((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_41, (bool)0, NULL);
		goto IL_00f8;
	}

IL_00db:
	{
		TweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1* L_42 = ___0_t;
		TweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1* L_43 = ___0_t;
		ABSTweenPlugin_3_t60F4DE5120CFD5986925189A0E775FAEAB4C59B9* L_44 = L_43->___tweenPlugin;
		TweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1* L_45 = ___0_t;
		TweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1* L_46 = ___0_t;
		DOGetter_1_tE8B39477E96408653D0242624F4D7E48ABFD1B03* L_47 = L_46->___getter;
		float L_48;
		L_48 = DOGetter_1_Invoke_m2F5C065E2F5DDECAB3FD41881B295B9DC733EF52_inline(L_47, il2cpp_rgctx_method(method->rgctx_data, 4));
		float L_49;
		L_49 = VirtualFuncInvoker2< float, TweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1*, float >::Invoke(7, L_44, L_45, L_48);
		L_42->___startValue = L_49;
	}

IL_00f8:
	{
		TweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1* L_50 = ___0_t;
		bool L_51;
		L_51 = Tween_get_isRelative_mC31C34D21C3953F9AA7F25C0429BEBE45D2DBAE2_inline((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_50, NULL);
		if (!L_51)
		{
			goto IL_010c;
		}
	}
	{
		TweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1* L_52 = ___0_t;
		ABSTweenPlugin_3_t60F4DE5120CFD5986925189A0E775FAEAB4C59B9* L_53 = L_52->___tweenPlugin;
		TweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1* L_54 = ___0_t;
		VirtualActionInvoker1< TweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1* >::Invoke(8, L_53, L_54);
	}

IL_010c:
	{
		TweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1* L_55 = ___0_t;
		ABSTweenPlugin_3_t60F4DE5120CFD5986925189A0E775FAEAB4C59B9* L_56 = L_55->___tweenPlugin;
		TweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1* L_57 = ___0_t;
		VirtualActionInvoker1< TweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1* >::Invoke(9, L_56, L_57);
		TweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1* L_58 = ___0_t;
		Tweener_DOStartupDurationBased_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisFloatOptions_t8A9B05DB7CF6CC90A27F300C2977D91A48B3FEF5_mC18D98168F97645649E9462C5BE1620930DA9648(L_58, il2cpp_rgctx_method(method->rgctx_data, 10));
		TweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1* L_59 = ___0_t;
		float L_60 = ((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_59)->___duration;
		if ((!(((float)L_60) <= ((float)(0.0f)))))
		{
			goto IL_0133;
		}
	}
	{
		TweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1* L_61 = ___0_t;
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_61)->___easeType = (int32_t)((int32_t)36);
	}

IL_0133:
	{
		return (bool)1;
	}

IL_0135:
	{
		bool L_62 = V_1;
		return L_62;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tweener_DoStartup_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisUintOptions_t06BB035A1F0801FF6D4721F6F98F36DDD93E53A3_mE8BD6E62C500219BB39D40D5380C75AD015C0C45_gshared (TweenerCore_3_t9016EC0FCFBD1032D87C4B0BB3E45F37DEF005D2* ___0_t, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Exception_t* V_0 = NULL;
	bool V_1 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	TweenerCore_3_t9016EC0FCFBD1032D87C4B0BB3E45F37DEF005D2* G_B8_0 = NULL;
	TweenerCore_3_t9016EC0FCFBD1032D87C4B0BB3E45F37DEF005D2* G_B7_0 = NULL;
	int32_t G_B9_0 = 0;
	TweenerCore_3_t9016EC0FCFBD1032D87C4B0BB3E45F37DEF005D2* G_B9_1 = NULL;
	TweenerCore_3_t9016EC0FCFBD1032D87C4B0BB3E45F37DEF005D2* G_B18_0 = NULL;
	TweenerCore_3_t9016EC0FCFBD1032D87C4B0BB3E45F37DEF005D2* G_B17_0 = NULL;
	int32_t G_B19_0 = 0;
	TweenerCore_3_t9016EC0FCFBD1032D87C4B0BB3E45F37DEF005D2* G_B19_1 = NULL;
	{
		TweenerCore_3_t9016EC0FCFBD1032D87C4B0BB3E45F37DEF005D2* L_0 = ___0_t;
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_0)->___startupDone = (bool)1;
		TweenerCore_3_t9016EC0FCFBD1032D87C4B0BB3E45F37DEF005D2* L_1 = ___0_t;
		int32_t L_2 = ((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_1)->___specialStartupMode;
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		TweenerCore_3_t9016EC0FCFBD1032D87C4B0BB3E45F37DEF005D2* L_3 = ___0_t;
		bool L_4;
		L_4 = Tweener_DOStartupSpecials_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisUintOptions_t06BB035A1F0801FF6D4721F6F98F36DDD93E53A3_mC385C56F0D7DE0487FB4C1BFB4A7495EC2680716(L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
		if (L_4)
		{
			goto IL_0019;
		}
	}
	{
		return (bool)0;
	}

IL_0019:
	{
		TweenerCore_3_t9016EC0FCFBD1032D87C4B0BB3E45F37DEF005D2* L_5 = ___0_t;
		bool L_6 = ((Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140*)L_5)->___hasManuallySetStartValue;
		if (L_6)
		{
			goto IL_00f8;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		bool L_7 = ((DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var))->___useSafeMode;
		if (!L_7)
		{
			goto IL_00af;
		}
	}
	try
	{
		{
			TweenerCore_3_t9016EC0FCFBD1032D87C4B0BB3E45F37DEF005D2* L_8 = ___0_t;
			bool L_9 = ((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_8)->___isFrom;
			if (!L_9)
			{
				goto IL_005a_1;
			}
		}
		{
			TweenerCore_3_t9016EC0FCFBD1032D87C4B0BB3E45F37DEF005D2* L_10 = ___0_t;
			TweenerCore_3_t9016EC0FCFBD1032D87C4B0BB3E45F37DEF005D2* L_11 = ___0_t;
			bool L_12;
			L_12 = Tween_get_isRelative_mC31C34D21C3953F9AA7F25C0429BEBE45D2DBAE2_inline((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_11, NULL);
			if (!L_12)
			{
				G_B8_0 = L_10;
				goto IL_004a_1;
			}
			G_B7_0 = L_10;
		}
		{
			TweenerCore_3_t9016EC0FCFBD1032D87C4B0BB3E45F37DEF005D2* L_13 = ___0_t;
			bool L_14 = ((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_13)->___isBlendable;
			G_B9_0 = ((((int32_t)L_14) == ((int32_t)0))? 1 : 0);
			G_B9_1 = G_B7_0;
			goto IL_004b_1;
		}

IL_004a_1:
		{
			G_B9_0 = 0;
			G_B9_1 = G_B8_0;
		}

IL_004b_1:
		{
			Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_15;
			L_15 = VirtualFuncInvoker1< Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140*, bool >::Invoke(8, (Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140*)G_B9_1, (bool)G_B9_0);
			TweenerCore_3_t9016EC0FCFBD1032D87C4B0BB3E45F37DEF005D2* L_16 = ___0_t;
			Tween_set_isRelative_m881085052780C20122B970FA26766E551DA3B8EB_inline((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_16, (bool)0, NULL);
			goto IL_0077_1;
		}

IL_005a_1:
		{
			TweenerCore_3_t9016EC0FCFBD1032D87C4B0BB3E45F37DEF005D2* L_17 = ___0_t;
			TweenerCore_3_t9016EC0FCFBD1032D87C4B0BB3E45F37DEF005D2* L_18 = ___0_t;
			ABSTweenPlugin_3_t76C40FFA153363CF88C31D954E2AE740916B5B22* L_19 = L_18->___tweenPlugin;
			TweenerCore_3_t9016EC0FCFBD1032D87C4B0BB3E45F37DEF005D2* L_20 = ___0_t;
			TweenerCore_3_t9016EC0FCFBD1032D87C4B0BB3E45F37DEF005D2* L_21 = ___0_t;
			DOGetter_1_t187AC9EC362AB6EF9475A1B6469E2261EDF9DEE1* L_22 = L_21->___getter;
			uint32_t L_23;
			L_23 = DOGetter_1_Invoke_m9872D509AF7B5CCA6FA8EAC070C88AE5DDEFA786_inline(L_22, il2cpp_rgctx_method(method->rgctx_data, 4));
			uint32_t L_24;
			L_24 = VirtualFuncInvoker2< uint32_t, TweenerCore_3_t9016EC0FCFBD1032D87C4B0BB3E45F37DEF005D2*, uint32_t >::Invoke(7, L_19, L_20, L_23);
			L_17->___startValue = L_24;
		}

IL_0077_1:
		{
			goto IL_00f8;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0079;
		}
		throw e;
	}

CATCH_0079:
	{
		{
			Exception_t* L_25 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
			V_0 = L_25;
			bool L_26;
			L_26 = Debugger_ShouldLogSafeModeCapturedError_m5EE800D2A5FD98C95C119D9AF68035095A123C47(NULL);
			if (!L_26)
			{
				goto IL_009d;
			}
		}
		{
			Exception_t* L_27 = V_0;
			MethodBase_t* L_28;
			L_28 = Exception_get_TargetSite_m0CE79BBF864CCEA96B72ED52EC66753CFBE5ED6A(L_27, NULL);
			Exception_t* L_29 = V_0;
			String_t* L_30;
			L_30 = VirtualFuncInvoker0< String_t* >::Invoke(5, L_29);
			String_t* L_31;
			L_31 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAEEC35A7704ECFD616CD15F38FB2BD30AFF7D21B)), (RuntimeObject*)L_28, (RuntimeObject*)L_30, NULL);
			TweenerCore_3_t9016EC0FCFBD1032D87C4B0BB3E45F37DEF005D2* L_32 = ___0_t;
			Debugger_LogSafeModeCapturedError_m0EE4B4F14B9243B4A9BD757853CAB77B5A888ED6((RuntimeObject*)L_31, (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_32, NULL);
		}

IL_009d:
		{
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var)));
			SafeModeReport_Add_mC993434DFE20DDF1E44389DACD34085F31E6ED20((&((DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var))))->___safeModeReport), (int32_t)3, NULL);
			V_1 = (bool)0;
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_0135;
		}
	}

IL_00af:
	{
		TweenerCore_3_t9016EC0FCFBD1032D87C4B0BB3E45F37DEF005D2* L_33 = ___0_t;
		bool L_34 = ((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_33)->___isFrom;
		if (!L_34)
		{
			goto IL_00db;
		}
	}
	{
		TweenerCore_3_t9016EC0FCFBD1032D87C4B0BB3E45F37DEF005D2* L_35 = ___0_t;
		TweenerCore_3_t9016EC0FCFBD1032D87C4B0BB3E45F37DEF005D2* L_36 = ___0_t;
		bool L_37;
		L_37 = Tween_get_isRelative_mC31C34D21C3953F9AA7F25C0429BEBE45D2DBAE2_inline((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_36, NULL);
		if (!L_37)
		{
			G_B18_0 = L_35;
			goto IL_00cb;
		}
		G_B17_0 = L_35;
	}
	{
		TweenerCore_3_t9016EC0FCFBD1032D87C4B0BB3E45F37DEF005D2* L_38 = ___0_t;
		bool L_39 = ((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_38)->___isBlendable;
		G_B19_0 = ((((int32_t)L_39) == ((int32_t)0))? 1 : 0);
		G_B19_1 = G_B17_0;
		goto IL_00cc;
	}

IL_00cb:
	{
		G_B19_0 = 0;
		G_B19_1 = G_B18_0;
	}

IL_00cc:
	{
		Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_40;
		L_40 = VirtualFuncInvoker1< Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140*, bool >::Invoke(8, (Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140*)G_B19_1, (bool)G_B19_0);
		TweenerCore_3_t9016EC0FCFBD1032D87C4B0BB3E45F37DEF005D2* L_41 = ___0_t;
		Tween_set_isRelative_m881085052780C20122B970FA26766E551DA3B8EB_inline((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_41, (bool)0, NULL);
		goto IL_00f8;
	}

IL_00db:
	{
		TweenerCore_3_t9016EC0FCFBD1032D87C4B0BB3E45F37DEF005D2* L_42 = ___0_t;
		TweenerCore_3_t9016EC0FCFBD1032D87C4B0BB3E45F37DEF005D2* L_43 = ___0_t;
		ABSTweenPlugin_3_t76C40FFA153363CF88C31D954E2AE740916B5B22* L_44 = L_43->___tweenPlugin;
		TweenerCore_3_t9016EC0FCFBD1032D87C4B0BB3E45F37DEF005D2* L_45 = ___0_t;
		TweenerCore_3_t9016EC0FCFBD1032D87C4B0BB3E45F37DEF005D2* L_46 = ___0_t;
		DOGetter_1_t187AC9EC362AB6EF9475A1B6469E2261EDF9DEE1* L_47 = L_46->___getter;
		uint32_t L_48;
		L_48 = DOGetter_1_Invoke_m9872D509AF7B5CCA6FA8EAC070C88AE5DDEFA786_inline(L_47, il2cpp_rgctx_method(method->rgctx_data, 4));
		uint32_t L_49;
		L_49 = VirtualFuncInvoker2< uint32_t, TweenerCore_3_t9016EC0FCFBD1032D87C4B0BB3E45F37DEF005D2*, uint32_t >::Invoke(7, L_44, L_45, L_48);
		L_42->___startValue = L_49;
	}

IL_00f8:
	{
		TweenerCore_3_t9016EC0FCFBD1032D87C4B0BB3E45F37DEF005D2* L_50 = ___0_t;
		bool L_51;
		L_51 = Tween_get_isRelative_mC31C34D21C3953F9AA7F25C0429BEBE45D2DBAE2_inline((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_50, NULL);
		if (!L_51)
		{
			goto IL_010c;
		}
	}
	{
		TweenerCore_3_t9016EC0FCFBD1032D87C4B0BB3E45F37DEF005D2* L_52 = ___0_t;
		ABSTweenPlugin_3_t76C40FFA153363CF88C31D954E2AE740916B5B22* L_53 = L_52->___tweenPlugin;
		TweenerCore_3_t9016EC0FCFBD1032D87C4B0BB3E45F37DEF005D2* L_54 = ___0_t;
		VirtualActionInvoker1< TweenerCore_3_t9016EC0FCFBD1032D87C4B0BB3E45F37DEF005D2* >::Invoke(8, L_53, L_54);
	}

IL_010c:
	{
		TweenerCore_3_t9016EC0FCFBD1032D87C4B0BB3E45F37DEF005D2* L_55 = ___0_t;
		ABSTweenPlugin_3_t76C40FFA153363CF88C31D954E2AE740916B5B22* L_56 = L_55->___tweenPlugin;
		TweenerCore_3_t9016EC0FCFBD1032D87C4B0BB3E45F37DEF005D2* L_57 = ___0_t;
		VirtualActionInvoker1< TweenerCore_3_t9016EC0FCFBD1032D87C4B0BB3E45F37DEF005D2* >::Invoke(9, L_56, L_57);
		TweenerCore_3_t9016EC0FCFBD1032D87C4B0BB3E45F37DEF005D2* L_58 = ___0_t;
		Tweener_DOStartupDurationBased_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisUintOptions_t06BB035A1F0801FF6D4721F6F98F36DDD93E53A3_m0DED754E0F43684EB156B3152591E1A3EA996CD9(L_58, il2cpp_rgctx_method(method->rgctx_data, 10));
		TweenerCore_3_t9016EC0FCFBD1032D87C4B0BB3E45F37DEF005D2* L_59 = ___0_t;
		float L_60 = ((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_59)->___duration;
		if ((!(((float)L_60) <= ((float)(0.0f)))))
		{
			goto IL_0133;
		}
	}
	{
		TweenerCore_3_t9016EC0FCFBD1032D87C4B0BB3E45F37DEF005D2* L_61 = ___0_t;
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_61)->___easeType = (int32_t)((int32_t)36);
	}

IL_0133:
	{
		return (bool)1;
	}

IL_0135:
	{
		bool L_62 = V_1;
		return L_62;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tweener_DoStartup_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisNoOptions_t2B4A2CA3C472B5AC37AACC090B1D0B27BCF4307E_m1F80BDEF28E9393104D03CF51245B8C5ADE48B25_gshared (TweenerCore_3_t2043A56E4E5C035C8690037B5961DF809EF6002B* ___0_t, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Exception_t* V_0 = NULL;
	bool V_1 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	TweenerCore_3_t2043A56E4E5C035C8690037B5961DF809EF6002B* G_B8_0 = NULL;
	TweenerCore_3_t2043A56E4E5C035C8690037B5961DF809EF6002B* G_B7_0 = NULL;
	int32_t G_B9_0 = 0;
	TweenerCore_3_t2043A56E4E5C035C8690037B5961DF809EF6002B* G_B9_1 = NULL;
	TweenerCore_3_t2043A56E4E5C035C8690037B5961DF809EF6002B* G_B18_0 = NULL;
	TweenerCore_3_t2043A56E4E5C035C8690037B5961DF809EF6002B* G_B17_0 = NULL;
	int32_t G_B19_0 = 0;
	TweenerCore_3_t2043A56E4E5C035C8690037B5961DF809EF6002B* G_B19_1 = NULL;
	{
		TweenerCore_3_t2043A56E4E5C035C8690037B5961DF809EF6002B* L_0 = ___0_t;
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_0)->___startupDone = (bool)1;
		TweenerCore_3_t2043A56E4E5C035C8690037B5961DF809EF6002B* L_1 = ___0_t;
		int32_t L_2 = ((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_1)->___specialStartupMode;
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		TweenerCore_3_t2043A56E4E5C035C8690037B5961DF809EF6002B* L_3 = ___0_t;
		bool L_4;
		L_4 = Tweener_DOStartupSpecials_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisNoOptions_t2B4A2CA3C472B5AC37AACC090B1D0B27BCF4307E_m75DD594782DCF353B523243E56594747BECABDB0(L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
		if (L_4)
		{
			goto IL_0019;
		}
	}
	{
		return (bool)0;
	}

IL_0019:
	{
		TweenerCore_3_t2043A56E4E5C035C8690037B5961DF809EF6002B* L_5 = ___0_t;
		bool L_6 = ((Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140*)L_5)->___hasManuallySetStartValue;
		if (L_6)
		{
			goto IL_00f8;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		bool L_7 = ((DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var))->___useSafeMode;
		if (!L_7)
		{
			goto IL_00af;
		}
	}
	try
	{
		{
			TweenerCore_3_t2043A56E4E5C035C8690037B5961DF809EF6002B* L_8 = ___0_t;
			bool L_9 = ((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_8)->___isFrom;
			if (!L_9)
			{
				goto IL_005a_1;
			}
		}
		{
			TweenerCore_3_t2043A56E4E5C035C8690037B5961DF809EF6002B* L_10 = ___0_t;
			TweenerCore_3_t2043A56E4E5C035C8690037B5961DF809EF6002B* L_11 = ___0_t;
			bool L_12;
			L_12 = Tween_get_isRelative_mC31C34D21C3953F9AA7F25C0429BEBE45D2DBAE2_inline((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_11, NULL);
			if (!L_12)
			{
				G_B8_0 = L_10;
				goto IL_004a_1;
			}
			G_B7_0 = L_10;
		}
		{
			TweenerCore_3_t2043A56E4E5C035C8690037B5961DF809EF6002B* L_13 = ___0_t;
			bool L_14 = ((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_13)->___isBlendable;
			G_B9_0 = ((((int32_t)L_14) == ((int32_t)0))? 1 : 0);
			G_B9_1 = G_B7_0;
			goto IL_004b_1;
		}

IL_004a_1:
		{
			G_B9_0 = 0;
			G_B9_1 = G_B8_0;
		}

IL_004b_1:
		{
			Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_15;
			L_15 = VirtualFuncInvoker1< Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140*, bool >::Invoke(8, (Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140*)G_B9_1, (bool)G_B9_0);
			TweenerCore_3_t2043A56E4E5C035C8690037B5961DF809EF6002B* L_16 = ___0_t;
			Tween_set_isRelative_m881085052780C20122B970FA26766E551DA3B8EB_inline((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_16, (bool)0, NULL);
			goto IL_0077_1;
		}

IL_005a_1:
		{
			TweenerCore_3_t2043A56E4E5C035C8690037B5961DF809EF6002B* L_17 = ___0_t;
			TweenerCore_3_t2043A56E4E5C035C8690037B5961DF809EF6002B* L_18 = ___0_t;
			ABSTweenPlugin_3_t303ADD886C8A7272DE43A8D065EEB864F5E03BF4* L_19 = L_18->___tweenPlugin;
			TweenerCore_3_t2043A56E4E5C035C8690037B5961DF809EF6002B* L_20 = ___0_t;
			TweenerCore_3_t2043A56E4E5C035C8690037B5961DF809EF6002B* L_21 = ___0_t;
			DOGetter_1_tF4FBD9712869BD6129C41ADBD9D3DCD51CBB4746* L_22 = L_21->___getter;
			uint64_t L_23;
			L_23 = DOGetter_1_Invoke_m8E364315F35A30983963B78D07FE87C11D434F86_inline(L_22, il2cpp_rgctx_method(method->rgctx_data, 4));
			uint64_t L_24;
			L_24 = VirtualFuncInvoker2< uint64_t, TweenerCore_3_t2043A56E4E5C035C8690037B5961DF809EF6002B*, uint64_t >::Invoke(7, L_19, L_20, L_23);
			L_17->___startValue = L_24;
		}

IL_0077_1:
		{
			goto IL_00f8;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0079;
		}
		throw e;
	}

CATCH_0079:
	{
		{
			Exception_t* L_25 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
			V_0 = L_25;
			bool L_26;
			L_26 = Debugger_ShouldLogSafeModeCapturedError_m5EE800D2A5FD98C95C119D9AF68035095A123C47(NULL);
			if (!L_26)
			{
				goto IL_009d;
			}
		}
		{
			Exception_t* L_27 = V_0;
			MethodBase_t* L_28;
			L_28 = Exception_get_TargetSite_m0CE79BBF864CCEA96B72ED52EC66753CFBE5ED6A(L_27, NULL);
			Exception_t* L_29 = V_0;
			String_t* L_30;
			L_30 = VirtualFuncInvoker0< String_t* >::Invoke(5, L_29);
			String_t* L_31;
			L_31 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAEEC35A7704ECFD616CD15F38FB2BD30AFF7D21B)), (RuntimeObject*)L_28, (RuntimeObject*)L_30, NULL);
			TweenerCore_3_t2043A56E4E5C035C8690037B5961DF809EF6002B* L_32 = ___0_t;
			Debugger_LogSafeModeCapturedError_m0EE4B4F14B9243B4A9BD757853CAB77B5A888ED6((RuntimeObject*)L_31, (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_32, NULL);
		}

IL_009d:
		{
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var)));
			SafeModeReport_Add_mC993434DFE20DDF1E44389DACD34085F31E6ED20((&((DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var))))->___safeModeReport), (int32_t)3, NULL);
			V_1 = (bool)0;
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_0135;
		}
	}

IL_00af:
	{
		TweenerCore_3_t2043A56E4E5C035C8690037B5961DF809EF6002B* L_33 = ___0_t;
		bool L_34 = ((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_33)->___isFrom;
		if (!L_34)
		{
			goto IL_00db;
		}
	}
	{
		TweenerCore_3_t2043A56E4E5C035C8690037B5961DF809EF6002B* L_35 = ___0_t;
		TweenerCore_3_t2043A56E4E5C035C8690037B5961DF809EF6002B* L_36 = ___0_t;
		bool L_37;
		L_37 = Tween_get_isRelative_mC31C34D21C3953F9AA7F25C0429BEBE45D2DBAE2_inline((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_36, NULL);
		if (!L_37)
		{
			G_B18_0 = L_35;
			goto IL_00cb;
		}
		G_B17_0 = L_35;
	}
	{
		TweenerCore_3_t2043A56E4E5C035C8690037B5961DF809EF6002B* L_38 = ___0_t;
		bool L_39 = ((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_38)->___isBlendable;
		G_B19_0 = ((((int32_t)L_39) == ((int32_t)0))? 1 : 0);
		G_B19_1 = G_B17_0;
		goto IL_00cc;
	}

IL_00cb:
	{
		G_B19_0 = 0;
		G_B19_1 = G_B18_0;
	}

IL_00cc:
	{
		Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_40;
		L_40 = VirtualFuncInvoker1< Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140*, bool >::Invoke(8, (Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140*)G_B19_1, (bool)G_B19_0);
		TweenerCore_3_t2043A56E4E5C035C8690037B5961DF809EF6002B* L_41 = ___0_t;
		Tween_set_isRelative_m881085052780C20122B970FA26766E551DA3B8EB_inline((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_41, (bool)0, NULL);
		goto IL_00f8;
	}

IL_00db:
	{
		TweenerCore_3_t2043A56E4E5C035C8690037B5961DF809EF6002B* L_42 = ___0_t;
		TweenerCore_3_t2043A56E4E5C035C8690037B5961DF809EF6002B* L_43 = ___0_t;
		ABSTweenPlugin_3_t303ADD886C8A7272DE43A8D065EEB864F5E03BF4* L_44 = L_43->___tweenPlugin;
		TweenerCore_3_t2043A56E4E5C035C8690037B5961DF809EF6002B* L_45 = ___0_t;
		TweenerCore_3_t2043A56E4E5C035C8690037B5961DF809EF6002B* L_46 = ___0_t;
		DOGetter_1_tF4FBD9712869BD6129C41ADBD9D3DCD51CBB4746* L_47 = L_46->___getter;
		uint64_t L_48;
		L_48 = DOGetter_1_Invoke_m8E364315F35A30983963B78D07FE87C11D434F86_inline(L_47, il2cpp_rgctx_method(method->rgctx_data, 4));
		uint64_t L_49;
		L_49 = VirtualFuncInvoker2< uint64_t, TweenerCore_3_t2043A56E4E5C035C8690037B5961DF809EF6002B*, uint64_t >::Invoke(7, L_44, L_45, L_48);
		L_42->___startValue = L_49;
	}

IL_00f8:
	{
		TweenerCore_3_t2043A56E4E5C035C8690037B5961DF809EF6002B* L_50 = ___0_t;
		bool L_51;
		L_51 = Tween_get_isRelative_mC31C34D21C3953F9AA7F25C0429BEBE45D2DBAE2_inline((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_50, NULL);
		if (!L_51)
		{
			goto IL_010c;
		}
	}
	{
		TweenerCore_3_t2043A56E4E5C035C8690037B5961DF809EF6002B* L_52 = ___0_t;
		ABSTweenPlugin_3_t303ADD886C8A7272DE43A8D065EEB864F5E03BF4* L_53 = L_52->___tweenPlugin;
		TweenerCore_3_t2043A56E4E5C035C8690037B5961DF809EF6002B* L_54 = ___0_t;
		VirtualActionInvoker1< TweenerCore_3_t2043A56E4E5C035C8690037B5961DF809EF6002B* >::Invoke(8, L_53, L_54);
	}

IL_010c:
	{
		TweenerCore_3_t2043A56E4E5C035C8690037B5961DF809EF6002B* L_55 = ___0_t;
		ABSTweenPlugin_3_t303ADD886C8A7272DE43A8D065EEB864F5E03BF4* L_56 = L_55->___tweenPlugin;
		TweenerCore_3_t2043A56E4E5C035C8690037B5961DF809EF6002B* L_57 = ___0_t;
		VirtualActionInvoker1< TweenerCore_3_t2043A56E4E5C035C8690037B5961DF809EF6002B* >::Invoke(9, L_56, L_57);
		TweenerCore_3_t2043A56E4E5C035C8690037B5961DF809EF6002B* L_58 = ___0_t;
		Tweener_DOStartupDurationBased_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisNoOptions_t2B4A2CA3C472B5AC37AACC090B1D0B27BCF4307E_mDF557A1BF7096657737B79028D5C6389F2C40646(L_58, il2cpp_rgctx_method(method->rgctx_data, 10));
		TweenerCore_3_t2043A56E4E5C035C8690037B5961DF809EF6002B* L_59 = ___0_t;
		float L_60 = ((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_59)->___duration;
		if ((!(((float)L_60) <= ((float)(0.0f)))))
		{
			goto IL_0133;
		}
	}
	{
		TweenerCore_3_t2043A56E4E5C035C8690037B5961DF809EF6002B* L_61 = ___0_t;
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_61)->___easeType = (int32_t)((int32_t)36);
	}

IL_0133:
	{
		return (bool)1;
	}

IL_0135:
	{
		bool L_62 = V_1;
		return L_62;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tweener_DoStartup_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_TisVectorOptions_t2814CC842518C92C9DFC5DE6F7A73824758D3EF9_mFADE410C6703AA42AC77F9CA6F68204A45875C03_gshared (TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271* ___0_t, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Exception_t* V_0 = NULL;
	bool V_1 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271* G_B8_0 = NULL;
	TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271* G_B7_0 = NULL;
	int32_t G_B9_0 = 0;
	TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271* G_B9_1 = NULL;
	TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271* G_B18_0 = NULL;
	TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271* G_B17_0 = NULL;
	int32_t G_B19_0 = 0;
	TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271* G_B19_1 = NULL;
	{
		TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271* L_0 = ___0_t;
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_0)->___startupDone = (bool)1;
		TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271* L_1 = ___0_t;
		int32_t L_2 = ((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_1)->___specialStartupMode;
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271* L_3 = ___0_t;
		bool L_4;
		L_4 = Tweener_DOStartupSpecials_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_TisVectorOptions_t2814CC842518C92C9DFC5DE6F7A73824758D3EF9_mF48E10D572DB156BC867D2EF37838E23C0C06962(L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
		if (L_4)
		{
			goto IL_0019;
		}
	}
	{
		return (bool)0;
	}

IL_0019:
	{
		TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271* L_5 = ___0_t;
		bool L_6 = ((Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140*)L_5)->___hasManuallySetStartValue;
		if (L_6)
		{
			goto IL_00f8;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		bool L_7 = ((DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var))->___useSafeMode;
		if (!L_7)
		{
			goto IL_00af;
		}
	}
	try
	{
		{
			TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271* L_8 = ___0_t;
			bool L_9 = ((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_8)->___isFrom;
			if (!L_9)
			{
				goto IL_005a_1;
			}
		}
		{
			TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271* L_10 = ___0_t;
			TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271* L_11 = ___0_t;
			bool L_12;
			L_12 = Tween_get_isRelative_mC31C34D21C3953F9AA7F25C0429BEBE45D2DBAE2_inline((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_11, NULL);
			if (!L_12)
			{
				G_B8_0 = L_10;
				goto IL_004a_1;
			}
			G_B7_0 = L_10;
		}
		{
			TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271* L_13 = ___0_t;
			bool L_14 = ((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_13)->___isBlendable;
			G_B9_0 = ((((int32_t)L_14) == ((int32_t)0))? 1 : 0);
			G_B9_1 = G_B7_0;
			goto IL_004b_1;
		}

IL_004a_1:
		{
			G_B9_0 = 0;
			G_B9_1 = G_B8_0;
		}

IL_004b_1:
		{
			Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_15;
			L_15 = VirtualFuncInvoker1< Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140*, bool >::Invoke(8, (Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140*)G_B9_1, (bool)G_B9_0);
			TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271* L_16 = ___0_t;
			Tween_set_isRelative_m881085052780C20122B970FA26766E551DA3B8EB_inline((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_16, (bool)0, NULL);
			goto IL_0077_1;
		}

IL_005a_1:
		{
			TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271* L_17 = ___0_t;
			TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271* L_18 = ___0_t;
			ABSTweenPlugin_3_t4082710A2BB933E2D055E454B3EFAC4C0A319444* L_19 = L_18->___tweenPlugin;
			TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271* L_20 = ___0_t;
			TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271* L_21 = ___0_t;
			DOGetter_1_t13276681BE97FCE6AB699EF1F894EA98C825FE66* L_22 = L_21->___getter;
			Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_23;
			L_23 = DOGetter_1_Invoke_mEAE67401967EACB6626BF325E4D5A4549B591E24_inline(L_22, il2cpp_rgctx_method(method->rgctx_data, 4));
			Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_24;
			L_24 = VirtualFuncInvoker2< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 >::Invoke(7, L_19, L_20, L_23);
			L_17->___startValue = L_24;
		}

IL_0077_1:
		{
			goto IL_00f8;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0079;
		}
		throw e;
	}

CATCH_0079:
	{
		{
			Exception_t* L_25 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
			V_0 = L_25;
			bool L_26;
			L_26 = Debugger_ShouldLogSafeModeCapturedError_m5EE800D2A5FD98C95C119D9AF68035095A123C47(NULL);
			if (!L_26)
			{
				goto IL_009d;
			}
		}
		{
			Exception_t* L_27 = V_0;
			MethodBase_t* L_28;
			L_28 = Exception_get_TargetSite_m0CE79BBF864CCEA96B72ED52EC66753CFBE5ED6A(L_27, NULL);
			Exception_t* L_29 = V_0;
			String_t* L_30;
			L_30 = VirtualFuncInvoker0< String_t* >::Invoke(5, L_29);
			String_t* L_31;
			L_31 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAEEC35A7704ECFD616CD15F38FB2BD30AFF7D21B)), (RuntimeObject*)L_28, (RuntimeObject*)L_30, NULL);
			TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271* L_32 = ___0_t;
			Debugger_LogSafeModeCapturedError_m0EE4B4F14B9243B4A9BD757853CAB77B5A888ED6((RuntimeObject*)L_31, (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_32, NULL);
		}

IL_009d:
		{
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var)));
			SafeModeReport_Add_mC993434DFE20DDF1E44389DACD34085F31E6ED20((&((DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var))))->___safeModeReport), (int32_t)3, NULL);
			V_1 = (bool)0;
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_0135;
		}
	}

IL_00af:
	{
		TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271* L_33 = ___0_t;
		bool L_34 = ((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_33)->___isFrom;
		if (!L_34)
		{
			goto IL_00db;
		}
	}
	{
		TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271* L_35 = ___0_t;
		TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271* L_36 = ___0_t;
		bool L_37;
		L_37 = Tween_get_isRelative_mC31C34D21C3953F9AA7F25C0429BEBE45D2DBAE2_inline((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_36, NULL);
		if (!L_37)
		{
			G_B18_0 = L_35;
			goto IL_00cb;
		}
		G_B17_0 = L_35;
	}
	{
		TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271* L_38 = ___0_t;
		bool L_39 = ((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_38)->___isBlendable;
		G_B19_0 = ((((int32_t)L_39) == ((int32_t)0))? 1 : 0);
		G_B19_1 = G_B17_0;
		goto IL_00cc;
	}

IL_00cb:
	{
		G_B19_0 = 0;
		G_B19_1 = G_B18_0;
	}

IL_00cc:
	{
		Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_40;
		L_40 = VirtualFuncInvoker1< Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140*, bool >::Invoke(8, (Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140*)G_B19_1, (bool)G_B19_0);
		TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271* L_41 = ___0_t;
		Tween_set_isRelative_m881085052780C20122B970FA26766E551DA3B8EB_inline((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_41, (bool)0, NULL);
		goto IL_00f8;
	}

IL_00db:
	{
		TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271* L_42 = ___0_t;
		TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271* L_43 = ___0_t;
		ABSTweenPlugin_3_t4082710A2BB933E2D055E454B3EFAC4C0A319444* L_44 = L_43->___tweenPlugin;
		TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271* L_45 = ___0_t;
		TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271* L_46 = ___0_t;
		DOGetter_1_t13276681BE97FCE6AB699EF1F894EA98C825FE66* L_47 = L_46->___getter;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_48;
		L_48 = DOGetter_1_Invoke_mEAE67401967EACB6626BF325E4D5A4549B591E24_inline(L_47, il2cpp_rgctx_method(method->rgctx_data, 4));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_49;
		L_49 = VirtualFuncInvoker2< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 >::Invoke(7, L_44, L_45, L_48);
		L_42->___startValue = L_49;
	}

IL_00f8:
	{
		TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271* L_50 = ___0_t;
		bool L_51;
		L_51 = Tween_get_isRelative_mC31C34D21C3953F9AA7F25C0429BEBE45D2DBAE2_inline((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_50, NULL);
		if (!L_51)
		{
			goto IL_010c;
		}
	}
	{
		TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271* L_52 = ___0_t;
		ABSTweenPlugin_3_t4082710A2BB933E2D055E454B3EFAC4C0A319444* L_53 = L_52->___tweenPlugin;
		TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271* L_54 = ___0_t;
		VirtualActionInvoker1< TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271* >::Invoke(8, L_53, L_54);
	}

IL_010c:
	{
		TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271* L_55 = ___0_t;
		ABSTweenPlugin_3_t4082710A2BB933E2D055E454B3EFAC4C0A319444* L_56 = L_55->___tweenPlugin;
		TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271* L_57 = ___0_t;
		VirtualActionInvoker1< TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271* >::Invoke(9, L_56, L_57);
		TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271* L_58 = ___0_t;
		Tweener_DOStartupDurationBased_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_TisVectorOptions_t2814CC842518C92C9DFC5DE6F7A73824758D3EF9_mB54B503C58F9B5054A507BCE9A6E03969121D7AD(L_58, il2cpp_rgctx_method(method->rgctx_data, 10));
		TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271* L_59 = ___0_t;
		float L_60 = ((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_59)->___duration;
		if ((!(((float)L_60) <= ((float)(0.0f)))))
		{
			goto IL_0133;
		}
	}
	{
		TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271* L_61 = ___0_t;
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_61)->___easeType = (int32_t)((int32_t)36);
	}

IL_0133:
	{
		return (bool)1;
	}

IL_0135:
	{
		bool L_62 = V_1;
		return L_62;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tweener_DoStartup_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_TisRuntimeObject_TisPathOptions_t76F1CBAC082454349D530B799121EB15BFA4CB3A_m9E492EDA5B1894A5D5166D6B1F441233E78D3DFC_gshared (TweenerCore_3_t588FE764FFE6D341E358B05F0CB12A449ABF8B9C* ___0_t, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Exception_t* V_0 = NULL;
	bool V_1 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	TweenerCore_3_t588FE764FFE6D341E358B05F0CB12A449ABF8B9C* G_B8_0 = NULL;
	TweenerCore_3_t588FE764FFE6D341E358B05F0CB12A449ABF8B9C* G_B7_0 = NULL;
	int32_t G_B9_0 = 0;
	TweenerCore_3_t588FE764FFE6D341E358B05F0CB12A449ABF8B9C* G_B9_1 = NULL;
	TweenerCore_3_t588FE764FFE6D341E358B05F0CB12A449ABF8B9C* G_B18_0 = NULL;
	TweenerCore_3_t588FE764FFE6D341E358B05F0CB12A449ABF8B9C* G_B17_0 = NULL;
	int32_t G_B19_0 = 0;
	TweenerCore_3_t588FE764FFE6D341E358B05F0CB12A449ABF8B9C* G_B19_1 = NULL;
	{
		TweenerCore_3_t588FE764FFE6D341E358B05F0CB12A449ABF8B9C* L_0 = ___0_t;
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_0)->___startupDone = (bool)1;
		TweenerCore_3_t588FE764FFE6D341E358B05F0CB12A449ABF8B9C* L_1 = ___0_t;
		int32_t L_2 = ((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_1)->___specialStartupMode;
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		TweenerCore_3_t588FE764FFE6D341E358B05F0CB12A449ABF8B9C* L_3 = ___0_t;
		bool L_4;
		L_4 = Tweener_DOStartupSpecials_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_TisRuntimeObject_TisPathOptions_t76F1CBAC082454349D530B799121EB15BFA4CB3A_mD3AE336F5DC51942EF291D90E691B99A59B9791D(L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
		if (L_4)
		{
			goto IL_0019;
		}
	}
	{
		return (bool)0;
	}

IL_0019:
	{
		TweenerCore_3_t588FE764FFE6D341E358B05F0CB12A449ABF8B9C* L_5 = ___0_t;
		bool L_6 = ((Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140*)L_5)->___hasManuallySetStartValue;
		if (L_6)
		{
			goto IL_00f8;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		bool L_7 = ((DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var))->___useSafeMode;
		if (!L_7)
		{
			goto IL_00af;
		}
	}
	try
	{
		{
			TweenerCore_3_t588FE764FFE6D341E358B05F0CB12A449ABF8B9C* L_8 = ___0_t;
			bool L_9 = ((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_8)->___isFrom;
			if (!L_9)
			{
				goto IL_005a_1;
			}
		}
		{
			TweenerCore_3_t588FE764FFE6D341E358B05F0CB12A449ABF8B9C* L_10 = ___0_t;
			TweenerCore_3_t588FE764FFE6D341E358B05F0CB12A449ABF8B9C* L_11 = ___0_t;
			bool L_12;
			L_12 = Tween_get_isRelative_mC31C34D21C3953F9AA7F25C0429BEBE45D2DBAE2_inline((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_11, NULL);
			if (!L_12)
			{
				G_B8_0 = L_10;
				goto IL_004a_1;
			}
			G_B7_0 = L_10;
		}
		{
			TweenerCore_3_t588FE764FFE6D341E358B05F0CB12A449ABF8B9C* L_13 = ___0_t;
			bool L_14 = ((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_13)->___isBlendable;
			G_B9_0 = ((((int32_t)L_14) == ((int32_t)0))? 1 : 0);
			G_B9_1 = G_B7_0;
			goto IL_004b_1;
		}

IL_004a_1:
		{
			G_B9_0 = 0;
			G_B9_1 = G_B8_0;
		}

IL_004b_1:
		{
			Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_15;
			L_15 = VirtualFuncInvoker1< Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140*, bool >::Invoke(8, (Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140*)G_B9_1, (bool)G_B9_0);
			TweenerCore_3_t588FE764FFE6D341E358B05F0CB12A449ABF8B9C* L_16 = ___0_t;
			Tween_set_isRelative_m881085052780C20122B970FA26766E551DA3B8EB_inline((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_16, (bool)0, NULL);
			goto IL_0077_1;
		}

IL_005a_1:
		{
			TweenerCore_3_t588FE764FFE6D341E358B05F0CB12A449ABF8B9C* L_17 = ___0_t;
			TweenerCore_3_t588FE764FFE6D341E358B05F0CB12A449ABF8B9C* L_18 = ___0_t;
			ABSTweenPlugin_3_t6D32722320E631CCB96F0ADA615C9F5E568C4720* L_19 = L_18->___tweenPlugin;
			TweenerCore_3_t588FE764FFE6D341E358B05F0CB12A449ABF8B9C* L_20 = ___0_t;
			TweenerCore_3_t588FE764FFE6D341E358B05F0CB12A449ABF8B9C* L_21 = ___0_t;
			DOGetter_1_t709462C08281F3AA5DFEF36CAF91404B1004C338* L_22 = L_21->___getter;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
			L_23 = DOGetter_1_Invoke_m705D63DDD8D645F289BFC35E1BCE02E731AE6F34_inline(L_22, il2cpp_rgctx_method(method->rgctx_data, 4));
			RuntimeObject* L_24;
			L_24 = VirtualFuncInvoker2< RuntimeObject*, TweenerCore_3_t588FE764FFE6D341E358B05F0CB12A449ABF8B9C*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(7, L_19, L_20, L_23);
			L_17->___startValue = L_24;
			Il2CppCodeGenWriteBarrier((void**)(&L_17->___startValue), (void*)L_24);
		}

IL_0077_1:
		{
			goto IL_00f8;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0079;
		}
		throw e;
	}

CATCH_0079:
	{
		{
			Exception_t* L_25 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
			V_0 = L_25;
			bool L_26;
			L_26 = Debugger_ShouldLogSafeModeCapturedError_m5EE800D2A5FD98C95C119D9AF68035095A123C47(NULL);
			if (!L_26)
			{
				goto IL_009d;
			}
		}
		{
			Exception_t* L_27 = V_0;
			MethodBase_t* L_28;
			L_28 = Exception_get_TargetSite_m0CE79BBF864CCEA96B72ED52EC66753CFBE5ED6A(L_27, NULL);
			Exception_t* L_29 = V_0;
			String_t* L_30;
			L_30 = VirtualFuncInvoker0< String_t* >::Invoke(5, L_29);
			String_t* L_31;
			L_31 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAEEC35A7704ECFD616CD15F38FB2BD30AFF7D21B)), (RuntimeObject*)L_28, (RuntimeObject*)L_30, NULL);
			TweenerCore_3_t588FE764FFE6D341E358B05F0CB12A449ABF8B9C* L_32 = ___0_t;
			Debugger_LogSafeModeCapturedError_m0EE4B4F14B9243B4A9BD757853CAB77B5A888ED6((RuntimeObject*)L_31, (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_32, NULL);
		}

IL_009d:
		{
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var)));
			SafeModeReport_Add_mC993434DFE20DDF1E44389DACD34085F31E6ED20((&((DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var))))->___safeModeReport), (int32_t)3, NULL);
			V_1 = (bool)0;
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_0135;
		}
	}

IL_00af:
	{
		TweenerCore_3_t588FE764FFE6D341E358B05F0CB12A449ABF8B9C* L_33 = ___0_t;
		bool L_34 = ((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_33)->___isFrom;
		if (!L_34)
		{
			goto IL_00db;
		}
	}
	{
		TweenerCore_3_t588FE764FFE6D341E358B05F0CB12A449ABF8B9C* L_35 = ___0_t;
		TweenerCore_3_t588FE764FFE6D341E358B05F0CB12A449ABF8B9C* L_36 = ___0_t;
		bool L_37;
		L_37 = Tween_get_isRelative_mC31C34D21C3953F9AA7F25C0429BEBE45D2DBAE2_inline((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_36, NULL);
		if (!L_37)
		{
			G_B18_0 = L_35;
			goto IL_00cb;
		}
		G_B17_0 = L_35;
	}
	{
		TweenerCore_3_t588FE764FFE6D341E358B05F0CB12A449ABF8B9C* L_38 = ___0_t;
		bool L_39 = ((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_38)->___isBlendable;
		G_B19_0 = ((((int32_t)L_39) == ((int32_t)0))? 1 : 0);
		G_B19_1 = G_B17_0;
		goto IL_00cc;
	}

IL_00cb:
	{
		G_B19_0 = 0;
		G_B19_1 = G_B18_0;
	}

IL_00cc:
	{
		Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_40;
		L_40 = VirtualFuncInvoker1< Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140*, bool >::Invoke(8, (Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140*)G_B19_1, (bool)G_B19_0);
		TweenerCore_3_t588FE764FFE6D341E358B05F0CB12A449ABF8B9C* L_41 = ___0_t;
		Tween_set_isRelative_m881085052780C20122B970FA26766E551DA3B8EB_inline((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_41, (bool)0, NULL);
		goto IL_00f8;
	}

IL_00db:
	{
		TweenerCore_3_t588FE764FFE6D341E358B05F0CB12A449ABF8B9C* L_42 = ___0_t;
		TweenerCore_3_t588FE764FFE6D341E358B05F0CB12A449ABF8B9C* L_43 = ___0_t;
		ABSTweenPlugin_3_t6D32722320E631CCB96F0ADA615C9F5E568C4720* L_44 = L_43->___tweenPlugin;
		TweenerCore_3_t588FE764FFE6D341E358B05F0CB12A449ABF8B9C* L_45 = ___0_t;
		TweenerCore_3_t588FE764FFE6D341E358B05F0CB12A449ABF8B9C* L_46 = ___0_t;
		DOGetter_1_t709462C08281F3AA5DFEF36CAF91404B1004C338* L_47 = L_46->___getter;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48;
		L_48 = DOGetter_1_Invoke_m705D63DDD8D645F289BFC35E1BCE02E731AE6F34_inline(L_47, il2cpp_rgctx_method(method->rgctx_data, 4));
		RuntimeObject* L_49;
		L_49 = VirtualFuncInvoker2< RuntimeObject*, TweenerCore_3_t588FE764FFE6D341E358B05F0CB12A449ABF8B9C*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(7, L_44, L_45, L_48);
		L_42->___startValue = L_49;
		Il2CppCodeGenWriteBarrier((void**)(&L_42->___startValue), (void*)L_49);
	}

IL_00f8:
	{
		TweenerCore_3_t588FE764FFE6D341E358B05F0CB12A449ABF8B9C* L_50 = ___0_t;
		bool L_51;
		L_51 = Tween_get_isRelative_mC31C34D21C3953F9AA7F25C0429BEBE45D2DBAE2_inline((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_50, NULL);
		if (!L_51)
		{
			goto IL_010c;
		}
	}
	{
		TweenerCore_3_t588FE764FFE6D341E358B05F0CB12A449ABF8B9C* L_52 = ___0_t;
		ABSTweenPlugin_3_t6D32722320E631CCB96F0ADA615C9F5E568C4720* L_53 = L_52->___tweenPlugin;
		TweenerCore_3_t588FE764FFE6D341E358B05F0CB12A449ABF8B9C* L_54 = ___0_t;
		VirtualActionInvoker1< TweenerCore_3_t588FE764FFE6D341E358B05F0CB12A449ABF8B9C* >::Invoke(8, L_53, L_54);
	}

IL_010c:
	{
		TweenerCore_3_t588FE764FFE6D341E358B05F0CB12A449ABF8B9C* L_55 = ___0_t;
		ABSTweenPlugin_3_t6D32722320E631CCB96F0ADA615C9F5E568C4720* L_56 = L_55->___tweenPlugin;
		TweenerCore_3_t588FE764FFE6D341E358B05F0CB12A449ABF8B9C* L_57 = ___0_t;
		VirtualActionInvoker1< TweenerCore_3_t588FE764FFE6D341E358B05F0CB12A449ABF8B9C* >::Invoke(9, L_56, L_57);
		TweenerCore_3_t588FE764FFE6D341E358B05F0CB12A449ABF8B9C* L_58 = ___0_t;
		Tweener_DOStartupDurationBased_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_TisRuntimeObject_TisPathOptions_t76F1CBAC082454349D530B799121EB15BFA4CB3A_mAA99795FB9D051D18DD616241E1BD5A455B21209(L_58, il2cpp_rgctx_method(method->rgctx_data, 10));
		TweenerCore_3_t588FE764FFE6D341E358B05F0CB12A449ABF8B9C* L_59 = ___0_t;
		float L_60 = ((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_59)->___duration;
		if ((!(((float)L_60) <= ((float)(0.0f)))))
		{
			goto IL_0133;
		}
	}
	{
		TweenerCore_3_t588FE764FFE6D341E358B05F0CB12A449ABF8B9C* L_61 = ___0_t;
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_61)->___easeType = (int32_t)((int32_t)36);
	}

IL_0133:
	{
		return (bool)1;
	}

IL_0135:
	{
		bool L_62 = V_1;
		return L_62;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tweener_DoStartup_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_TisRuntimeObject_TisVector3ArrayOptions_t0F50A7A54A860E4604486511E285C952557C6644_mE9C7E4492BEC2E3216FE4FF7586E4AE6CA35FE7D_gshared (TweenerCore_3_t76519FA34EF184090B81F1F9F8F10E7EC238AB9C* ___0_t, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Exception_t* V_0 = NULL;
	bool V_1 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	TweenerCore_3_t76519FA34EF184090B81F1F9F8F10E7EC238AB9C* G_B8_0 = NULL;
	TweenerCore_3_t76519FA34EF184090B81F1F9F8F10E7EC238AB9C* G_B7_0 = NULL;
	int32_t G_B9_0 = 0;
	TweenerCore_3_t76519FA34EF184090B81F1F9F8F10E7EC238AB9C* G_B9_1 = NULL;
	TweenerCore_3_t76519FA34EF184090B81F1F9F8F10E7EC238AB9C* G_B18_0 = NULL;
	TweenerCore_3_t76519FA34EF184090B81F1F9F8F10E7EC238AB9C* G_B17_0 = NULL;
	int32_t G_B19_0 = 0;
	TweenerCore_3_t76519FA34EF184090B81F1F9F8F10E7EC238AB9C* G_B19_1 = NULL;
	{
		TweenerCore_3_t76519FA34EF184090B81F1F9F8F10E7EC238AB9C* L_0 = ___0_t;
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_0)->___startupDone = (bool)1;
		TweenerCore_3_t76519FA34EF184090B81F1F9F8F10E7EC238AB9C* L_1 = ___0_t;
		int32_t L_2 = ((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_1)->___specialStartupMode;
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		TweenerCore_3_t76519FA34EF184090B81F1F9F8F10E7EC238AB9C* L_3 = ___0_t;
		bool L_4;
		L_4 = Tweener_DOStartupSpecials_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_TisRuntimeObject_TisVector3ArrayOptions_t0F50A7A54A860E4604486511E285C952557C6644_m0F3CC64B428A423A50077A257AF223A66B537649(L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
		if (L_4)
		{
			goto IL_0019;
		}
	}
	{
		return (bool)0;
	}

IL_0019:
	{
		TweenerCore_3_t76519FA34EF184090B81F1F9F8F10E7EC238AB9C* L_5 = ___0_t;
		bool L_6 = ((Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140*)L_5)->___hasManuallySetStartValue;
		if (L_6)
		{
			goto IL_00f8;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		bool L_7 = ((DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var))->___useSafeMode;
		if (!L_7)
		{
			goto IL_00af;
		}
	}
	try
	{
		{
			TweenerCore_3_t76519FA34EF184090B81F1F9F8F10E7EC238AB9C* L_8 = ___0_t;
			bool L_9 = ((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_8)->___isFrom;
			if (!L_9)
			{
				goto IL_005a_1;
			}
		}
		{
			TweenerCore_3_t76519FA34EF184090B81F1F9F8F10E7EC238AB9C* L_10 = ___0_t;
			TweenerCore_3_t76519FA34EF184090B81F1F9F8F10E7EC238AB9C* L_11 = ___0_t;
			bool L_12;
			L_12 = Tween_get_isRelative_mC31C34D21C3953F9AA7F25C0429BEBE45D2DBAE2_inline((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_11, NULL);
			if (!L_12)
			{
				G_B8_0 = L_10;
				goto IL_004a_1;
			}
			G_B7_0 = L_10;
		}
		{
			TweenerCore_3_t76519FA34EF184090B81F1F9F8F10E7EC238AB9C* L_13 = ___0_t;
			bool L_14 = ((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_13)->___isBlendable;
			G_B9_0 = ((((int32_t)L_14) == ((int32_t)0))? 1 : 0);
			G_B9_1 = G_B7_0;
			goto IL_004b_1;
		}

IL_004a_1:
		{
			G_B9_0 = 0;
			G_B9_1 = G_B8_0;
		}

IL_004b_1:
		{
			Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_15;
			L_15 = VirtualFuncInvoker1< Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140*, bool >::Invoke(8, (Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140*)G_B9_1, (bool)G_B9_0);
			TweenerCore_3_t76519FA34EF184090B81F1F9F8F10E7EC238AB9C* L_16 = ___0_t;
			Tween_set_isRelative_m881085052780C20122B970FA26766E551DA3B8EB_inline((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_16, (bool)0, NULL);
			goto IL_0077_1;
		}

IL_005a_1:
		{
			TweenerCore_3_t76519FA34EF184090B81F1F9F8F10E7EC238AB9C* L_17 = ___0_t;
			TweenerCore_3_t76519FA34EF184090B81F1F9F8F10E7EC238AB9C* L_18 = ___0_t;
			ABSTweenPlugin_3_t053B27021E31B21883DF289A9875BD9EB5381671* L_19 = L_18->___tweenPlugin;
			TweenerCore_3_t76519FA34EF184090B81F1F9F8F10E7EC238AB9C* L_20 = ___0_t;
			TweenerCore_3_t76519FA34EF184090B81F1F9F8F10E7EC238AB9C* L_21 = ___0_t;
			DOGetter_1_t709462C08281F3AA5DFEF36CAF91404B1004C338* L_22 = L_21->___getter;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
			L_23 = DOGetter_1_Invoke_m705D63DDD8D645F289BFC35E1BCE02E731AE6F34_inline(L_22, il2cpp_rgctx_method(method->rgctx_data, 4));
			RuntimeObject* L_24;
			L_24 = VirtualFuncInvoker2< RuntimeObject*, TweenerCore_3_t76519FA34EF184090B81F1F9F8F10E7EC238AB9C*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(7, L_19, L_20, L_23);
			L_17->___startValue = L_24;
			Il2CppCodeGenWriteBarrier((void**)(&L_17->___startValue), (void*)L_24);
		}

IL_0077_1:
		{
			goto IL_00f8;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0079;
		}
		throw e;
	}

CATCH_0079:
	{
		{
			Exception_t* L_25 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
			V_0 = L_25;
			bool L_26;
			L_26 = Debugger_ShouldLogSafeModeCapturedError_m5EE800D2A5FD98C95C119D9AF68035095A123C47(NULL);
			if (!L_26)
			{
				goto IL_009d;
			}
		}
		{
			Exception_t* L_27 = V_0;
			MethodBase_t* L_28;
			L_28 = Exception_get_TargetSite_m0CE79BBF864CCEA96B72ED52EC66753CFBE5ED6A(L_27, NULL);
			Exception_t* L_29 = V_0;
			String_t* L_30;
			L_30 = VirtualFuncInvoker0< String_t* >::Invoke(5, L_29);
			String_t* L_31;
			L_31 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAEEC35A7704ECFD616CD15F38FB2BD30AFF7D21B)), (RuntimeObject*)L_28, (RuntimeObject*)L_30, NULL);
			TweenerCore_3_t76519FA34EF184090B81F1F9F8F10E7EC238AB9C* L_32 = ___0_t;
			Debugger_LogSafeModeCapturedError_m0EE4B4F14B9243B4A9BD757853CAB77B5A888ED6((RuntimeObject*)L_31, (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_32, NULL);
		}

IL_009d:
		{
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var)));
			SafeModeReport_Add_mC993434DFE20DDF1E44389DACD34085F31E6ED20((&((DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var))))->___safeModeReport), (int32_t)3, NULL);
			V_1 = (bool)0;
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_0135;
		}
	}

IL_00af:
	{
		TweenerCore_3_t76519FA34EF184090B81F1F9F8F10E7EC238AB9C* L_33 = ___0_t;
		bool L_34 = ((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_33)->___isFrom;
		if (!L_34)
		{
			goto IL_00db;
		}
	}
	{
		TweenerCore_3_t76519FA34EF184090B81F1F9F8F10E7EC238AB9C* L_35 = ___0_t;
		TweenerCore_3_t76519FA34EF184090B81F1F9F8F10E7EC238AB9C* L_36 = ___0_t;
		bool L_37;
		L_37 = Tween_get_isRelative_mC31C34D21C3953F9AA7F25C0429BEBE45D2DBAE2_inline((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_36, NULL);
		if (!L_37)
		{
			G_B18_0 = L_35;
			goto IL_00cb;
		}
		G_B17_0 = L_35;
	}
	{
		TweenerCore_3_t76519FA34EF184090B81F1F9F8F10E7EC238AB9C* L_38 = ___0_t;
		bool L_39 = ((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_38)->___isBlendable;
		G_B19_0 = ((((int32_t)L_39) == ((int32_t)0))? 1 : 0);
		G_B19_1 = G_B17_0;
		goto IL_00cc;
	}

IL_00cb:
	{
		G_B19_0 = 0;
		G_B19_1 = G_B18_0;
	}

IL_00cc:
	{
		Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_40;
		L_40 = VirtualFuncInvoker1< Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140*, bool >::Invoke(8, (Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140*)G_B19_1, (bool)G_B19_0);
		TweenerCore_3_t76519FA34EF184090B81F1F9F8F10E7EC238AB9C* L_41 = ___0_t;
		Tween_set_isRelative_m881085052780C20122B970FA26766E551DA3B8EB_inline((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_41, (bool)0, NULL);
		goto IL_00f8;
	}

IL_00db:
	{
		TweenerCore_3_t76519FA34EF184090B81F1F9F8F10E7EC238AB9C* L_42 = ___0_t;
		TweenerCore_3_t76519FA34EF184090B81F1F9F8F10E7EC238AB9C* L_43 = ___0_t;
		ABSTweenPlugin_3_t053B27021E31B21883DF289A9875BD9EB5381671* L_44 = L_43->___tweenPlugin;
		TweenerCore_3_t76519FA34EF184090B81F1F9F8F10E7EC238AB9C* L_45 = ___0_t;
		TweenerCore_3_t76519FA34EF184090B81F1F9F8F10E7EC238AB9C* L_46 = ___0_t;
		DOGetter_1_t709462C08281F3AA5DFEF36CAF91404B1004C338* L_47 = L_46->___getter;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48;
		L_48 = DOGetter_1_Invoke_m705D63DDD8D645F289BFC35E1BCE02E731AE6F34_inline(L_47, il2cpp_rgctx_method(method->rgctx_data, 4));
		RuntimeObject* L_49;
		L_49 = VirtualFuncInvoker2< RuntimeObject*, TweenerCore_3_t76519FA34EF184090B81F1F9F8F10E7EC238AB9C*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(7, L_44, L_45, L_48);
		L_42->___startValue = L_49;
		Il2CppCodeGenWriteBarrier((void**)(&L_42->___startValue), (void*)L_49);
	}

IL_00f8:
	{
		TweenerCore_3_t76519FA34EF184090B81F1F9F8F10E7EC238AB9C* L_50 = ___0_t;
		bool L_51;
		L_51 = Tween_get_isRelative_mC31C34D21C3953F9AA7F25C0429BEBE45D2DBAE2_inline((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_50, NULL);
		if (!L_51)
		{
			goto IL_010c;
		}
	}
	{
		TweenerCore_3_t76519FA34EF184090B81F1F9F8F10E7EC238AB9C* L_52 = ___0_t;
		ABSTweenPlugin_3_t053B27021E31B21883DF289A9875BD9EB5381671* L_53 = L_52->___tweenPlugin;
		TweenerCore_3_t76519FA34EF184090B81F1F9F8F10E7EC238AB9C* L_54 = ___0_t;
		VirtualActionInvoker1< TweenerCore_3_t76519FA34EF184090B81F1F9F8F10E7EC238AB9C* >::Invoke(8, L_53, L_54);
	}

IL_010c:
	{
		TweenerCore_3_t76519FA34EF184090B81F1F9F8F10E7EC238AB9C* L_55 = ___0_t;
		ABSTweenPlugin_3_t053B27021E31B21883DF289A9875BD9EB5381671* L_56 = L_55->___tweenPlugin;
		TweenerCore_3_t76519FA34EF184090B81F1F9F8F10E7EC238AB9C* L_57 = ___0_t;
		VirtualActionInvoker1< TweenerCore_3_t76519FA34EF184090B81F1F9F8F10E7EC238AB9C* >::Invoke(9, L_56, L_57);
		TweenerCore_3_t76519FA34EF184090B81F1F9F8F10E7EC238AB9C* L_58 = ___0_t;
		Tweener_DOStartupDurationBased_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_TisRuntimeObject_TisVector3ArrayOptions_t0F50A7A54A860E4604486511E285C952557C6644_mCF07906D19B5571FC45E0FB0688C6AB45F7C3E9D(L_58, il2cpp_rgctx_method(method->rgctx_data, 10));
		TweenerCore_3_t76519FA34EF184090B81F1F9F8F10E7EC238AB9C* L_59 = ___0_t;
		float L_60 = ((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_59)->___duration;
		if ((!(((float)L_60) <= ((float)(0.0f)))))
		{
			goto IL_0133;
		}
	}
	{
		TweenerCore_3_t76519FA34EF184090B81F1F9F8F10E7EC238AB9C* L_61 = ___0_t;
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_61)->___easeType = (int32_t)((int32_t)36);
	}

IL_0133:
	{
		return (bool)1;
	}

IL_0135:
	{
		bool L_62 = V_1;
		return L_62;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tweener_DoStartup_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_TisVectorOptions_t2814CC842518C92C9DFC5DE6F7A73824758D3EF9_m2E1BC985B17F33B4E76E9B95253B714304645091_gshared (TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* ___0_t, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Exception_t* V_0 = NULL;
	bool V_1 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* G_B8_0 = NULL;
	TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* G_B7_0 = NULL;
	int32_t G_B9_0 = 0;
	TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* G_B9_1 = NULL;
	TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* G_B18_0 = NULL;
	TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* G_B17_0 = NULL;
	int32_t G_B19_0 = 0;
	TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* G_B19_1 = NULL;
	{
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_0 = ___0_t;
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_0)->___startupDone = (bool)1;
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_1 = ___0_t;
		int32_t L_2 = ((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_1)->___specialStartupMode;
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_3 = ___0_t;
		bool L_4;
		L_4 = Tweener_DOStartupSpecials_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_TisVectorOptions_t2814CC842518C92C9DFC5DE6F7A73824758D3EF9_mD5213475CDE0FD66943180B0FC94F593823987CB(L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
		if (L_4)
		{
			goto IL_0019;
		}
	}
	{
		return (bool)0;
	}

IL_0019:
	{
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_5 = ___0_t;
		bool L_6 = ((Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140*)L_5)->___hasManuallySetStartValue;
		if (L_6)
		{
			goto IL_00f8;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		bool L_7 = ((DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var))->___useSafeMode;
		if (!L_7)
		{
			goto IL_00af;
		}
	}
	try
	{
		{
			TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_8 = ___0_t;
			bool L_9 = ((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_8)->___isFrom;
			if (!L_9)
			{
				goto IL_005a_1;
			}
		}
		{
			TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_10 = ___0_t;
			TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_11 = ___0_t;
			bool L_12;
			L_12 = Tween_get_isRelative_mC31C34D21C3953F9AA7F25C0429BEBE45D2DBAE2_inline((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_11, NULL);
			if (!L_12)
			{
				G_B8_0 = L_10;
				goto IL_004a_1;
			}
			G_B7_0 = L_10;
		}
		{
			TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_13 = ___0_t;
			bool L_14 = ((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_13)->___isBlendable;
			G_B9_0 = ((((int32_t)L_14) == ((int32_t)0))? 1 : 0);
			G_B9_1 = G_B7_0;
			goto IL_004b_1;
		}

IL_004a_1:
		{
			G_B9_0 = 0;
			G_B9_1 = G_B8_0;
		}

IL_004b_1:
		{
			Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_15;
			L_15 = VirtualFuncInvoker1< Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140*, bool >::Invoke(8, (Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140*)G_B9_1, (bool)G_B9_0);
			TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_16 = ___0_t;
			Tween_set_isRelative_m881085052780C20122B970FA26766E551DA3B8EB_inline((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_16, (bool)0, NULL);
			goto IL_0077_1;
		}

IL_005a_1:
		{
			TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_17 = ___0_t;
			TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_18 = ___0_t;
			ABSTweenPlugin_3_tE5A78BE46D046C07A6356B8AB596B2D00F9295E7* L_19 = L_18->___tweenPlugin;
			TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_20 = ___0_t;
			TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_21 = ___0_t;
			DOGetter_1_t709462C08281F3AA5DFEF36CAF91404B1004C338* L_22 = L_21->___getter;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
			L_23 = DOGetter_1_Invoke_m705D63DDD8D645F289BFC35E1BCE02E731AE6F34_inline(L_22, il2cpp_rgctx_method(method->rgctx_data, 4));
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
			L_24 = VirtualFuncInvoker2< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(7, L_19, L_20, L_23);
			L_17->___startValue = L_24;
		}

IL_0077_1:
		{
			goto IL_00f8;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0079;
		}
		throw e;
	}

CATCH_0079:
	{
		{
			Exception_t* L_25 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
			V_0 = L_25;
			bool L_26;
			L_26 = Debugger_ShouldLogSafeModeCapturedError_m5EE800D2A5FD98C95C119D9AF68035095A123C47(NULL);
			if (!L_26)
			{
				goto IL_009d;
			}
		}
		{
			Exception_t* L_27 = V_0;
			MethodBase_t* L_28;
			L_28 = Exception_get_TargetSite_m0CE79BBF864CCEA96B72ED52EC66753CFBE5ED6A(L_27, NULL);
			Exception_t* L_29 = V_0;
			String_t* L_30;
			L_30 = VirtualFuncInvoker0< String_t* >::Invoke(5, L_29);
			String_t* L_31;
			L_31 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAEEC35A7704ECFD616CD15F38FB2BD30AFF7D21B)), (RuntimeObject*)L_28, (RuntimeObject*)L_30, NULL);
			TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_32 = ___0_t;
			Debugger_LogSafeModeCapturedError_m0EE4B4F14B9243B4A9BD757853CAB77B5A888ED6((RuntimeObject*)L_31, (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_32, NULL);
		}

IL_009d:
		{
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var)));
			SafeModeReport_Add_mC993434DFE20DDF1E44389DACD34085F31E6ED20((&((DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var))))->___safeModeReport), (int32_t)3, NULL);
			V_1 = (bool)0;
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_0135;
		}
	}

IL_00af:
	{
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_33 = ___0_t;
		bool L_34 = ((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_33)->___isFrom;
		if (!L_34)
		{
			goto IL_00db;
		}
	}
	{
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_35 = ___0_t;
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_36 = ___0_t;
		bool L_37;
		L_37 = Tween_get_isRelative_mC31C34D21C3953F9AA7F25C0429BEBE45D2DBAE2_inline((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_36, NULL);
		if (!L_37)
		{
			G_B18_0 = L_35;
			goto IL_00cb;
		}
		G_B17_0 = L_35;
	}
	{
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_38 = ___0_t;
		bool L_39 = ((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_38)->___isBlendable;
		G_B19_0 = ((((int32_t)L_39) == ((int32_t)0))? 1 : 0);
		G_B19_1 = G_B17_0;
		goto IL_00cc;
	}

IL_00cb:
	{
		G_B19_0 = 0;
		G_B19_1 = G_B18_0;
	}

IL_00cc:
	{
		Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_40;
		L_40 = VirtualFuncInvoker1< Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140*, bool >::Invoke(8, (Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140*)G_B19_1, (bool)G_B19_0);
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_41 = ___0_t;
		Tween_set_isRelative_m881085052780C20122B970FA26766E551DA3B8EB_inline((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_41, (bool)0, NULL);
		goto IL_00f8;
	}

IL_00db:
	{
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_42 = ___0_t;
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_43 = ___0_t;
		ABSTweenPlugin_3_tE5A78BE46D046C07A6356B8AB596B2D00F9295E7* L_44 = L_43->___tweenPlugin;
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_45 = ___0_t;
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_46 = ___0_t;
		DOGetter_1_t709462C08281F3AA5DFEF36CAF91404B1004C338* L_47 = L_46->___getter;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48;
		L_48 = DOGetter_1_Invoke_m705D63DDD8D645F289BFC35E1BCE02E731AE6F34_inline(L_47, il2cpp_rgctx_method(method->rgctx_data, 4));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49;
		L_49 = VirtualFuncInvoker2< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(7, L_44, L_45, L_48);
		L_42->___startValue = L_49;
	}

IL_00f8:
	{
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_50 = ___0_t;
		bool L_51;
		L_51 = Tween_get_isRelative_mC31C34D21C3953F9AA7F25C0429BEBE45D2DBAE2_inline((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_50, NULL);
		if (!L_51)
		{
			goto IL_010c;
		}
	}
	{
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_52 = ___0_t;
		ABSTweenPlugin_3_tE5A78BE46D046C07A6356B8AB596B2D00F9295E7* L_53 = L_52->___tweenPlugin;
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_54 = ___0_t;
		VirtualActionInvoker1< TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* >::Invoke(8, L_53, L_54);
	}

IL_010c:
	{
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_55 = ___0_t;
		ABSTweenPlugin_3_tE5A78BE46D046C07A6356B8AB596B2D00F9295E7* L_56 = L_55->___tweenPlugin;
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_57 = ___0_t;
		VirtualActionInvoker1< TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* >::Invoke(9, L_56, L_57);
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_58 = ___0_t;
		Tweener_DOStartupDurationBased_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_TisVectorOptions_t2814CC842518C92C9DFC5DE6F7A73824758D3EF9_m788928E71460C6D9B70C2AD74145858422318960(L_58, il2cpp_rgctx_method(method->rgctx_data, 10));
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_59 = ___0_t;
		float L_60 = ((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_59)->___duration;
		if ((!(((float)L_60) <= ((float)(0.0f)))))
		{
			goto IL_0133;
		}
	}
	{
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_61 = ___0_t;
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_61)->___easeType = (int32_t)((int32_t)36);
	}

IL_0133:
	{
		return (bool)1;
	}

IL_0135:
	{
		bool L_62 = V_1;
		return L_62;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tweener_DoStartup_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_TisVectorOptions_t2814CC842518C92C9DFC5DE6F7A73824758D3EF9_m508F966B14837236F678716F1D0483611034234C_gshared (TweenerCore_3_t963D77C15EC065D01436953D600312198028FDA3* ___0_t, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Exception_t* V_0 = NULL;
	bool V_1 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	TweenerCore_3_t963D77C15EC065D01436953D600312198028FDA3* G_B8_0 = NULL;
	TweenerCore_3_t963D77C15EC065D01436953D600312198028FDA3* G_B7_0 = NULL;
	int32_t G_B9_0 = 0;
	TweenerCore_3_t963D77C15EC065D01436953D600312198028FDA3* G_B9_1 = NULL;
	TweenerCore_3_t963D77C15EC065D01436953D600312198028FDA3* G_B18_0 = NULL;
	TweenerCore_3_t963D77C15EC065D01436953D600312198028FDA3* G_B17_0 = NULL;
	int32_t G_B19_0 = 0;
	TweenerCore_3_t963D77C15EC065D01436953D600312198028FDA3* G_B19_1 = NULL;
	{
		TweenerCore_3_t963D77C15EC065D01436953D600312198028FDA3* L_0 = ___0_t;
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_0)->___startupDone = (bool)1;
		TweenerCore_3_t963D77C15EC065D01436953D600312198028FDA3* L_1 = ___0_t;
		int32_t L_2 = ((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_1)->___specialStartupMode;
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		TweenerCore_3_t963D77C15EC065D01436953D600312198028FDA3* L_3 = ___0_t;
		bool L_4;
		L_4 = Tweener_DOStartupSpecials_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_TisVectorOptions_t2814CC842518C92C9DFC5DE6F7A73824758D3EF9_mCA9912E8C97C86A7954E958C3275D4A6AAC225CF(L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
		if (L_4)
		{
			goto IL_0019;
		}
	}
	{
		return (bool)0;
	}

IL_0019:
	{
		TweenerCore_3_t963D77C15EC065D01436953D600312198028FDA3* L_5 = ___0_t;
		bool L_6 = ((Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140*)L_5)->___hasManuallySetStartValue;
		if (L_6)
		{
			goto IL_00f8;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		bool L_7 = ((DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var))->___useSafeMode;
		if (!L_7)
		{
			goto IL_00af;
		}
	}
	try
	{
		{
			TweenerCore_3_t963D77C15EC065D01436953D600312198028FDA3* L_8 = ___0_t;
			bool L_9 = ((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_8)->___isFrom;
			if (!L_9)
			{
				goto IL_005a_1;
			}
		}
		{
			TweenerCore_3_t963D77C15EC065D01436953D600312198028FDA3* L_10 = ___0_t;
			TweenerCore_3_t963D77C15EC065D01436953D600312198028FDA3* L_11 = ___0_t;
			bool L_12;
			L_12 = Tween_get_isRelative_mC31C34D21C3953F9AA7F25C0429BEBE45D2DBAE2_inline((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_11, NULL);
			if (!L_12)
			{
				G_B8_0 = L_10;
				goto IL_004a_1;
			}
			G_B7_0 = L_10;
		}
		{
			TweenerCore_3_t963D77C15EC065D01436953D600312198028FDA3* L_13 = ___0_t;
			bool L_14 = ((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_13)->___isBlendable;
			G_B9_0 = ((((int32_t)L_14) == ((int32_t)0))? 1 : 0);
			G_B9_1 = G_B7_0;
			goto IL_004b_1;
		}

IL_004a_1:
		{
			G_B9_0 = 0;
			G_B9_1 = G_B8_0;
		}

IL_004b_1:
		{
			Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_15;
			L_15 = VirtualFuncInvoker1< Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140*, bool >::Invoke(8, (Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140*)G_B9_1, (bool)G_B9_0);
			TweenerCore_3_t963D77C15EC065D01436953D600312198028FDA3* L_16 = ___0_t;
			Tween_set_isRelative_m881085052780C20122B970FA26766E551DA3B8EB_inline((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_16, (bool)0, NULL);
			goto IL_0077_1;
		}

IL_005a_1:
		{
			TweenerCore_3_t963D77C15EC065D01436953D600312198028FDA3* L_17 = ___0_t;
			TweenerCore_3_t963D77C15EC065D01436953D600312198028FDA3* L_18 = ___0_t;
			ABSTweenPlugin_3_t9F8F8099624B165B75CB1E0C53FA9762CB2815FC* L_19 = L_18->___tweenPlugin;
			TweenerCore_3_t963D77C15EC065D01436953D600312198028FDA3* L_20 = ___0_t;
			TweenerCore_3_t963D77C15EC065D01436953D600312198028FDA3* L_21 = ___0_t;
			DOGetter_1_t7663EC1A34326612C559E1AC30ED719944D21731* L_22 = L_21->___getter;
			Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_23;
			L_23 = DOGetter_1_Invoke_m1DA7F4565AC91CD75B46CA73C3D72341775D7022_inline(L_22, il2cpp_rgctx_method(method->rgctx_data, 4));
			Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_24;
			L_24 = VirtualFuncInvoker2< Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, TweenerCore_3_t963D77C15EC065D01436953D600312198028FDA3*, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 >::Invoke(7, L_19, L_20, L_23);
			L_17->___startValue = L_24;
		}

IL_0077_1:
		{
			goto IL_00f8;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0079;
		}
		throw e;
	}

CATCH_0079:
	{
		{
			Exception_t* L_25 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
			V_0 = L_25;
			bool L_26;
			L_26 = Debugger_ShouldLogSafeModeCapturedError_m5EE800D2A5FD98C95C119D9AF68035095A123C47(NULL);
			if (!L_26)
			{
				goto IL_009d;
			}
		}
		{
			Exception_t* L_27 = V_0;
			MethodBase_t* L_28;
			L_28 = Exception_get_TargetSite_m0CE79BBF864CCEA96B72ED52EC66753CFBE5ED6A(L_27, NULL);
			Exception_t* L_29 = V_0;
			String_t* L_30;
			L_30 = VirtualFuncInvoker0< String_t* >::Invoke(5, L_29);
			String_t* L_31;
			L_31 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAEEC35A7704ECFD616CD15F38FB2BD30AFF7D21B)), (RuntimeObject*)L_28, (RuntimeObject*)L_30, NULL);
			TweenerCore_3_t963D77C15EC065D01436953D600312198028FDA3* L_32 = ___0_t;
			Debugger_LogSafeModeCapturedError_m0EE4B4F14B9243B4A9BD757853CAB77B5A888ED6((RuntimeObject*)L_31, (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_32, NULL);
		}

IL_009d:
		{
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var)));
			SafeModeReport_Add_mC993434DFE20DDF1E44389DACD34085F31E6ED20((&((DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var))))->___safeModeReport), (int32_t)3, NULL);
			V_1 = (bool)0;
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_0135;
		}
	}

IL_00af:
	{
		TweenerCore_3_t963D77C15EC065D01436953D600312198028FDA3* L_33 = ___0_t;
		bool L_34 = ((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_33)->___isFrom;
		if (!L_34)
		{
			goto IL_00db;
		}
	}
	{
		TweenerCore_3_t963D77C15EC065D01436953D600312198028FDA3* L_35 = ___0_t;
		TweenerCore_3_t963D77C15EC065D01436953D600312198028FDA3* L_36 = ___0_t;
		bool L_37;
		L_37 = Tween_get_isRelative_mC31C34D21C3953F9AA7F25C0429BEBE45D2DBAE2_inline((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_36, NULL);
		if (!L_37)
		{
			G_B18_0 = L_35;
			goto IL_00cb;
		}
		G_B17_0 = L_35;
	}
	{
		TweenerCore_3_t963D77C15EC065D01436953D600312198028FDA3* L_38 = ___0_t;
		bool L_39 = ((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_38)->___isBlendable;
		G_B19_0 = ((((int32_t)L_39) == ((int32_t)0))? 1 : 0);
		G_B19_1 = G_B17_0;
		goto IL_00cc;
	}

IL_00cb:
	{
		G_B19_0 = 0;
		G_B19_1 = G_B18_0;
	}

IL_00cc:
	{
		Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_40;
		L_40 = VirtualFuncInvoker1< Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140*, bool >::Invoke(8, (Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140*)G_B19_1, (bool)G_B19_0);
		TweenerCore_3_t963D77C15EC065D01436953D600312198028FDA3* L_41 = ___0_t;
		Tween_set_isRelative_m881085052780C20122B970FA26766E551DA3B8EB_inline((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_41, (bool)0, NULL);
		goto IL_00f8;
	}

IL_00db:
	{
		TweenerCore_3_t963D77C15EC065D01436953D600312198028FDA3* L_42 = ___0_t;
		TweenerCore_3_t963D77C15EC065D01436953D600312198028FDA3* L_43 = ___0_t;
		ABSTweenPlugin_3_t9F8F8099624B165B75CB1E0C53FA9762CB2815FC* L_44 = L_43->___tweenPlugin;
		TweenerCore_3_t963D77C15EC065D01436953D600312198028FDA3* L_45 = ___0_t;
		TweenerCore_3_t963D77C15EC065D01436953D600312198028FDA3* L_46 = ___0_t;
		DOGetter_1_t7663EC1A34326612C559E1AC30ED719944D21731* L_47 = L_46->___getter;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_48;
		L_48 = DOGetter_1_Invoke_m1DA7F4565AC91CD75B46CA73C3D72341775D7022_inline(L_47, il2cpp_rgctx_method(method->rgctx_data, 4));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_49;
		L_49 = VirtualFuncInvoker2< Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, TweenerCore_3_t963D77C15EC065D01436953D600312198028FDA3*, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 >::Invoke(7, L_44, L_45, L_48);
		L_42->___startValue = L_49;
	}

IL_00f8:
	{
		TweenerCore_3_t963D77C15EC065D01436953D600312198028FDA3* L_50 = ___0_t;
		bool L_51;
		L_51 = Tween_get_isRelative_mC31C34D21C3953F9AA7F25C0429BEBE45D2DBAE2_inline((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_50, NULL);
		if (!L_51)
		{
			goto IL_010c;
		}
	}
	{
		TweenerCore_3_t963D77C15EC065D01436953D600312198028FDA3* L_52 = ___0_t;
		ABSTweenPlugin_3_t9F8F8099624B165B75CB1E0C53FA9762CB2815FC* L_53 = L_52->___tweenPlugin;
		TweenerCore_3_t963D77C15EC065D01436953D600312198028FDA3* L_54 = ___0_t;
		VirtualActionInvoker1< TweenerCore_3_t963D77C15EC065D01436953D600312198028FDA3* >::Invoke(8, L_53, L_54);
	}

IL_010c:
	{
		TweenerCore_3_t963D77C15EC065D01436953D600312198028FDA3* L_55 = ___0_t;
		ABSTweenPlugin_3_t9F8F8099624B165B75CB1E0C53FA9762CB2815FC* L_56 = L_55->___tweenPlugin;
		TweenerCore_3_t963D77C15EC065D01436953D600312198028FDA3* L_57 = ___0_t;
		VirtualActionInvoker1< TweenerCore_3_t963D77C15EC065D01436953D600312198028FDA3* >::Invoke(9, L_56, L_57);
		TweenerCore_3_t963D77C15EC065D01436953D600312198028FDA3* L_58 = ___0_t;
		Tweener_DOStartupDurationBased_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_TisVectorOptions_t2814CC842518C92C9DFC5DE6F7A73824758D3EF9_m58FF505A1865B731A941E9E3C09D2BFF26654BE0(L_58, il2cpp_rgctx_method(method->rgctx_data, 10));
		TweenerCore_3_t963D77C15EC065D01436953D600312198028FDA3* L_59 = ___0_t;
		float L_60 = ((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_59)->___duration;
		if ((!(((float)L_60) <= ((float)(0.0f)))))
		{
			goto IL_0133;
		}
	}
	{
		TweenerCore_3_t963D77C15EC065D01436953D600312198028FDA3* L_61 = ___0_t;
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_61)->___easeType = (int32_t)((int32_t)36);
	}

IL_0133:
	{
		return (bool)1;
	}

IL_0135:
	{
		bool L_62 = V_1;
		return L_62;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tweener_DoStartup_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericStruct_m7844713579DCB7C27C603F35641565347ECB2EF3_gshared (TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* ___0_t, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_T2_tC4A76B819474D2BA458497F91AF356C820C52665 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 7));
	const uint32_t SizeOf_T1_t5767A194576CC1FC1703FC747AE22F6F38E4DC35 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 5));
	const Il2CppFullySharedGenericAny L_23 = alloca(SizeOf_T1_t5767A194576CC1FC1703FC747AE22F6F38E4DC35);
	const Il2CppFullySharedGenericAny L_48 = L_23;
	const Il2CppFullySharedGenericAny L_24 = alloca(SizeOf_T2_tC4A76B819474D2BA458497F91AF356C820C52665);
	const Il2CppFullySharedGenericAny L_49 = L_24;
	Exception_t* V_0 = NULL;
	bool V_1 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* G_B8_0 = NULL;
	TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* G_B7_0 = NULL;
	int32_t G_B9_0 = 0;
	TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* G_B9_1 = NULL;
	TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* G_B18_0 = NULL;
	TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* G_B17_0 = NULL;
	int32_t G_B19_0 = 0;
	TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* G_B19_1 = NULL;
	{
		TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_0 = ___0_t;
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_0)->___startupDone = (bool)1;
		TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_1 = ___0_t;
		int32_t L_2 = ((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_1)->___specialStartupMode;
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_3 = ___0_t;
		bool L_4;
		L_4 = ((  bool (*) (TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
		if (L_4)
		{
			goto IL_0019;
		}
	}
	{
		return (bool)0;
	}

IL_0019:
	{
		TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_5 = ___0_t;
		bool L_6 = ((Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140*)L_5)->___hasManuallySetStartValue;
		if (L_6)
		{
			goto IL_00f8;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		bool L_7 = ((DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var))->___useSafeMode;
		if (!L_7)
		{
			goto IL_00af;
		}
	}
	try
	{
		{
			TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_8 = ___0_t;
			bool L_9 = ((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_8)->___isFrom;
			if (!L_9)
			{
				goto IL_005a_1;
			}
		}
		{
			TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_10 = ___0_t;
			TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_11 = ___0_t;
			bool L_12;
			L_12 = Tween_get_isRelative_mC31C34D21C3953F9AA7F25C0429BEBE45D2DBAE2_inline((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_11, NULL);
			if (!L_12)
			{
				G_B8_0 = ((TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB*)L_10);
				goto IL_004a_1;
			}
			G_B7_0 = ((TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB*)L_10);
		}
		{
			TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_13 = ___0_t;
			bool L_14 = ((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_13)->___isBlendable;
			G_B9_0 = ((((int32_t)L_14) == ((int32_t)0))? 1 : 0);
			G_B9_1 = ((TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB*)G_B7_0);
			goto IL_004b_1;
		}

IL_004a_1:
		{
			G_B9_0 = 0;
			G_B9_1 = ((TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB*)G_B8_0);
		}

IL_004b_1:
		{
			Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_15;
			L_15 = VirtualFuncInvoker1< Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140*, bool >::Invoke(8, (Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140*)G_B9_1, (bool)G_B9_0);
			TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_16 = ___0_t;
			Tween_set_isRelative_m881085052780C20122B970FA26766E551DA3B8EB_inline((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_16, (bool)0, NULL);
			goto IL_0077_1;
		}

IL_005a_1:
		{
			TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_17 = ___0_t;
			TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_18 = ___0_t;
			ABSTweenPlugin_3_tDC724E2B66EA33E0E50BFC9D5D6DA6B3C5FA16A1* L_19 = *(ABSTweenPlugin_3_tDC724E2B66EA33E0E50BFC9D5D6DA6B3C5FA16A1**)il2cpp_codegen_get_instance_field_data_pointer(L_18, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->rgctx_data, 0),6));
			TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_20 = ___0_t;
			TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_21 = ___0_t;
			DOGetter_1_t8DA6E4433ACD8058D6EAE625137110D1FB3DFC14* L_22 = *(DOGetter_1_t8DA6E4433ACD8058D6EAE625137110D1FB3DFC14**)il2cpp_codegen_get_instance_field_data_pointer(L_21, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->rgctx_data, 0),4));
			InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)), il2cpp_rgctx_method(method->rgctx_data, 4), L_22, (Il2CppFullySharedGenericAny*)L_23);
			VirtualActionInvoker3Invoker< TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(7, L_19, L_20, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 5)) ? L_23: *(void**)L_23), (Il2CppFullySharedGenericAny*)L_24);
			il2cpp_codegen_write_instance_field_data(L_17, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->rgctx_data, 0),0), L_24, SizeOf_T2_tC4A76B819474D2BA458497F91AF356C820C52665);
		}

IL_0077_1:
		{
			goto IL_00f8;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0079;
		}
		throw e;
	}

CATCH_0079:
	{
		{
			Exception_t* L_25 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
			V_0 = L_25;
			bool L_26;
			L_26 = Debugger_ShouldLogSafeModeCapturedError_m5EE800D2A5FD98C95C119D9AF68035095A123C47(NULL);
			if (!L_26)
			{
				goto IL_009d;
			}
		}
		{
			Exception_t* L_27 = V_0;
			MethodBase_t* L_28;
			L_28 = Exception_get_TargetSite_m0CE79BBF864CCEA96B72ED52EC66753CFBE5ED6A(L_27, NULL);
			Exception_t* L_29 = V_0;
			String_t* L_30;
			L_30 = VirtualFuncInvoker0< String_t* >::Invoke(5, L_29);
			String_t* L_31;
			L_31 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAEEC35A7704ECFD616CD15F38FB2BD30AFF7D21B)), (RuntimeObject*)L_28, (RuntimeObject*)L_30, NULL);
			TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_32 = ___0_t;
			Debugger_LogSafeModeCapturedError_m0EE4B4F14B9243B4A9BD757853CAB77B5A888ED6((RuntimeObject*)L_31, (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_32, NULL);
		}

IL_009d:
		{
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var)));
			SafeModeReport_Add_mC993434DFE20DDF1E44389DACD34085F31E6ED20((&((DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var))))->___safeModeReport), (int32_t)3, NULL);
			V_1 = (bool)0;
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_0135;
		}
	}

IL_00af:
	{
		TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_33 = ___0_t;
		bool L_34 = ((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_33)->___isFrom;
		if (!L_34)
		{
			goto IL_00db;
		}
	}
	{
		TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_35 = ___0_t;
		TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_36 = ___0_t;
		bool L_37;
		L_37 = Tween_get_isRelative_mC31C34D21C3953F9AA7F25C0429BEBE45D2DBAE2_inline((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_36, NULL);
		if (!L_37)
		{
			G_B18_0 = ((TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB*)L_35);
			goto IL_00cb;
		}
		G_B17_0 = ((TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB*)L_35);
	}
	{
		TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_38 = ___0_t;
		bool L_39 = ((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_38)->___isBlendable;
		G_B19_0 = ((((int32_t)L_39) == ((int32_t)0))? 1 : 0);
		G_B19_1 = ((TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB*)G_B17_0);
		goto IL_00cc;
	}

IL_00cb:
	{
		G_B19_0 = 0;
		G_B19_1 = ((TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB*)G_B18_0);
	}

IL_00cc:
	{
		Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_40;
		L_40 = VirtualFuncInvoker1< Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140*, bool >::Invoke(8, (Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140*)G_B19_1, (bool)G_B19_0);
		TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_41 = ___0_t;
		Tween_set_isRelative_m881085052780C20122B970FA26766E551DA3B8EB_inline((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_41, (bool)0, NULL);
		goto IL_00f8;
	}

IL_00db:
	{
		TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_42 = ___0_t;
		TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_43 = ___0_t;
		ABSTweenPlugin_3_tDC724E2B66EA33E0E50BFC9D5D6DA6B3C5FA16A1* L_44 = *(ABSTweenPlugin_3_tDC724E2B66EA33E0E50BFC9D5D6DA6B3C5FA16A1**)il2cpp_codegen_get_instance_field_data_pointer(L_43, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->rgctx_data, 0),6));
		TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_45 = ___0_t;
		TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_46 = ___0_t;
		DOGetter_1_t8DA6E4433ACD8058D6EAE625137110D1FB3DFC14* L_47 = *(DOGetter_1_t8DA6E4433ACD8058D6EAE625137110D1FB3DFC14**)il2cpp_codegen_get_instance_field_data_pointer(L_46, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->rgctx_data, 0),4));
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)), il2cpp_rgctx_method(method->rgctx_data, 4), L_47, (Il2CppFullySharedGenericAny*)L_48);
		VirtualActionInvoker3Invoker< TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(7, L_44, L_45, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 5)) ? L_48: *(void**)L_48), (Il2CppFullySharedGenericAny*)L_49);
		il2cpp_codegen_write_instance_field_data(L_42, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->rgctx_data, 0),0), L_49, SizeOf_T2_tC4A76B819474D2BA458497F91AF356C820C52665);
	}

IL_00f8:
	{
		TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_50 = ___0_t;
		bool L_51;
		L_51 = Tween_get_isRelative_mC31C34D21C3953F9AA7F25C0429BEBE45D2DBAE2_inline((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_50, NULL);
		if (!L_51)
		{
			goto IL_010c;
		}
	}
	{
		TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_52 = ___0_t;
		ABSTweenPlugin_3_tDC724E2B66EA33E0E50BFC9D5D6DA6B3C5FA16A1* L_53 = *(ABSTweenPlugin_3_tDC724E2B66EA33E0E50BFC9D5D6DA6B3C5FA16A1**)il2cpp_codegen_get_instance_field_data_pointer(L_52, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->rgctx_data, 0),6));
		TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_54 = ___0_t;
		VirtualActionInvoker1< TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* >::Invoke(8, L_53, L_54);
	}

IL_010c:
	{
		TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_55 = ___0_t;
		ABSTweenPlugin_3_tDC724E2B66EA33E0E50BFC9D5D6DA6B3C5FA16A1* L_56 = *(ABSTweenPlugin_3_tDC724E2B66EA33E0E50BFC9D5D6DA6B3C5FA16A1**)il2cpp_codegen_get_instance_field_data_pointer(L_55, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->rgctx_data, 0),6));
		TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_57 = ___0_t;
		VirtualActionInvoker1< TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* >::Invoke(9, L_56, L_57);
		TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_58 = ___0_t;
		((  void (*) (TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 10)))(L_58, il2cpp_rgctx_method(method->rgctx_data, 10));
		TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_59 = ___0_t;
		float L_60 = ((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_59)->___duration;
		if ((!(((float)L_60) <= ((float)(0.0f)))))
		{
			goto IL_0133;
		}
	}
	{
		TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_61 = ___0_t;
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_61)->___easeType = (int32_t)((int32_t)36);
	}

IL_0133:
	{
		return (bool)1;
	}

IL_0135:
	{
		bool L_62 = V_1;
		return L_62;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Tweener_DoUpdateDelay_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_TisColorOptions_t9F2151E3A21F3FE2A41BEEF7D288D670C2685F39_mDBFD19DD460FD1320F57C02D5B5570A0731D03A4_gshared (TweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3* ___0_t, float ___1_elapsed, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		TweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3* L_0 = ___0_t;
		float L_1 = ((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_0)->___delay;
		V_0 = L_1;
		float L_2 = ___1_elapsed;
		float L_3 = V_0;
		if ((!(((float)L_2) > ((float)L_3))))
		{
			goto IL_001d;
		}
	}
	{
		TweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3* L_4 = ___0_t;
		float L_5 = V_0;
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_4)->___elapsedDelay = L_5;
		TweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3* L_6 = ___0_t;
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_6)->___delayComplete = (bool)1;
		float L_7 = ___1_elapsed;
		float L_8 = V_0;
		return ((float)il2cpp_codegen_subtract(L_7, L_8));
	}

IL_001d:
	{
		TweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3* L_9 = ___0_t;
		float L_10 = ___1_elapsed;
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_9)->___elapsedDelay = L_10;
		return (0.0f);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Tweener_DoUpdateDelay_TisColor2_t35316BB1AA7A5F82C686D69DA763B9E99A72EEAA_TisColor2_t35316BB1AA7A5F82C686D69DA763B9E99A72EEAA_TisColorOptions_t9F2151E3A21F3FE2A41BEEF7D288D670C2685F39_m89DEBD889E13F3BC53A41FF3EE49F076D55EFC57_gshared (TweenerCore_3_tEAA0D8AFDE65BA4B76FB61D33C4769C339E17949* ___0_t, float ___1_elapsed, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		TweenerCore_3_tEAA0D8AFDE65BA4B76FB61D33C4769C339E17949* L_0 = ___0_t;
		float L_1 = ((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_0)->___delay;
		V_0 = L_1;
		float L_2 = ___1_elapsed;
		float L_3 = V_0;
		if ((!(((float)L_2) > ((float)L_3))))
		{
			goto IL_001d;
		}
	}
	{
		TweenerCore_3_tEAA0D8AFDE65BA4B76FB61D33C4769C339E17949* L_4 = ___0_t;
		float L_5 = V_0;
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_4)->___elapsedDelay = L_5;
		TweenerCore_3_tEAA0D8AFDE65BA4B76FB61D33C4769C339E17949* L_6 = ___0_t;
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_6)->___delayComplete = (bool)1;
		float L_7 = ___1_elapsed;
		float L_8 = V_0;
		return ((float)il2cpp_codegen_subtract(L_7, L_8));
	}

IL_001d:
	{
		TweenerCore_3_tEAA0D8AFDE65BA4B76FB61D33C4769C339E17949* L_9 = ___0_t;
		float L_10 = ___1_elapsed;
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_9)->___elapsedDelay = L_10;
		return (0.0f);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Tweener_DoUpdateDelay_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisNoOptions_t2B4A2CA3C472B5AC37AACC090B1D0B27BCF4307E_mDD461E83F85BAFC86C59510C67FE044E276D6D25_gshared (TweenerCore_3_tD1EF4B796EFD7E02D28B6A0E0DD08737178F54E9* ___0_t, float ___1_elapsed, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		TweenerCore_3_tD1EF4B796EFD7E02D28B6A0E0DD08737178F54E9* L_0 = ___0_t;
		float L_1 = ((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_0)->___delay;
		V_0 = L_1;
		float L_2 = ___1_elapsed;
		float L_3 = V_0;
		if ((!(((float)L_2) > ((float)L_3))))
		{
			goto IL_001d;
		}
	}
	{
		TweenerCore_3_tD1EF4B796EFD7E02D28B6A0E0DD08737178F54E9* L_4 = ___0_t;
		float L_5 = V_0;
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_4)->___elapsedDelay = L_5;
		TweenerCore_3_tD1EF4B796EFD7E02D28B6A0E0DD08737178F54E9* L_6 = ___0_t;
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_6)->___delayComplete = (bool)1;
		float L_7 = ___1_elapsed;
		float L_8 = V_0;
		return ((float)il2cpp_codegen_subtract(L_7, L_8));
	}

IL_001d:
	{
		TweenerCore_3_tD1EF4B796EFD7E02D28B6A0E0DD08737178F54E9* L_9 = ___0_t;
		float L_10 = ___1_elapsed;
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_9)->___elapsedDelay = L_10;
		return (0.0f);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Tweener_DoUpdateDelay_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisNoOptions_t2B4A2CA3C472B5AC37AACC090B1D0B27BCF4307E_m7830E47930A93EFE0E9A691178382AAC3A16021C_gshared (TweenerCore_3_t9535EBAA281A1D58F2F4C103D11394072D85754C* ___0_t, float ___1_elapsed, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		TweenerCore_3_t9535EBAA281A1D58F2F4C103D11394072D85754C* L_0 = ___0_t;
		float L_1 = ((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_0)->___delay;
		V_0 = L_1;
		float L_2 = ___1_elapsed;
		float L_3 = V_0;
		if ((!(((float)L_2) > ((float)L_3))))
		{
			goto IL_001d;
		}
	}
	{
		TweenerCore_3_t9535EBAA281A1D58F2F4C103D11394072D85754C* L_4 = ___0_t;
		float L_5 = V_0;
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_4)->___elapsedDelay = L_5;
		TweenerCore_3_t9535EBAA281A1D58F2F4C103D11394072D85754C* L_6 = ___0_t;
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_6)->___delayComplete = (bool)1;
		float L_7 = ___1_elapsed;
		float L_8 = V_0;
		return ((float)il2cpp_codegen_subtract(L_7, L_8));
	}

IL_001d:
	{
		TweenerCore_3_t9535EBAA281A1D58F2F4C103D11394072D85754C* L_9 = ___0_t;
		float L_10 = ___1_elapsed;
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_9)->___elapsedDelay = L_10;
		return (0.0f);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Tweener_DoUpdateDelay_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisNoOptions_t2B4A2CA3C472B5AC37AACC090B1D0B27BCF4307E_m13AFE6F3D771F9E3F2334754A1017A68FB9586FD_gshared (TweenerCore_3_t5D0EC4E2435A9E48640918EEBB42A14E29F9E554* ___0_t, float ___1_elapsed, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		TweenerCore_3_t5D0EC4E2435A9E48640918EEBB42A14E29F9E554* L_0 = ___0_t;
		float L_1 = ((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_0)->___delay;
		V_0 = L_1;
		float L_2 = ___1_elapsed;
		float L_3 = V_0;
		if ((!(((float)L_2) > ((float)L_3))))
		{
			goto IL_001d;
		}
	}
	{
		TweenerCore_3_t5D0EC4E2435A9E48640918EEBB42A14E29F9E554* L_4 = ___0_t;
		float L_5 = V_0;
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_4)->___elapsedDelay = L_5;
		TweenerCore_3_t5D0EC4E2435A9E48640918EEBB42A14E29F9E554* L_6 = ___0_t;
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_6)->___delayComplete = (bool)1;
		float L_7 = ___1_elapsed;
		float L_8 = V_0;
		return ((float)il2cpp_codegen_subtract(L_7, L_8));
	}

IL_001d:
	{
		TweenerCore_3_t5D0EC4E2435A9E48640918EEBB42A14E29F9E554* L_9 = ___0_t;
		float L_10 = ___1_elapsed;
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_9)->___elapsedDelay = L_10;
		return (0.0f);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Tweener_DoUpdateDelay_TisRuntimeObject_TisRuntimeObject_TisNoOptions_t2B4A2CA3C472B5AC37AACC090B1D0B27BCF4307E_m1AC8217CC87F13F0A84CEA55C652D6FFBE094881_gshared (TweenerCore_3_t309A316DD98511F745EEA5D99CEC7179C868AB59* ___0_t, float ___1_elapsed, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		TweenerCore_3_t309A316DD98511F745EEA5D99CEC7179C868AB59* L_0 = ___0_t;
		float L_1 = ((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_0)->___delay;
		V_0 = L_1;
		float L_2 = ___1_elapsed;
		float L_3 = V_0;
		if ((!(((float)L_2) > ((float)L_3))))
		{
			goto IL_001d;
		}
	}
	{
		TweenerCore_3_t309A316DD98511F745EEA5D99CEC7179C868AB59* L_4 = ___0_t;
		float L_5 = V_0;
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_4)->___elapsedDelay = L_5;
		TweenerCore_3_t309A316DD98511F745EEA5D99CEC7179C868AB59* L_6 = ___0_t;
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_6)->___delayComplete = (bool)1;
		float L_7 = ___1_elapsed;
		float L_8 = V_0;
		return ((float)il2cpp_codegen_subtract(L_7, L_8));
	}

IL_001d:
	{
		TweenerCore_3_t309A316DD98511F745EEA5D99CEC7179C868AB59* L_9 = ___0_t;
		float L_10 = ___1_elapsed;
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_9)->___elapsedDelay = L_10;
		return (0.0f);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Tweener_DoUpdateDelay_TisRuntimeObject_TisRuntimeObject_TisStringOptions_tC70D70DB6854CE62E6BBC3AA066517835919E9FA_m774750752BCD3B76571EA92B219AF14C81A52C67_gshared (TweenerCore_3_tA6865573C9B15C90F5AF42AA9F04D8D11822B687* ___0_t, float ___1_elapsed, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		TweenerCore_3_tA6865573C9B15C90F5AF42AA9F04D8D11822B687* L_0 = ___0_t;
		float L_1 = ((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_0)->___delay;
		V_0 = L_1;
		float L_2 = ___1_elapsed;
		float L_3 = V_0;
		if ((!(((float)L_2) > ((float)L_3))))
		{
			goto IL_001d;
		}
	}
	{
		TweenerCore_3_tA6865573C9B15C90F5AF42AA9F04D8D11822B687* L_4 = ___0_t;
		float L_5 = V_0;
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_4)->___elapsedDelay = L_5;
		TweenerCore_3_tA6865573C9B15C90F5AF42AA9F04D8D11822B687* L_6 = ___0_t;
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_6)->___delayComplete = (bool)1;
		float L_7 = ___1_elapsed;
		float L_8 = V_0;
		return ((float)il2cpp_codegen_subtract(L_7, L_8));
	}

IL_001d:
	{
		TweenerCore_3_tA6865573C9B15C90F5AF42AA9F04D8D11822B687* L_9 = ___0_t;
		float L_10 = ___1_elapsed;
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_9)->___elapsedDelay = L_10;
		return (0.0f);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Tweener_DoUpdateDelay_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_TisQuaternionOptions_t1B83700718F7417854E4B6FB0E1726E183F69718_m3CE0E4D16A3BBAD5DCA4E4F8D650AB55BCBB467F_gshared (TweenerCore_3_t392C54729BB024F5802F8E205C583653C4E886E3* ___0_t, float ___1_elapsed, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		TweenerCore_3_t392C54729BB024F5802F8E205C583653C4E886E3* L_0 = ___0_t;
		float L_1 = ((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_0)->___delay;
		V_0 = L_1;
		float L_2 = ___1_elapsed;
		float L_3 = V_0;
		if ((!(((float)L_2) > ((float)L_3))))
		{
			goto IL_001d;
		}
	}
	{
		TweenerCore_3_t392C54729BB024F5802F8E205C583653C4E886E3* L_4 = ___0_t;
		float L_5 = V_0;
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_4)->___elapsedDelay = L_5;
		TweenerCore_3_t392C54729BB024F5802F8E205C583653C4E886E3* L_6 = ___0_t;
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_6)->___delayComplete = (bool)1;
		float L_7 = ___1_elapsed;
		float L_8 = V_0;
		return ((float)il2cpp_codegen_subtract(L_7, L_8));
	}

IL_001d:
	{
		TweenerCore_3_t392C54729BB024F5802F8E205C583653C4E886E3* L_9 = ___0_t;
		float L_10 = ___1_elapsed;
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_9)->___elapsedDelay = L_10;
		return (0.0f);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Tweener_DoUpdateDelay_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_TisRectOptions_tCE72F3B850FF80059E448A0ED2AA3FF16EE5EDAC_m35F185B06407123F7F3A58E5638302CEDC1C2E3F_gshared (TweenerCore_3_tE0A3D42393A2015849880D806418B2EDD0187D5D* ___0_t, float ___1_elapsed, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		TweenerCore_3_tE0A3D42393A2015849880D806418B2EDD0187D5D* L_0 = ___0_t;
		float L_1 = ((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_0)->___delay;
		V_0 = L_1;
		float L_2 = ___1_elapsed;
		float L_3 = V_0;
		if ((!(((float)L_2) > ((float)L_3))))
		{
			goto IL_001d;
		}
	}
	{
		TweenerCore_3_tE0A3D42393A2015849880D806418B2EDD0187D5D* L_4 = ___0_t;
		float L_5 = V_0;
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_4)->___elapsedDelay = L_5;
		TweenerCore_3_tE0A3D42393A2015849880D806418B2EDD0187D5D* L_6 = ___0_t;
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_6)->___delayComplete = (bool)1;
		float L_7 = ___1_elapsed;
		float L_8 = V_0;
		return ((float)il2cpp_codegen_subtract(L_7, L_8));
	}

IL_001d:
	{
		TweenerCore_3_tE0A3D42393A2015849880D806418B2EDD0187D5D* L_9 = ___0_t;
		float L_10 = ___1_elapsed;
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_9)->___elapsedDelay = L_10;
		return (0.0f);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Tweener_DoUpdateDelay_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisFloatOptions_t8A9B05DB7CF6CC90A27F300C2977D91A48B3FEF5_m98EF777BCFD084B2A47E1C8334FA76E1FDEF5DAC_gshared (TweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1* ___0_t, float ___1_elapsed, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		TweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1* L_0 = ___0_t;
		float L_1 = ((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_0)->___delay;
		V_0 = L_1;
		float L_2 = ___1_elapsed;
		float L_3 = V_0;
		if ((!(((float)L_2) > ((float)L_3))))
		{
			goto IL_001d;
		}
	}
	{
		TweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1* L_4 = ___0_t;
		float L_5 = V_0;
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_4)->___elapsedDelay = L_5;
		TweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1* L_6 = ___0_t;
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_6)->___delayComplete = (bool)1;
		float L_7 = ___1_elapsed;
		float L_8 = V_0;
		return ((float)il2cpp_codegen_subtract(L_7, L_8));
	}

IL_001d:
	{
		TweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1* L_9 = ___0_t;
		float L_10 = ___1_elapsed;
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_9)->___elapsedDelay = L_10;
		return (0.0f);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Tweener_DoUpdateDelay_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisUintOptions_t06BB035A1F0801FF6D4721F6F98F36DDD93E53A3_mF42E8D19ADC515B69013CE8DB4021A865B7A40EF_gshared (TweenerCore_3_t9016EC0FCFBD1032D87C4B0BB3E45F37DEF005D2* ___0_t, float ___1_elapsed, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		TweenerCore_3_t9016EC0FCFBD1032D87C4B0BB3E45F37DEF005D2* L_0 = ___0_t;
		float L_1 = ((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_0)->___delay;
		V_0 = L_1;
		float L_2 = ___1_elapsed;
		float L_3 = V_0;
		if ((!(((float)L_2) > ((float)L_3))))
		{
			goto IL_001d;
		}
	}
	{
		TweenerCore_3_t9016EC0FCFBD1032D87C4B0BB3E45F37DEF005D2* L_4 = ___0_t;
		float L_5 = V_0;
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_4)->___elapsedDelay = L_5;
		TweenerCore_3_t9016EC0FCFBD1032D87C4B0BB3E45F37DEF005D2* L_6 = ___0_t;
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_6)->___delayComplete = (bool)1;
		float L_7 = ___1_elapsed;
		float L_8 = V_0;
		return ((float)il2cpp_codegen_subtract(L_7, L_8));
	}

IL_001d:
	{
		TweenerCore_3_t9016EC0FCFBD1032D87C4B0BB3E45F37DEF005D2* L_9 = ___0_t;
		float L_10 = ___1_elapsed;
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_9)->___elapsedDelay = L_10;
		return (0.0f);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Tweener_DoUpdateDelay_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisNoOptions_t2B4A2CA3C472B5AC37AACC090B1D0B27BCF4307E_m545AE76425BACF521D0B8B08E68D6EB1B9B04089_gshared (TweenerCore_3_t2043A56E4E5C035C8690037B5961DF809EF6002B* ___0_t, float ___1_elapsed, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		TweenerCore_3_t2043A56E4E5C035C8690037B5961DF809EF6002B* L_0 = ___0_t;
		float L_1 = ((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_0)->___delay;
		V_0 = L_1;
		float L_2 = ___1_elapsed;
		float L_3 = V_0;
		if ((!(((float)L_2) > ((float)L_3))))
		{
			goto IL_001d;
		}
	}
	{
		TweenerCore_3_t2043A56E4E5C035C8690037B5961DF809EF6002B* L_4 = ___0_t;
		float L_5 = V_0;
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_4)->___elapsedDelay = L_5;
		TweenerCore_3_t2043A56E4E5C035C8690037B5961DF809EF6002B* L_6 = ___0_t;
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_6)->___delayComplete = (bool)1;
		float L_7 = ___1_elapsed;
		float L_8 = V_0;
		return ((float)il2cpp_codegen_subtract(L_7, L_8));
	}

IL_001d:
	{
		TweenerCore_3_t2043A56E4E5C035C8690037B5961DF809EF6002B* L_9 = ___0_t;
		float L_10 = ___1_elapsed;
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_9)->___elapsedDelay = L_10;
		return (0.0f);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Tweener_DoUpdateDelay_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_TisVectorOptions_t2814CC842518C92C9DFC5DE6F7A73824758D3EF9_m10C8547C596E2D11C172F5C6D36E275B2E297678_gshared (TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271* ___0_t, float ___1_elapsed, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271* L_0 = ___0_t;
		float L_1 = ((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_0)->___delay;
		V_0 = L_1;
		float L_2 = ___1_elapsed;
		float L_3 = V_0;
		if ((!(((float)L_2) > ((float)L_3))))
		{
			goto IL_001d;
		}
	}
	{
		TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271* L_4 = ___0_t;
		float L_5 = V_0;
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_4)->___elapsedDelay = L_5;
		TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271* L_6 = ___0_t;
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_6)->___delayComplete = (bool)1;
		float L_7 = ___1_elapsed;
		float L_8 = V_0;
		return ((float)il2cpp_codegen_subtract(L_7, L_8));
	}

IL_001d:
	{
		TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271* L_9 = ___0_t;
		float L_10 = ___1_elapsed;
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_9)->___elapsedDelay = L_10;
		return (0.0f);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Tweener_DoUpdateDelay_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_TisRuntimeObject_TisPathOptions_t76F1CBAC082454349D530B799121EB15BFA4CB3A_mDB1E2A8153F693CA06F2A574F9917537B2696A6F_gshared (TweenerCore_3_t588FE764FFE6D341E358B05F0CB12A449ABF8B9C* ___0_t, float ___1_elapsed, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		TweenerCore_3_t588FE764FFE6D341E358B05F0CB12A449ABF8B9C* L_0 = ___0_t;
		float L_1 = ((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_0)->___delay;
		V_0 = L_1;
		float L_2 = ___1_elapsed;
		float L_3 = V_0;
		if ((!(((float)L_2) > ((float)L_3))))
		{
			goto IL_001d;
		}
	}
	{
		TweenerCore_3_t588FE764FFE6D341E358B05F0CB12A449ABF8B9C* L_4 = ___0_t;
		float L_5 = V_0;
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_4)->___elapsedDelay = L_5;
		TweenerCore_3_t588FE764FFE6D341E358B05F0CB12A449ABF8B9C* L_6 = ___0_t;
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_6)->___delayComplete = (bool)1;
		float L_7 = ___1_elapsed;
		float L_8 = V_0;
		return ((float)il2cpp_codegen_subtract(L_7, L_8));
	}

IL_001d:
	{
		TweenerCore_3_t588FE764FFE6D341E358B05F0CB12A449ABF8B9C* L_9 = ___0_t;
		float L_10 = ___1_elapsed;
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_9)->___elapsedDelay = L_10;
		return (0.0f);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Tweener_DoUpdateDelay_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_TisRuntimeObject_TisVector3ArrayOptions_t0F50A7A54A860E4604486511E285C952557C6644_mDD2F6E3A720D11001D7CE13545D538E46A7DD339_gshared (TweenerCore_3_t76519FA34EF184090B81F1F9F8F10E7EC238AB9C* ___0_t, float ___1_elapsed, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		TweenerCore_3_t76519FA34EF184090B81F1F9F8F10E7EC238AB9C* L_0 = ___0_t;
		float L_1 = ((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_0)->___delay;
		V_0 = L_1;
		float L_2 = ___1_elapsed;
		float L_3 = V_0;
		if ((!(((float)L_2) > ((float)L_3))))
		{
			goto IL_001d;
		}
	}
	{
		TweenerCore_3_t76519FA34EF184090B81F1F9F8F10E7EC238AB9C* L_4 = ___0_t;
		float L_5 = V_0;
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_4)->___elapsedDelay = L_5;
		TweenerCore_3_t76519FA34EF184090B81F1F9F8F10E7EC238AB9C* L_6 = ___0_t;
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_6)->___delayComplete = (bool)1;
		float L_7 = ___1_elapsed;
		float L_8 = V_0;
		return ((float)il2cpp_codegen_subtract(L_7, L_8));
	}

IL_001d:
	{
		TweenerCore_3_t76519FA34EF184090B81F1F9F8F10E7EC238AB9C* L_9 = ___0_t;
		float L_10 = ___1_elapsed;
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_9)->___elapsedDelay = L_10;
		return (0.0f);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Tweener_DoUpdateDelay_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_TisVectorOptions_t2814CC842518C92C9DFC5DE6F7A73824758D3EF9_m9302B705FBE5CCD3EF629EC55C428D741784D5B7_gshared (TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* ___0_t, float ___1_elapsed, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_0 = ___0_t;
		float L_1 = ((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_0)->___delay;
		V_0 = L_1;
		float L_2 = ___1_elapsed;
		float L_3 = V_0;
		if ((!(((float)L_2) > ((float)L_3))))
		{
			goto IL_001d;
		}
	}
	{
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_4 = ___0_t;
		float L_5 = V_0;
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_4)->___elapsedDelay = L_5;
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_6 = ___0_t;
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_6)->___delayComplete = (bool)1;
		float L_7 = ___1_elapsed;
		float L_8 = V_0;
		return ((float)il2cpp_codegen_subtract(L_7, L_8));
	}

IL_001d:
	{
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_9 = ___0_t;
		float L_10 = ___1_elapsed;
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_9)->___elapsedDelay = L_10;
		return (0.0f);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Tweener_DoUpdateDelay_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_TisVectorOptions_t2814CC842518C92C9DFC5DE6F7A73824758D3EF9_mE2158C357A75C7F3C155F924EBFD0B38BA1C54F8_gshared (TweenerCore_3_t963D77C15EC065D01436953D600312198028FDA3* ___0_t, float ___1_elapsed, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		TweenerCore_3_t963D77C15EC065D01436953D600312198028FDA3* L_0 = ___0_t;
		float L_1 = ((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_0)->___delay;
		V_0 = L_1;
		float L_2 = ___1_elapsed;
		float L_3 = V_0;
		if ((!(((float)L_2) > ((float)L_3))))
		{
			goto IL_001d;
		}
	}
	{
		TweenerCore_3_t963D77C15EC065D01436953D600312198028FDA3* L_4 = ___0_t;
		float L_5 = V_0;
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_4)->___elapsedDelay = L_5;
		TweenerCore_3_t963D77C15EC065D01436953D600312198028FDA3* L_6 = ___0_t;
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_6)->___delayComplete = (bool)1;
		float L_7 = ___1_elapsed;
		float L_8 = V_0;
		return ((float)il2cpp_codegen_subtract(L_7, L_8));
	}

IL_001d:
	{
		TweenerCore_3_t963D77C15EC065D01436953D600312198028FDA3* L_9 = ___0_t;
		float L_10 = ___1_elapsed;
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_9)->___elapsedDelay = L_10;
		return (0.0f);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Tweener_DoUpdateDelay_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericStruct_m2DD6E91B1BD32C838E83D9A00E23091E2BC6C595_gshared (TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* ___0_t, float ___1_elapsed, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_0 = ___0_t;
		float L_1 = ((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_0)->___delay;
		V_0 = L_1;
		float L_2 = ___1_elapsed;
		float L_3 = V_0;
		if ((!(((float)L_2) > ((float)L_3))))
		{
			goto IL_001d;
		}
	}
	{
		TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_4 = ___0_t;
		float L_5 = V_0;
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_4)->___elapsedDelay = L_5;
		TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_6 = ___0_t;
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_6)->___delayComplete = (bool)1;
		float L_7 = ___1_elapsed;
		float L_8 = V_0;
		return ((float)il2cpp_codegen_subtract(L_7, L_8));
	}

IL_001d:
	{
		TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_9 = ___0_t;
		float L_10 = ___1_elapsed;
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_9)->___elapsedDelay = L_10;
		return (0.0f);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tweener_Setup_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_TisColorOptions_t9F2151E3A21F3FE2A41BEEF7D288D670C2685F39_mABA329953BDE7C842FFA5FE2E8D153363F1C235B_gshared (TweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3* ___0_t, DOGetter_1_t4DFFF7454A1BCD259676FED36CCF2114E34B5B95* ___1_getter, DOSetter_1_t5E2B8A5C7040616545D7D029D20C4BF5F3E6DA89* ___2_setter, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___3_endValue, float ___4_duration, ABSTweenPlugin_3_tC26278B0CA053BAF4547345679D3E8D1F748AC12* ___5_plugin, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral766954CA6C416DC5101A89F56696617F86FFF3AE);
		il2cpp_rgctx_method_init(method);
	}
	TweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3* G_B8_0 = NULL;
	TweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3* G_B7_0 = NULL;
	int32_t G_B9_0 = 0;
	TweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3* G_B9_1 = NULL;
	{
		ABSTweenPlugin_3_tC26278B0CA053BAF4547345679D3E8D1F748AC12* L_0 = ___5_plugin;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		TweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3* L_1 = ___0_t;
		ABSTweenPlugin_3_tC26278B0CA053BAF4547345679D3E8D1F748AC12* L_2 = ___5_plugin;
		L_1->___tweenPlugin = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___tweenPlugin), (void*)L_2);
		goto IL_0036;
	}

IL_000e:
	{
		TweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3* L_3 = ___0_t;
		ABSTweenPlugin_3_tC26278B0CA053BAF4547345679D3E8D1F748AC12* L_4 = L_3->___tweenPlugin;
		if (L_4)
		{
			goto IL_0021;
		}
	}
	{
		TweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3* L_5 = ___0_t;
		ABSTweenPlugin_3_tC26278B0CA053BAF4547345679D3E8D1F748AC12* L_6;
		L_6 = PluginsManager_GetDefaultPlugin_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_TisColorOptions_t9F2151E3A21F3FE2A41BEEF7D288D670C2685F39_m4630F82AABA4153B465D16065F705B393173A916(il2cpp_rgctx_method(method->rgctx_data, 2));
		L_5->___tweenPlugin = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->___tweenPlugin), (void*)L_6);
	}

IL_0021:
	{
		TweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3* L_7 = ___0_t;
		ABSTweenPlugin_3_tC26278B0CA053BAF4547345679D3E8D1F748AC12* L_8 = L_7->___tweenPlugin;
		if (L_8)
		{
			goto IL_0036;
		}
	}
	{
		Debugger_LogError_mBAD7F720F13F12B84A27F564F83F00B66EEE6B9E((RuntimeObject*)_stringLiteral766954CA6C416DC5101A89F56696617F86FFF3AE, (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)NULL, NULL);
		return (bool)0;
	}

IL_0036:
	{
		TweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3* L_9 = ___0_t;
		DOGetter_1_t4DFFF7454A1BCD259676FED36CCF2114E34B5B95* L_10 = ___1_getter;
		L_9->___getter = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&L_9->___getter), (void*)L_10);
		TweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3* L_11 = ___0_t;
		DOSetter_1_t5E2B8A5C7040616545D7D029D20C4BF5F3E6DA89* L_12 = ___2_setter;
		L_11->___setter = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&L_11->___setter), (void*)L_12);
		TweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3* L_13 = ___0_t;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_14 = ___3_endValue;
		L_13->___endValue = L_14;
		TweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3* L_15 = ___0_t;
		float L_16 = ___4_duration;
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_15)->___duration = L_16;
		TweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3* L_17 = ___0_t;
		il2cpp_codegen_runtime_class_init_inline(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		bool L_18 = ((DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var))->___defaultAutoKill;
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_17)->___autoKill = L_18;
		TweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3* L_19 = ___0_t;
		bool L_20 = ((DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var))->___defaultRecyclable;
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_19)->___isRecyclable = L_20;
		TweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3* L_21 = ___0_t;
		int32_t L_22 = ((DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var))->___defaultEaseType;
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_21)->___easeType = L_22;
		TweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3* L_23 = ___0_t;
		float L_24 = ((DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var))->___defaultEaseOvershootOrAmplitude;
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_23)->___easeOvershootOrAmplitude = L_24;
		TweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3* L_25 = ___0_t;
		float L_26 = ((DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var))->___defaultEasePeriod;
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_25)->___easePeriod = L_26;
		TweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3* L_27 = ___0_t;
		int32_t L_28 = ((DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var))->___defaultLoopType;
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_27)->___loopType = L_28;
		TweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3* L_29 = ___0_t;
		int32_t L_30 = ((DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var))->___defaultAutoPlay;
		if ((((int32_t)L_30) == ((int32_t)3)))
		{
			G_B8_0 = L_29;
			goto IL_00a8;
		}
		G_B7_0 = L_29;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		int32_t L_31 = ((DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var))->___defaultAutoPlay;
		G_B9_0 = ((((int32_t)L_31) == ((int32_t)2))? 1 : 0);
		G_B9_1 = G_B7_0;
		goto IL_00a9;
	}

IL_00a8:
	{
		G_B9_0 = 1;
		G_B9_1 = G_B8_0;
	}

IL_00a9:
	{
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)G_B9_1)->___isPlaying = (bool)G_B9_0;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tweener_Setup_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_TisQuaternionOptions_t1B83700718F7417854E4B6FB0E1726E183F69718_mB0FDDC83B8068677DC8700C43C3E56546D308E23_gshared (TweenerCore_3_t392C54729BB024F5802F8E205C583653C4E886E3* ___0_t, DOGetter_1_tB89DD12456B8E79576BB70E1CA6DF899686410D3* ___1_getter, DOSetter_1_t9EFF8DD70A15F455A6FE698A22BD0FE9683AC28E* ___2_setter, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___3_endValue, float ___4_duration, ABSTweenPlugin_3_t3823C0F935A3168B9E48DC90ABD9A0CED3D7BB82* ___5_plugin, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral766954CA6C416DC5101A89F56696617F86FFF3AE);
		il2cpp_rgctx_method_init(method);
	}
	TweenerCore_3_t392C54729BB024F5802F8E205C583653C4E886E3* G_B8_0 = NULL;
	TweenerCore_3_t392C54729BB024F5802F8E205C583653C4E886E3* G_B7_0 = NULL;
	int32_t G_B9_0 = 0;
	TweenerCore_3_t392C54729BB024F5802F8E205C583653C4E886E3* G_B9_1 = NULL;
	{
		ABSTweenPlugin_3_t3823C0F935A3168B9E48DC90ABD9A0CED3D7BB82* L_0 = ___5_plugin;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		TweenerCore_3_t392C54729BB024F5802F8E205C583653C4E886E3* L_1 = ___0_t;
		ABSTweenPlugin_3_t3823C0F935A3168B9E48DC90ABD9A0CED3D7BB82* L_2 = ___5_plugin;
		L_1->___tweenPlugin = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___tweenPlugin), (void*)L_2);
		goto IL_0036;
	}

IL_000e:
	{
		TweenerCore_3_t392C54729BB024F5802F8E205C583653C4E886E3* L_3 = ___0_t;
		ABSTweenPlugin_3_t3823C0F935A3168B9E48DC90ABD9A0CED3D7BB82* L_4 = L_3->___tweenPlugin;
		if (L_4)
		{
			goto IL_0021;
		}
	}
	{
		TweenerCore_3_t392C54729BB024F5802F8E205C583653C4E886E3* L_5 = ___0_t;
		ABSTweenPlugin_3_t3823C0F935A3168B9E48DC90ABD9A0CED3D7BB82* L_6;
		L_6 = PluginsManager_GetDefaultPlugin_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_TisQuaternionOptions_t1B83700718F7417854E4B6FB0E1726E183F69718_m9EE869EEC1DF6CD93ED5807AB2F6CB6F4A98EBBB(il2cpp_rgctx_method(method->rgctx_data, 2));
		L_5->___tweenPlugin = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->___tweenPlugin), (void*)L_6);
	}

IL_0021:
	{
		TweenerCore_3_t392C54729BB024F5802F8E205C583653C4E886E3* L_7 = ___0_t;
		ABSTweenPlugin_3_t3823C0F935A3168B9E48DC90ABD9A0CED3D7BB82* L_8 = L_7->___tweenPlugin;
		if (L_8)
		{
			goto IL_0036;
		}
	}
	{
		Debugger_LogError_mBAD7F720F13F12B84A27F564F83F00B66EEE6B9E((RuntimeObject*)_stringLiteral766954CA6C416DC5101A89F56696617F86FFF3AE, (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)NULL, NULL);
		return (bool)0;
	}

IL_0036:
	{
		TweenerCore_3_t392C54729BB024F5802F8E205C583653C4E886E3* L_9 = ___0_t;
		DOGetter_1_tB89DD12456B8E79576BB70E1CA6DF899686410D3* L_10 = ___1_getter;
		L_9->___getter = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&L_9->___getter), (void*)L_10);
		TweenerCore_3_t392C54729BB024F5802F8E205C583653C4E886E3* L_11 = ___0_t;
		DOSetter_1_t9EFF8DD70A15F455A6FE698A22BD0FE9683AC28E* L_12 = ___2_setter;
		L_11->___setter = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&L_11->___setter), (void*)L_12);
		TweenerCore_3_t392C54729BB024F5802F8E205C583653C4E886E3* L_13 = ___0_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = ___3_endValue;
		L_13->___endValue = L_14;
		TweenerCore_3_t392C54729BB024F5802F8E205C583653C4E886E3* L_15 = ___0_t;
		float L_16 = ___4_duration;
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_15)->___duration = L_16;
		TweenerCore_3_t392C54729BB024F5802F8E205C583653C4E886E3* L_17 = ___0_t;
		il2cpp_codegen_runtime_class_init_inline(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		bool L_18 = ((DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var))->___defaultAutoKill;
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_17)->___autoKill = L_18;
		TweenerCore_3_t392C54729BB024F5802F8E205C583653C4E886E3* L_19 = ___0_t;
		bool L_20 = ((DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var))->___defaultRecyclable;
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_19)->___isRecyclable = L_20;
		TweenerCore_3_t392C54729BB024F5802F8E205C583653C4E886E3* L_21 = ___0_t;
		int32_t L_22 = ((DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var))->___defaultEaseType;
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_21)->___easeType = L_22;
		TweenerCore_3_t392C54729BB024F5802F8E205C583653C4E886E3* L_23 = ___0_t;
		float L_24 = ((DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var))->___defaultEaseOvershootOrAmplitude;
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_23)->___easeOvershootOrAmplitude = L_24;
		TweenerCore_3_t392C54729BB024F5802F8E205C583653C4E886E3* L_25 = ___0_t;
		float L_26 = ((DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var))->___defaultEasePeriod;
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_25)->___easePeriod = L_26;
		TweenerCore_3_t392C54729BB024F5802F8E205C583653C4E886E3* L_27 = ___0_t;
		int32_t L_28 = ((DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var))->___defaultLoopType;
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_27)->___loopType = L_28;
		TweenerCore_3_t392C54729BB024F5802F8E205C583653C4E886E3* L_29 = ___0_t;
		int32_t L_30 = ((DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var))->___defaultAutoPlay;
		if ((((int32_t)L_30) == ((int32_t)3)))
		{
			G_B8_0 = L_29;
			goto IL_00a8;
		}
		G_B7_0 = L_29;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		int32_t L_31 = ((DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var))->___defaultAutoPlay;
		G_B9_0 = ((((int32_t)L_31) == ((int32_t)2))? 1 : 0);
		G_B9_1 = G_B7_0;
		goto IL_00a9;
	}

IL_00a8:
	{
		G_B9_0 = 1;
		G_B9_1 = G_B8_0;
	}

IL_00a9:
	{
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)G_B9_1)->___isPlaying = (bool)G_B9_0;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tweener_Setup_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_TisVectorOptions_t2814CC842518C92C9DFC5DE6F7A73824758D3EF9_m6F8AA78EB614BC42F6E55EB6D9EE9189AB7E1C61_gshared (TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271* ___0_t, DOGetter_1_t13276681BE97FCE6AB699EF1F894EA98C825FE66* ___1_getter, DOSetter_1_t0DAD29F0B667B9ED214C9F6B9C4D7093FE7C0D9C* ___2_setter, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___3_endValue, float ___4_duration, ABSTweenPlugin_3_t4082710A2BB933E2D055E454B3EFAC4C0A319444* ___5_plugin, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral766954CA6C416DC5101A89F56696617F86FFF3AE);
		il2cpp_rgctx_method_init(method);
	}
	TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271* G_B8_0 = NULL;
	TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271* G_B7_0 = NULL;
	int32_t G_B9_0 = 0;
	TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271* G_B9_1 = NULL;
	{
		ABSTweenPlugin_3_t4082710A2BB933E2D055E454B3EFAC4C0A319444* L_0 = ___5_plugin;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271* L_1 = ___0_t;
		ABSTweenPlugin_3_t4082710A2BB933E2D055E454B3EFAC4C0A319444* L_2 = ___5_plugin;
		L_1->___tweenPlugin = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___tweenPlugin), (void*)L_2);
		goto IL_0036;
	}

IL_000e:
	{
		TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271* L_3 = ___0_t;
		ABSTweenPlugin_3_t4082710A2BB933E2D055E454B3EFAC4C0A319444* L_4 = L_3->___tweenPlugin;
		if (L_4)
		{
			goto IL_0021;
		}
	}
	{
		TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271* L_5 = ___0_t;
		ABSTweenPlugin_3_t4082710A2BB933E2D055E454B3EFAC4C0A319444* L_6;
		L_6 = PluginsManager_GetDefaultPlugin_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_TisVectorOptions_t2814CC842518C92C9DFC5DE6F7A73824758D3EF9_m8D47A3E8012365B59B264D57A46CB4737343CD5E(il2cpp_rgctx_method(method->rgctx_data, 2));
		L_5->___tweenPlugin = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->___tweenPlugin), (void*)L_6);
	}

IL_0021:
	{
		TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271* L_7 = ___0_t;
		ABSTweenPlugin_3_t4082710A2BB933E2D055E454B3EFAC4C0A319444* L_8 = L_7->___tweenPlugin;
		if (L_8)
		{
			goto IL_0036;
		}
	}
	{
		Debugger_LogError_mBAD7F720F13F12B84A27F564F83F00B66EEE6B9E((RuntimeObject*)_stringLiteral766954CA6C416DC5101A89F56696617F86FFF3AE, (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)NULL, NULL);
		return (bool)0;
	}

IL_0036:
	{
		TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271* L_9 = ___0_t;
		DOGetter_1_t13276681BE97FCE6AB699EF1F894EA98C825FE66* L_10 = ___1_getter;
		L_9->___getter = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&L_9->___getter), (void*)L_10);
		TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271* L_11 = ___0_t;
		DOSetter_1_t0DAD29F0B667B9ED214C9F6B9C4D7093FE7C0D9C* L_12 = ___2_setter;
		L_11->___setter = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&L_11->___setter), (void*)L_12);
		TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271* L_13 = ___0_t;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14 = ___3_endValue;
		L_13->___endValue = L_14;
		TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271* L_15 = ___0_t;
		float L_16 = ___4_duration;
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_15)->___duration = L_16;
		TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271* L_17 = ___0_t;
		il2cpp_codegen_runtime_class_init_inline(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		bool L_18 = ((DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var))->___defaultAutoKill;
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_17)->___autoKill = L_18;
		TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271* L_19 = ___0_t;
		bool L_20 = ((DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var))->___defaultRecyclable;
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_19)->___isRecyclable = L_20;
		TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271* L_21 = ___0_t;
		int32_t L_22 = ((DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var))->___defaultEaseType;
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_21)->___easeType = L_22;
		TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271* L_23 = ___0_t;
		float L_24 = ((DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var))->___defaultEaseOvershootOrAmplitude;
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_23)->___easeOvershootOrAmplitude = L_24;
		TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271* L_25 = ___0_t;
		float L_26 = ((DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var))->___defaultEasePeriod;
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_25)->___easePeriod = L_26;
		TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271* L_27 = ___0_t;
		int32_t L_28 = ((DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var))->___defaultLoopType;
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_27)->___loopType = L_28;
		TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271* L_29 = ___0_t;
		int32_t L_30 = ((DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var))->___defaultAutoPlay;
		if ((((int32_t)L_30) == ((int32_t)3)))
		{
			G_B8_0 = L_29;
			goto IL_00a8;
		}
		G_B7_0 = L_29;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		int32_t L_31 = ((DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var))->___defaultAutoPlay;
		G_B9_0 = ((((int32_t)L_31) == ((int32_t)2))? 1 : 0);
		G_B9_1 = G_B7_0;
		goto IL_00a9;
	}

IL_00a8:
	{
		G_B9_0 = 1;
		G_B9_1 = G_B8_0;
	}

IL_00a9:
	{
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)G_B9_1)->___isPlaying = (bool)G_B9_0;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tweener_Setup_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_TisRuntimeObject_TisPathOptions_t76F1CBAC082454349D530B799121EB15BFA4CB3A_mF9DB435CE4894E1759E5E3A27E7A89F02BE4EF34_gshared (TweenerCore_3_t588FE764FFE6D341E358B05F0CB12A449ABF8B9C* ___0_t, DOGetter_1_t709462C08281F3AA5DFEF36CAF91404B1004C338* ___1_getter, DOSetter_1_t02E8F9920F174322F1CF5AC8BCDEAABD14A03358* ___2_setter, RuntimeObject* ___3_endValue, float ___4_duration, ABSTweenPlugin_3_t6D32722320E631CCB96F0ADA615C9F5E568C4720* ___5_plugin, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral766954CA6C416DC5101A89F56696617F86FFF3AE);
		il2cpp_rgctx_method_init(method);
	}
	TweenerCore_3_t588FE764FFE6D341E358B05F0CB12A449ABF8B9C* G_B8_0 = NULL;
	TweenerCore_3_t588FE764FFE6D341E358B05F0CB12A449ABF8B9C* G_B7_0 = NULL;
	int32_t G_B9_0 = 0;
	TweenerCore_3_t588FE764FFE6D341E358B05F0CB12A449ABF8B9C* G_B9_1 = NULL;
	{
		ABSTweenPlugin_3_t6D32722320E631CCB96F0ADA615C9F5E568C4720* L_0 = ___5_plugin;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		TweenerCore_3_t588FE764FFE6D341E358B05F0CB12A449ABF8B9C* L_1 = ___0_t;
		ABSTweenPlugin_3_t6D32722320E631CCB96F0ADA615C9F5E568C4720* L_2 = ___5_plugin;
		L_1->___tweenPlugin = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___tweenPlugin), (void*)L_2);
		goto IL_0036;
	}

IL_000e:
	{
		TweenerCore_3_t588FE764FFE6D341E358B05F0CB12A449ABF8B9C* L_3 = ___0_t;
		ABSTweenPlugin_3_t6D32722320E631CCB96F0ADA615C9F5E568C4720* L_4 = L_3->___tweenPlugin;
		if (L_4)
		{
			goto IL_0021;
		}
	}
	{
		TweenerCore_3_t588FE764FFE6D341E358B05F0CB12A449ABF8B9C* L_5 = ___0_t;
		ABSTweenPlugin_3_t6D32722320E631CCB96F0ADA615C9F5E568C4720* L_6;
		L_6 = PluginsManager_GetDefaultPlugin_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_TisRuntimeObject_TisPathOptions_t76F1CBAC082454349D530B799121EB15BFA4CB3A_mFE0DF13E4834B27D61AD1561390BD333345A230E(il2cpp_rgctx_method(method->rgctx_data, 2));
		L_5->___tweenPlugin = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->___tweenPlugin), (void*)L_6);
	}

IL_0021:
	{
		TweenerCore_3_t588FE764FFE6D341E358B05F0CB12A449ABF8B9C* L_7 = ___0_t;
		ABSTweenPlugin_3_t6D32722320E631CCB96F0ADA615C9F5E568C4720* L_8 = L_7->___tweenPlugin;
		if (L_8)
		{
			goto IL_0036;
		}
	}
	{
		Debugger_LogError_mBAD7F720F13F12B84A27F564F83F00B66EEE6B9E((RuntimeObject*)_stringLiteral766954CA6C416DC5101A89F56696617F86FFF3AE, (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)NULL, NULL);
		return (bool)0;
	}

IL_0036:
	{
		TweenerCore_3_t588FE764FFE6D341E358B05F0CB12A449ABF8B9C* L_9 = ___0_t;
		DOGetter_1_t709462C08281F3AA5DFEF36CAF91404B1004C338* L_10 = ___1_getter;
		L_9->___getter = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&L_9->___getter), (void*)L_10);
		TweenerCore_3_t588FE764FFE6D341E358B05F0CB12A449ABF8B9C* L_11 = ___0_t;
		DOSetter_1_t02E8F9920F174322F1CF5AC8BCDEAABD14A03358* L_12 = ___2_setter;
		L_11->___setter = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&L_11->___setter), (void*)L_12);
		TweenerCore_3_t588FE764FFE6D341E358B05F0CB12A449ABF8B9C* L_13 = ___0_t;
		RuntimeObject* L_14 = ___3_endValue;
		L_13->___endValue = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&L_13->___endValue), (void*)L_14);
		TweenerCore_3_t588FE764FFE6D341E358B05F0CB12A449ABF8B9C* L_15 = ___0_t;
		float L_16 = ___4_duration;
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_15)->___duration = L_16;
		TweenerCore_3_t588FE764FFE6D341E358B05F0CB12A449ABF8B9C* L_17 = ___0_t;
		il2cpp_codegen_runtime_class_init_inline(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		bool L_18 = ((DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var))->___defaultAutoKill;
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_17)->___autoKill = L_18;
		TweenerCore_3_t588FE764FFE6D341E358B05F0CB12A449ABF8B9C* L_19 = ___0_t;
		bool L_20 = ((DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var))->___defaultRecyclable;
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_19)->___isRecyclable = L_20;
		TweenerCore_3_t588FE764FFE6D341E358B05F0CB12A449ABF8B9C* L_21 = ___0_t;
		int32_t L_22 = ((DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var))->___defaultEaseType;
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_21)->___easeType = L_22;
		TweenerCore_3_t588FE764FFE6D341E358B05F0CB12A449ABF8B9C* L_23 = ___0_t;
		float L_24 = ((DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var))->___defaultEaseOvershootOrAmplitude;
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_23)->___easeOvershootOrAmplitude = L_24;
		TweenerCore_3_t588FE764FFE6D341E358B05F0CB12A449ABF8B9C* L_25 = ___0_t;
		float L_26 = ((DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var))->___defaultEasePeriod;
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_25)->___easePeriod = L_26;
		TweenerCore_3_t588FE764FFE6D341E358B05F0CB12A449ABF8B9C* L_27 = ___0_t;
		int32_t L_28 = ((DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var))->___defaultLoopType;
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_27)->___loopType = L_28;
		TweenerCore_3_t588FE764FFE6D341E358B05F0CB12A449ABF8B9C* L_29 = ___0_t;
		int32_t L_30 = ((DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var))->___defaultAutoPlay;
		if ((((int32_t)L_30) == ((int32_t)3)))
		{
			G_B8_0 = L_29;
			goto IL_00a8;
		}
		G_B7_0 = L_29;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		int32_t L_31 = ((DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var))->___defaultAutoPlay;
		G_B9_0 = ((((int32_t)L_31) == ((int32_t)2))? 1 : 0);
		G_B9_1 = G_B7_0;
		goto IL_00a9;
	}

IL_00a8:
	{
		G_B9_0 = 1;
		G_B9_1 = G_B8_0;
	}

IL_00a9:
	{
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)G_B9_1)->___isPlaying = (bool)G_B9_0;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tweener_Setup_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_TisVectorOptions_t2814CC842518C92C9DFC5DE6F7A73824758D3EF9_m3469AA2CFC84648E79AC1C21DF75623D62515312_gshared (TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* ___0_t, DOGetter_1_t709462C08281F3AA5DFEF36CAF91404B1004C338* ___1_getter, DOSetter_1_t02E8F9920F174322F1CF5AC8BCDEAABD14A03358* ___2_setter, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___3_endValue, float ___4_duration, ABSTweenPlugin_3_tE5A78BE46D046C07A6356B8AB596B2D00F9295E7* ___5_plugin, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral766954CA6C416DC5101A89F56696617F86FFF3AE);
		il2cpp_rgctx_method_init(method);
	}
	TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* G_B8_0 = NULL;
	TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* G_B7_0 = NULL;
	int32_t G_B9_0 = 0;
	TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* G_B9_1 = NULL;
	{
		ABSTweenPlugin_3_tE5A78BE46D046C07A6356B8AB596B2D00F9295E7* L_0 = ___5_plugin;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_1 = ___0_t;
		ABSTweenPlugin_3_tE5A78BE46D046C07A6356B8AB596B2D00F9295E7* L_2 = ___5_plugin;
		L_1->___tweenPlugin = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___tweenPlugin), (void*)L_2);
		goto IL_0036;
	}

IL_000e:
	{
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_3 = ___0_t;
		ABSTweenPlugin_3_tE5A78BE46D046C07A6356B8AB596B2D00F9295E7* L_4 = L_3->___tweenPlugin;
		if (L_4)
		{
			goto IL_0021;
		}
	}
	{
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_5 = ___0_t;
		ABSTweenPlugin_3_tE5A78BE46D046C07A6356B8AB596B2D00F9295E7* L_6;
		L_6 = PluginsManager_GetDefaultPlugin_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_TisVectorOptions_t2814CC842518C92C9DFC5DE6F7A73824758D3EF9_m621AF432ED28B62EE208BE52003B251AE9EE1830(il2cpp_rgctx_method(method->rgctx_data, 2));
		L_5->___tweenPlugin = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->___tweenPlugin), (void*)L_6);
	}

IL_0021:
	{
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_7 = ___0_t;
		ABSTweenPlugin_3_tE5A78BE46D046C07A6356B8AB596B2D00F9295E7* L_8 = L_7->___tweenPlugin;
		if (L_8)
		{
			goto IL_0036;
		}
	}
	{
		Debugger_LogError_mBAD7F720F13F12B84A27F564F83F00B66EEE6B9E((RuntimeObject*)_stringLiteral766954CA6C416DC5101A89F56696617F86FFF3AE, (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)NULL, NULL);
		return (bool)0;
	}

IL_0036:
	{
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_9 = ___0_t;
		DOGetter_1_t709462C08281F3AA5DFEF36CAF91404B1004C338* L_10 = ___1_getter;
		L_9->___getter = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&L_9->___getter), (void*)L_10);
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_11 = ___0_t;
		DOSetter_1_t02E8F9920F174322F1CF5AC8BCDEAABD14A03358* L_12 = ___2_setter;
		L_11->___setter = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&L_11->___setter), (void*)L_12);
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_13 = ___0_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = ___3_endValue;
		L_13->___endValue = L_14;
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_15 = ___0_t;
		float L_16 = ___4_duration;
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_15)->___duration = L_16;
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_17 = ___0_t;
		il2cpp_codegen_runtime_class_init_inline(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		bool L_18 = ((DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var))->___defaultAutoKill;
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_17)->___autoKill = L_18;
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_19 = ___0_t;
		bool L_20 = ((DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var))->___defaultRecyclable;
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_19)->___isRecyclable = L_20;
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_21 = ___0_t;
		int32_t L_22 = ((DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var))->___defaultEaseType;
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_21)->___easeType = L_22;
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_23 = ___0_t;
		float L_24 = ((DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var))->___defaultEaseOvershootOrAmplitude;
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_23)->___easeOvershootOrAmplitude = L_24;
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_25 = ___0_t;
		float L_26 = ((DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var))->___defaultEasePeriod;
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_25)->___easePeriod = L_26;
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_27 = ___0_t;
		int32_t L_28 = ((DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var))->___defaultLoopType;
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_27)->___loopType = L_28;
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_29 = ___0_t;
		int32_t L_30 = ((DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var))->___defaultAutoPlay;
		if ((((int32_t)L_30) == ((int32_t)3)))
		{
			G_B8_0 = L_29;
			goto IL_00a8;
		}
		G_B7_0 = L_29;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		int32_t L_31 = ((DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var))->___defaultAutoPlay;
		G_B9_0 = ((((int32_t)L_31) == ((int32_t)2))? 1 : 0);
		G_B9_1 = G_B7_0;
		goto IL_00a9;
	}

IL_00a8:
	{
		G_B9_0 = 1;
		G_B9_1 = G_B8_0;
	}

IL_00a9:
	{
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)G_B9_1)->___isPlaying = (bool)G_B9_0;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tweener_Setup_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericStruct_m367D27ACD74D1F94574B61F66A9FE4BCE9878768_gshared (TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* ___0_t, DOGetter_1_t8DA6E4433ACD8058D6EAE625137110D1FB3DFC14* ___1_getter, DOSetter_1_t856F6D96CAAFD28A21A398D2B3838D27D7E9BD16* ___2_setter, Il2CppFullySharedGenericAny ___3_endValue, float ___4_duration, ABSTweenPlugin_3_tDC724E2B66EA33E0E50BFC9D5D6DA6B3C5FA16A1* ___5_plugin, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral766954CA6C416DC5101A89F56696617F86FFF3AE);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_T2_t1A317392D2BC29857CB52C1A930D6A4DD8BD2535 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 5));
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_T2_t1A317392D2BC29857CB52C1A930D6A4DD8BD2535);
	TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* G_B8_0 = NULL;
	TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* G_B7_0 = NULL;
	int32_t G_B9_0 = 0;
	TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* G_B9_1 = NULL;
	{
		ABSTweenPlugin_3_tDC724E2B66EA33E0E50BFC9D5D6DA6B3C5FA16A1* L_0 = ___5_plugin;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_1 = ___0_t;
		ABSTweenPlugin_3_tDC724E2B66EA33E0E50BFC9D5D6DA6B3C5FA16A1* L_2 = ___5_plugin;
		il2cpp_codegen_write_instance_field_data<ABSTweenPlugin_3_tDC724E2B66EA33E0E50BFC9D5D6DA6B3C5FA16A1*>(L_1, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->rgctx_data, 1),6), L_2);
		goto IL_0036;
	}

IL_000e:
	{
		TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_3 = ___0_t;
		ABSTweenPlugin_3_tDC724E2B66EA33E0E50BFC9D5D6DA6B3C5FA16A1* L_4 = *(ABSTweenPlugin_3_tDC724E2B66EA33E0E50BFC9D5D6DA6B3C5FA16A1**)il2cpp_codegen_get_instance_field_data_pointer(L_3, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->rgctx_data, 1),6));
		if (L_4)
		{
			goto IL_0021;
		}
	}
	{
		TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_5 = ___0_t;
		ABSTweenPlugin_3_tDC724E2B66EA33E0E50BFC9D5D6DA6B3C5FA16A1* L_6;
		L_6 = ((  ABSTweenPlugin_3_tDC724E2B66EA33E0E50BFC9D5D6DA6B3C5FA16A1* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(il2cpp_rgctx_method(method->rgctx_data, 2));
		il2cpp_codegen_write_instance_field_data<ABSTweenPlugin_3_tDC724E2B66EA33E0E50BFC9D5D6DA6B3C5FA16A1*>(L_5, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->rgctx_data, 1),6), L_6);
	}

IL_0021:
	{
		TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_7 = ___0_t;
		ABSTweenPlugin_3_tDC724E2B66EA33E0E50BFC9D5D6DA6B3C5FA16A1* L_8 = *(ABSTweenPlugin_3_tDC724E2B66EA33E0E50BFC9D5D6DA6B3C5FA16A1**)il2cpp_codegen_get_instance_field_data_pointer(L_7, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->rgctx_data, 1),6));
		if (L_8)
		{
			goto IL_0036;
		}
	}
	{
		Debugger_LogError_mBAD7F720F13F12B84A27F564F83F00B66EEE6B9E((RuntimeObject*)_stringLiteral766954CA6C416DC5101A89F56696617F86FFF3AE, (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)NULL, NULL);
		return (bool)0;
	}

IL_0036:
	{
		TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_9 = ___0_t;
		DOGetter_1_t8DA6E4433ACD8058D6EAE625137110D1FB3DFC14* L_10 = ___1_getter;
		il2cpp_codegen_write_instance_field_data<DOGetter_1_t8DA6E4433ACD8058D6EAE625137110D1FB3DFC14*>(L_9, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->rgctx_data, 1),4), L_10);
		TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_11 = ___0_t;
		DOSetter_1_t856F6D96CAAFD28A21A398D2B3838D27D7E9BD16* L_12 = ___2_setter;
		il2cpp_codegen_write_instance_field_data<DOSetter_1_t856F6D96CAAFD28A21A398D2B3838D27D7E9BD16*>(L_11, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->rgctx_data, 1),5), L_12);
		TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_13 = ___0_t;
		il2cpp_codegen_memcpy(L_14, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 5)) ? ___3_endValue : &___3_endValue), SizeOf_T2_t1A317392D2BC29857CB52C1A930D6A4DD8BD2535);
		il2cpp_codegen_write_instance_field_data(L_13, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->rgctx_data, 1),1), L_14, SizeOf_T2_t1A317392D2BC29857CB52C1A930D6A4DD8BD2535);
		TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_15 = ___0_t;
		float L_16 = ___4_duration;
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_15)->___duration = L_16;
		TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_17 = ___0_t;
		il2cpp_codegen_runtime_class_init_inline(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		bool L_18 = ((DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var))->___defaultAutoKill;
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_17)->___autoKill = L_18;
		TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_19 = ___0_t;
		bool L_20 = ((DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var))->___defaultRecyclable;
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_19)->___isRecyclable = L_20;
		TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_21 = ___0_t;
		int32_t L_22 = ((DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var))->___defaultEaseType;
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_21)->___easeType = L_22;
		TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_23 = ___0_t;
		float L_24 = ((DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var))->___defaultEaseOvershootOrAmplitude;
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_23)->___easeOvershootOrAmplitude = L_24;
		TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_25 = ___0_t;
		float L_26 = ((DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var))->___defaultEasePeriod;
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_25)->___easePeriod = L_26;
		TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_27 = ___0_t;
		int32_t L_28 = ((DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var))->___defaultLoopType;
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)L_27)->___loopType = L_28;
		TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_29 = ___0_t;
		int32_t L_30 = ((DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var))->___defaultAutoPlay;
		if ((((int32_t)L_30) == ((int32_t)3)))
		{
			G_B8_0 = ((TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB*)L_29);
			goto IL_00a8;
		}
		G_B7_0 = ((TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB*)L_29);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		int32_t L_31 = ((DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var))->___defaultAutoPlay;
		G_B9_0 = ((((int32_t)L_31) == ((int32_t)2))? 1 : 0);
		G_B9_1 = ((TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB*)G_B7_0);
		goto IL_00a9;
	}

IL_00a8:
	{
		G_B9_0 = 1;
		G_B9_1 = ((TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB*)G_B8_0);
	}

IL_00a9:
	{
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)G_B9_1)->___isPlaying = (bool)G_B9_0;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeUtility_CanBeInstantiated_TisIl2CppFullySharedGenericAny_m8DD98722EE8C5AD72CC3361DA65279E2E914DA57_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITypeConstructor_tAEA6BC4B87F0F3739E4457F21908EF55F666EB08_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(0, ITypeConstructor_tAEA6BC4B87F0F3739E4457F21908EF55F666EB08_il2cpp_TypeInfo_var, (RuntimeObject*)L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeUtility_CheckCanBeInstantiated_TisIl2CppFullySharedGenericAny_mF4DC2D1251C15CC68D20D7959AEBA5D8192C4004_gshared (RuntimeObject* ___0_constructor, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITypeConstructor_tAEA6BC4B87F0F3739E4457F21908EF55F666EB08_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	bool V_0 = false;
	{
		RuntimeObject* L_0 = ___0_constructor;
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(0, ITypeConstructor_tAEA6BC4B87F0F3739E4457F21908EF55F666EB08_il2cpp_TypeInfo_var, (RuntimeObject*)L_0);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0032;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(7, (MemberInfo_t*)L_4);
		String_t* L_6;
		L_6 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3477F5F15DC74EADC79ED337F3988716EE1670E9)), L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF1A902BAD5B9128E503E43473944346B65454351)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_7 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_7, L_6, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0032:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m16C827D0F6107B7998F6C99B57F7CC2F181E2198_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentDictionary_2_set_Item_m050171C2656C2982971EECEA9026CADF5AEF72B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	TypeConstructor_1_t6BD2119030A7BD8FE6604F7A5DF2CEF572ECA695* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		TypeConstructor_1_t6BD2119030A7BD8FE6604F7A5DF2CEF572ECA695* L_0 = (TypeConstructor_1_t6BD2119030A7BD8FE6604F7A5DF2CEF572ECA695*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		TypeConstructor_1__ctor_mA44AE4CA2839F2717B9950321247E9AA135D7B5C(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_0;
		TypeConstructor_1_t6BD2119030A7BD8FE6604F7A5DF2CEF572ECA695* L_1 = V_0;
		((Cache_1_t3D5B27BB72DB559823D975C81EB8746985435377_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 4)))->___TypeConstructor = (RuntimeObject*)L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((Cache_1_t3D5B27BB72DB559823D975C81EB8746985435377_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 4)))->___TypeConstructor), (void*)(RuntimeObject*)L_1);
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		ConcurrentDictionary_2_tE5A8639D8AE0AF65ED6A8B7C1089E9F12ADD7B91* L_2 = ((TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticFields*)il2cpp_codegen_static_fields_for(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var))->___s_TypeConstructors;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 5)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		TypeConstructor_1_t6BD2119030A7BD8FE6604F7A5DF2CEF572ECA695* L_5 = V_0;
		ConcurrentDictionary_2_set_Item_m050171C2656C2982971EECEA9026CADF5AEF72B1(L_2, L_4, (RuntimeObject*)L_5, ConcurrentDictionary_2_set_Item_m050171C2656C2982971EECEA9026CADF5AEF72B1_RuntimeMethod_var);
		TypeConstructor_1_t6BD2119030A7BD8FE6604F7A5DF2CEF572ECA695* L_6 = V_0;
		V_1 = (RuntimeObject*)L_6;
		goto IL_0027;
	}

IL_0027:
	{
		RuntimeObject* L_7 = V_1;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisBoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485_m8F344250A2F9E6EE6DDBA6BA833BB36D0F272B66_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentDictionary_2_set_Item_m050171C2656C2982971EECEA9026CADF5AEF72B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	TypeConstructor_1_t2C599EF20D66173546174E1FEE9032865749569B* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		TypeConstructor_1_t2C599EF20D66173546174E1FEE9032865749569B* L_0 = (TypeConstructor_1_t2C599EF20D66173546174E1FEE9032865749569B*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		TypeConstructor_1__ctor_mBDEC850104319B918A6CBE0A5FC8CF72FE449073(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_0;
		TypeConstructor_1_t2C599EF20D66173546174E1FEE9032865749569B* L_1 = V_0;
		((Cache_1_t6A09774E9EC924515184CB0FBF6689D74CD57526_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 4)))->___TypeConstructor = (RuntimeObject*)L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((Cache_1_t6A09774E9EC924515184CB0FBF6689D74CD57526_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 4)))->___TypeConstructor), (void*)(RuntimeObject*)L_1);
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		ConcurrentDictionary_2_tE5A8639D8AE0AF65ED6A8B7C1089E9F12ADD7B91* L_2 = ((TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticFields*)il2cpp_codegen_static_fields_for(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var))->___s_TypeConstructors;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 5)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		TypeConstructor_1_t2C599EF20D66173546174E1FEE9032865749569B* L_5 = V_0;
		ConcurrentDictionary_2_set_Item_m050171C2656C2982971EECEA9026CADF5AEF72B1(L_2, L_4, (RuntimeObject*)L_5, ConcurrentDictionary_2_set_Item_m050171C2656C2982971EECEA9026CADF5AEF72B1_RuntimeMethod_var);
		TypeConstructor_1_t2C599EF20D66173546174E1FEE9032865749569B* L_6 = V_0;
		V_1 = (RuntimeObject*)L_6;
		goto IL_0027;
	}

IL_0027:
	{
		RuntimeObject* L_7 = V_1;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mBBCB804F367E06EA4D482F1B69165DD2B5BF38FF_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentDictionary_2_set_Item_m050171C2656C2982971EECEA9026CADF5AEF72B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	TypeConstructor_1_t1112ACFFD3ED7A595EEC07CE30579944DC35A084* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		TypeConstructor_1_t1112ACFFD3ED7A595EEC07CE30579944DC35A084* L_0 = (TypeConstructor_1_t1112ACFFD3ED7A595EEC07CE30579944DC35A084*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		TypeConstructor_1__ctor_m59D284115DFA693528774482859F9EAE2D2574A3(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_0;
		TypeConstructor_1_t1112ACFFD3ED7A595EEC07CE30579944DC35A084* L_1 = V_0;
		((Cache_1_t1EC3F18F5B6510EED65B625CE37A6C73B0F46377_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 4)))->___TypeConstructor = (RuntimeObject*)L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((Cache_1_t1EC3F18F5B6510EED65B625CE37A6C73B0F46377_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 4)))->___TypeConstructor), (void*)(RuntimeObject*)L_1);
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		ConcurrentDictionary_2_tE5A8639D8AE0AF65ED6A8B7C1089E9F12ADD7B91* L_2 = ((TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticFields*)il2cpp_codegen_static_fields_for(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var))->___s_TypeConstructors;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 5)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		TypeConstructor_1_t1112ACFFD3ED7A595EEC07CE30579944DC35A084* L_5 = V_0;
		ConcurrentDictionary_2_set_Item_m050171C2656C2982971EECEA9026CADF5AEF72B1(L_2, L_4, (RuntimeObject*)L_5, ConcurrentDictionary_2_set_Item_m050171C2656C2982971EECEA9026CADF5AEF72B1_RuntimeMethod_var);
		TypeConstructor_1_t1112ACFFD3ED7A595EEC07CE30579944DC35A084* L_6 = V_0;
		V_1 = (RuntimeObject*)L_6;
		goto IL_0027;
	}

IL_0027:
	{
		RuntimeObject* L_7 = V_1;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisRuntimeObject_m4E17F588B090C1DADAE2D986BDA407DECEAC020F_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentDictionary_2_set_Item_m050171C2656C2982971EECEA9026CADF5AEF72B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	TypeConstructor_1_tE2168F7D76AF24C3CDBD874E68275064267A7878* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		TypeConstructor_1_tE2168F7D76AF24C3CDBD874E68275064267A7878* L_0 = (TypeConstructor_1_tE2168F7D76AF24C3CDBD874E68275064267A7878*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		TypeConstructor_1__ctor_m02302139520CED9AE781B727D6E067D5D860B16E(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_0;
		TypeConstructor_1_tE2168F7D76AF24C3CDBD874E68275064267A7878* L_1 = V_0;
		((Cache_1_tB8D73F5DFD6D8711956A5D57AEEA41C64DD59FE6_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 4)))->___TypeConstructor = (RuntimeObject*)L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((Cache_1_tB8D73F5DFD6D8711956A5D57AEEA41C64DD59FE6_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 4)))->___TypeConstructor), (void*)(RuntimeObject*)L_1);
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		ConcurrentDictionary_2_tE5A8639D8AE0AF65ED6A8B7C1089E9F12ADD7B91* L_2 = ((TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticFields*)il2cpp_codegen_static_fields_for(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var))->___s_TypeConstructors;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 5)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		TypeConstructor_1_tE2168F7D76AF24C3CDBD874E68275064267A7878* L_5 = V_0;
		ConcurrentDictionary_2_set_Item_m050171C2656C2982971EECEA9026CADF5AEF72B1(L_2, L_4, (RuntimeObject*)L_5, ConcurrentDictionary_2_set_Item_m050171C2656C2982971EECEA9026CADF5AEF72B1_RuntimeMethod_var);
		TypeConstructor_1_tE2168F7D76AF24C3CDBD874E68275064267A7878* L_6 = V_0;
		V_1 = (RuntimeObject*)L_6;
		goto IL_0027;
	}

IL_0027:
	{
		RuntimeObject* L_7 = V_1;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m2C5F5CF80D13B041768C7845C5AAEEC02BB683BA_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentDictionary_2_set_Item_m050171C2656C2982971EECEA9026CADF5AEF72B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	TypeConstructor_1_tB483B7FBA1AB31F8944236CE6F404C0070EE46AF* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		TypeConstructor_1_tB483B7FBA1AB31F8944236CE6F404C0070EE46AF* L_0 = (TypeConstructor_1_tB483B7FBA1AB31F8944236CE6F404C0070EE46AF*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		TypeConstructor_1__ctor_mD1ED26178C74371350CCA90F7F0AA542DA05C0D2(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_0;
		TypeConstructor_1_tB483B7FBA1AB31F8944236CE6F404C0070EE46AF* L_1 = V_0;
		((Cache_1_t60D29BA616C245A5283CB0B5BD4B19DCB7EDCF1C_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 4)))->___TypeConstructor = (RuntimeObject*)L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((Cache_1_t60D29BA616C245A5283CB0B5BD4B19DCB7EDCF1C_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 4)))->___TypeConstructor), (void*)(RuntimeObject*)L_1);
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		ConcurrentDictionary_2_tE5A8639D8AE0AF65ED6A8B7C1089E9F12ADD7B91* L_2 = ((TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticFields*)il2cpp_codegen_static_fields_for(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var))->___s_TypeConstructors;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 5)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		TypeConstructor_1_tB483B7FBA1AB31F8944236CE6F404C0070EE46AF* L_5 = V_0;
		ConcurrentDictionary_2_set_Item_m050171C2656C2982971EECEA9026CADF5AEF72B1(L_2, L_4, (RuntimeObject*)L_5, ConcurrentDictionary_2_set_Item_m050171C2656C2982971EECEA9026CADF5AEF72B1_RuntimeMethod_var);
		TypeConstructor_1_tB483B7FBA1AB31F8944236CE6F404C0070EE46AF* L_6 = V_0;
		V_1 = (RuntimeObject*)L_6;
		goto IL_0027;
	}

IL_0027:
	{
		RuntimeObject* L_7 = V_1;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisRectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8_mF6949D9EDD480E6666CD975C66487AAD6ABC7D11_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentDictionary_2_set_Item_m050171C2656C2982971EECEA9026CADF5AEF72B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	TypeConstructor_1_t1C87E458BAAB4AD6530734CF23FBF63EB6941B16* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		TypeConstructor_1_t1C87E458BAAB4AD6530734CF23FBF63EB6941B16* L_0 = (TypeConstructor_1_t1C87E458BAAB4AD6530734CF23FBF63EB6941B16*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		TypeConstructor_1__ctor_m57EBE4991938D5FD61C4CC1CBA2995AD683397E0(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_0;
		TypeConstructor_1_t1C87E458BAAB4AD6530734CF23FBF63EB6941B16* L_1 = V_0;
		((Cache_1_t4ED442C7D3A39C62CE6AD3207C2A7F04760D2F3C_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 4)))->___TypeConstructor = (RuntimeObject*)L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((Cache_1_t4ED442C7D3A39C62CE6AD3207C2A7F04760D2F3C_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 4)))->___TypeConstructor), (void*)(RuntimeObject*)L_1);
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		ConcurrentDictionary_2_tE5A8639D8AE0AF65ED6A8B7C1089E9F12ADD7B91* L_2 = ((TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticFields*)il2cpp_codegen_static_fields_for(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var))->___s_TypeConstructors;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 5)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		TypeConstructor_1_t1C87E458BAAB4AD6530734CF23FBF63EB6941B16* L_5 = V_0;
		ConcurrentDictionary_2_set_Item_m050171C2656C2982971EECEA9026CADF5AEF72B1(L_2, L_4, (RuntimeObject*)L_5, ConcurrentDictionary_2_set_Item_m050171C2656C2982971EECEA9026CADF5AEF72B1_RuntimeMethod_var);
		TypeConstructor_1_t1C87E458BAAB4AD6530734CF23FBF63EB6941B16* L_6 = V_0;
		V_1 = (RuntimeObject*)L_6;
		goto IL_0027;
	}

IL_0027:
	{
		RuntimeObject* L_7 = V_1;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mE0C65F4221E48BB07F75856972A0CCDAE284AB9F_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentDictionary_2_set_Item_m050171C2656C2982971EECEA9026CADF5AEF72B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	TypeConstructor_1_t4B02051589066DA6CAD76A46B2FB0896FB6F1353* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		TypeConstructor_1_t4B02051589066DA6CAD76A46B2FB0896FB6F1353* L_0 = (TypeConstructor_1_t4B02051589066DA6CAD76A46B2FB0896FB6F1353*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		TypeConstructor_1__ctor_m74203C1B59EBD226404F82D4FE8ECCE279763902(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_0;
		TypeConstructor_1_t4B02051589066DA6CAD76A46B2FB0896FB6F1353* L_1 = V_0;
		((Cache_1_tC0A5B4DEAAD4F636D5EB7222F76AFA30C44BD765_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 4)))->___TypeConstructor = (RuntimeObject*)L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((Cache_1_tC0A5B4DEAAD4F636D5EB7222F76AFA30C44BD765_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 4)))->___TypeConstructor), (void*)(RuntimeObject*)L_1);
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		ConcurrentDictionary_2_tE5A8639D8AE0AF65ED6A8B7C1089E9F12ADD7B91* L_2 = ((TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticFields*)il2cpp_codegen_static_fields_for(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var))->___s_TypeConstructors;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 5)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		TypeConstructor_1_t4B02051589066DA6CAD76A46B2FB0896FB6F1353* L_5 = V_0;
		ConcurrentDictionary_2_set_Item_m050171C2656C2982971EECEA9026CADF5AEF72B1(L_2, L_4, (RuntimeObject*)L_5, ConcurrentDictionary_2_set_Item_m050171C2656C2982971EECEA9026CADF5AEF72B1_RuntimeMethod_var);
		TypeConstructor_1_t4B02051589066DA6CAD76A46B2FB0896FB6F1353* L_6 = V_0;
		V_1 = (RuntimeObject*)L_6;
		goto IL_0027;
	}

IL_0027:
	{
		RuntimeObject* L_7 = V_1;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisVector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_mC8EF710494C8986B279262C6C64947BE2C1DC55C_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentDictionary_2_set_Item_m050171C2656C2982971EECEA9026CADF5AEF72B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	TypeConstructor_1_t9D3BD244EB1B72A274F2DF3BD2871FE3D1103947* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		TypeConstructor_1_t9D3BD244EB1B72A274F2DF3BD2871FE3D1103947* L_0 = (TypeConstructor_1_t9D3BD244EB1B72A274F2DF3BD2871FE3D1103947*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		TypeConstructor_1__ctor_mDE1389C84380C4456818EB59CA7C49951026B1D6(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_0;
		TypeConstructor_1_t9D3BD244EB1B72A274F2DF3BD2871FE3D1103947* L_1 = V_0;
		((Cache_1_t1734B78F91A5E97A0376AADF017CDD9C28F0D1E8_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 4)))->___TypeConstructor = (RuntimeObject*)L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((Cache_1_t1734B78F91A5E97A0376AADF017CDD9C28F0D1E8_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 4)))->___TypeConstructor), (void*)(RuntimeObject*)L_1);
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		ConcurrentDictionary_2_tE5A8639D8AE0AF65ED6A8B7C1089E9F12ADD7B91* L_2 = ((TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticFields*)il2cpp_codegen_static_fields_for(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var))->___s_TypeConstructors;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 5)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		TypeConstructor_1_t9D3BD244EB1B72A274F2DF3BD2871FE3D1103947* L_5 = V_0;
		ConcurrentDictionary_2_set_Item_m050171C2656C2982971EECEA9026CADF5AEF72B1(L_2, L_4, (RuntimeObject*)L_5, ConcurrentDictionary_2_set_Item_m050171C2656C2982971EECEA9026CADF5AEF72B1_RuntimeMethod_var);
		TypeConstructor_1_t9D3BD244EB1B72A274F2DF3BD2871FE3D1103947* L_6 = V_0;
		V_1 = (RuntimeObject*)L_6;
		goto IL_0027;
	}

IL_0027:
	{
		RuntimeObject* L_7 = V_1;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m1AB8BF0921C24186B3C43FC4341AAD2F6FE87C4D_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentDictionary_2_set_Item_m050171C2656C2982971EECEA9026CADF5AEF72B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	TypeConstructor_1_t015B6532B2D88703CA87ACDD65D1F95F946DEBBC* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		TypeConstructor_1_t015B6532B2D88703CA87ACDD65D1F95F946DEBBC* L_0 = (TypeConstructor_1_t015B6532B2D88703CA87ACDD65D1F95F946DEBBC*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		TypeConstructor_1__ctor_mF487A9F2F4B6893A278DDD2CA281144354953FB1(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_0;
		TypeConstructor_1_t015B6532B2D88703CA87ACDD65D1F95F946DEBBC* L_1 = V_0;
		((Cache_1_t165F6C79CDB8F92D5632BF06B4D2859B4F8CB803_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 4)))->___TypeConstructor = (RuntimeObject*)L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((Cache_1_t165F6C79CDB8F92D5632BF06B4D2859B4F8CB803_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 4)))->___TypeConstructor), (void*)(RuntimeObject*)L_1);
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		ConcurrentDictionary_2_tE5A8639D8AE0AF65ED6A8B7C1089E9F12ADD7B91* L_2 = ((TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticFields*)il2cpp_codegen_static_fields_for(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var))->___s_TypeConstructors;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 5)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		TypeConstructor_1_t015B6532B2D88703CA87ACDD65D1F95F946DEBBC* L_5 = V_0;
		ConcurrentDictionary_2_set_Item_m050171C2656C2982971EECEA9026CADF5AEF72B1(L_2, L_4, (RuntimeObject*)L_5, ConcurrentDictionary_2_set_Item_m050171C2656C2982971EECEA9026CADF5AEF72B1_RuntimeMethod_var);
		TypeConstructor_1_t015B6532B2D88703CA87ACDD65D1F95F946DEBBC* L_6 = V_0;
		V_1 = (RuntimeObject*)L_6;
		goto IL_0027;
	}

IL_0027:
	{
		RuntimeObject* L_7 = V_1;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_mB00220519A80AA5ACE36B7DBA2E6A6CB796302AF_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentDictionary_2_set_Item_m050171C2656C2982971EECEA9026CADF5AEF72B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	TypeConstructor_1_t0B54B8DEF0851D113A157F922D908DE987F2BB1B* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		TypeConstructor_1_t0B54B8DEF0851D113A157F922D908DE987F2BB1B* L_0 = (TypeConstructor_1_t0B54B8DEF0851D113A157F922D908DE987F2BB1B*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		TypeConstructor_1__ctor_mDAFDA633F7A4D154406F63CE7E031CA7299715DE(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_0;
		TypeConstructor_1_t0B54B8DEF0851D113A157F922D908DE987F2BB1B* L_1 = V_0;
		((Cache_1_t9D717A73959DD798ED20109ED37309FA61F9047D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 4)))->___TypeConstructor = (RuntimeObject*)L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((Cache_1_t9D717A73959DD798ED20109ED37309FA61F9047D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 4)))->___TypeConstructor), (void*)(RuntimeObject*)L_1);
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		ConcurrentDictionary_2_tE5A8639D8AE0AF65ED6A8B7C1089E9F12ADD7B91* L_2 = ((TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticFields*)il2cpp_codegen_static_fields_for(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var))->___s_TypeConstructors;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 5)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		TypeConstructor_1_t0B54B8DEF0851D113A157F922D908DE987F2BB1B* L_5 = V_0;
		ConcurrentDictionary_2_set_Item_m050171C2656C2982971EECEA9026CADF5AEF72B1(L_2, L_4, (RuntimeObject*)L_5, ConcurrentDictionary_2_set_Item_m050171C2656C2982971EECEA9026CADF5AEF72B1_RuntimeMethod_var);
		TypeConstructor_1_t0B54B8DEF0851D113A157F922D908DE987F2BB1B* L_6 = V_0;
		V_1 = (RuntimeObject*)L_6;
		goto IL_0027;
	}

IL_0027:
	{
		RuntimeObject* L_7 = V_1;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mED1DC338E5DB62F3E64F6272A9F12150DA5CC1B9_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentDictionary_2_set_Item_m050171C2656C2982971EECEA9026CADF5AEF72B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	TypeConstructor_1_tE50E3531CF764328151098BCE662D4FF81F9F4CA* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		TypeConstructor_1_tE50E3531CF764328151098BCE662D4FF81F9F4CA* L_0 = (TypeConstructor_1_tE50E3531CF764328151098BCE662D4FF81F9F4CA*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		TypeConstructor_1__ctor_mE6B1A176CB56765080C95ECB263601E5ECC97ADB(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_0;
		TypeConstructor_1_tE50E3531CF764328151098BCE662D4FF81F9F4CA* L_1 = V_0;
		((Cache_1_t2AE8DCA73B885EC1BE3528F43866A2B28BA27459_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 4)))->___TypeConstructor = (RuntimeObject*)L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((Cache_1_t2AE8DCA73B885EC1BE3528F43866A2B28BA27459_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 4)))->___TypeConstructor), (void*)(RuntimeObject*)L_1);
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		ConcurrentDictionary_2_tE5A8639D8AE0AF65ED6A8B7C1089E9F12ADD7B91* L_2 = ((TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticFields*)il2cpp_codegen_static_fields_for(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var))->___s_TypeConstructors;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 5)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		TypeConstructor_1_tE50E3531CF764328151098BCE662D4FF81F9F4CA* L_5 = V_0;
		ConcurrentDictionary_2_set_Item_m050171C2656C2982971EECEA9026CADF5AEF72B1(L_2, L_4, (RuntimeObject*)L_5, ConcurrentDictionary_2_set_Item_m050171C2656C2982971EECEA9026CADF5AEF72B1_RuntimeMethod_var);
		TypeConstructor_1_tE50E3531CF764328151098BCE662D4FF81F9F4CA* L_6 = V_0;
		V_1 = (RuntimeObject*)L_6;
		goto IL_0027;
	}

IL_0027:
	{
		RuntimeObject* L_7 = V_1;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisIl2CppFullySharedGenericAny_mA5F70CB8E7370027F0A598FE0123F8A050704304_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentDictionary_2_set_Item_m050171C2656C2982971EECEA9026CADF5AEF72B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	TypeConstructor_1_tC9E50C3E7F5087C5A4FFA5280FCE1E9C36B42AF6* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		TypeConstructor_1_tC9E50C3E7F5087C5A4FFA5280FCE1E9C36B42AF6* L_0 = (TypeConstructor_1_tC9E50C3E7F5087C5A4FFA5280FCE1E9C36B42AF6*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		((  void (*) (TypeConstructor_1_tC9E50C3E7F5087C5A4FFA5280FCE1E9C36B42AF6*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_0;
		TypeConstructor_1_tC9E50C3E7F5087C5A4FFA5280FCE1E9C36B42AF6* L_1 = V_0;
		((Cache_1_tC191D4861D1556D15EB5651A45361205B0FFEB36_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 4)))->___TypeConstructor = (RuntimeObject*)L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((Cache_1_tC191D4861D1556D15EB5651A45361205B0FFEB36_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 4)))->___TypeConstructor), (void*)(RuntimeObject*)L_1);
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		ConcurrentDictionary_2_tE5A8639D8AE0AF65ED6A8B7C1089E9F12ADD7B91* L_2 = ((TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticFields*)il2cpp_codegen_static_fields_for(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var))->___s_TypeConstructors;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 5)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		TypeConstructor_1_tC9E50C3E7F5087C5A4FFA5280FCE1E9C36B42AF6* L_5 = V_0;
		ConcurrentDictionary_2_set_Item_m050171C2656C2982971EECEA9026CADF5AEF72B1(L_2, L_4, (RuntimeObject*)L_5, ConcurrentDictionary_2_set_Item_m050171C2656C2982971EECEA9026CADF5AEF72B1_RuntimeMethod_var);
		TypeConstructor_1_tC9E50C3E7F5087C5A4FFA5280FCE1E9C36B42AF6* L_6 = V_0;
		V_1 = (RuntimeObject*)L_6;
		goto IL_0027;
	}

IL_0027:
	{
		RuntimeObject* L_7 = V_1;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_GetTypeConstructor_TisRuntimeObject_m16C0BB9AC6C9E7396BA85526EC8A55AF216579DB_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	{
		RuntimeObject* L_0 = ((Cache_1_tB8D73F5DFD6D8711956A5D57AEEA41C64DD59FE6_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___TypeConstructor;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_1;
		L_1 = TypeUtility_CreateTypeConstructor_TisRuntimeObject_m4E17F588B090C1DADAE2D986BDA407DECEAC020F(il2cpp_rgctx_method(method->rgctx_data, 3));
		G_B3_0 = L_1;
		goto IL_0014;
	}

IL_000f:
	{
		RuntimeObject* L_2 = ((Cache_1_tB8D73F5DFD6D8711956A5D57AEEA41C64DD59FE6_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___TypeConstructor;
		G_B3_0 = L_2;
	}

IL_0014:
	{
		V_0 = G_B3_0;
		goto IL_0017;
	}

IL_0017:
	{
		RuntimeObject* L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_GetTypeConstructor_TisIl2CppFullySharedGenericAny_m85B819FE60F560C72A51E57851E212B324CD2783_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	{
		RuntimeObject* L_0 = ((Cache_1_tC191D4861D1556D15EB5651A45361205B0FFEB36_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___TypeConstructor;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_1;
		L_1 = ((  RuntimeObject* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(il2cpp_rgctx_method(method->rgctx_data, 3));
		G_B3_0 = L_1;
		goto IL_0014;
	}

IL_000f:
	{
		RuntimeObject* L_2 = ((Cache_1_tC191D4861D1556D15EB5651A45361205B0FFEB36_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___TypeConstructor;
		G_B3_0 = L_2;
	}

IL_0014:
	{
		V_0 = G_B3_0;
		goto IL_0017;
	}

IL_0017:
	{
		RuntimeObject* L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeUtility_Instantiate_TisIl2CppFullySharedGenericAny_m16821F3B413A510B42D80A6D20A540E95AB55F6A_gshared (Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_T_t7F735B1DDC2B091EDC358DEEF375CD6116C636EE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_t7F735B1DDC2B091EDC358DEEF375CD6116C636EE);
	const Il2CppFullySharedGenericAny L_4 = L_3;
	RuntimeObject* V_0 = NULL;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_T_t7F735B1DDC2B091EDC358DEEF375CD6116C636EE);
	memset(V_1, 0, SizeOf_T_t7F735B1DDC2B091EDC358DEEF375CD6116C636EE);
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_0;
		RuntimeObject* L_1 = V_0;
		((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_1, il2cpp_rgctx_method(method->rgctx_data, 2));
		RuntimeObject* L_2 = V_0;
		InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_2, (Il2CppFullySharedGenericAny*)L_3);
		il2cpp_codegen_memcpy(V_1, L_3, SizeOf_T_t7F735B1DDC2B091EDC358DEEF375CD6116C636EE);
		goto IL_0017;
	}

IL_0017:
	{
		il2cpp_codegen_memcpy(L_4, V_1, SizeOf_T_t7F735B1DDC2B091EDC358DEEF375CD6116C636EE);
		il2cpp_codegen_memcpy(il2cppRetVal, L_4, SizeOf_T_t7F735B1DDC2B091EDC358DEEF375CD6116C636EE);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeUtility_Instantiate_TisIl2CppFullySharedGenericAny_m5DC21E4FCCF2901D5CAB9ABD9672A72829187EE7_gshared (Type_t* ___0_derivedType, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITypeConstructor_tAEA6BC4B87F0F3739E4457F21908EF55F666EB08_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_T_t263F6929F47D144546F78710E99F878E6A286B45 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_T_t263F6929F47D144546F78710E99F878E6A286B45);
	const Il2CppFullySharedGenericAny L_11 = L_9;
	RuntimeObject* V_0 = NULL;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_T_t263F6929F47D144546F78710E99F878E6A286B45);
	memset(V_1, 0, SizeOf_T_t263F6929F47D144546F78710E99F878E6A286B45);
	{
		Type_t* L_0 = ___0_derivedType;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_1;
		L_1 = TypeUtility_GetTypeConstructor_m46157C15601C266EE0DB2324E834E1CE4CBFE1DC(L_0, NULL);
		V_0 = L_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		Type_t* L_4 = ___0_derivedType;
		TypeUtility_CheckIsAssignableFrom_m284900A7E86ACD68227E5E3DCC9430EEC7E1E03E(L_3, L_4, NULL);
		RuntimeObject* L_5 = V_0;
		Type_t* L_6 = ___0_derivedType;
		TypeUtility_CheckCanBeInstantiated_mB2C921D41DC94D83758FC5CFDFEE26911F62B14F(L_5, L_6, NULL);
		RuntimeObject* L_7 = V_0;
		RuntimeObject* L_8;
		L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1, ITypeConstructor_tAEA6BC4B87F0F3739E4457F21908EF55F666EB08_il2cpp_TypeInfo_var, L_7);
		void* L_10 = UnBox_Any(L_8, il2cpp_rgctx_data(method->rgctx_data, 1), L_9);
		il2cpp_codegen_memcpy(V_1, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_10))), SizeOf_T_t263F6929F47D144546F78710E99F878E6A286B45);
		goto IL_002f;
	}

IL_002f:
	{
		il2cpp_codegen_memcpy(L_11, V_1, SizeOf_T_t263F6929F47D144546F78710E99F878E6A286B45);
		il2cpp_codegen_memcpy(il2cppRetVal, L_11, SizeOf_T_t263F6929F47D144546F78710E99F878E6A286B45);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeUtility_InstantiateArray_TisIl2CppFullySharedGenericAny_mFDFE5C113C01319C0149CDE8BFCB586E246BFE07_gshared (int32_t ___0_count, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_TArray_tCC895BE754673F9F64E3B106535BF9692E92AC48 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_TArray_tCC895BE754673F9F64E3B106535BF9692E92AC48);
	const Il2CppFullySharedGenericAny L_37 = L_13;
	const Il2CppFullySharedGenericAny L_39 = L_13;
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	Type_t* V_2 = NULL;
	Type_t* V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	Il2CppFullySharedGenericAny V_6 = alloca(SizeOf_TArray_tCC895BE754673F9F64E3B106535BF9692E92AC48);
	memset(V_6, 0, SizeOf_TArray_tCC895BE754673F9F64E3B106535BF9692E92AC48);
	bool V_7 = false;
	bool V_8 = false;
	{
		int32_t L_0 = ___0_count;
		V_4 = (bool)((((int32_t)L_0) < ((int32_t)0))? 1 : 0);
		bool L_1 = V_4;
		if (!L_1)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_2 = ___0_count;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_3);
		String_t* L_5;
		L_5 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB17952A14247828F6A41642FA1C04CD14AE7C12A)), (RuntimeObject*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE1EDA87E9ED31C4E7C14E0517587FE44416755AE)), (RuntimeObject*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626)), L_4, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_6 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_6, L_5, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, method);
	}

IL_002c:
	{
		il2cpp_codegen_runtime_class_init_inline(PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		RuntimeObject* L_7;
		L_7 = ((  RuntimeObject* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_7;
		RuntimeObject* L_8 = V_0;
		V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 2)));
		RuntimeObject* L_9 = V_1;
		V_5 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_9) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_10 = V_5;
		if (!L_10)
		{
			goto IL_0052;
		}
	}
	{
		RuntimeObject* L_11 = V_1;
		int32_t L_12 = ___0_count;
		InterfaceActionInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 2), L_11, L_12, (Il2CppFullySharedGenericAny*)L_13);
		il2cpp_codegen_memcpy(V_6, L_13, SizeOf_TArray_tCC895BE754673F9F64E3B106535BF9692E92AC48);
		goto IL_00da;
	}

IL_0052:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 5)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		V_2 = L_15;
		Type_t* L_16 = V_2;
		bool L_17;
		L_17 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_16, NULL);
		V_7 = (bool)((((int32_t)L_17) == ((int32_t)0))? 1 : 0);
		bool L_18 = V_7;
		if (!L_18)
		{
			goto IL_0091;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 5)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		String_t* L_21;
		L_21 = VirtualFuncInvoker0< String_t* >::Invoke(7, (MemberInfo_t*)L_20);
		String_t* L_22;
		L_22 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB9E39E6666EEBD98BA9B0F0CC91867E890B97377)), L_21, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF5F6CA609FD7E424D80133DE3BA7D5A6FE53EED3)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_23 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_23, L_22, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_23, method);
	}

IL_0091:
	{
		Type_t* L_24 = V_2;
		Type_t* L_25;
		L_25 = VirtualFuncInvoker0< Type_t* >::Invoke(45, L_24);
		V_3 = L_25;
		Type_t* L_26 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_27;
		L_27 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC((Type_t*)NULL, L_26, NULL);
		V_8 = L_27;
		bool L_28 = V_8;
		if (!L_28)
		{
			goto IL_00ca;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 5)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		String_t* L_31;
		L_31 = VirtualFuncInvoker0< String_t* >::Invoke(7, (MemberInfo_t*)L_30);
		String_t* L_32;
		L_32 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB9E39E6666EEBD98BA9B0F0CC91867E890B97377)), L_31, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1FFBA8CC2A329F0612696574F8F4DD7FBA8E3BE0)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_33 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_33, L_32, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_33, method);
	}

IL_00ca:
	{
		Type_t* L_34 = V_3;
		int32_t L_35 = ___0_count;
		RuntimeArray* L_36;
		L_36 = Array_CreateInstance_m13B202130951A03AF5F52470A19E17D3AD2A8983(L_34, L_35, NULL);
		void* L_38 = UnBox_Any((RuntimeObject*)L_36, il2cpp_rgctx_data(method->rgctx_data, 4), L_37);
		il2cpp_codegen_memcpy(V_6, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_38))), SizeOf_TArray_tCC895BE754673F9F64E3B106535BF9692E92AC48);
		goto IL_00da;
	}

IL_00da:
	{
		il2cpp_codegen_memcpy(L_39, V_6, SizeOf_TArray_tCC895BE754673F9F64E3B106535BF9692E92AC48);
		il2cpp_codegen_memcpy(il2cppRetVal, L_39, SizeOf_TArray_tCC895BE754673F9F64E3B106535BF9692E92AC48);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeUtility_InstantiateArray_TisIl2CppFullySharedGenericAny_m1FCEE0C26FAE797853D3A634E97FFBF64C012B22_gshared (Type_t* ___0_derivedType, int32_t ___1_count, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_TArray_t386A802729FA5C7DB8F552663ADCDD7E1551080E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_TArray_t386A802729FA5C7DB8F552663ADCDD7E1551080E);
	const Il2CppFullySharedGenericAny L_38 = L_14;
	const Il2CppFullySharedGenericAny L_40 = L_14;
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	Type_t* V_2 = NULL;
	Type_t* V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	Il2CppFullySharedGenericAny V_6 = alloca(SizeOf_TArray_t386A802729FA5C7DB8F552663ADCDD7E1551080E);
	memset(V_6, 0, SizeOf_TArray_t386A802729FA5C7DB8F552663ADCDD7E1551080E);
	bool V_7 = false;
	bool V_8 = false;
	{
		int32_t L_0 = ___1_count;
		V_4 = (bool)((((int32_t)L_0) < ((int32_t)0))? 1 : 0);
		bool L_1 = V_4;
		if (!L_1)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_2 = ___1_count;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_3);
		String_t* L_5;
		L_5 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDF29F6D97E24431ECD5F1657989D9AD6B5FF2A0E)), (RuntimeObject*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE1EDA87E9ED31C4E7C14E0517587FE44416755AE)), (RuntimeObject*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626)), L_4, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_6 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_6, L_5, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, method);
	}

IL_002c:
	{
		Type_t* L_7 = ___0_derivedType;
		il2cpp_codegen_runtime_class_init_inline(PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		RuntimeObject* L_8;
		L_8 = PropertyBagStore_GetPropertyBag_m90F2EBB48D60993594856358C572964C8011143E(L_7, NULL);
		V_0 = L_8;
		RuntimeObject* L_9 = V_0;
		V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_9, il2cpp_rgctx_data(method->rgctx_data, 0)));
		RuntimeObject* L_10 = V_1;
		V_5 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_10) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_11 = V_5;
		if (!L_11)
		{
			goto IL_0053;
		}
	}
	{
		RuntimeObject* L_12 = V_1;
		int32_t L_13 = ___1_count;
		InterfaceActionInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 0), L_12, L_13, (Il2CppFullySharedGenericAny*)L_14);
		il2cpp_codegen_memcpy(V_6, L_14, SizeOf_TArray_t386A802729FA5C7DB8F552663ADCDD7E1551080E);
		goto IL_00db;
	}

IL_0053:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		V_2 = L_16;
		Type_t* L_17 = V_2;
		bool L_18;
		L_18 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_17, NULL);
		V_7 = (bool)((((int32_t)L_18) == ((int32_t)0))? 1 : 0);
		bool L_19 = V_7;
		if (!L_19)
		{
			goto IL_0092;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_20 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_21;
		L_21 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_20, NULL);
		String_t* L_22;
		L_22 = VirtualFuncInvoker0< String_t* >::Invoke(7, (MemberInfo_t*)L_21);
		String_t* L_23;
		L_23 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral63D67EDF1DFC329AF697D485FCB2431349E3E836)), L_22, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF5F6CA609FD7E424D80133DE3BA7D5A6FE53EED3)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_24 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_24, L_23, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_24, method);
	}

IL_0092:
	{
		Type_t* L_25 = V_2;
		Type_t* L_26;
		L_26 = VirtualFuncInvoker0< Type_t* >::Invoke(45, L_25);
		V_3 = L_26;
		Type_t* L_27 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_28;
		L_28 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC((Type_t*)NULL, L_27, NULL);
		V_8 = L_28;
		bool L_29 = V_8;
		if (!L_29)
		{
			goto IL_00cb;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_30 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_31;
		L_31 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_30, NULL);
		String_t* L_32;
		L_32 = VirtualFuncInvoker0< String_t* >::Invoke(7, (MemberInfo_t*)L_31);
		String_t* L_33;
		L_33 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral63D67EDF1DFC329AF697D485FCB2431349E3E836)), L_32, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1FFBA8CC2A329F0612696574F8F4DD7FBA8E3BE0)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_34 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_34, L_33, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_34, method);
	}

IL_00cb:
	{
		Type_t* L_35 = V_3;
		int32_t L_36 = ___1_count;
		RuntimeArray* L_37;
		L_37 = Array_CreateInstance_m13B202130951A03AF5F52470A19E17D3AD2A8983(L_35, L_36, NULL);
		void* L_39 = UnBox_Any((RuntimeObject*)L_37, il2cpp_rgctx_data(method->rgctx_data, 2), L_38);
		il2cpp_codegen_memcpy(V_6, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_39))), SizeOf_TArray_t386A802729FA5C7DB8F552663ADCDD7E1551080E);
		goto IL_00db;
	}

IL_00db:
	{
		il2cpp_codegen_memcpy(L_40, V_6, SizeOf_TArray_t386A802729FA5C7DB8F552663ADCDD7E1551080E);
		il2cpp_codegen_memcpy(il2cppRetVal, L_40, SizeOf_TArray_t386A802729FA5C7DB8F552663ADCDD7E1551080E);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeUtility_SetExplicitInstantiationMethod_TisRuntimeObject_mE9AE43E037CA7786FCC097D961262F0634370C79_gshared (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* ___0_constructor, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_GetTypeConstructor_TisRuntimeObject_m16C0BB9AC6C9E7396BA85526EC8A55AF216579DB(il2cpp_rgctx_method(method->rgctx_data, 0));
		Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* L_1 = ___0_constructor;
		InterfaceActionInvoker1< Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* >::Invoke(1, il2cpp_rgctx_data(method->rgctx_data, 1), L_0, L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeUtility_SetExplicitInstantiationMethod_TisIl2CppFullySharedGenericAny_m2D8909EEC6C43238849B5CDA814A1B8830FD6DD6_gshared (Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431* ___0_constructor, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431* L_1 = ___0_constructor;
		InterfaceActionInvoker1< Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431* >::Invoke(1, il2cpp_rgctx_data(method->rgctx_data, 1), L_0, L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeUtility_TryInstantiate_TisIl2CppFullySharedGenericAny_m649F65DE0BCA16E2A127A53A46C010AD35120D3E_gshared (Il2CppFullySharedGenericAny* ___0_instance, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITypeConstructor_tAEA6BC4B87F0F3739E4457F21908EF55F666EB08_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_T_t82DD230CE8580C6DC3CD4CBEFFC184EADB0B7A95 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T_t82DD230CE8580C6DC3CD4CBEFFC184EADB0B7A95);
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_0;
		RuntimeObject* L_1 = V_0;
		bool L_2;
		L_2 = InterfaceFuncInvoker0< bool >::Invoke(0, ITypeConstructor_tAEA6BC4B87F0F3739E4457F21908EF55F666EB08_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_4 = ___0_instance;
		RuntimeObject* L_5 = V_0;
		InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_5, (Il2CppFullySharedGenericAny*)L_6);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_4, L_6, SizeOf_T_t82DD230CE8580C6DC3CD4CBEFFC184EADB0B7A95);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 4), (void**)(Il2CppFullySharedGenericAny*)L_4, (void*)L_6);
		V_2 = (bool)1;
		goto IL_002d;
	}

IL_0022:
	{
		Il2CppFullySharedGenericAny* L_7 = ___0_instance;
		il2cpp_codegen_initobj(L_7, SizeOf_T_t82DD230CE8580C6DC3CD4CBEFFC184EADB0B7A95);
		V_2 = (bool)0;
		goto IL_002d;
	}

IL_002d:
	{
		bool L_8 = V_2;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeUtility_TryInstantiate_TisIl2CppFullySharedGenericAny_m3914D5A487BA3A1D1DA0C268C598029CAAD4B975_gshared (Type_t* ___0_derivedType, Il2CppFullySharedGenericAny* ___1_value, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITypeConstructor_tAEA6BC4B87F0F3739E4457F21908EF55F666EB08_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_T_tABFEBC08B2979D6B63177B9428E7CA01DCC3E3B4 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_16 = alloca(SizeOf_T_tABFEBC08B2979D6B63177B9428E7CA01DCC3E3B4);
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		Type_t* L_2 = ___0_derivedType;
		bool L_3;
		L_3 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(21, L_1, L_2);
		V_1 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_002b;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_5 = ___1_value;
		il2cpp_codegen_initobj(L_5, SizeOf_T_tABFEBC08B2979D6B63177B9428E7CA01DCC3E3B4);
		Il2CppFullySharedGenericAny* L_6 = ___1_value;
		il2cpp_codegen_initobj(L_6, SizeOf_T_tABFEBC08B2979D6B63177B9428E7CA01DCC3E3B4);
		V_2 = (bool)0;
		goto IL_0060;
	}

IL_002b:
	{
		Type_t* L_7 = ___0_derivedType;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_8;
		L_8 = TypeUtility_GetTypeConstructor_m46157C15601C266EE0DB2324E834E1CE4CBFE1DC(L_7, NULL);
		V_0 = L_8;
		RuntimeObject* L_9 = V_0;
		bool L_10;
		L_10 = InterfaceFuncInvoker0< bool >::Invoke(0, ITypeConstructor_tAEA6BC4B87F0F3739E4457F21908EF55F666EB08_il2cpp_TypeInfo_var, L_9);
		V_3 = (bool)((((int32_t)L_10) == ((int32_t)0))? 1 : 0);
		bool L_11 = V_3;
		if (!L_11)
		{
			goto IL_004b;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_12 = ___1_value;
		il2cpp_codegen_initobj(L_12, SizeOf_T_tABFEBC08B2979D6B63177B9428E7CA01DCC3E3B4);
		V_2 = (bool)0;
		goto IL_0060;
	}

IL_004b:
	{
		Il2CppFullySharedGenericAny* L_13 = ___1_value;
		RuntimeObject* L_14 = V_0;
		RuntimeObject* L_15;
		L_15 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1, ITypeConstructor_tAEA6BC4B87F0F3739E4457F21908EF55F666EB08_il2cpp_TypeInfo_var, L_14);
		void* L_17 = UnBox_Any(L_15, il2cpp_rgctx_data(method->rgctx_data, 2), L_16);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_13, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_17))), SizeOf_T_tABFEBC08B2979D6B63177B9428E7CA01DCC3E3B4);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 2), (void**)(Il2CppFullySharedGenericAny*)L_13, (void*)(((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_17))));
		V_2 = (bool)1;
		goto IL_0060;
	}

IL_0060:
	{
		bool L_18 = V_2;
		return L_18;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeUtility_TryInstantiateArray_TisIl2CppFullySharedGenericAny_m61841BDE42555F9AE20A4F8308FDA87FE9A33043_gshared (int32_t ___0_count, Il2CppFullySharedGenericAny* ___1_instance, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_TArray_tB79A9A6E8211AFCF57D3807AEBFC7AF87B0057A1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_TArray_tB79A9A6E8211AFCF57D3807AEBFC7AF87B0057A1);
	const Il2CppFullySharedGenericAny L_28 = L_10;
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	Type_t* V_2 = NULL;
	Type_t* V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = ___0_count;
		V_4 = (bool)((((int32_t)L_0) < ((int32_t)0))? 1 : 0);
		bool L_1 = V_4;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_2 = ___1_instance;
		il2cpp_codegen_initobj(L_2, SizeOf_TArray_tB79A9A6E8211AFCF57D3807AEBFC7AF87B0057A1);
		V_5 = (bool)0;
		goto IL_00ab;
	}

IL_001b:
	{
		il2cpp_codegen_runtime_class_init_inline(PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_3;
		RuntimeObject* L_4 = V_0;
		V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, il2cpp_rgctx_data(method->rgctx_data, 4)));
		RuntimeObject* L_5 = V_1;
		V_6 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_5) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_6 = V_6;
		if (!L_6)
		{
			goto IL_004c;
		}
	}
	{
	}
	try
	{
		Il2CppFullySharedGenericAny* L_7 = ___1_instance;
		RuntimeObject* L_8 = V_1;
		int32_t L_9 = ___0_count;
		InterfaceActionInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 4), L_8, L_9, (Il2CppFullySharedGenericAny*)L_10);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_7, L_10, SizeOf_TArray_tB79A9A6E8211AFCF57D3807AEBFC7AF87B0057A1);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 1), (void**)(Il2CppFullySharedGenericAny*)L_7, (void*)L_10);
		V_5 = (bool)1;
		goto IL_00ab;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0046;
		}
		throw e;
	}

CATCH_0046:
	{
		RuntimeObject* L_11 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_004b;
	}

IL_004b:
	{
	}

IL_004c:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		V_2 = L_13;
		Type_t* L_14 = V_2;
		bool L_15;
		L_15 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_14, NULL);
		V_7 = (bool)((((int32_t)L_15) == ((int32_t)0))? 1 : 0);
		bool L_16 = V_7;
		if (!L_16)
		{
			goto IL_0073;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_17 = ___1_instance;
		il2cpp_codegen_initobj(L_17, SizeOf_TArray_tB79A9A6E8211AFCF57D3807AEBFC7AF87B0057A1);
		V_5 = (bool)0;
		goto IL_00ab;
	}

IL_0073:
	{
		Type_t* L_18 = V_2;
		Type_t* L_19;
		L_19 = VirtualFuncInvoker0< Type_t* >::Invoke(45, L_18);
		V_3 = L_19;
		Type_t* L_20 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC((Type_t*)NULL, L_20, NULL);
		V_8 = L_21;
		bool L_22 = V_8;
		if (!L_22)
		{
			goto IL_0094;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_23 = ___1_instance;
		il2cpp_codegen_initobj(L_23, SizeOf_TArray_tB79A9A6E8211AFCF57D3807AEBFC7AF87B0057A1);
		V_5 = (bool)0;
		goto IL_00ab;
	}

IL_0094:
	{
		Il2CppFullySharedGenericAny* L_24 = ___1_instance;
		Type_t* L_25 = V_3;
		int32_t L_26 = ___0_count;
		RuntimeArray* L_27;
		L_27 = Array_CreateInstance_m13B202130951A03AF5F52470A19E17D3AD2A8983(L_25, L_26, NULL);
		void* L_29 = UnBox_Any((RuntimeObject*)L_27, il2cpp_rgctx_data(method->rgctx_data, 1), L_28);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_24, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_29))), SizeOf_TArray_tB79A9A6E8211AFCF57D3807AEBFC7AF87B0057A1);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 1), (void**)(Il2CppFullySharedGenericAny*)L_24, (void*)(((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_29))));
		V_5 = (bool)1;
		goto IL_00ab;
	}

IL_00ab:
	{
		bool L_30 = V_5;
		return L_30;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* Unsafe_Add_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mAD356C5FCC414F8EDF133AE32854956A07B53A02_gshared (uint8_t* ___0_source, int32_t ___1_elementOffset, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_source;
		int32_t L_1 = ___1_elementOffset;
		uint32_t L_2 = sizeof(uint8_t);
		return ((uint8_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* Unsafe_Add_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m61D37B4D37DB6653882679C165C6BE5B741D4436_gshared (uint8_t* ___0_source, intptr_t ___1_elementOffset, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_source;
		intptr_t L_1 = ___1_elementOffset;
		uint32_t L_2 = sizeof(uint8_t);
		return ((uint8_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, (int32_t)L_2))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* Unsafe_Add_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m3B5A03651256D5530AE45EFC51984CBC71D27077_gshared (Il2CppChar* ___0_source, int32_t ___1_elementOffset, const RuntimeMethod* method) 
{
	{
		Il2CppChar* L_0 = ___0_source;
		int32_t L_1 = ___1_elementOffset;
		uint32_t L_2 = sizeof(Il2CppChar);
		return ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* Unsafe_Add_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mF05DC6B7FBABFAD1238842F58FFBA9D7E0332EC2_gshared (Il2CppChar* ___0_source, intptr_t ___1_elementOffset, const RuntimeMethod* method) 
{
	{
		Il2CppChar* L_0 = ___0_source;
		intptr_t L_1 = ___1_elementOffset;
		uint32_t L_2 = sizeof(Il2CppChar);
		return ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, (int32_t)L_2))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* Unsafe_Add_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_m57DFFC80F0596B8F9FFE0C7CA0C836C9B4EE71D3_gshared (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* ___0_source, int32_t ___1_elementOffset, const RuntimeMethod* method) 
{
	{
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_0 = ___0_source;
		int32_t L_1 = ___1_elementOffset;
		uint32_t L_2 = sizeof(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B);
		return ((Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CombineInstance_t77DDB096E69D0AD2690C57046C5ACD1239451BBE* Unsafe_Add_TisCombineInstance_t77DDB096E69D0AD2690C57046C5ACD1239451BBE_mF6B7AB440FF3DEC5FF05382CA3E41EA1845A412C_gshared (CombineInstance_t77DDB096E69D0AD2690C57046C5ACD1239451BBE* ___0_source, int32_t ___1_elementOffset, const RuntimeMethod* method) 
{
	{
		CombineInstance_t77DDB096E69D0AD2690C57046C5ACD1239451BBE* L_0 = ___0_source;
		int32_t L_1 = ___1_elementOffset;
		uint32_t L_2 = sizeof(CombineInstance_t77DDB096E69D0AD2690C57046C5ACD1239451BBE);
		return ((CombineInstance_t77DDB096E69D0AD2690C57046C5ACD1239451BBE*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D* Unsafe_Add_TisGlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D_mD0FE881762EA3BC7513711B399C017A82AE0496A_gshared (GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D* ___0_source, int32_t ___1_elementOffset, const RuntimeMethod* method) 
{
	{
		GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D* L_0 = ___0_source;
		int32_t L_1 = ___1_elementOffset;
		uint32_t L_2 = sizeof(GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D);
		return ((GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t* Unsafe_Add_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mAE1AE85A9993F5AD25A91F4F986D80935A0CF026_gshared (int32_t* ___0_source, int32_t ___1_elementOffset, const RuntimeMethod* method) 
{
	{
		int32_t* L_0 = ___0_source;
		int32_t L_1 = ___1_elementOffset;
		uint32_t L_2 = sizeof(int32_t);
		return ((int32_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t* Unsafe_Add_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m899362F38BE549883841837EC35E98C4A1E8D225_gshared (int32_t* ___0_source, int32_t ___1_elementOffset, const RuntimeMethod* method) 
{
	{
		int32_t* L_0 = ___0_source;
		int32_t L_1 = ___1_elementOffset;
		uint32_t L_2 = sizeof(int32_t);
		return ((int32_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NavMeshBuildMarkup_tC2D636663691297A05F32A8B2B8CAA7108FEE8AC* Unsafe_Add_TisNavMeshBuildMarkup_tC2D636663691297A05F32A8B2B8CAA7108FEE8AC_m0AF77E1B7E8A11E7CD6F764E9030BFF4392C1943_gshared (NavMeshBuildMarkup_tC2D636663691297A05F32A8B2B8CAA7108FEE8AC* ___0_source, int32_t ___1_elementOffset, const RuntimeMethod* method) 
{
	{
		NavMeshBuildMarkup_tC2D636663691297A05F32A8B2B8CAA7108FEE8AC* L_0 = ___0_source;
		int32_t L_1 = ___1_elementOffset;
		uint32_t L_2 = sizeof(NavMeshBuildMarkup_tC2D636663691297A05F32A8B2B8CAA7108FEE8AC);
		return ((NavMeshBuildMarkup_tC2D636663691297A05F32A8B2B8CAA7108FEE8AC*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NavMeshBuildSource_tAC4DFC9A75D986628DC167421C2ECB3606F0C5DD* Unsafe_Add_TisNavMeshBuildSource_tAC4DFC9A75D986628DC167421C2ECB3606F0C5DD_m6905F9DF39B240D9E136C951F80078FB0F901164_gshared (NavMeshBuildSource_tAC4DFC9A75D986628DC167421C2ECB3606F0C5DD* ___0_source, int32_t ___1_elementOffset, const RuntimeMethod* method) 
{
	{
		NavMeshBuildSource_tAC4DFC9A75D986628DC167421C2ECB3606F0C5DD* L_0 = ___0_source;
		int32_t L_1 = ___1_elementOffset;
		uint32_t L_2 = sizeof(NavMeshBuildSource_tAC4DFC9A75D986628DC167421C2ECB3606F0C5DD);
		return ((NavMeshBuildSource_tAC4DFC9A75D986628DC167421C2ECB3606F0C5DD*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject** Unsafe_Add_TisRuntimeObject_mC28B0645E6AC1C26510942FD04AD041A52567BF5_gshared (RuntimeObject** ___0_source, int32_t ___1_elementOffset, const RuntimeMethod* method) 
{
	{
		RuntimeObject** L_0 = ___0_source;
		int32_t L_1 = ___1_elementOffset;
		uint32_t L_2 = sizeof(RuntimeObject*);
		return ((RuntimeObject**)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023* Unsafe_Add_TisRaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_m70CB28701FA8663CD74BC13C707F8B56CCC20E15_gshared (RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023* ___0_source, int32_t ___1_elementOffset, const RuntimeMethod* method) 
{
	{
		RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023* L_0 = ___0_source;
		int32_t L_1 = ___1_elementOffset;
		uint32_t L_2 = sizeof(RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023);
		return ((RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t* Unsafe_Add_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m64BF56E1F82EC7352EC948EADDA6EFAB40132B86_gshared (int8_t* ___0_source, int32_t ___1_elementOffset, const RuntimeMethod* method) 
{
	{
		int8_t* L_0 = ___0_source;
		int32_t L_1 = ___1_elementOffset;
		uint32_t L_2 = sizeof(int8_t);
		return ((int8_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SomeStruct_tF35320787FA3D2839B1E75EBDCD3D6CCA6155BF9* Unsafe_Add_TisSomeStruct_tF35320787FA3D2839B1E75EBDCD3D6CCA6155BF9_m860BAC3EC472853AAD409CF3D69FB5B998A88C02_gshared (SomeStruct_tF35320787FA3D2839B1E75EBDCD3D6CCA6155BF9* ___0_source, int32_t ___1_elementOffset, const RuntimeMethod* method) 
{
	{
		SomeStruct_tF35320787FA3D2839B1E75EBDCD3D6CCA6155BF9* L_0 = ___0_source;
		int32_t L_1 = ___1_elementOffset;
		uint32_t L_2 = sizeof(SomeStruct_tF35320787FA3D2839B1E75EBDCD3D6CCA6155BF9);
		return ((SomeStruct_tF35320787FA3D2839B1E75EBDCD3D6CCA6155BF9*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD* Unsafe_Add_TisUICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD_mAA838FFDEC5BEFE26A17DCE2A23CFD6D86863E4A_gshared (UICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD* ___0_source, int32_t ___1_elementOffset, const RuntimeMethod* method) 
{
	{
		UICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD* L_0 = ___0_source;
		int32_t L_1 = ___1_elementOffset;
		uint32_t L_2 = sizeof(UICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD);
		return ((UICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC* Unsafe_Add_TisUILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC_m6154D5D73618DE5A0C65E6B2BCD7E0CD343B93E9_gshared (UILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC* ___0_source, int32_t ___1_elementOffset, const RuntimeMethod* method) 
{
	{
		UILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC* L_0 = ___0_source;
		int32_t L_1 = ___1_elementOffset;
		uint32_t L_2 = sizeof(UILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC);
		return ((UILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207* Unsafe_Add_TisUIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207_m1E90E7F4804917BA54D2E75BCB3FCFA65CA24485_gshared (UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207* ___0_source, int32_t ___1_elementOffset, const RuntimeMethod* method) 
{
	{
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207* L_0 = ___0_source;
		int32_t L_1 = ___1_elementOffset;
		uint32_t L_2 = sizeof(UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207);
		return ((UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t* Unsafe_Add_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m20E7B3895C9B8B8C4CBF0C72D2569C6F7DD33EC6_gshared (uint16_t* ___0_source, int32_t ___1_elementOffset, const RuntimeMethod* method) 
{
	{
		uint16_t* L_0 = ___0_source;
		int32_t L_1 = ___1_elementOffset;
		uint32_t L_2 = sizeof(uint16_t);
		return ((uint16_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t* Unsafe_Add_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mE6E7056C0A79DF3F536C439A95EB8BED9A953C96_gshared (uint32_t* ___0_source, int32_t ___1_elementOffset, const RuntimeMethod* method) 
{
	{
		uint32_t* L_0 = ___0_source;
		int32_t L_1 = ___1_elementOffset;
		uint32_t L_2 = sizeof(uint32_t);
		return ((uint32_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* Unsafe_Add_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mC77808122B5860918EFF6669AB4441C4AA90EACC_gshared (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_source, int32_t ___1_elementOffset, const RuntimeMethod* method) 
{
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_0 = ___0_source;
		int32_t L_1 = ___1_elementOffset;
		uint32_t L_2 = sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2);
		return ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* Unsafe_Add_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mFCC864A425627D2A1B78A127898202C0EEBAA3CE_gshared (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___0_source, int32_t ___1_elementOffset, const RuntimeMethod* method) 
{
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_0 = ___0_source;
		int32_t L_1 = ___1_elementOffset;
		uint32_t L_2 = sizeof(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3);
		return ((Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* Unsafe_Add_TisIl2CppFullySharedGenericAny_mDA4722F94AF13693FCE1583B641A792D2EA47924_gshared (Il2CppFullySharedGenericAny* ___0_source, int32_t ___1_elementOffset, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tBE6850158665A8E196430E1D80AEFF9AC121F5F9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_source;
		int32_t L_1 = ___1_elementOffset;
		uint32_t L_2 = SizeOf_T_tBE6850158665A8E196430E1D80AEFF9AC121F5F9;
		return ((Il2CppFullySharedGenericAny*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* Unsafe_Add_TisIl2CppFullySharedGenericAny_mC89D70E498F759E971238CF82E99E44CC68197DA_gshared (Il2CppFullySharedGenericAny* ___0_source, intptr_t ___1_elementOffset, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tEE9E2B0A67EF7877E2DDB454C5066EBB8C09D0DA = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_source;
		intptr_t L_1 = ___1_elementOffset;
		uint32_t L_2 = SizeOf_T_tEE9E2B0A67EF7877E2DDB454C5066EBB8C09D0DA;
		return ((Il2CppFullySharedGenericAny*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, (int32_t)L_2))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837* Unsafe_Add_TisOrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_mECCEF408D5A4C7D9CF866468C962FBCEB8D16A8D_gshared (OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837* ___0_source, int32_t ___1_elementOffset, const RuntimeMethod* method) 
{
	{
		OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837* L_0 = ___0_source;
		int32_t L_1 = ___1_elementOffset;
		uint32_t L_2 = sizeof(OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837);
		return ((OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LoadTextures_t5266AA4DE267A7C97DF5540A2EA6B6CCC3C10849* Unsafe_Add_TisLoadTextures_t5266AA4DE267A7C97DF5540A2EA6B6CCC3C10849_m1CE59735A852F891F1F255F417184340EBBE3CA6_gshared (LoadTextures_t5266AA4DE267A7C97DF5540A2EA6B6CCC3C10849* ___0_source, int32_t ___1_elementOffset, const RuntimeMethod* method) 
{
	{
		LoadTextures_t5266AA4DE267A7C97DF5540A2EA6B6CCC3C10849* L_0 = ___0_source;
		int32_t L_1 = ___1_elementOffset;
		uint32_t L_2 = sizeof(LoadTextures_t5266AA4DE267A7C97DF5540A2EA6B6CCC3C10849);
		return ((LoadTextures_t5266AA4DE267A7C97DF5540A2EA6B6CCC3C10849*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC* Unsafe_Add_TisSingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC_m8F9E4CAFBCF5A6DB4DD14B44D38BF20AA8D2FB6D_gshared (SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC* ___0_source, int32_t ___1_elementOffset, const RuntimeMethod* method) 
{
	{
		SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC* L_0 = ___0_source;
		int32_t L_1 = ___1_elementOffset;
		uint32_t L_2 = sizeof(SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC);
		return ((SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44* Unsafe_Add_TisWorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_m36FD7705490658F779614182387633AAB5FCA4E4_gshared (WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44* ___0_source, int32_t ___1_elementOffset, const RuntimeMethod* method) 
{
	{
		WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44* L_0 = ___0_source;
		int32_t L_1 = ___1_elementOffset;
		uint32_t L_2 = sizeof(WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44);
		return ((WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* Unsafe_AddByteOffset_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB9B2FBDA7C9D9ACEAAF1A13A21CB3820E4D6C42A_gshared (uint8_t* ___0_source, intptr_t ___1_byteOffset, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_source;
		intptr_t L_1 = ___1_byteOffset;
		return ((uint8_t*)il2cpp_codegen_add((intptr_t)L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* Unsafe_AddByteOffset_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m7A80584F05268AB9D9BA488678556DC7F23392AB_gshared (uint8_t* ___0_source, uint64_t ___1_byteOffset, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_source;
		uint64_t L_1 = ___1_byteOffset;
		intptr_t L_2;
		L_2 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D((void*)((uintptr_t)L_1), NULL);
		uint8_t* L_3;
		L_3 = il2cpp_unsafe_add_byte_offset<uint8_t,intptr_t>(L_0, L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* Unsafe_AddByteOffset_TisIl2CppFullySharedGenericAny_m023762698D869AA8F4D477B66833C0BCFC1EA25C_gshared (Il2CppFullySharedGenericAny* ___0_source, intptr_t ___1_byteOffset, const RuntimeMethod* method) 
{
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_source;
		intptr_t L_1 = ___1_byteOffset;
		return ((Il2CppFullySharedGenericAny*)il2cpp_codegen_add((intptr_t)L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* Unsafe_AddByteOffset_TisIl2CppFullySharedGenericAny_m77EFAC6DAA578E6C65CAC97578F1800F25019689_gshared (Il2CppFullySharedGenericAny* ___0_source, uint64_t ___1_byteOffset, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_source;
		uint64_t L_1 = ___1_byteOffset;
		intptr_t L_2;
		L_2 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D((void*)((uintptr_t)L_1), NULL);
		Il2CppFullySharedGenericAny* L_3;
		L_3 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, intptr_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_AreSame_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m17DCB1423518B0B3E4524EAC5FE26BA65A6BC92A_gshared (uint8_t* ___0_left, uint8_t* ___1_right, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_left;
		uint8_t* L_1 = ___1_right;
		return (bool)((((RuntimeObject*)(intptr_t)L_0) == ((RuntimeObject*)(intptr_t)L_1))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_AreSame_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mB37DE4456CA121DF4176470A637AAE3B95F46A1F_gshared (Il2CppChar* ___0_left, Il2CppChar* ___1_right, const RuntimeMethod* method) 
{
	{
		Il2CppChar* L_0 = ___0_left;
		Il2CppChar* L_1 = ___1_right;
		return (bool)((((RuntimeObject*)(intptr_t)L_0) == ((RuntimeObject*)(intptr_t)L_1))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_AreSame_TisIl2CppFullySharedGenericAny_mEFCD9F27093DEB04CA603DC1C6F306CE6DCCDC3C_gshared (Il2CppFullySharedGenericAny* ___0_left, Il2CppFullySharedGenericAny* ___1_right, const RuntimeMethod* method) 
{
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_left;
		Il2CppFullySharedGenericAny* L_1 = ___1_right;
		return (bool)((((RuntimeObject*)(intptr_t)L_0) == ((RuntimeObject*)(intptr_t)L_1))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Unsafe_As_TisRuntimeObject_mFDA1457944192D987E8EC451CC8BFB2E800D78A1_gshared (RuntimeObject* ___0_o, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_o;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mF141105DD72A5BC944BA8293BB695024D02DE30D_gshared (uint8_t* ___0_source, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_source;
		return (uint8_t*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m2498099B9F71500DEE1CFA774D816C5050D58A9C_gshared (uint8_t* ___0_source, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_source;
		return (Il2CppChar*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_mE44084244A44F949BF1E1AE8966DDA5A28EA5082_gshared (uint8_t* ___0_source, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_source;
		return (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CombineInstance_t77DDB096E69D0AD2690C57046C5ACD1239451BBE* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisCombineInstance_t77DDB096E69D0AD2690C57046C5ACD1239451BBE_m7102F58FBEB9694FEA64FA4BA92F10445CF13EF4_gshared (uint8_t* ___0_source, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_source;
		return (CombineInstance_t77DDB096E69D0AD2690C57046C5ACD1239451BBE*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisGlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D_m984DEE2EA3FEAF4E45CC5A5E8420A5BC4F9C2184_gshared (uint8_t* ___0_source, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_source;
		return (GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m22CF3813B9733A0CDBE0E8A325136D952A44698A_gshared (uint8_t* ___0_source, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_source;
		return (int32_t*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m8E434534B985BD5A763E40937F16E2FEB1EFFD8C_gshared (uint8_t* ___0_source, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_source;
		return (int32_t*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NavMeshBuildMarkup_tC2D636663691297A05F32A8B2B8CAA7108FEE8AC* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisNavMeshBuildMarkup_tC2D636663691297A05F32A8B2B8CAA7108FEE8AC_mDFC10418BAA624263FFBBC4B3144CE2AB93BBBD9_gshared (uint8_t* ___0_source, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_source;
		return (NavMeshBuildMarkup_tC2D636663691297A05F32A8B2B8CAA7108FEE8AC*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NavMeshBuildSource_tAC4DFC9A75D986628DC167421C2ECB3606F0C5DD* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisNavMeshBuildSource_tAC4DFC9A75D986628DC167421C2ECB3606F0C5DD_m2B1784ECF883AC2E8E204A98FD03FE20DC856243_gshared (uint8_t* ___0_source, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_source;
		return (NavMeshBuildSource_tAC4DFC9A75D986628DC167421C2ECB3606F0C5DD*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject** Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisRuntimeObject_m7DB7A86DF0CAE596697C48C03F15EE61EDA619D8_gshared (uint8_t* ___0_source, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_source;
		return (RuntimeObject**)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisRaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_m62C0198565E20436C4D67EF2C554D6DC0BF952B9_gshared (uint8_t* ___0_source, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_source;
		return (RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SomeStruct_tF35320787FA3D2839B1E75EBDCD3D6CCA6155BF9* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisSomeStruct_tF35320787FA3D2839B1E75EBDCD3D6CCA6155BF9_m84D400AA165A45B3DE19DABE42E8EEA039BB5E31_gshared (uint8_t* ___0_source, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_source;
		return (SomeStruct_tF35320787FA3D2839B1E75EBDCD3D6CCA6155BF9*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisUICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD_mB99D2878CE214D86A9B1BA2F3F93DD9D6C5D9480_gshared (uint8_t* ___0_source, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_source;
		return (UICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisUILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC_m1903C3AF5D6C2864FE38B75551F71D242FFA738A_gshared (uint8_t* ___0_source, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_source;
		return (UILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisUIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207_m096A0A30B3117AAB386D71C4E807D6BC43B35A7D_gshared (uint8_t* ___0_source, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_source;
		return (UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m8CD3F3B4E3E4EA8EAFE84DB40D862A314AFE6C2F_gshared (uint8_t* ___0_source, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_source;
		return (uint16_t*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mECFA2BF904F47BC0C95C31ED2DD33612380D2DB8_gshared (uint8_t* ___0_source, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_source;
		return (uint32_t*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m7F7BEFB9BB70E49F99DF2C761783F7B47712F6DF_gshared (uint8_t* ___0_source, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_source;
		return (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m6240D527C22997A820B644C0204AFAE1712E5743_gshared (uint8_t* ___0_source, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_source;
		return (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisOrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_mC4FD738B0067607B4B710D37A7B610661F585602_gshared (uint8_t* ___0_source, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_source;
		return (OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LoadTextures_t5266AA4DE267A7C97DF5540A2EA6B6CCC3C10849* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisLoadTextures_t5266AA4DE267A7C97DF5540A2EA6B6CCC3C10849_m49B118B0BCFF513B4DB63C13A30EE98B20075A61_gshared (uint8_t* ___0_source, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_source;
		return (LoadTextures_t5266AA4DE267A7C97DF5540A2EA6B6CCC3C10849*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisSingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC_m616F80AB4B82BC53D742CE5865AB69DEECC3EAC1_gshared (uint8_t* ___0_source, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_source;
		return (SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisWorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_mF1E726DE9BDC7573ADE984D127A07D04BB9F19AB_gshared (uint8_t* ___0_source, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_source;
		return (WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* Unsafe_As_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mFB63566144F982614BC997ACF976C6768FEDBB4C_gshared (Il2CppChar* ___0_source, const RuntimeMethod* method) 
{
	{
		Il2CppChar* L_0 = ___0_source;
		return (uint8_t*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* Unsafe_As_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m6EB81656367ABFE46E4CDD8AB8C3123E1BFFDCC6_gshared (Il2CppChar* ___0_source, const RuntimeMethod* method) 
{
	{
		Il2CppChar* L_0 = ___0_source;
		return (Il2CppChar*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DecCalc_t0E9BD1BAF25BAD15940FF4BAB400D012A8DEBCA9* Unsafe_As_TisDecimal_tDA6C877282B2D789CF97C0949661CC11D643969F_TisDecCalc_t0E9BD1BAF25BAD15940FF4BAB400D012A8DEBCA9_mAC31A6B0EE363D6AD04F11F629BBD69FD3F45894_gshared (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F* ___0_source, const RuntimeMethod* method) 
{
	{
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F* L_0 = ___0_source;
		return (DecCalc_t0E9BD1BAF25BAD15940FF4BAB400D012A8DEBCA9*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* Unsafe_As_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m750288389C1B4714A9DFC51DA537AD1507BD5320_gshared (int32_t* ___0_source, const RuntimeMethod* method) 
{
	{
		int32_t* L_0 = ___0_source;
		return (uint8_t*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* Unsafe_As_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mCFC3FDFDA844B03EFD3B3102FA653AF097D58B8F_gshared (int32_t* ___0_source, const RuntimeMethod* method) 
{
	{
		int32_t* L_0 = ___0_source;
		return (Il2CppChar*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t* Unsafe_As_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mBC79D59277D406B719AE11BF00E685C85405C227_gshared (int32_t* ___0_source, const RuntimeMethod* method) 
{
	{
		int32_t* L_0 = ___0_source;
		return (uint32_t*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t* Unsafe_As_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mF502BB692DEFE52066B62ADB4E3A9C3C9B8C692C_gshared (int64_t* ___0_source, const RuntimeMethod* method) 
{
	{
		int64_t* L_0 = ___0_source;
		return (uint64_t*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject** Unsafe_As_TisRuntimeObject_TisRuntimeObject_m9DBDCD08C3887118964A2A598815AFAE6903D44B_gshared (RuntimeObject** ___0_source, const RuntimeMethod* method) 
{
	{
		RuntimeObject** L_0 = ___0_source;
		return (RuntimeObject**)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99* Unsafe_As_TisRuntimeObject_TisVolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99_m55BDDA054187BA5DECD7DD18CA865FD40B8D64B5_gshared (RuntimeObject** ___0_source, const RuntimeMethod* method) 
{
	{
		RuntimeObject** L_0 = ___0_source;
		return (VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* Unsafe_As_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9077C523106B635218BC3F9171876E1F0BA50694_gshared (uint16_t* ___0_source, const RuntimeMethod* method) 
{
	{
		uint16_t* L_0 = ___0_source;
		return (uint8_t*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* Unsafe_As_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mC4DCE71843181DDCBC3CBC8DF25FA4731AC7C40E_gshared (uint16_t* ___0_source, const RuntimeMethod* method) 
{
	{
		uint16_t* L_0 = ___0_source;
		return (Il2CppChar*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* Unsafe_As_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mAF06A659941D15118FC1E4800E3A7A0F262628A4_gshared (Il2CppFullySharedGenericAny* ___0_source, const RuntimeMethod* method) 
{
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_source;
		return (Il2CppFullySharedGenericAny*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Unsafe_AsPointer_TisRuntimeObject_m1273FB5BB30ABB03C0EAD425C97F04F8E21D102B_gshared (RuntimeObject** ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject** L_0 = ___0_value;
		return (void*)(((uintptr_t)L_0));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Unsafe_AsPointer_TisIl2CppFullySharedGenericAny_mE85961ECFFC7310EBEF309E6E67AD0FED2F9030B_gshared (Il2CppFullySharedGenericAny* ___0_value, const RuntimeMethod* method) 
{
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_value;
		return (void*)(((uintptr_t)L_0));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Unsafe_AsPointer_TisDigitsAndNullTerminator_tEF216B2D9886B3B6EBDBBA0E540214C013C02ECA_mE3F141C1F8E9FAEEA53503076434A94CAB453BD4_gshared (DigitsAndNullTerminator_tEF216B2D9886B3B6EBDBBA0E540214C013C02ECA* ___0_value, const RuntimeMethod* method) 
{
	{
		DigitsAndNullTerminator_tEF216B2D9886B3B6EBDBBA0E540214C013C02ECA* L_0 = ___0_value;
		return (void*)(((uintptr_t)L_0));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* Unsafe_AsRef_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB7B94F08746E5992AF5DBE62DC46A96AEC7643E9_gshared (uint8_t* ___0_source, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_source;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* Unsafe_AsRef_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m0AEA751C6A2C62806F1E18D4CEC476D2C43DC3EE_gshared (void* ___0_source, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		return (uint8_t*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* Unsafe_AsRef_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m1669BF83EB856804C2D09104E9571A745C9FA0E9_gshared (void* ___0_source, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		return (Il2CppChar*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* Unsafe_AsRef_TisIl2CppFullySharedGenericAny_m088920550101BD3FA6B40E99A5F107C35BE752FA_gshared (Il2CppFullySharedGenericAny* ___0_source, const RuntimeMethod* method) 
{
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_source;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* Unsafe_AsRef_TisIl2CppFullySharedGenericAny_mD269D4D95DA51D3CF4E4025805638814158802A3_gshared (void* ___0_source, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		return (Il2CppFullySharedGenericAny*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m6AB8211F6DBEE7422B923884987D1641B66C295A_gshared (uint8_t* ___0_left, uint8_t* ___1_right, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_left;
		uint8_t* L_1 = ___1_right;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m99B40E16F31CA21E0E84A05B3F39012D85AEB80C_gshared (Il2CppChar* ___0_left, Il2CppChar* ___1_right, const RuntimeMethod* method) 
{
	{
		Il2CppChar* L_0 = ___0_left;
		Il2CppChar* L_1 = ___1_right;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_mD66914D0AF8FE91C367B5FDC78E254D6325938BC_gshared (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* ___0_left, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* ___1_right, const RuntimeMethod* method) 
{
	{
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_0 = ___0_left;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_1 = ___1_right;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisCombineInstance_t77DDB096E69D0AD2690C57046C5ACD1239451BBE_m37B8132096A072B2DCEDA26D37966E33D0ADD02A_gshared (CombineInstance_t77DDB096E69D0AD2690C57046C5ACD1239451BBE* ___0_left, CombineInstance_t77DDB096E69D0AD2690C57046C5ACD1239451BBE* ___1_right, const RuntimeMethod* method) 
{
	{
		CombineInstance_t77DDB096E69D0AD2690C57046C5ACD1239451BBE* L_0 = ___0_left;
		CombineInstance_t77DDB096E69D0AD2690C57046C5ACD1239451BBE* L_1 = ___1_right;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisGlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D_m6CFBBCC7C1D3DAA76387424600FF290E714344FD_gshared (GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D* ___0_left, GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D* ___1_right, const RuntimeMethod* method) 
{
	{
		GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D* L_0 = ___0_left;
		GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D* L_1 = ___1_right;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3C11A66104F35B278BDABE69A0F7516708E4C623_gshared (int32_t* ___0_left, int32_t* ___1_right, const RuntimeMethod* method) 
{
	{
		int32_t* L_0 = ___0_left;
		int32_t* L_1 = ___1_right;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m38CEF1627C0A085C4FEE14E13E8A1F5D3361B2E2_gshared (int32_t* ___0_left, int32_t* ___1_right, const RuntimeMethod* method) 
{
	{
		int32_t* L_0 = ___0_left;
		int32_t* L_1 = ___1_right;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisNavMeshBuildMarkup_tC2D636663691297A05F32A8B2B8CAA7108FEE8AC_m822A6CB4CBBED944DD5D029E0DBE16A85F943C16_gshared (NavMeshBuildMarkup_tC2D636663691297A05F32A8B2B8CAA7108FEE8AC* ___0_left, NavMeshBuildMarkup_tC2D636663691297A05F32A8B2B8CAA7108FEE8AC* ___1_right, const RuntimeMethod* method) 
{
	{
		NavMeshBuildMarkup_tC2D636663691297A05F32A8B2B8CAA7108FEE8AC* L_0 = ___0_left;
		NavMeshBuildMarkup_tC2D636663691297A05F32A8B2B8CAA7108FEE8AC* L_1 = ___1_right;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisNavMeshBuildSource_tAC4DFC9A75D986628DC167421C2ECB3606F0C5DD_mCD3F041F0C289DF133B0D2F9A9966FA8D8D7500A_gshared (NavMeshBuildSource_tAC4DFC9A75D986628DC167421C2ECB3606F0C5DD* ___0_left, NavMeshBuildSource_tAC4DFC9A75D986628DC167421C2ECB3606F0C5DD* ___1_right, const RuntimeMethod* method) 
{
	{
		NavMeshBuildSource_tAC4DFC9A75D986628DC167421C2ECB3606F0C5DD* L_0 = ___0_left;
		NavMeshBuildSource_tAC4DFC9A75D986628DC167421C2ECB3606F0C5DD* L_1 = ___1_right;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisRuntimeObject_m7A1AD8D8389B88EF0E71789B8757AE7DF8649868_gshared (RuntimeObject** ___0_left, RuntimeObject** ___1_right, const RuntimeMethod* method) 
{
	{
		RuntimeObject** L_0 = ___0_left;
		RuntimeObject** L_1 = ___1_right;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisRaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_m4D277C9842C21F91AE1724D0050964E117D0FBAC_gshared (RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023* ___0_left, RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023* ___1_right, const RuntimeMethod* method) 
{
	{
		RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023* L_0 = ___0_left;
		RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023* L_1 = ___1_right;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisSomeStruct_tF35320787FA3D2839B1E75EBDCD3D6CCA6155BF9_m5E2F3420A2C3DD14A785EC18BECC87E6A28A43FA_gshared (SomeStruct_tF35320787FA3D2839B1E75EBDCD3D6CCA6155BF9* ___0_left, SomeStruct_tF35320787FA3D2839B1E75EBDCD3D6CCA6155BF9* ___1_right, const RuntimeMethod* method) 
{
	{
		SomeStruct_tF35320787FA3D2839B1E75EBDCD3D6CCA6155BF9* L_0 = ___0_left;
		SomeStruct_tF35320787FA3D2839B1E75EBDCD3D6CCA6155BF9* L_1 = ___1_right;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisUICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD_m51325CB92DEB2AA64FA04EA5FD3B96BAC02346F5_gshared (UICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD* ___0_left, UICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD* ___1_right, const RuntimeMethod* method) 
{
	{
		UICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD* L_0 = ___0_left;
		UICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD* L_1 = ___1_right;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisUILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC_m74B74BF68E063EEB8C352B3E20CF3FB5053A4BAC_gshared (UILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC* ___0_left, UILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC* ___1_right, const RuntimeMethod* method) 
{
	{
		UILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC* L_0 = ___0_left;
		UILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC* L_1 = ___1_right;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisUIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207_m16109C53895250E367C1E70FF03B972477267373_gshared (UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207* ___0_left, UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207* ___1_right, const RuntimeMethod* method) 
{
	{
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207* L_0 = ___0_left;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207* L_1 = ___1_right;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mCBE292B15305D5E6FD5EE285B036FE24DD6CB344_gshared (uint32_t* ___0_left, uint32_t* ___1_right, const RuntimeMethod* method) 
{
	{
		uint32_t* L_0 = ___0_left;
		uint32_t* L_1 = ___1_right;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m936222FEDED90B25F54ABF51E58CBB46D8A1EB82_gshared (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_left, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_right, const RuntimeMethod* method) 
{
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_0 = ___0_left;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_1 = ___1_right;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m73DB7AC8DBEA26A8B9032FAD31A6412EF15CF3CC_gshared (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___0_left, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___1_right, const RuntimeMethod* method) 
{
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_0 = ___0_left;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_1 = ___1_right;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisIl2CppFullySharedGenericAny_m731B9B0C5A4B349E4545E7AAAB44731B9ADB6597_gshared (Il2CppFullySharedGenericAny* ___0_left, Il2CppFullySharedGenericAny* ___1_right, const RuntimeMethod* method) 
{
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_left;
		Il2CppFullySharedGenericAny* L_1 = ___1_right;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisOrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_mEF5028C8208E7B962C4AE65F3F833DDD1BC5ECF9_gshared (OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837* ___0_left, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837* ___1_right, const RuntimeMethod* method) 
{
	{
		OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837* L_0 = ___0_left;
		OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837* L_1 = ___1_right;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisLoadTextures_t5266AA4DE267A7C97DF5540A2EA6B6CCC3C10849_m2A0CBFF2A78E507E2DD0A323944A50E83CA52AD3_gshared (LoadTextures_t5266AA4DE267A7C97DF5540A2EA6B6CCC3C10849* ___0_left, LoadTextures_t5266AA4DE267A7C97DF5540A2EA6B6CCC3C10849* ___1_right, const RuntimeMethod* method) 
{
	{
		LoadTextures_t5266AA4DE267A7C97DF5540A2EA6B6CCC3C10849* L_0 = ___0_left;
		LoadTextures_t5266AA4DE267A7C97DF5540A2EA6B6CCC3C10849* L_1 = ___1_right;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisSingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC_m0AB30724B76BE4817036FFFD56424DB67F13E359_gshared (SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC* ___0_left, SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC* ___1_right, const RuntimeMethod* method) 
{
	{
		SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC* L_0 = ___0_left;
		SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC* L_1 = ___1_right;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisWorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_m4146B9DC73A3CD4EE2DD174D0FEEFF8BFD2F0D8E_gshared (WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44* ___0_left, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44* ___1_right, const RuntimeMethod* method) 
{
	{
		WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44* L_0 = ___0_left;
		WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44* L_1 = ___1_right;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 Unsafe_Read_TisVector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489_mFD33791C135FF5212E900623875C092D42844E4D_gshared (void* ___0_source, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_1 = (*(Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489*)L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unsafe_Read_TisIl2CppFullySharedGenericAny_mF6B28073E683AAE891ED373C5F5F29DA2A0708A2_gshared (void* ___0_source, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tB42CCB1CEED288E2BEBBDFE4BE22B8CB6F084B54 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_tB42CCB1CEED288E2BEBBDFE4BE22B8CB6F084B54);
	{
		void* L_0 = ___0_source;
		il2cpp_codegen_memcpy(L_1, L_0, SizeOf_T_tB42CCB1CEED288E2BEBBDFE4BE22B8CB6F084B54);
		il2cpp_codegen_memcpy(il2cppRetVal, L_1, SizeOf_T_tB42CCB1CEED288E2BEBBDFE4BE22B8CB6F084B54);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 Unsafe_ReadUnaligned_TisVector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489_m23E7A727856D98E5D1D8129FB27CEA2715940075_gshared (uint8_t* ___0_source, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_source;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_1 = (*(Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489*)L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Unsafe_ReadUnaligned_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m9D178787984E8CE025EAF941A7B5E8D73BAE8D1B_gshared (uint8_t* ___0_source, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_source;
		int32_t L_1 = (*(int32_t*)L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t Unsafe_ReadUnaligned_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mED059E50CA4EF7236D4C1EFAD1A19C3D36712F06_gshared (uint8_t* ___0_source, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_source;
		uint16_t L_1 = (*(uint16_t*)L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Unsafe_ReadUnaligned_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m43042C9B34E5D513AF723172B137C4322F3EDC74_gshared (uint8_t* ___0_source, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_source;
		uint32_t L_1 = (*(uint32_t*)L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t Unsafe_ReadUnaligned_TisUIntPtr_t_mD4B64D4FDF6F43C3488DA13281F5AA0ECC24672E_gshared (uint8_t* ___0_source, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_source;
		uintptr_t L_1 = (*(uintptr_t*)L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unsafe_ReadUnaligned_TisIl2CppFullySharedGenericAny_m42C276800437B81F51F1F38619B499B6AAFB0021_gshared (uint8_t* ___0_source, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tE109D24A290E1158759C26079ED706B46290FAE5 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_tE109D24A290E1158759C26079ED706B46290FAE5);
	{
		uint8_t* L_0 = ___0_source;
		il2cpp_codegen_memcpy(L_1, L_0, SizeOf_T_tE109D24A290E1158759C26079ED706B46290FAE5);
		il2cpp_codegen_memcpy(il2cppRetVal, L_1, SizeOf_T_tE109D24A290E1158759C26079ED706B46290FAE5);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Unsafe_SizeOf_TisVector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489_mBED8A470840454C70486BC2C85538178BA1FCB07_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Unsafe_SizeOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1CB1161B53871FE075F5881D9521D0476E1DF691_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(uint8_t);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Unsafe_SizeOf_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m23B522F69D7973DF00CE97B464C99D7C5CC64DEA_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(Il2CppChar);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Unsafe_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m9AE030E4068ECDA11DD67F66251D87744ECFA98A_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(int32_t);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Unsafe_SizeOf_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mA6131DF2439BB55C289E1DFA433D0DD92D7BA5E2_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(uint16_t);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Unsafe_SizeOf_TisIl2CppFullySharedGenericAny_mD5748385042811E049C06FFD865AFD213C5FA9EB_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t77C4AF644C0D2AE4F0E9399E7AED3FED3426FBD7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	{
		uint32_t L_0 = SizeOf_T_t77C4AF644C0D2AE4F0E9399E7AED3FED3426FBD7;
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t* UnsafeUtility_AsRef_TisIntPtr_t_m5E80CE586FADFB0EE0E808A1A736F9BF28C2B28B_gshared (void* ___0_ptr, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_ptr;
		return (intptr_t*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* UnsafeUtility_AsRef_TisIl2CppFullySharedGenericStruct_m78B0690121A96EFFDA7D6D3ADAF97940CF8136BE_gshared (void* ___0_ptr, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_ptr;
		return (Il2CppFullySharedGenericStruct*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D UnsafeUtility_ReadArrayElement_TisBatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D_mAD2E8BB847754DAFE09F5868548BEDDA822A2617_gshared (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D);
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D L_3 = (*(BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t UnsafeUtility_ReadArrayElement_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m06447B534673E0861DE4F55616DFAF9BD7DCBCC6_gshared (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(uint8_t);
		uint8_t L_3 = (*(uint8_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B UnsafeUtility_ReadArrayElement_TisContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B_m27C9AC27DE15EAB418444BE62AD9C2CE19317991_gshared (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B);
		ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B L_3 = (*(ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0 UnsafeUtility_ReadArrayElement_TisCullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0_mFD2AC538DAACCF1C5AAE44C0B4758D3A6A4C54EF_gshared (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0);
		CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0 L_3 = (*(CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_gshared (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(int32_t);
		int32_t L_3 = (*(int32_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21 UnsafeUtility_ReadArrayElement_TisLightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21_m2ED1FB77CEDEF6090E5857DAA0CE6F3AFC6C35E4_gshared (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21);
		LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21 L_3 = (*(LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 UnsafeUtility_ReadArrayElement_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m200AA8F5A5776F6CAEA9E79B6551EC01D4316611_gshared (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_3 = (*(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960 UnsafeUtility_ReadArrayElement_TisModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960_mEA45FBD76E48DCE01C215C48D8C647B488C60516_gshared (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960);
		ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960 L_3 = (*(ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C UnsafeUtility_ReadArrayElement_TisPlane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C_mEB527AAA71722D961891591C3A13D3FDD83B42A5_gshared (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C);
		Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C L_3 = (*(Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 UnsafeUtility_ReadArrayElement_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_mC90C0EE3D32DDFEF22B982217F27BA07286AC2B7_gshared (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = (*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 UnsafeUtility_ReadArrayElement_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m113285A6894774BBBB284A644C2D7094F30AB442_gshared (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericAny_m295186AA082411C57485F8BDB824E4D8AC1C6D93_gshared (void* ___0_source, int32_t ___1_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t3818EBA71DF5EA591716A05E0BBD988D81931B5C = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_t3818EBA71DF5EA591716A05E0BBD988D81931B5C);
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = SizeOf_T_t3818EBA71DF5EA591716A05E0BBD988D81931B5C;
		il2cpp_codegen_memcpy(L_3, ((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))), SizeOf_T_t3818EBA71DF5EA591716A05E0BBD988D81931B5C);
		il2cpp_codegen_memcpy(il2cppRetVal, L_3, SizeOf_T_t3818EBA71DF5EA591716A05E0BBD988D81931B5C);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisIntPtr_t_mB2B3CFF1CB804C99734D4E2F5D8A8C9DB0D209A8_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(intptr_t);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisIl2CppFullySharedGenericStruct_mB6FBF9DDC79FEC02EC8705E9E527E1CD495564BF_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tE6588938356AD51CD7B5532933E8B84E7779C6E2 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	{
		uint32_t L_0 = SizeOf_T_tE6588938356AD51CD7B5532933E8B84E7779C6E2;
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisBatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D_m91B4BE7F47C68D100E0A963FE8AEDB5C491546FA_gshared (void* ___0_destination, int32_t ___1_index, BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D);
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D L_3 = ___2_value;
		*(BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m193B136343991E144053A14C8C435C19E5516EE0_gshared (void* ___0_destination, int32_t ___1_index, uint8_t ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(uint8_t);
		uint8_t L_3 = ___2_value;
		*(uint8_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B_mF19D462EAE007A50E5E2D633559CE72611626837_gshared (void* ___0_destination, int32_t ___1_index, ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B);
		ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B L_3 = ___2_value;
		*(ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisCullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0_mEF6442BF2C415D9A5FFD255E882378DF7F682E19_gshared (void* ___0_destination, int32_t ___1_index, CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0);
		CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0 L_3 = ___2_value;
		*(CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0DD1CC90B2F1EF5041F2F4E1DABB58224229F0D7_gshared (void* ___0_destination, int32_t ___1_index, int32_t ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(int32_t);
		int32_t L_3 = ___2_value;
		*(int32_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisLightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21_m6113BA4FEE412326B8C4AE48EF490E280EF24144_gshared (void* ___0_destination, int32_t ___1_index, LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21);
		LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21 L_3 = ___2_value;
		*(LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_mDED3D71F106839CF27D02475C04EB53AFC379717_gshared (void* ___0_destination, int32_t ___1_index, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_3 = ___2_value;
		*(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960_m984D59C779E69C17ED01C8FAB083CE6F114D6E44_gshared (void* ___0_destination, int32_t ___1_index, ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960);
		ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960 L_3 = ___2_value;
		*(ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisPlane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C_m5752F3073072D6DCB16C429071ED8126C1CB6502_gshared (void* ___0_destination, int32_t ___1_index, Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C);
		Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C L_3 = ___2_value;
		*(Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m8FECF9726B6A90FEADC960133A19868C171B28E9_gshared (void* ___0_destination, int32_t ___1_index, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = ___2_value;
		*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mC08010A74AC1BF608813C293C4C52F4EF4B30106_gshared (void* ___0_destination, int32_t ___1_index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___2_value;
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisIl2CppFullySharedGenericAny_m3C86E25D63AB95F3D572F8010D623EB7C6D78283_gshared (void* ___0_destination, int32_t ___1_index, Il2CppFullySharedGenericAny ___2_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t9B5DAD81EFECDA494525FB73A37EE675A422B5E5 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_t9B5DAD81EFECDA494525FB73A37EE675A422B5E5);
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = SizeOf_T_t9B5DAD81EFECDA494525FB73A37EE675A422B5E5;
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___2_value : &___2_value), SizeOf_T_t9B5DAD81EFECDA494525FB73A37EE675A422B5E5);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))), L_3, SizeOf_T_t9B5DAD81EFECDA494525FB73A37EE675A422B5E5);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 0), (void**)(Il2CppFullySharedGenericAny*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))), (void*)L_3);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A Vector_AsVectorUInt64_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m0D538510931D731CE9075661C07B0DECAAC84B82_gshared (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___0_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_1;
		L_1 = Vector_1_op_Explicit_m5E44D3923BF92F437AEC34CDE0CBD6130883B0B7(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A Vector_AsVectorUInt64_TisIl2CppFullySharedGenericStruct_mD3B6243B6DD2F19C7DA294F642D66F699D797811_gshared (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 ___0_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_1;
		L_1 = ((  Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A (*) (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 Vector_Equals_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m1E49423160D9D2F662A38FDEE88842FC26B67EBC_gshared (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___0_left, Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___1_right, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_0 = ___0_left;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_1 = ___1_right;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_2;
		L_2 = Vector_1_Equals_m6F913845CB1E8A1A753B3C187A8EB840C36F5ADF_inline(L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 Vector_Equals_TisIl2CppFullySharedGenericStruct_m589C7C54FDBBA8A38CC7672C2E2734EB16BDFD24_gshared (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 ___0_left, Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 ___1_right, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_0 = ___0_left;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_1 = ___1_right;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_2;
		L_2 = ((  Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 (*) (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2, Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Volatile_Read_TisRuntimeObject_mDE75C7462350B2A7FB1546BCE22D13CBD69AC088_gshared (RuntimeObject** ___0_location, const RuntimeMethod* method) 
{
	{
		RuntimeObject** L_0 = ___0_location;
		VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99* L_1;
		L_1 = il2cpp_unsafe_as_ref<VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99>(L_0);
		RuntimeObject* L_2 = L_1->___Value;
		il2cpp_codegen_memory_barrier();
		RuntimeObject* L_3;
		L_3 = il2cpp_unsafe_as<RuntimeObject*>(L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Volatile_Write_TisRuntimeObject_mBB6C58646958F01615FEBF405DCE2A9926F81962_gshared (RuntimeObject** ___0_location, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject** L_0 = ___0_location;
		VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99* L_1;
		L_1 = il2cpp_unsafe_as_ref<VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99>(L_0);
		RuntimeObject* L_2 = ___1_value;
		il2cpp_codegen_memory_barrier();
		L_1->___Value = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___Value), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m2A21711A3D655B51E421ACBEA3F03A09C8BBC250_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m16C827D0F6107B7998F6C99B57F7CC2F181E2198(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisBoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485_mA9E7AA6DB293483965B65EEEBF63885DEF084EA2_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisBoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485_m8F344250A2F9E6EE6DDBA6BA833BB36D0F272B66(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mFE98C0ECD8751FEC86E5F9CD2AFC20794571C81C_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mBBCB804F367E06EA4D482F1B69165DD2B5BF38FF(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisRuntimeObject_m6C6E2EDC433DCAB90206712FB63993865A9B9305_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisRuntimeObject_m4E17F588B090C1DADAE2D986BDA407DECEAC020F(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m97DBB59374BCA99C98C45F169AF69955608B68AA_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m2C5F5CF80D13B041768C7845C5AAEEC02BB683BA(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisRectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8_m7C42EB46E69BD2515C39AB6013A0763C6479AD66_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisRectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8_mF6949D9EDD480E6666CD975C66487AAD6ABC7D11(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m032CA5A330B4032D164F88B2B40B6A7F2590357F_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mE0C65F4221E48BB07F75856972A0CCDAE284AB9F(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisVector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_m0E8E39845CA3F1BFADAC1B15E849E5885D813E6F_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisVector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_mC8EF710494C8986B279262C6C64947BE2C1DC55C(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mA88A16DC097E207AD6CE15E89D3B94DBB01BDACE_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m1AB8BF0921C24186B3C43FC4341AAD2F6FE87C4D(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m28D19B06528A4614AF9C3E29DC8274DE067868D8_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_mB00220519A80AA5ACE36B7DBA2E6A6CB796302AF(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m3CD9CD3C768BBCC83DD02B2C76300A03AF1B1AD6_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mED1DC338E5DB62F3E64F6272A9F12150DA5CC1B9(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisIl2CppFullySharedGenericAny_m8B414261A078E3FE7517FAF2F9E944969F6B73E2_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Tween_get_isRelative_mC31C34D21C3953F9AA7F25C0429BEBE45D2DBAE2_inline (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CisRelativeU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Tween_set_isRelative_m881085052780C20122B970FA26766E551DA3B8EB_inline (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___U3CisRelativeU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DOGetter_1_Invoke_m2E3E6152AEB758D99AEC826BB5830B5C8BDB36EB_gshared_inline (DOGetter_1_t423CA9B377A96EA7C69ABA0C83C81B8D5B045E85* __this, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 DOGetter_1_Invoke_m371680D24D99D662F517503519BCBDC9B73F61B8_gshared_inline (DOGetter_1_tB89DD12456B8E79576BB70E1CA6DF899686410D3* __this, const RuntimeMethod* method) 
{
	typedef Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D DOGetter_1_Invoke_m31C3B7B68D6A7D1D2804D66A2C1C7B9C7B4A3B89_gshared_inline (DOGetter_1_t64F1C0E113DC45CC9A1FD194A80B7B4C40AC4923* __this, const RuntimeMethod* method) 
{
	typedef Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float DOGetter_1_Invoke_m2F5C065E2F5DDECAB3FD41881B295B9DC733EF52_gshared_inline (DOGetter_1_tE8B39477E96408653D0242624F4D7E48ABFD1B03* __this, const RuntimeMethod* method) 
{
	typedef float (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t DOGetter_1_Invoke_m9872D509AF7B5CCA6FA8EAC070C88AE5DDEFA786_gshared_inline (DOGetter_1_t187AC9EC362AB6EF9475A1B6469E2261EDF9DEE1* __this, const RuntimeMethod* method) 
{
	typedef uint32_t (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t DOGetter_1_Invoke_m8E364315F35A30983963B78D07FE87C11D434F86_gshared_inline (DOGetter_1_tF4FBD9712869BD6129C41ADBD9D3DCD51CBB4746* __this, const RuntimeMethod* method) 
{
	typedef uint64_t (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 DOGetter_1_Invoke_mEAE67401967EACB6626BF325E4D5A4549B591E24_gshared_inline (DOGetter_1_t13276681BE97FCE6AB699EF1F894EA98C825FE66* __this, const RuntimeMethod* method) 
{
	typedef Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 DOGetter_1_Invoke_m705D63DDD8D645F289BFC35E1BCE02E731AE6F34_gshared_inline (DOGetter_1_t709462C08281F3AA5DFEF36CAF91404B1004C338* __this, const RuntimeMethod* method) 
{
	typedef Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 DOGetter_1_Invoke_m1DA7F4565AC91CD75B46CA73C3D72341775D7022_gshared_inline (DOGetter_1_t7663EC1A34326612C559E1AC30ED719944D21731* __this, const RuntimeMethod* method) 
{
	typedef Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 Vector_1_Equals_m6F913845CB1E8A1A753B3C187A8EB840C36F5ADF_gshared_inline (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___0_left, Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___1_right, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t* V_0 = NULL;
	int32_t V_1 = 0;
	int8_t* V_2 = NULL;
	int32_t V_3 = 0;
	uint16_t* V_4 = NULL;
	int32_t V_5 = 0;
	int16_t* V_6 = NULL;
	int32_t V_7 = 0;
	uint32_t* V_8 = NULL;
	int32_t V_9 = 0;
	int32_t* V_10 = NULL;
	int32_t V_11 = 0;
	uint64_t* V_12 = NULL;
	int32_t V_13 = 0;
	int64_t* V_14 = NULL;
	int32_t V_15 = 0;
	float* V_16 = NULL;
	int32_t V_17 = 0;
	double* V_18 = NULL;
	int32_t V_19 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A V_20;
	memset((&V_20), 0, sizeof(V_20));
	uint8_t* G_B5_0 = NULL;
	uint8_t* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	uint8_t* G_B6_1 = NULL;
	int8_t* G_B13_0 = NULL;
	int8_t* G_B12_0 = NULL;
	int32_t G_B14_0 = 0;
	int8_t* G_B14_1 = NULL;
	uint16_t* G_B21_0 = NULL;
	uint16_t* G_B20_0 = NULL;
	int32_t G_B22_0 = 0;
	uint16_t* G_B22_1 = NULL;
	int16_t* G_B29_0 = NULL;
	int16_t* G_B28_0 = NULL;
	int32_t G_B30_0 = 0;
	int16_t* G_B30_1 = NULL;
	uint32_t* G_B37_0 = NULL;
	uint32_t* G_B36_0 = NULL;
	uint32_t G_B38_0 = 0;
	uint32_t* G_B38_1 = NULL;
	int32_t* G_B45_0 = NULL;
	int32_t* G_B44_0 = NULL;
	int32_t G_B46_0 = 0;
	int32_t* G_B46_1 = NULL;
	uint64_t* G_B53_0 = NULL;
	uint64_t* G_B52_0 = NULL;
	uint64_t G_B54_0 = 0;
	uint64_t* G_B54_1 = NULL;
	int64_t* G_B61_0 = NULL;
	int64_t* G_B60_0 = NULL;
	int64_t G_B62_0 = 0;
	int64_t* G_B62_1 = NULL;
	float* G_B69_0 = NULL;
	float* G_B68_0 = NULL;
	float G_B70_0 = 0.0f;
	float* G_B70_1 = NULL;
	double* G_B77_0 = NULL;
	double* G_B76_0 = NULL;
	double G_B78_0 = 0.0;
	double* G_B78_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B85_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B84_0 = NULL;
	int32_t G_B86_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B86_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B88_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B87_0 = NULL;
	int32_t G_B89_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B89_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B91_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B90_0 = NULL;
	int32_t G_B92_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B92_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B94_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B93_0 = NULL;
	int32_t G_B95_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B95_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B97_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B96_0 = NULL;
	int32_t G_B98_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B98_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B100_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B99_0 = NULL;
	int32_t G_B101_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B101_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B103_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B102_0 = NULL;
	int32_t G_B104_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B104_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B106_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B105_0 = NULL;
	int32_t G_B107_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B107_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B109_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B108_0 = NULL;
	int32_t G_B110_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B110_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B112_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B111_0 = NULL;
	int32_t G_B113_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B113_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B115_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B114_0 = NULL;
	int32_t G_B116_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B116_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B118_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B117_0 = NULL;
	int32_t G_B119_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B119_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B121_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B120_0 = NULL;
	int32_t G_B122_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B122_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B124_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B123_0 = NULL;
	int32_t G_B125_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B125_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B127_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B126_0 = NULL;
	int32_t G_B128_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B128_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B130_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B129_0 = NULL;
	int32_t G_B131_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B131_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B135_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B134_0 = NULL;
	int32_t G_B136_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B136_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B138_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B137_0 = NULL;
	int32_t G_B139_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B139_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B141_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B140_0 = NULL;
	int32_t G_B142_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B142_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B144_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B143_0 = NULL;
	int32_t G_B145_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B145_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B147_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B146_0 = NULL;
	int32_t G_B148_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B148_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B150_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B149_0 = NULL;
	int32_t G_B151_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B151_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B153_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B152_0 = NULL;
	int32_t G_B154_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B154_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B156_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B155_0 = NULL;
	int32_t G_B157_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B157_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B159_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B158_0 = NULL;
	int32_t G_B160_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B160_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B162_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B161_0 = NULL;
	int32_t G_B163_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B163_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B165_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B164_0 = NULL;
	int32_t G_B166_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B166_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B168_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B167_0 = NULL;
	int32_t G_B169_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B169_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B171_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B170_0 = NULL;
	int32_t G_B172_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B172_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B174_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B173_0 = NULL;
	int32_t G_B175_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B175_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B177_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B176_0 = NULL;
	int32_t G_B178_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B178_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B180_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B179_0 = NULL;
	int32_t G_B181_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B181_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B185_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B184_0 = NULL;
	int32_t G_B186_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B186_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B188_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B187_0 = NULL;
	int32_t G_B189_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B189_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B191_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B190_0 = NULL;
	int32_t G_B192_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B192_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B194_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B193_0 = NULL;
	int32_t G_B195_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B195_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B197_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B196_0 = NULL;
	int32_t G_B198_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B198_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B200_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B199_0 = NULL;
	int32_t G_B201_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B201_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B203_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B202_0 = NULL;
	int32_t G_B204_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B204_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B206_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B205_0 = NULL;
	int32_t G_B207_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B207_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B211_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B210_0 = NULL;
	int32_t G_B212_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B212_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B214_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B213_0 = NULL;
	int32_t G_B215_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B215_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B217_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B216_0 = NULL;
	int32_t G_B218_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B218_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B220_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B219_0 = NULL;
	int32_t G_B221_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B221_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B223_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B222_0 = NULL;
	int32_t G_B224_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B224_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B226_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B225_0 = NULL;
	int32_t G_B227_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B227_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B229_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B228_0 = NULL;
	int32_t G_B230_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B230_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B232_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B231_0 = NULL;
	int32_t G_B233_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B233_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B237_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B236_0 = NULL;
	uint32_t G_B238_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B238_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B240_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B239_0 = NULL;
	uint32_t G_B241_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B241_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B243_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B242_0 = NULL;
	uint32_t G_B244_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B244_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B246_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B245_0 = NULL;
	uint32_t G_B247_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B247_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B251_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B250_0 = NULL;
	int32_t G_B252_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B252_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B254_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B253_0 = NULL;
	int32_t G_B255_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B255_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B257_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B256_0 = NULL;
	int32_t G_B258_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B258_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B260_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B259_0 = NULL;
	int32_t G_B261_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B261_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B265_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B264_0 = NULL;
	uint64_t G_B266_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B266_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B268_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B267_0 = NULL;
	uint64_t G_B269_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B269_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B273_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B272_0 = NULL;
	int64_t G_B274_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B274_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B276_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B275_0 = NULL;
	int64_t G_B277_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B277_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B281_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B280_0 = NULL;
	float G_B282_0 = 0.0f;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B282_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B284_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B283_0 = NULL;
	float G_B285_0 = 0.0f;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B285_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B287_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B286_0 = NULL;
	float G_B288_0 = 0.0f;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B288_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B290_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B289_0 = NULL;
	float G_B291_0 = 0.0f;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B291_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B295_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B294_0 = NULL;
	double G_B296_0 = 0.0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B296_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B298_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B297_0 = NULL;
	double G_B299_0 = 0.0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B299_1 = NULL;
	{
		bool L_0;
		L_0 = Vector_get_IsHardwareAccelerated_m783509258751EBED64CBD9F387EC1BB4A15088AA(NULL);
		if (!L_0)
		{
			goto IL_0447;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		if (!L_5)
		{
			goto IL_0068;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_6;
		L_6 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		uintptr_t L_7 = ((uintptr_t)L_6);
		int8_t* L_8 = (int8_t*) (L_7 ? alloca(L_7) : NULL);
		memset(L_8, 0, L_7);
		V_0 = (uint8_t*)(L_8);
		V_1 = 0;
		goto IL_0059;
	}

IL_0032:
	{
		uint8_t* L_9 = V_0;
		int32_t L_10 = V_1;
		int32_t L_11 = V_1;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		uint16_t L_12;
		L_12 = Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27((&___0_left), L_11, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_13 = V_1;
		uint16_t L_14;
		L_14 = Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27((&___1_right), L_13, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		bool L_15;
		L_15 = Vector_1_ScalarEquals_m4E13E30219B0D2AADB58AD6E5CB2B54B9FCBFAAE_inline(L_12, L_14, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		if (L_15)
		{
			G_B5_0 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_9, L_10));
			goto IL_004f;
		}
		G_B4_0 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_9, L_10));
	}
	{
		G_B6_0 = 0;
		G_B6_1 = G_B4_0;
		goto IL_0054;
	}

IL_004f:
	{
		uint8_t L_16;
		L_16 = ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline(NULL);
		G_B6_0 = ((int32_t)(L_16));
		G_B6_1 = G_B5_0;
	}

IL_0054:
	{
		*((int8_t*)G_B6_1) = (int8_t)G_B6_0;
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0059:
	{
		int32_t L_18 = V_1;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_19;
		L_19 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_0032;
		}
	}
	{
		uint8_t* L_20 = V_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_21;
		memset((&L_21), 0, sizeof(L_21));
		Vector_1__ctor_m46ADEA122EFBA7AEF487716891A8ADD284FD12E3((&L_21), (void*)L_20, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		return L_21;
	}

IL_0068:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_22 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_23;
		L_23 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_22, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		bool L_26;
		L_26 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_23, L_25, NULL);
		if (!L_26)
		{
			goto IL_00c6;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_27;
		L_27 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		uintptr_t L_28 = ((uintptr_t)L_27);
		int8_t* L_29 = (int8_t*) (L_28 ? alloca(L_28) : NULL);
		memset(L_29, 0, L_28);
		V_2 = (L_29);
		V_3 = 0;
		goto IL_00b7;
	}

IL_0090:
	{
		int8_t* L_30 = V_2;
		int32_t L_31 = V_3;
		int32_t L_32 = V_3;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		uint16_t L_33;
		L_33 = Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27((&___0_left), L_32, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_34 = V_3;
		uint16_t L_35;
		L_35 = Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27((&___1_right), L_34, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		bool L_36;
		L_36 = Vector_1_ScalarEquals_m4E13E30219B0D2AADB58AD6E5CB2B54B9FCBFAAE_inline(L_33, L_35, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		if (L_36)
		{
			G_B13_0 = ((int8_t*)il2cpp_codegen_add((intptr_t)L_30, L_31));
			goto IL_00ad;
		}
		G_B12_0 = ((int8_t*)il2cpp_codegen_add((intptr_t)L_30, L_31));
	}
	{
		G_B14_0 = 0;
		G_B14_1 = G_B12_0;
		goto IL_00b2;
	}

IL_00ad:
	{
		int8_t L_37;
		L_37 = ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline(NULL);
		G_B14_0 = ((int32_t)(L_37));
		G_B14_1 = G_B13_0;
	}

IL_00b2:
	{
		*((int8_t*)G_B14_1) = (int8_t)G_B14_0;
		int32_t L_38 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00b7:
	{
		int32_t L_39 = V_3;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_40;
		L_40 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0090;
		}
	}
	{
		int8_t* L_41 = V_2;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_42;
		memset((&L_42), 0, sizeof(L_42));
		Vector_1__ctor_m46ADEA122EFBA7AEF487716891A8ADD284FD12E3((&L_42), (void*)L_41, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		return L_42;
	}

IL_00c6:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_43 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_44;
		L_44 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_43, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_45 = { reinterpret_cast<intptr_t> (UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var) };
		Type_t* L_46;
		L_46 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_45, NULL);
		bool L_47;
		L_47 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_44, L_46, NULL);
		if (!L_47)
		{
			goto IL_0133;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_48;
		L_48 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((uintptr_t)((uintptr_t)L_48) * (uintptr_t)2 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_49 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)L_48), 2));
		int8_t* L_50 = (int8_t*) (L_49 ? alloca(L_49) : NULL);
		memset(L_50, 0, L_49);
		V_4 = (uint16_t*)(L_50);
		V_5 = 0;
		goto IL_0122;
	}

IL_00f2:
	{
		uint16_t* L_51 = V_4;
		int32_t L_52 = V_5;
		int32_t L_53 = V_5;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		uint16_t L_54;
		L_54 = Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27((&___0_left), L_53, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_55 = V_5;
		uint16_t L_56;
		L_56 = Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27((&___1_right), L_55, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		bool L_57;
		L_57 = Vector_1_ScalarEquals_m4E13E30219B0D2AADB58AD6E5CB2B54B9FCBFAAE_inline(L_54, L_56, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		if (L_57)
		{
			G_B21_0 = ((uint16_t*)il2cpp_codegen_add((intptr_t)L_51, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_52), 2))));
			goto IL_0116;
		}
		G_B20_0 = ((uint16_t*)il2cpp_codegen_add((intptr_t)L_51, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_52), 2))));
	}
	{
		G_B22_0 = 0;
		G_B22_1 = G_B20_0;
		goto IL_011b;
	}

IL_0116:
	{
		uint16_t L_58;
		L_58 = ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline(NULL);
		G_B22_0 = ((int32_t)(L_58));
		G_B22_1 = G_B21_0;
	}

IL_011b:
	{
		*((int16_t*)G_B22_1) = (int16_t)G_B22_0;
		int32_t L_59 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_59, 1));
	}

IL_0122:
	{
		int32_t L_60 = V_5;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_61;
		L_61 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_60) < ((int32_t)L_61)))
		{
			goto IL_00f2;
		}
	}
	{
		uint16_t* L_62 = V_4;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_63;
		memset((&L_63), 0, sizeof(L_63));
		Vector_1__ctor_m46ADEA122EFBA7AEF487716891A8ADD284FD12E3((&L_63), (void*)L_62, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		return L_63;
	}

IL_0133:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_64 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_65;
		L_65 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_64, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_66 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		Type_t* L_67;
		L_67 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_66, NULL);
		bool L_68;
		L_68 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_65, L_67, NULL);
		if (!L_68)
		{
			goto IL_01a0;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_69;
		L_69 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((uintptr_t)((uintptr_t)L_69) * (uintptr_t)2 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_70 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)L_69), 2));
		int8_t* L_71 = (int8_t*) (L_70 ? alloca(L_70) : NULL);
		memset(L_71, 0, L_70);
		V_6 = (int16_t*)(L_71);
		V_7 = 0;
		goto IL_018f;
	}

IL_015f:
	{
		int16_t* L_72 = V_6;
		int32_t L_73 = V_7;
		int32_t L_74 = V_7;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		uint16_t L_75;
		L_75 = Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27((&___0_left), L_74, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_76 = V_7;
		uint16_t L_77;
		L_77 = Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27((&___1_right), L_76, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		bool L_78;
		L_78 = Vector_1_ScalarEquals_m4E13E30219B0D2AADB58AD6E5CB2B54B9FCBFAAE_inline(L_75, L_77, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		if (L_78)
		{
			G_B29_0 = ((int16_t*)il2cpp_codegen_add((intptr_t)L_72, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_73), 2))));
			goto IL_0183;
		}
		G_B28_0 = ((int16_t*)il2cpp_codegen_add((intptr_t)L_72, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_73), 2))));
	}
	{
		G_B30_0 = 0;
		G_B30_1 = G_B28_0;
		goto IL_0188;
	}

IL_0183:
	{
		int16_t L_79;
		L_79 = ConstantHelper_GetInt16WithAllBitsSet_m70C5F99E624490970E2D4093FE6E800D1849DDFC_inline(NULL);
		G_B30_0 = ((int32_t)(L_79));
		G_B30_1 = G_B29_0;
	}

IL_0188:
	{
		*((int16_t*)G_B30_1) = (int16_t)G_B30_0;
		int32_t L_80 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_80, 1));
	}

IL_018f:
	{
		int32_t L_81 = V_7;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_82;
		L_82 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_81) < ((int32_t)L_82)))
		{
			goto IL_015f;
		}
	}
	{
		int16_t* L_83 = V_6;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_84;
		memset((&L_84), 0, sizeof(L_84));
		Vector_1__ctor_m46ADEA122EFBA7AEF487716891A8ADD284FD12E3((&L_84), (void*)L_83, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		return L_84;
	}

IL_01a0:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_85 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_86;
		L_86 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_85, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_87 = { reinterpret_cast<intptr_t> (UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var) };
		Type_t* L_88;
		L_88 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_87, NULL);
		bool L_89;
		L_89 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_86, L_88, NULL);
		if (!L_89)
		{
			goto IL_020d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_90;
		L_90 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((uintptr_t)((uintptr_t)L_90) * (uintptr_t)4 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_91 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)L_90), 4));
		int8_t* L_92 = (int8_t*) (L_91 ? alloca(L_91) : NULL);
		memset(L_92, 0, L_91);
		V_8 = (uint32_t*)(L_92);
		V_9 = 0;
		goto IL_01fc;
	}

IL_01cc:
	{
		uint32_t* L_93 = V_8;
		int32_t L_94 = V_9;
		int32_t L_95 = V_9;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		uint16_t L_96;
		L_96 = Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27((&___0_left), L_95, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_97 = V_9;
		uint16_t L_98;
		L_98 = Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27((&___1_right), L_97, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		bool L_99;
		L_99 = Vector_1_ScalarEquals_m4E13E30219B0D2AADB58AD6E5CB2B54B9FCBFAAE_inline(L_96, L_98, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		if (L_99)
		{
			G_B37_0 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_93, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_94), 4))));
			goto IL_01f0;
		}
		G_B36_0 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_93, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_94), 4))));
	}
	{
		G_B38_0 = ((uint32_t)(0));
		G_B38_1 = G_B36_0;
		goto IL_01f5;
	}

IL_01f0:
	{
		uint32_t L_100;
		L_100 = ConstantHelper_GetUInt32WithAllBitsSet_m78CBFE0C29CF227C16D2A9021972A0D54744BCAF_inline(NULL);
		G_B38_0 = L_100;
		G_B38_1 = G_B37_0;
	}

IL_01f5:
	{
		*((int32_t*)G_B38_1) = (int32_t)G_B38_0;
		int32_t L_101 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_101, 1));
	}

IL_01fc:
	{
		int32_t L_102 = V_9;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_103;
		L_103 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_102) < ((int32_t)L_103)))
		{
			goto IL_01cc;
		}
	}
	{
		uint32_t* L_104 = V_8;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_105;
		memset((&L_105), 0, sizeof(L_105));
		Vector_1__ctor_m46ADEA122EFBA7AEF487716891A8ADD284FD12E3((&L_105), (void*)L_104, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		return L_105;
	}

IL_020d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_106 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_107;
		L_107 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_106, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_108 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		Type_t* L_109;
		L_109 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_108, NULL);
		bool L_110;
		L_110 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_107, L_109, NULL);
		if (!L_110)
		{
			goto IL_027a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_111;
		L_111 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((uintptr_t)((uintptr_t)L_111) * (uintptr_t)4 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_112 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)L_111), 4));
		int8_t* L_113 = (int8_t*) (L_112 ? alloca(L_112) : NULL);
		memset(L_113, 0, L_112);
		V_10 = (int32_t*)(L_113);
		V_11 = 0;
		goto IL_0269;
	}

IL_0239:
	{
		int32_t* L_114 = V_10;
		int32_t L_115 = V_11;
		int32_t L_116 = V_11;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		uint16_t L_117;
		L_117 = Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27((&___0_left), L_116, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_118 = V_11;
		uint16_t L_119;
		L_119 = Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27((&___1_right), L_118, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		bool L_120;
		L_120 = Vector_1_ScalarEquals_m4E13E30219B0D2AADB58AD6E5CB2B54B9FCBFAAE_inline(L_117, L_119, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		if (L_120)
		{
			G_B45_0 = ((int32_t*)il2cpp_codegen_add((intptr_t)L_114, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_115), 4))));
			goto IL_025d;
		}
		G_B44_0 = ((int32_t*)il2cpp_codegen_add((intptr_t)L_114, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_115), 4))));
	}
	{
		G_B46_0 = 0;
		G_B46_1 = G_B44_0;
		goto IL_0262;
	}

IL_025d:
	{
		int32_t L_121;
		L_121 = ConstantHelper_GetInt32WithAllBitsSet_m245101340DDE7277600327D319DF86F1FFEA4FD0_inline(NULL);
		G_B46_0 = L_121;
		G_B46_1 = G_B45_0;
	}

IL_0262:
	{
		*((int32_t*)G_B46_1) = (int32_t)G_B46_0;
		int32_t L_122 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_122, 1));
	}

IL_0269:
	{
		int32_t L_123 = V_11;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_124;
		L_124 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_123) < ((int32_t)L_124)))
		{
			goto IL_0239;
		}
	}
	{
		int32_t* L_125 = V_10;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_126;
		memset((&L_126), 0, sizeof(L_126));
		Vector_1__ctor_m46ADEA122EFBA7AEF487716891A8ADD284FD12E3((&L_126), (void*)L_125, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		return L_126;
	}

IL_027a:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_127 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_128;
		L_128 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_127, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_129 = { reinterpret_cast<intptr_t> (UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var) };
		Type_t* L_130;
		L_130 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_129, NULL);
		bool L_131;
		L_131 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_128, L_130, NULL);
		if (!L_131)
		{
			goto IL_02e8;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_132;
		L_132 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((uintptr_t)((uintptr_t)L_132) * (uintptr_t)8 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_133 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)L_132), 8));
		int8_t* L_134 = (int8_t*) (L_133 ? alloca(L_133) : NULL);
		memset(L_134, 0, L_133);
		V_12 = (uint64_t*)(L_134);
		V_13 = 0;
		goto IL_02d7;
	}

IL_02a6:
	{
		uint64_t* L_135 = V_12;
		int32_t L_136 = V_13;
		int32_t L_137 = V_13;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		uint16_t L_138;
		L_138 = Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27((&___0_left), L_137, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_139 = V_13;
		uint16_t L_140;
		L_140 = Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27((&___1_right), L_139, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		bool L_141;
		L_141 = Vector_1_ScalarEquals_m4E13E30219B0D2AADB58AD6E5CB2B54B9FCBFAAE_inline(L_138, L_140, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		if (L_141)
		{
			G_B53_0 = ((uint64_t*)il2cpp_codegen_add((intptr_t)L_135, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_136), 8))));
			goto IL_02cb;
		}
		G_B52_0 = ((uint64_t*)il2cpp_codegen_add((intptr_t)L_135, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_136), 8))));
	}
	{
		G_B54_0 = ((uint64_t)(((int64_t)0)));
		G_B54_1 = G_B52_0;
		goto IL_02d0;
	}

IL_02cb:
	{
		uint64_t L_142;
		L_142 = ConstantHelper_GetUInt64WithAllBitsSet_mB7F3E046EE6B1B20C552BF7CF619416E239A5A96_inline(NULL);
		G_B54_0 = L_142;
		G_B54_1 = G_B53_0;
	}

IL_02d0:
	{
		*((int64_t*)G_B54_1) = (int64_t)G_B54_0;
		int32_t L_143 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add(L_143, 1));
	}

IL_02d7:
	{
		int32_t L_144 = V_13;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_145;
		L_145 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_144) < ((int32_t)L_145)))
		{
			goto IL_02a6;
		}
	}
	{
		uint64_t* L_146 = V_12;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_147;
		memset((&L_147), 0, sizeof(L_147));
		Vector_1__ctor_m46ADEA122EFBA7AEF487716891A8ADD284FD12E3((&L_147), (void*)L_146, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		return L_147;
	}

IL_02e8:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_148 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_149;
		L_149 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_148, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_150 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		Type_t* L_151;
		L_151 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_150, NULL);
		bool L_152;
		L_152 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_149, L_151, NULL);
		if (!L_152)
		{
			goto IL_0356;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_153;
		L_153 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((uintptr_t)((uintptr_t)L_153) * (uintptr_t)8 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_154 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)L_153), 8));
		int8_t* L_155 = (int8_t*) (L_154 ? alloca(L_154) : NULL);
		memset(L_155, 0, L_154);
		V_14 = (int64_t*)(L_155);
		V_15 = 0;
		goto IL_0345;
	}

IL_0314:
	{
		int64_t* L_156 = V_14;
		int32_t L_157 = V_15;
		int32_t L_158 = V_15;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		uint16_t L_159;
		L_159 = Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27((&___0_left), L_158, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_160 = V_15;
		uint16_t L_161;
		L_161 = Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27((&___1_right), L_160, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		bool L_162;
		L_162 = Vector_1_ScalarEquals_m4E13E30219B0D2AADB58AD6E5CB2B54B9FCBFAAE_inline(L_159, L_161, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		if (L_162)
		{
			G_B61_0 = ((int64_t*)il2cpp_codegen_add((intptr_t)L_156, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_157), 8))));
			goto IL_0339;
		}
		G_B60_0 = ((int64_t*)il2cpp_codegen_add((intptr_t)L_156, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_157), 8))));
	}
	{
		G_B62_0 = ((int64_t)0);
		G_B62_1 = G_B60_0;
		goto IL_033e;
	}

IL_0339:
	{
		int64_t L_163;
		L_163 = ConstantHelper_GetInt64WithAllBitsSet_m56A9AB64BA5DDD9ECC99424875824591DEFD5C40_inline(NULL);
		G_B62_0 = L_163;
		G_B62_1 = G_B61_0;
	}

IL_033e:
	{
		*((int64_t*)G_B62_1) = (int64_t)G_B62_0;
		int32_t L_164 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_164, 1));
	}

IL_0345:
	{
		int32_t L_165 = V_15;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_166;
		L_166 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_165) < ((int32_t)L_166)))
		{
			goto IL_0314;
		}
	}
	{
		int64_t* L_167 = V_14;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_168;
		memset((&L_168), 0, sizeof(L_168));
		Vector_1__ctor_m46ADEA122EFBA7AEF487716891A8ADD284FD12E3((&L_168), (void*)L_167, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		return L_168;
	}

IL_0356:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_169 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_170;
		L_170 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_169, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_171 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		Type_t* L_172;
		L_172 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_171, NULL);
		bool L_173;
		L_173 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_170, L_172, NULL);
		if (!L_173)
		{
			goto IL_03c7;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_174;
		L_174 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((uintptr_t)((uintptr_t)L_174) * (uintptr_t)4 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_175 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)L_174), 4));
		int8_t* L_176 = (int8_t*) (L_175 ? alloca(L_175) : NULL);
		memset(L_176, 0, L_175);
		V_16 = (float*)(L_176);
		V_17 = 0;
		goto IL_03b6;
	}

IL_0382:
	{
		float* L_177 = V_16;
		int32_t L_178 = V_17;
		int32_t L_179 = V_17;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		uint16_t L_180;
		L_180 = Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27((&___0_left), L_179, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_181 = V_17;
		uint16_t L_182;
		L_182 = Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27((&___1_right), L_181, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		bool L_183;
		L_183 = Vector_1_ScalarEquals_m4E13E30219B0D2AADB58AD6E5CB2B54B9FCBFAAE_inline(L_180, L_182, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		if (L_183)
		{
			G_B69_0 = ((float*)il2cpp_codegen_add((intptr_t)L_177, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_178), 4))));
			goto IL_03aa;
		}
		G_B68_0 = ((float*)il2cpp_codegen_add((intptr_t)L_177, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_178), 4))));
	}
	{
		G_B70_0 = (0.0f);
		G_B70_1 = G_B68_0;
		goto IL_03af;
	}

IL_03aa:
	{
		float L_184;
		L_184 = ConstantHelper_GetSingleWithAllBitsSet_m66FC11C0680F744EB8315278910061C9535818C0_inline(NULL);
		G_B70_0 = L_184;
		G_B70_1 = G_B69_0;
	}

IL_03af:
	{
		*((float*)G_B70_1) = (float)G_B70_0;
		int32_t L_185 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_add(L_185, 1));
	}

IL_03b6:
	{
		int32_t L_186 = V_17;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_187;
		L_187 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_186) < ((int32_t)L_187)))
		{
			goto IL_0382;
		}
	}
	{
		float* L_188 = V_16;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_189;
		memset((&L_189), 0, sizeof(L_189));
		Vector_1__ctor_m46ADEA122EFBA7AEF487716891A8ADD284FD12E3((&L_189), (void*)L_188, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		return L_189;
	}

IL_03c7:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_190 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_191;
		L_191 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_190, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_192 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		Type_t* L_193;
		L_193 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_192, NULL);
		bool L_194;
		L_194 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_191, L_193, NULL);
		if (!L_194)
		{
			goto IL_043c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_195;
		L_195 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((uintptr_t)((uintptr_t)L_195) * (uintptr_t)8 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_196 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)L_195), 8));
		int8_t* L_197 = (int8_t*) (L_196 ? alloca(L_196) : NULL);
		memset(L_197, 0, L_196);
		V_18 = (double*)(L_197);
		V_19 = 0;
		goto IL_042b;
	}

IL_03f3:
	{
		double* L_198 = V_18;
		int32_t L_199 = V_19;
		int32_t L_200 = V_19;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		uint16_t L_201;
		L_201 = Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27((&___0_left), L_200, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_202 = V_19;
		uint16_t L_203;
		L_203 = Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27((&___1_right), L_202, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		bool L_204;
		L_204 = Vector_1_ScalarEquals_m4E13E30219B0D2AADB58AD6E5CB2B54B9FCBFAAE_inline(L_201, L_203, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		if (L_204)
		{
			G_B77_0 = ((double*)il2cpp_codegen_add((intptr_t)L_198, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_199), 8))));
			goto IL_041f;
		}
		G_B76_0 = ((double*)il2cpp_codegen_add((intptr_t)L_198, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_199), 8))));
	}
	{
		G_B78_0 = (0.0);
		G_B78_1 = G_B76_0;
		goto IL_0424;
	}

IL_041f:
	{
		double L_205;
		L_205 = ConstantHelper_GetDoubleWithAllBitsSet_mF43AF77A6C93B7590B35B20458E80F2BC66AD5F2_inline(NULL);
		G_B78_0 = L_205;
		G_B78_1 = G_B77_0;
	}

IL_0424:
	{
		*((double*)G_B78_1) = (double)G_B78_0;
		int32_t L_206 = V_19;
		V_19 = ((int32_t)il2cpp_codegen_add(L_206, 1));
	}

IL_042b:
	{
		int32_t L_207 = V_19;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_208;
		L_208 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_207) < ((int32_t)L_208)))
		{
			goto IL_03f3;
		}
	}
	{
		double* L_209 = V_18;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_210;
		memset((&L_210), 0, sizeof(L_210));
		Vector_1__ctor_m46ADEA122EFBA7AEF487716891A8ADD284FD12E3((&L_210), (void*)L_209, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		return L_210;
	}

IL_043c:
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_211 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_211, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE310274B02A605A3985345944A620D7D2E019A1A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_211, method);
	}

IL_0447:
	{
		il2cpp_codegen_initobj((&V_20), sizeof(Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_212 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_213;
		L_213 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_212, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_214 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
		Type_t* L_215;
		L_215 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_214, NULL);
		bool L_216;
		L_216 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_213, L_215, NULL);
		if (!L_216)
		{
			goto IL_06e5;
		}
	}
	{
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_217 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_218 = L_217.___register;
		uint8_t L_219 = L_218.___byte_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_220 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_221 = L_220.___register;
		uint8_t L_222 = L_221.___byte_0;
		if ((((int32_t)L_219) == ((int32_t)L_222)))
		{
			G_B85_0 = (&V_20);
			goto IL_048a;
		}
		G_B84_0 = (&V_20);
	}
	{
		G_B86_0 = 0;
		G_B86_1 = G_B84_0;
		goto IL_048f;
	}

IL_048a:
	{
		uint8_t L_223;
		L_223 = ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline(NULL);
		G_B86_0 = ((int32_t)(L_223));
		G_B86_1 = G_B85_0;
	}

IL_048f:
	{
		G_B86_1->___byte_0 = (uint8_t)G_B86_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_224 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_225 = L_224.___register;
		uint8_t L_226 = L_225.___byte_1;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_227 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_228 = L_227.___register;
		uint8_t L_229 = L_228.___byte_1;
		if ((((int32_t)L_226) == ((int32_t)L_229)))
		{
			G_B88_0 = (&V_20);
			goto IL_04b1;
		}
		G_B87_0 = (&V_20);
	}
	{
		G_B89_0 = 0;
		G_B89_1 = G_B87_0;
		goto IL_04b6;
	}

IL_04b1:
	{
		uint8_t L_230;
		L_230 = ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline(NULL);
		G_B89_0 = ((int32_t)(L_230));
		G_B89_1 = G_B88_0;
	}

IL_04b6:
	{
		G_B89_1->___byte_1 = (uint8_t)G_B89_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_231 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_232 = L_231.___register;
		uint8_t L_233 = L_232.___byte_2;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_234 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_235 = L_234.___register;
		uint8_t L_236 = L_235.___byte_2;
		if ((((int32_t)L_233) == ((int32_t)L_236)))
		{
			G_B91_0 = (&V_20);
			goto IL_04d8;
		}
		G_B90_0 = (&V_20);
	}
	{
		G_B92_0 = 0;
		G_B92_1 = G_B90_0;
		goto IL_04dd;
	}

IL_04d8:
	{
		uint8_t L_237;
		L_237 = ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline(NULL);
		G_B92_0 = ((int32_t)(L_237));
		G_B92_1 = G_B91_0;
	}

IL_04dd:
	{
		G_B92_1->___byte_2 = (uint8_t)G_B92_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_238 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_239 = L_238.___register;
		uint8_t L_240 = L_239.___byte_3;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_241 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_242 = L_241.___register;
		uint8_t L_243 = L_242.___byte_3;
		if ((((int32_t)L_240) == ((int32_t)L_243)))
		{
			G_B94_0 = (&V_20);
			goto IL_04ff;
		}
		G_B93_0 = (&V_20);
	}
	{
		G_B95_0 = 0;
		G_B95_1 = G_B93_0;
		goto IL_0504;
	}

IL_04ff:
	{
		uint8_t L_244;
		L_244 = ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline(NULL);
		G_B95_0 = ((int32_t)(L_244));
		G_B95_1 = G_B94_0;
	}

IL_0504:
	{
		G_B95_1->___byte_3 = (uint8_t)G_B95_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_245 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_246 = L_245.___register;
		uint8_t L_247 = L_246.___byte_4;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_248 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_249 = L_248.___register;
		uint8_t L_250 = L_249.___byte_4;
		if ((((int32_t)L_247) == ((int32_t)L_250)))
		{
			G_B97_0 = (&V_20);
			goto IL_0526;
		}
		G_B96_0 = (&V_20);
	}
	{
		G_B98_0 = 0;
		G_B98_1 = G_B96_0;
		goto IL_052b;
	}

IL_0526:
	{
		uint8_t L_251;
		L_251 = ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline(NULL);
		G_B98_0 = ((int32_t)(L_251));
		G_B98_1 = G_B97_0;
	}

IL_052b:
	{
		G_B98_1->___byte_4 = (uint8_t)G_B98_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_252 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_253 = L_252.___register;
		uint8_t L_254 = L_253.___byte_5;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_255 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_256 = L_255.___register;
		uint8_t L_257 = L_256.___byte_5;
		if ((((int32_t)L_254) == ((int32_t)L_257)))
		{
			G_B100_0 = (&V_20);
			goto IL_054d;
		}
		G_B99_0 = (&V_20);
	}
	{
		G_B101_0 = 0;
		G_B101_1 = G_B99_0;
		goto IL_0552;
	}

IL_054d:
	{
		uint8_t L_258;
		L_258 = ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline(NULL);
		G_B101_0 = ((int32_t)(L_258));
		G_B101_1 = G_B100_0;
	}

IL_0552:
	{
		G_B101_1->___byte_5 = (uint8_t)G_B101_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_259 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_260 = L_259.___register;
		uint8_t L_261 = L_260.___byte_6;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_262 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_263 = L_262.___register;
		uint8_t L_264 = L_263.___byte_6;
		if ((((int32_t)L_261) == ((int32_t)L_264)))
		{
			G_B103_0 = (&V_20);
			goto IL_0574;
		}
		G_B102_0 = (&V_20);
	}
	{
		G_B104_0 = 0;
		G_B104_1 = G_B102_0;
		goto IL_0579;
	}

IL_0574:
	{
		uint8_t L_265;
		L_265 = ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline(NULL);
		G_B104_0 = ((int32_t)(L_265));
		G_B104_1 = G_B103_0;
	}

IL_0579:
	{
		G_B104_1->___byte_6 = (uint8_t)G_B104_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_266 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_267 = L_266.___register;
		uint8_t L_268 = L_267.___byte_7;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_269 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_270 = L_269.___register;
		uint8_t L_271 = L_270.___byte_7;
		if ((((int32_t)L_268) == ((int32_t)L_271)))
		{
			G_B106_0 = (&V_20);
			goto IL_059b;
		}
		G_B105_0 = (&V_20);
	}
	{
		G_B107_0 = 0;
		G_B107_1 = G_B105_0;
		goto IL_05a0;
	}

IL_059b:
	{
		uint8_t L_272;
		L_272 = ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline(NULL);
		G_B107_0 = ((int32_t)(L_272));
		G_B107_1 = G_B106_0;
	}

IL_05a0:
	{
		G_B107_1->___byte_7 = (uint8_t)G_B107_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_273 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_274 = L_273.___register;
		uint8_t L_275 = L_274.___byte_8;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_276 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_277 = L_276.___register;
		uint8_t L_278 = L_277.___byte_8;
		if ((((int32_t)L_275) == ((int32_t)L_278)))
		{
			G_B109_0 = (&V_20);
			goto IL_05c2;
		}
		G_B108_0 = (&V_20);
	}
	{
		G_B110_0 = 0;
		G_B110_1 = G_B108_0;
		goto IL_05c7;
	}

IL_05c2:
	{
		uint8_t L_279;
		L_279 = ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline(NULL);
		G_B110_0 = ((int32_t)(L_279));
		G_B110_1 = G_B109_0;
	}

IL_05c7:
	{
		G_B110_1->___byte_8 = (uint8_t)G_B110_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_280 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_281 = L_280.___register;
		uint8_t L_282 = L_281.___byte_9;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_283 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_284 = L_283.___register;
		uint8_t L_285 = L_284.___byte_9;
		if ((((int32_t)L_282) == ((int32_t)L_285)))
		{
			G_B112_0 = (&V_20);
			goto IL_05e9;
		}
		G_B111_0 = (&V_20);
	}
	{
		G_B113_0 = 0;
		G_B113_1 = G_B111_0;
		goto IL_05ee;
	}

IL_05e9:
	{
		uint8_t L_286;
		L_286 = ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline(NULL);
		G_B113_0 = ((int32_t)(L_286));
		G_B113_1 = G_B112_0;
	}

IL_05ee:
	{
		G_B113_1->___byte_9 = (uint8_t)G_B113_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_287 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_288 = L_287.___register;
		uint8_t L_289 = L_288.___byte_10;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_290 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_291 = L_290.___register;
		uint8_t L_292 = L_291.___byte_10;
		if ((((int32_t)L_289) == ((int32_t)L_292)))
		{
			G_B115_0 = (&V_20);
			goto IL_0610;
		}
		G_B114_0 = (&V_20);
	}
	{
		G_B116_0 = 0;
		G_B116_1 = G_B114_0;
		goto IL_0615;
	}

IL_0610:
	{
		uint8_t L_293;
		L_293 = ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline(NULL);
		G_B116_0 = ((int32_t)(L_293));
		G_B116_1 = G_B115_0;
	}

IL_0615:
	{
		G_B116_1->___byte_10 = (uint8_t)G_B116_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_294 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_295 = L_294.___register;
		uint8_t L_296 = L_295.___byte_11;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_297 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_298 = L_297.___register;
		uint8_t L_299 = L_298.___byte_11;
		if ((((int32_t)L_296) == ((int32_t)L_299)))
		{
			G_B118_0 = (&V_20);
			goto IL_0637;
		}
		G_B117_0 = (&V_20);
	}
	{
		G_B119_0 = 0;
		G_B119_1 = G_B117_0;
		goto IL_063c;
	}

IL_0637:
	{
		uint8_t L_300;
		L_300 = ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline(NULL);
		G_B119_0 = ((int32_t)(L_300));
		G_B119_1 = G_B118_0;
	}

IL_063c:
	{
		G_B119_1->___byte_11 = (uint8_t)G_B119_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_301 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_302 = L_301.___register;
		uint8_t L_303 = L_302.___byte_12;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_304 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_305 = L_304.___register;
		uint8_t L_306 = L_305.___byte_12;
		if ((((int32_t)L_303) == ((int32_t)L_306)))
		{
			G_B121_0 = (&V_20);
			goto IL_065e;
		}
		G_B120_0 = (&V_20);
	}
	{
		G_B122_0 = 0;
		G_B122_1 = G_B120_0;
		goto IL_0663;
	}

IL_065e:
	{
		uint8_t L_307;
		L_307 = ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline(NULL);
		G_B122_0 = ((int32_t)(L_307));
		G_B122_1 = G_B121_0;
	}

IL_0663:
	{
		G_B122_1->___byte_12 = (uint8_t)G_B122_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_308 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_309 = L_308.___register;
		uint8_t L_310 = L_309.___byte_13;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_311 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_312 = L_311.___register;
		uint8_t L_313 = L_312.___byte_13;
		if ((((int32_t)L_310) == ((int32_t)L_313)))
		{
			G_B124_0 = (&V_20);
			goto IL_0685;
		}
		G_B123_0 = (&V_20);
	}
	{
		G_B125_0 = 0;
		G_B125_1 = G_B123_0;
		goto IL_068a;
	}

IL_0685:
	{
		uint8_t L_314;
		L_314 = ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline(NULL);
		G_B125_0 = ((int32_t)(L_314));
		G_B125_1 = G_B124_0;
	}

IL_068a:
	{
		G_B125_1->___byte_13 = (uint8_t)G_B125_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_315 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_316 = L_315.___register;
		uint8_t L_317 = L_316.___byte_14;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_318 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_319 = L_318.___register;
		uint8_t L_320 = L_319.___byte_14;
		if ((((int32_t)L_317) == ((int32_t)L_320)))
		{
			G_B127_0 = (&V_20);
			goto IL_06ac;
		}
		G_B126_0 = (&V_20);
	}
	{
		G_B128_0 = 0;
		G_B128_1 = G_B126_0;
		goto IL_06b1;
	}

IL_06ac:
	{
		uint8_t L_321;
		L_321 = ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline(NULL);
		G_B128_0 = ((int32_t)(L_321));
		G_B128_1 = G_B127_0;
	}

IL_06b1:
	{
		G_B128_1->___byte_14 = (uint8_t)G_B128_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_322 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_323 = L_322.___register;
		uint8_t L_324 = L_323.___byte_15;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_325 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_326 = L_325.___register;
		uint8_t L_327 = L_326.___byte_15;
		if ((((int32_t)L_324) == ((int32_t)L_327)))
		{
			G_B130_0 = (&V_20);
			goto IL_06d3;
		}
		G_B129_0 = (&V_20);
	}
	{
		G_B131_0 = 0;
		G_B131_1 = G_B129_0;
		goto IL_06d8;
	}

IL_06d3:
	{
		uint8_t L_328;
		L_328 = ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline(NULL);
		G_B131_0 = ((int32_t)(L_328));
		G_B131_1 = G_B130_0;
	}

IL_06d8:
	{
		G_B131_1->___byte_15 = (uint8_t)G_B131_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_329;
		memset((&L_329), 0, sizeof(L_329));
		Vector_1__ctor_m48CD7847B9597F3193C9C0BA97ED64E276F4340A((&L_329), (&V_20), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		return L_329;
	}

IL_06e5:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_330 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_331;
		L_331 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_330, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_332 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
		Type_t* L_333;
		L_333 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_332, NULL);
		bool L_334;
		L_334 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_331, L_333, NULL);
		if (!L_334)
		{
			goto IL_097b;
		}
	}
	{
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_335 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_336 = L_335.___register;
		int8_t L_337 = L_336.___sbyte_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_338 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_339 = L_338.___register;
		int8_t L_340 = L_339.___sbyte_0;
		if ((((int32_t)L_337) == ((int32_t)L_340)))
		{
			G_B135_0 = (&V_20);
			goto IL_0720;
		}
		G_B134_0 = (&V_20);
	}
	{
		G_B136_0 = 0;
		G_B136_1 = G_B134_0;
		goto IL_0725;
	}

IL_0720:
	{
		int8_t L_341;
		L_341 = ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline(NULL);
		G_B136_0 = ((int32_t)(L_341));
		G_B136_1 = G_B135_0;
	}

IL_0725:
	{
		G_B136_1->___sbyte_0 = (int8_t)G_B136_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_342 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_343 = L_342.___register;
		int8_t L_344 = L_343.___sbyte_1;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_345 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_346 = L_345.___register;
		int8_t L_347 = L_346.___sbyte_1;
		if ((((int32_t)L_344) == ((int32_t)L_347)))
		{
			G_B138_0 = (&V_20);
			goto IL_0747;
		}
		G_B137_0 = (&V_20);
	}
	{
		G_B139_0 = 0;
		G_B139_1 = G_B137_0;
		goto IL_074c;
	}

IL_0747:
	{
		int8_t L_348;
		L_348 = ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline(NULL);
		G_B139_0 = ((int32_t)(L_348));
		G_B139_1 = G_B138_0;
	}

IL_074c:
	{
		G_B139_1->___sbyte_1 = (int8_t)G_B139_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_349 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_350 = L_349.___register;
		int8_t L_351 = L_350.___sbyte_2;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_352 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_353 = L_352.___register;
		int8_t L_354 = L_353.___sbyte_2;
		if ((((int32_t)L_351) == ((int32_t)L_354)))
		{
			G_B141_0 = (&V_20);
			goto IL_076e;
		}
		G_B140_0 = (&V_20);
	}
	{
		G_B142_0 = 0;
		G_B142_1 = G_B140_0;
		goto IL_0773;
	}

IL_076e:
	{
		int8_t L_355;
		L_355 = ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline(NULL);
		G_B142_0 = ((int32_t)(L_355));
		G_B142_1 = G_B141_0;
	}

IL_0773:
	{
		G_B142_1->___sbyte_2 = (int8_t)G_B142_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_356 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_357 = L_356.___register;
		int8_t L_358 = L_357.___sbyte_3;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_359 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_360 = L_359.___register;
		int8_t L_361 = L_360.___sbyte_3;
		if ((((int32_t)L_358) == ((int32_t)L_361)))
		{
			G_B144_0 = (&V_20);
			goto IL_0795;
		}
		G_B143_0 = (&V_20);
	}
	{
		G_B145_0 = 0;
		G_B145_1 = G_B143_0;
		goto IL_079a;
	}

IL_0795:
	{
		int8_t L_362;
		L_362 = ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline(NULL);
		G_B145_0 = ((int32_t)(L_362));
		G_B145_1 = G_B144_0;
	}

IL_079a:
	{
		G_B145_1->___sbyte_3 = (int8_t)G_B145_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_363 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_364 = L_363.___register;
		int8_t L_365 = L_364.___sbyte_4;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_366 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_367 = L_366.___register;
		int8_t L_368 = L_367.___sbyte_4;
		if ((((int32_t)L_365) == ((int32_t)L_368)))
		{
			G_B147_0 = (&V_20);
			goto IL_07bc;
		}
		G_B146_0 = (&V_20);
	}
	{
		G_B148_0 = 0;
		G_B148_1 = G_B146_0;
		goto IL_07c1;
	}

IL_07bc:
	{
		int8_t L_369;
		L_369 = ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline(NULL);
		G_B148_0 = ((int32_t)(L_369));
		G_B148_1 = G_B147_0;
	}

IL_07c1:
	{
		G_B148_1->___sbyte_4 = (int8_t)G_B148_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_370 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_371 = L_370.___register;
		int8_t L_372 = L_371.___sbyte_5;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_373 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_374 = L_373.___register;
		int8_t L_375 = L_374.___sbyte_5;
		if ((((int32_t)L_372) == ((int32_t)L_375)))
		{
			G_B150_0 = (&V_20);
			goto IL_07e3;
		}
		G_B149_0 = (&V_20);
	}
	{
		G_B151_0 = 0;
		G_B151_1 = G_B149_0;
		goto IL_07e8;
	}

IL_07e3:
	{
		int8_t L_376;
		L_376 = ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline(NULL);
		G_B151_0 = ((int32_t)(L_376));
		G_B151_1 = G_B150_0;
	}

IL_07e8:
	{
		G_B151_1->___sbyte_5 = (int8_t)G_B151_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_377 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_378 = L_377.___register;
		int8_t L_379 = L_378.___sbyte_6;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_380 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_381 = L_380.___register;
		int8_t L_382 = L_381.___sbyte_6;
		if ((((int32_t)L_379) == ((int32_t)L_382)))
		{
			G_B153_0 = (&V_20);
			goto IL_080a;
		}
		G_B152_0 = (&V_20);
	}
	{
		G_B154_0 = 0;
		G_B154_1 = G_B152_0;
		goto IL_080f;
	}

IL_080a:
	{
		int8_t L_383;
		L_383 = ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline(NULL);
		G_B154_0 = ((int32_t)(L_383));
		G_B154_1 = G_B153_0;
	}

IL_080f:
	{
		G_B154_1->___sbyte_6 = (int8_t)G_B154_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_384 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_385 = L_384.___register;
		int8_t L_386 = L_385.___sbyte_7;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_387 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_388 = L_387.___register;
		int8_t L_389 = L_388.___sbyte_7;
		if ((((int32_t)L_386) == ((int32_t)L_389)))
		{
			G_B156_0 = (&V_20);
			goto IL_0831;
		}
		G_B155_0 = (&V_20);
	}
	{
		G_B157_0 = 0;
		G_B157_1 = G_B155_0;
		goto IL_0836;
	}

IL_0831:
	{
		int8_t L_390;
		L_390 = ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline(NULL);
		G_B157_0 = ((int32_t)(L_390));
		G_B157_1 = G_B156_0;
	}

IL_0836:
	{
		G_B157_1->___sbyte_7 = (int8_t)G_B157_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_391 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_392 = L_391.___register;
		int8_t L_393 = L_392.___sbyte_8;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_394 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_395 = L_394.___register;
		int8_t L_396 = L_395.___sbyte_8;
		if ((((int32_t)L_393) == ((int32_t)L_396)))
		{
			G_B159_0 = (&V_20);
			goto IL_0858;
		}
		G_B158_0 = (&V_20);
	}
	{
		G_B160_0 = 0;
		G_B160_1 = G_B158_0;
		goto IL_085d;
	}

IL_0858:
	{
		int8_t L_397;
		L_397 = ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline(NULL);
		G_B160_0 = ((int32_t)(L_397));
		G_B160_1 = G_B159_0;
	}

IL_085d:
	{
		G_B160_1->___sbyte_8 = (int8_t)G_B160_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_398 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_399 = L_398.___register;
		int8_t L_400 = L_399.___sbyte_9;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_401 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_402 = L_401.___register;
		int8_t L_403 = L_402.___sbyte_9;
		if ((((int32_t)L_400) == ((int32_t)L_403)))
		{
			G_B162_0 = (&V_20);
			goto IL_087f;
		}
		G_B161_0 = (&V_20);
	}
	{
		G_B163_0 = 0;
		G_B163_1 = G_B161_0;
		goto IL_0884;
	}

IL_087f:
	{
		int8_t L_404;
		L_404 = ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline(NULL);
		G_B163_0 = ((int32_t)(L_404));
		G_B163_1 = G_B162_0;
	}

IL_0884:
	{
		G_B163_1->___sbyte_9 = (int8_t)G_B163_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_405 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_406 = L_405.___register;
		int8_t L_407 = L_406.___sbyte_10;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_408 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_409 = L_408.___register;
		int8_t L_410 = L_409.___sbyte_10;
		if ((((int32_t)L_407) == ((int32_t)L_410)))
		{
			G_B165_0 = (&V_20);
			goto IL_08a6;
		}
		G_B164_0 = (&V_20);
	}
	{
		G_B166_0 = 0;
		G_B166_1 = G_B164_0;
		goto IL_08ab;
	}

IL_08a6:
	{
		int8_t L_411;
		L_411 = ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline(NULL);
		G_B166_0 = ((int32_t)(L_411));
		G_B166_1 = G_B165_0;
	}

IL_08ab:
	{
		G_B166_1->___sbyte_10 = (int8_t)G_B166_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_412 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_413 = L_412.___register;
		int8_t L_414 = L_413.___sbyte_11;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_415 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_416 = L_415.___register;
		int8_t L_417 = L_416.___sbyte_11;
		if ((((int32_t)L_414) == ((int32_t)L_417)))
		{
			G_B168_0 = (&V_20);
			goto IL_08cd;
		}
		G_B167_0 = (&V_20);
	}
	{
		G_B169_0 = 0;
		G_B169_1 = G_B167_0;
		goto IL_08d2;
	}

IL_08cd:
	{
		int8_t L_418;
		L_418 = ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline(NULL);
		G_B169_0 = ((int32_t)(L_418));
		G_B169_1 = G_B168_0;
	}

IL_08d2:
	{
		G_B169_1->___sbyte_11 = (int8_t)G_B169_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_419 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_420 = L_419.___register;
		int8_t L_421 = L_420.___sbyte_12;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_422 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_423 = L_422.___register;
		int8_t L_424 = L_423.___sbyte_12;
		if ((((int32_t)L_421) == ((int32_t)L_424)))
		{
			G_B171_0 = (&V_20);
			goto IL_08f4;
		}
		G_B170_0 = (&V_20);
	}
	{
		G_B172_0 = 0;
		G_B172_1 = G_B170_0;
		goto IL_08f9;
	}

IL_08f4:
	{
		int8_t L_425;
		L_425 = ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline(NULL);
		G_B172_0 = ((int32_t)(L_425));
		G_B172_1 = G_B171_0;
	}

IL_08f9:
	{
		G_B172_1->___sbyte_12 = (int8_t)G_B172_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_426 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_427 = L_426.___register;
		int8_t L_428 = L_427.___sbyte_13;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_429 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_430 = L_429.___register;
		int8_t L_431 = L_430.___sbyte_13;
		if ((((int32_t)L_428) == ((int32_t)L_431)))
		{
			G_B174_0 = (&V_20);
			goto IL_091b;
		}
		G_B173_0 = (&V_20);
	}
	{
		G_B175_0 = 0;
		G_B175_1 = G_B173_0;
		goto IL_0920;
	}

IL_091b:
	{
		int8_t L_432;
		L_432 = ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline(NULL);
		G_B175_0 = ((int32_t)(L_432));
		G_B175_1 = G_B174_0;
	}

IL_0920:
	{
		G_B175_1->___sbyte_13 = (int8_t)G_B175_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_433 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_434 = L_433.___register;
		int8_t L_435 = L_434.___sbyte_14;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_436 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_437 = L_436.___register;
		int8_t L_438 = L_437.___sbyte_14;
		if ((((int32_t)L_435) == ((int32_t)L_438)))
		{
			G_B177_0 = (&V_20);
			goto IL_0942;
		}
		G_B176_0 = (&V_20);
	}
	{
		G_B178_0 = 0;
		G_B178_1 = G_B176_0;
		goto IL_0947;
	}

IL_0942:
	{
		int8_t L_439;
		L_439 = ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline(NULL);
		G_B178_0 = ((int32_t)(L_439));
		G_B178_1 = G_B177_0;
	}

IL_0947:
	{
		G_B178_1->___sbyte_14 = (int8_t)G_B178_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_440 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_441 = L_440.___register;
		int8_t L_442 = L_441.___sbyte_15;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_443 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_444 = L_443.___register;
		int8_t L_445 = L_444.___sbyte_15;
		if ((((int32_t)L_442) == ((int32_t)L_445)))
		{
			G_B180_0 = (&V_20);
			goto IL_0969;
		}
		G_B179_0 = (&V_20);
	}
	{
		G_B181_0 = 0;
		G_B181_1 = G_B179_0;
		goto IL_096e;
	}

IL_0969:
	{
		int8_t L_446;
		L_446 = ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline(NULL);
		G_B181_0 = ((int32_t)(L_446));
		G_B181_1 = G_B180_0;
	}

IL_096e:
	{
		G_B181_1->___sbyte_15 = (int8_t)G_B181_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_447;
		memset((&L_447), 0, sizeof(L_447));
		Vector_1__ctor_m48CD7847B9597F3193C9C0BA97ED64E276F4340A((&L_447), (&V_20), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		return L_447;
	}

IL_097b:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_448 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_449;
		L_449 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_448, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_450 = { reinterpret_cast<intptr_t> (UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var) };
		Type_t* L_451;
		L_451 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_450, NULL);
		bool L_452;
		L_452 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_449, L_451, NULL);
		if (!L_452)
		{
			goto IL_0ad9;
		}
	}
	{
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_453 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_454 = L_453.___register;
		uint16_t L_455 = L_454.___uint16_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_456 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_457 = L_456.___register;
		uint16_t L_458 = L_457.___uint16_0;
		if ((((int32_t)L_455) == ((int32_t)L_458)))
		{
			G_B185_0 = (&V_20);
			goto IL_09b6;
		}
		G_B184_0 = (&V_20);
	}
	{
		G_B186_0 = 0;
		G_B186_1 = G_B184_0;
		goto IL_09bb;
	}

IL_09b6:
	{
		uint16_t L_459;
		L_459 = ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline(NULL);
		G_B186_0 = ((int32_t)(L_459));
		G_B186_1 = G_B185_0;
	}

IL_09bb:
	{
		G_B186_1->___uint16_0 = (uint16_t)G_B186_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_460 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_461 = L_460.___register;
		uint16_t L_462 = L_461.___uint16_1;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_463 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_464 = L_463.___register;
		uint16_t L_465 = L_464.___uint16_1;
		if ((((int32_t)L_462) == ((int32_t)L_465)))
		{
			G_B188_0 = (&V_20);
			goto IL_09dd;
		}
		G_B187_0 = (&V_20);
	}
	{
		G_B189_0 = 0;
		G_B189_1 = G_B187_0;
		goto IL_09e2;
	}

IL_09dd:
	{
		uint16_t L_466;
		L_466 = ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline(NULL);
		G_B189_0 = ((int32_t)(L_466));
		G_B189_1 = G_B188_0;
	}

IL_09e2:
	{
		G_B189_1->___uint16_1 = (uint16_t)G_B189_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_467 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_468 = L_467.___register;
		uint16_t L_469 = L_468.___uint16_2;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_470 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_471 = L_470.___register;
		uint16_t L_472 = L_471.___uint16_2;
		if ((((int32_t)L_469) == ((int32_t)L_472)))
		{
			G_B191_0 = (&V_20);
			goto IL_0a04;
		}
		G_B190_0 = (&V_20);
	}
	{
		G_B192_0 = 0;
		G_B192_1 = G_B190_0;
		goto IL_0a09;
	}

IL_0a04:
	{
		uint16_t L_473;
		L_473 = ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline(NULL);
		G_B192_0 = ((int32_t)(L_473));
		G_B192_1 = G_B191_0;
	}

IL_0a09:
	{
		G_B192_1->___uint16_2 = (uint16_t)G_B192_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_474 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_475 = L_474.___register;
		uint16_t L_476 = L_475.___uint16_3;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_477 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_478 = L_477.___register;
		uint16_t L_479 = L_478.___uint16_3;
		if ((((int32_t)L_476) == ((int32_t)L_479)))
		{
			G_B194_0 = (&V_20);
			goto IL_0a2b;
		}
		G_B193_0 = (&V_20);
	}
	{
		G_B195_0 = 0;
		G_B195_1 = G_B193_0;
		goto IL_0a30;
	}

IL_0a2b:
	{
		uint16_t L_480;
		L_480 = ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline(NULL);
		G_B195_0 = ((int32_t)(L_480));
		G_B195_1 = G_B194_0;
	}

IL_0a30:
	{
		G_B195_1->___uint16_3 = (uint16_t)G_B195_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_481 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_482 = L_481.___register;
		uint16_t L_483 = L_482.___uint16_4;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_484 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_485 = L_484.___register;
		uint16_t L_486 = L_485.___uint16_4;
		if ((((int32_t)L_483) == ((int32_t)L_486)))
		{
			G_B197_0 = (&V_20);
			goto IL_0a52;
		}
		G_B196_0 = (&V_20);
	}
	{
		G_B198_0 = 0;
		G_B198_1 = G_B196_0;
		goto IL_0a57;
	}

IL_0a52:
	{
		uint16_t L_487;
		L_487 = ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline(NULL);
		G_B198_0 = ((int32_t)(L_487));
		G_B198_1 = G_B197_0;
	}

IL_0a57:
	{
		G_B198_1->___uint16_4 = (uint16_t)G_B198_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_488 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_489 = L_488.___register;
		uint16_t L_490 = L_489.___uint16_5;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_491 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_492 = L_491.___register;
		uint16_t L_493 = L_492.___uint16_5;
		if ((((int32_t)L_490) == ((int32_t)L_493)))
		{
			G_B200_0 = (&V_20);
			goto IL_0a79;
		}
		G_B199_0 = (&V_20);
	}
	{
		G_B201_0 = 0;
		G_B201_1 = G_B199_0;
		goto IL_0a7e;
	}

IL_0a79:
	{
		uint16_t L_494;
		L_494 = ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline(NULL);
		G_B201_0 = ((int32_t)(L_494));
		G_B201_1 = G_B200_0;
	}

IL_0a7e:
	{
		G_B201_1->___uint16_5 = (uint16_t)G_B201_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_495 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_496 = L_495.___register;
		uint16_t L_497 = L_496.___uint16_6;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_498 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_499 = L_498.___register;
		uint16_t L_500 = L_499.___uint16_6;
		if ((((int32_t)L_497) == ((int32_t)L_500)))
		{
			G_B203_0 = (&V_20);
			goto IL_0aa0;
		}
		G_B202_0 = (&V_20);
	}
	{
		G_B204_0 = 0;
		G_B204_1 = G_B202_0;
		goto IL_0aa5;
	}

IL_0aa0:
	{
		uint16_t L_501;
		L_501 = ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline(NULL);
		G_B204_0 = ((int32_t)(L_501));
		G_B204_1 = G_B203_0;
	}

IL_0aa5:
	{
		G_B204_1->___uint16_6 = (uint16_t)G_B204_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_502 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_503 = L_502.___register;
		uint16_t L_504 = L_503.___uint16_7;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_505 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_506 = L_505.___register;
		uint16_t L_507 = L_506.___uint16_7;
		if ((((int32_t)L_504) == ((int32_t)L_507)))
		{
			G_B206_0 = (&V_20);
			goto IL_0ac7;
		}
		G_B205_0 = (&V_20);
	}
	{
		G_B207_0 = 0;
		G_B207_1 = G_B205_0;
		goto IL_0acc;
	}

IL_0ac7:
	{
		uint16_t L_508;
		L_508 = ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline(NULL);
		G_B207_0 = ((int32_t)(L_508));
		G_B207_1 = G_B206_0;
	}

IL_0acc:
	{
		G_B207_1->___uint16_7 = (uint16_t)G_B207_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_509;
		memset((&L_509), 0, sizeof(L_509));
		Vector_1__ctor_m48CD7847B9597F3193C9C0BA97ED64E276F4340A((&L_509), (&V_20), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		return L_509;
	}

IL_0ad9:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_510 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_511;
		L_511 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_510, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_512 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		Type_t* L_513;
		L_513 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_512, NULL);
		bool L_514;
		L_514 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_511, L_513, NULL);
		if (!L_514)
		{
			goto IL_0c37;
		}
	}
	{
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_515 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_516 = L_515.___register;
		int16_t L_517 = L_516.___int16_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_518 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_519 = L_518.___register;
		int16_t L_520 = L_519.___int16_0;
		if ((((int32_t)L_517) == ((int32_t)L_520)))
		{
			G_B211_0 = (&V_20);
			goto IL_0b14;
		}
		G_B210_0 = (&V_20);
	}
	{
		G_B212_0 = 0;
		G_B212_1 = G_B210_0;
		goto IL_0b19;
	}

IL_0b14:
	{
		int16_t L_521;
		L_521 = ConstantHelper_GetInt16WithAllBitsSet_m70C5F99E624490970E2D4093FE6E800D1849DDFC_inline(NULL);
		G_B212_0 = ((int32_t)(L_521));
		G_B212_1 = G_B211_0;
	}

IL_0b19:
	{
		G_B212_1->___int16_0 = (int16_t)G_B212_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_522 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_523 = L_522.___register;
		int16_t L_524 = L_523.___int16_1;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_525 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_526 = L_525.___register;
		int16_t L_527 = L_526.___int16_1;
		if ((((int32_t)L_524) == ((int32_t)L_527)))
		{
			G_B214_0 = (&V_20);
			goto IL_0b3b;
		}
		G_B213_0 = (&V_20);
	}
	{
		G_B215_0 = 0;
		G_B215_1 = G_B213_0;
		goto IL_0b40;
	}

IL_0b3b:
	{
		int16_t L_528;
		L_528 = ConstantHelper_GetInt16WithAllBitsSet_m70C5F99E624490970E2D4093FE6E800D1849DDFC_inline(NULL);
		G_B215_0 = ((int32_t)(L_528));
		G_B215_1 = G_B214_0;
	}

IL_0b40:
	{
		G_B215_1->___int16_1 = (int16_t)G_B215_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_529 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_530 = L_529.___register;
		int16_t L_531 = L_530.___int16_2;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_532 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_533 = L_532.___register;
		int16_t L_534 = L_533.___int16_2;
		if ((((int32_t)L_531) == ((int32_t)L_534)))
		{
			G_B217_0 = (&V_20);
			goto IL_0b62;
		}
		G_B216_0 = (&V_20);
	}
	{
		G_B218_0 = 0;
		G_B218_1 = G_B216_0;
		goto IL_0b67;
	}

IL_0b62:
	{
		int16_t L_535;
		L_535 = ConstantHelper_GetInt16WithAllBitsSet_m70C5F99E624490970E2D4093FE6E800D1849DDFC_inline(NULL);
		G_B218_0 = ((int32_t)(L_535));
		G_B218_1 = G_B217_0;
	}

IL_0b67:
	{
		G_B218_1->___int16_2 = (int16_t)G_B218_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_536 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_537 = L_536.___register;
		int16_t L_538 = L_537.___int16_3;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_539 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_540 = L_539.___register;
		int16_t L_541 = L_540.___int16_3;
		if ((((int32_t)L_538) == ((int32_t)L_541)))
		{
			G_B220_0 = (&V_20);
			goto IL_0b89;
		}
		G_B219_0 = (&V_20);
	}
	{
		G_B221_0 = 0;
		G_B221_1 = G_B219_0;
		goto IL_0b8e;
	}

IL_0b89:
	{
		int16_t L_542;
		L_542 = ConstantHelper_GetInt16WithAllBitsSet_m70C5F99E624490970E2D4093FE6E800D1849DDFC_inline(NULL);
		G_B221_0 = ((int32_t)(L_542));
		G_B221_1 = G_B220_0;
	}

IL_0b8e:
	{
		G_B221_1->___int16_3 = (int16_t)G_B221_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_543 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_544 = L_543.___register;
		int16_t L_545 = L_544.___int16_4;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_546 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_547 = L_546.___register;
		int16_t L_548 = L_547.___int16_4;
		if ((((int32_t)L_545) == ((int32_t)L_548)))
		{
			G_B223_0 = (&V_20);
			goto IL_0bb0;
		}
		G_B222_0 = (&V_20);
	}
	{
		G_B224_0 = 0;
		G_B224_1 = G_B222_0;
		goto IL_0bb5;
	}

IL_0bb0:
	{
		int16_t L_549;
		L_549 = ConstantHelper_GetInt16WithAllBitsSet_m70C5F99E624490970E2D4093FE6E800D1849DDFC_inline(NULL);
		G_B224_0 = ((int32_t)(L_549));
		G_B224_1 = G_B223_0;
	}

IL_0bb5:
	{
		G_B224_1->___int16_4 = (int16_t)G_B224_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_550 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_551 = L_550.___register;
		int16_t L_552 = L_551.___int16_5;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_553 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_554 = L_553.___register;
		int16_t L_555 = L_554.___int16_5;
		if ((((int32_t)L_552) == ((int32_t)L_555)))
		{
			G_B226_0 = (&V_20);
			goto IL_0bd7;
		}
		G_B225_0 = (&V_20);
	}
	{
		G_B227_0 = 0;
		G_B227_1 = G_B225_0;
		goto IL_0bdc;
	}

IL_0bd7:
	{
		int16_t L_556;
		L_556 = ConstantHelper_GetInt16WithAllBitsSet_m70C5F99E624490970E2D4093FE6E800D1849DDFC_inline(NULL);
		G_B227_0 = ((int32_t)(L_556));
		G_B227_1 = G_B226_0;
	}

IL_0bdc:
	{
		G_B227_1->___int16_5 = (int16_t)G_B227_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_557 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_558 = L_557.___register;
		int16_t L_559 = L_558.___int16_6;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_560 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_561 = L_560.___register;
		int16_t L_562 = L_561.___int16_6;
		if ((((int32_t)L_559) == ((int32_t)L_562)))
		{
			G_B229_0 = (&V_20);
			goto IL_0bfe;
		}
		G_B228_0 = (&V_20);
	}
	{
		G_B230_0 = 0;
		G_B230_1 = G_B228_0;
		goto IL_0c03;
	}

IL_0bfe:
	{
		int16_t L_563;
		L_563 = ConstantHelper_GetInt16WithAllBitsSet_m70C5F99E624490970E2D4093FE6E800D1849DDFC_inline(NULL);
		G_B230_0 = ((int32_t)(L_563));
		G_B230_1 = G_B229_0;
	}

IL_0c03:
	{
		G_B230_1->___int16_6 = (int16_t)G_B230_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_564 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_565 = L_564.___register;
		int16_t L_566 = L_565.___int16_7;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_567 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_568 = L_567.___register;
		int16_t L_569 = L_568.___int16_7;
		if ((((int32_t)L_566) == ((int32_t)L_569)))
		{
			G_B232_0 = (&V_20);
			goto IL_0c25;
		}
		G_B231_0 = (&V_20);
	}
	{
		G_B233_0 = 0;
		G_B233_1 = G_B231_0;
		goto IL_0c2a;
	}

IL_0c25:
	{
		int16_t L_570;
		L_570 = ConstantHelper_GetInt16WithAllBitsSet_m70C5F99E624490970E2D4093FE6E800D1849DDFC_inline(NULL);
		G_B233_0 = ((int32_t)(L_570));
		G_B233_1 = G_B232_0;
	}

IL_0c2a:
	{
		G_B233_1->___int16_7 = (int16_t)G_B233_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_571;
		memset((&L_571), 0, sizeof(L_571));
		Vector_1__ctor_m48CD7847B9597F3193C9C0BA97ED64E276F4340A((&L_571), (&V_20), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		return L_571;
	}

IL_0c37:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_572 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_573;
		L_573 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_572, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_574 = { reinterpret_cast<intptr_t> (UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var) };
		Type_t* L_575;
		L_575 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_574, NULL);
		bool L_576;
		L_576 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_573, L_575, NULL);
		if (!L_576)
		{
			goto IL_0cf9;
		}
	}
	{
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_577 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_578 = L_577.___register;
		uint32_t L_579 = L_578.___uint32_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_580 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_581 = L_580.___register;
		uint32_t L_582 = L_581.___uint32_0;
		if ((((int32_t)L_579) == ((int32_t)L_582)))
		{
			G_B237_0 = (&V_20);
			goto IL_0c72;
		}
		G_B236_0 = (&V_20);
	}
	{
		G_B238_0 = ((uint32_t)(0));
		G_B238_1 = G_B236_0;
		goto IL_0c77;
	}

IL_0c72:
	{
		uint32_t L_583;
		L_583 = ConstantHelper_GetUInt32WithAllBitsSet_m78CBFE0C29CF227C16D2A9021972A0D54744BCAF_inline(NULL);
		G_B238_0 = L_583;
		G_B238_1 = G_B237_0;
	}

IL_0c77:
	{
		G_B238_1->___uint32_0 = G_B238_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_584 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_585 = L_584.___register;
		uint32_t L_586 = L_585.___uint32_1;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_587 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_588 = L_587.___register;
		uint32_t L_589 = L_588.___uint32_1;
		if ((((int32_t)L_586) == ((int32_t)L_589)))
		{
			G_B240_0 = (&V_20);
			goto IL_0c99;
		}
		G_B239_0 = (&V_20);
	}
	{
		G_B241_0 = ((uint32_t)(0));
		G_B241_1 = G_B239_0;
		goto IL_0c9e;
	}

IL_0c99:
	{
		uint32_t L_590;
		L_590 = ConstantHelper_GetUInt32WithAllBitsSet_m78CBFE0C29CF227C16D2A9021972A0D54744BCAF_inline(NULL);
		G_B241_0 = L_590;
		G_B241_1 = G_B240_0;
	}

IL_0c9e:
	{
		G_B241_1->___uint32_1 = G_B241_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_591 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_592 = L_591.___register;
		uint32_t L_593 = L_592.___uint32_2;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_594 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_595 = L_594.___register;
		uint32_t L_596 = L_595.___uint32_2;
		if ((((int32_t)L_593) == ((int32_t)L_596)))
		{
			G_B243_0 = (&V_20);
			goto IL_0cc0;
		}
		G_B242_0 = (&V_20);
	}
	{
		G_B244_0 = ((uint32_t)(0));
		G_B244_1 = G_B242_0;
		goto IL_0cc5;
	}

IL_0cc0:
	{
		uint32_t L_597;
		L_597 = ConstantHelper_GetUInt32WithAllBitsSet_m78CBFE0C29CF227C16D2A9021972A0D54744BCAF_inline(NULL);
		G_B244_0 = L_597;
		G_B244_1 = G_B243_0;
	}

IL_0cc5:
	{
		G_B244_1->___uint32_2 = G_B244_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_598 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_599 = L_598.___register;
		uint32_t L_600 = L_599.___uint32_3;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_601 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_602 = L_601.___register;
		uint32_t L_603 = L_602.___uint32_3;
		if ((((int32_t)L_600) == ((int32_t)L_603)))
		{
			G_B246_0 = (&V_20);
			goto IL_0ce7;
		}
		G_B245_0 = (&V_20);
	}
	{
		G_B247_0 = ((uint32_t)(0));
		G_B247_1 = G_B245_0;
		goto IL_0cec;
	}

IL_0ce7:
	{
		uint32_t L_604;
		L_604 = ConstantHelper_GetUInt32WithAllBitsSet_m78CBFE0C29CF227C16D2A9021972A0D54744BCAF_inline(NULL);
		G_B247_0 = L_604;
		G_B247_1 = G_B246_0;
	}

IL_0cec:
	{
		G_B247_1->___uint32_3 = G_B247_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_605;
		memset((&L_605), 0, sizeof(L_605));
		Vector_1__ctor_m48CD7847B9597F3193C9C0BA97ED64E276F4340A((&L_605), (&V_20), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		return L_605;
	}

IL_0cf9:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_606 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_607;
		L_607 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_606, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_608 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		Type_t* L_609;
		L_609 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_608, NULL);
		bool L_610;
		L_610 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_607, L_609, NULL);
		if (!L_610)
		{
			goto IL_0dbb;
		}
	}
	{
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_611 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_612 = L_611.___register;
		int32_t L_613 = L_612.___int32_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_614 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_615 = L_614.___register;
		int32_t L_616 = L_615.___int32_0;
		if ((((int32_t)L_613) == ((int32_t)L_616)))
		{
			G_B251_0 = (&V_20);
			goto IL_0d34;
		}
		G_B250_0 = (&V_20);
	}
	{
		G_B252_0 = 0;
		G_B252_1 = G_B250_0;
		goto IL_0d39;
	}

IL_0d34:
	{
		int32_t L_617;
		L_617 = ConstantHelper_GetInt32WithAllBitsSet_m245101340DDE7277600327D319DF86F1FFEA4FD0_inline(NULL);
		G_B252_0 = L_617;
		G_B252_1 = G_B251_0;
	}

IL_0d39:
	{
		G_B252_1->___int32_0 = G_B252_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_618 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_619 = L_618.___register;
		int32_t L_620 = L_619.___int32_1;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_621 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_622 = L_621.___register;
		int32_t L_623 = L_622.___int32_1;
		if ((((int32_t)L_620) == ((int32_t)L_623)))
		{
			G_B254_0 = (&V_20);
			goto IL_0d5b;
		}
		G_B253_0 = (&V_20);
	}
	{
		G_B255_0 = 0;
		G_B255_1 = G_B253_0;
		goto IL_0d60;
	}

IL_0d5b:
	{
		int32_t L_624;
		L_624 = ConstantHelper_GetInt32WithAllBitsSet_m245101340DDE7277600327D319DF86F1FFEA4FD0_inline(NULL);
		G_B255_0 = L_624;
		G_B255_1 = G_B254_0;
	}

IL_0d60:
	{
		G_B255_1->___int32_1 = G_B255_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_625 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_626 = L_625.___register;
		int32_t L_627 = L_626.___int32_2;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_628 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_629 = L_628.___register;
		int32_t L_630 = L_629.___int32_2;
		if ((((int32_t)L_627) == ((int32_t)L_630)))
		{
			G_B257_0 = (&V_20);
			goto IL_0d82;
		}
		G_B256_0 = (&V_20);
	}
	{
		G_B258_0 = 0;
		G_B258_1 = G_B256_0;
		goto IL_0d87;
	}

IL_0d82:
	{
		int32_t L_631;
		L_631 = ConstantHelper_GetInt32WithAllBitsSet_m245101340DDE7277600327D319DF86F1FFEA4FD0_inline(NULL);
		G_B258_0 = L_631;
		G_B258_1 = G_B257_0;
	}

IL_0d87:
	{
		G_B258_1->___int32_2 = G_B258_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_632 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_633 = L_632.___register;
		int32_t L_634 = L_633.___int32_3;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_635 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_636 = L_635.___register;
		int32_t L_637 = L_636.___int32_3;
		if ((((int32_t)L_634) == ((int32_t)L_637)))
		{
			G_B260_0 = (&V_20);
			goto IL_0da9;
		}
		G_B259_0 = (&V_20);
	}
	{
		G_B261_0 = 0;
		G_B261_1 = G_B259_0;
		goto IL_0dae;
	}

IL_0da9:
	{
		int32_t L_638;
		L_638 = ConstantHelper_GetInt32WithAllBitsSet_m245101340DDE7277600327D319DF86F1FFEA4FD0_inline(NULL);
		G_B261_0 = L_638;
		G_B261_1 = G_B260_0;
	}

IL_0dae:
	{
		G_B261_1->___int32_3 = G_B261_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_639;
		memset((&L_639), 0, sizeof(L_639));
		Vector_1__ctor_m48CD7847B9597F3193C9C0BA97ED64E276F4340A((&L_639), (&V_20), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		return L_639;
	}

IL_0dbb:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_640 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_641;
		L_641 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_640, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_642 = { reinterpret_cast<intptr_t> (UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var) };
		Type_t* L_643;
		L_643 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_642, NULL);
		bool L_644;
		L_644 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_641, L_643, NULL);
		if (!L_644)
		{
			goto IL_0e2e;
		}
	}
	{
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_645 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_646 = L_645.___register;
		uint64_t L_647 = L_646.___uint64_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_648 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_649 = L_648.___register;
		uint64_t L_650 = L_649.___uint64_0;
		if ((((int64_t)L_647) == ((int64_t)L_650)))
		{
			G_B265_0 = (&V_20);
			goto IL_0df4;
		}
		G_B264_0 = (&V_20);
	}
	{
		G_B266_0 = ((uint64_t)(((int64_t)0)));
		G_B266_1 = G_B264_0;
		goto IL_0df9;
	}

IL_0df4:
	{
		uint64_t L_651;
		L_651 = ConstantHelper_GetUInt64WithAllBitsSet_mB7F3E046EE6B1B20C552BF7CF619416E239A5A96_inline(NULL);
		G_B266_0 = L_651;
		G_B266_1 = G_B265_0;
	}

IL_0df9:
	{
		G_B266_1->___uint64_0 = G_B266_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_652 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_653 = L_652.___register;
		uint64_t L_654 = L_653.___uint64_1;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_655 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_656 = L_655.___register;
		uint64_t L_657 = L_656.___uint64_1;
		if ((((int64_t)L_654) == ((int64_t)L_657)))
		{
			G_B268_0 = (&V_20);
			goto IL_0e1c;
		}
		G_B267_0 = (&V_20);
	}
	{
		G_B269_0 = ((uint64_t)(((int64_t)0)));
		G_B269_1 = G_B267_0;
		goto IL_0e21;
	}

IL_0e1c:
	{
		uint64_t L_658;
		L_658 = ConstantHelper_GetUInt64WithAllBitsSet_mB7F3E046EE6B1B20C552BF7CF619416E239A5A96_inline(NULL);
		G_B269_0 = L_658;
		G_B269_1 = G_B268_0;
	}

IL_0e21:
	{
		G_B269_1->___uint64_1 = G_B269_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_659;
		memset((&L_659), 0, sizeof(L_659));
		Vector_1__ctor_m48CD7847B9597F3193C9C0BA97ED64E276F4340A((&L_659), (&V_20), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		return L_659;
	}

IL_0e2e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_660 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_661;
		L_661 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_660, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_662 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		Type_t* L_663;
		L_663 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_662, NULL);
		bool L_664;
		L_664 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_661, L_663, NULL);
		if (!L_664)
		{
			goto IL_0ea1;
		}
	}
	{
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_665 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_666 = L_665.___register;
		int64_t L_667 = L_666.___int64_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_668 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_669 = L_668.___register;
		int64_t L_670 = L_669.___int64_0;
		if ((((int64_t)L_667) == ((int64_t)L_670)))
		{
			G_B273_0 = (&V_20);
			goto IL_0e67;
		}
		G_B272_0 = (&V_20);
	}
	{
		G_B274_0 = ((int64_t)0);
		G_B274_1 = G_B272_0;
		goto IL_0e6c;
	}

IL_0e67:
	{
		int64_t L_671;
		L_671 = ConstantHelper_GetInt64WithAllBitsSet_m56A9AB64BA5DDD9ECC99424875824591DEFD5C40_inline(NULL);
		G_B274_0 = L_671;
		G_B274_1 = G_B273_0;
	}

IL_0e6c:
	{
		G_B274_1->___int64_0 = G_B274_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_672 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_673 = L_672.___register;
		int64_t L_674 = L_673.___int64_1;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_675 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_676 = L_675.___register;
		int64_t L_677 = L_676.___int64_1;
		if ((((int64_t)L_674) == ((int64_t)L_677)))
		{
			G_B276_0 = (&V_20);
			goto IL_0e8f;
		}
		G_B275_0 = (&V_20);
	}
	{
		G_B277_0 = ((int64_t)0);
		G_B277_1 = G_B275_0;
		goto IL_0e94;
	}

IL_0e8f:
	{
		int64_t L_678;
		L_678 = ConstantHelper_GetInt64WithAllBitsSet_m56A9AB64BA5DDD9ECC99424875824591DEFD5C40_inline(NULL);
		G_B277_0 = L_678;
		G_B277_1 = G_B276_0;
	}

IL_0e94:
	{
		G_B277_1->___int64_1 = G_B277_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_679;
		memset((&L_679), 0, sizeof(L_679));
		Vector_1__ctor_m48CD7847B9597F3193C9C0BA97ED64E276F4340A((&L_679), (&V_20), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		return L_679;
	}

IL_0ea1:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_680 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_681;
		L_681 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_680, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_682 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		Type_t* L_683;
		L_683 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_682, NULL);
		bool L_684;
		L_684 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_681, L_683, NULL);
		if (!L_684)
		{
			goto IL_0f73;
		}
	}
	{
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_685 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_686 = L_685.___register;
		float L_687 = L_686.___single_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_688 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_689 = L_688.___register;
		float L_690 = L_689.___single_0;
		if ((((float)L_687) == ((float)L_690)))
		{
			G_B281_0 = (&V_20);
			goto IL_0ee0;
		}
		G_B280_0 = (&V_20);
	}
	{
		G_B282_0 = (0.0f);
		G_B282_1 = G_B280_0;
		goto IL_0ee5;
	}

IL_0ee0:
	{
		float L_691;
		L_691 = ConstantHelper_GetSingleWithAllBitsSet_m66FC11C0680F744EB8315278910061C9535818C0_inline(NULL);
		G_B282_0 = L_691;
		G_B282_1 = G_B281_0;
	}

IL_0ee5:
	{
		G_B282_1->___single_0 = G_B282_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_692 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_693 = L_692.___register;
		float L_694 = L_693.___single_1;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_695 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_696 = L_695.___register;
		float L_697 = L_696.___single_1;
		if ((((float)L_694) == ((float)L_697)))
		{
			G_B284_0 = (&V_20);
			goto IL_0f0b;
		}
		G_B283_0 = (&V_20);
	}
	{
		G_B285_0 = (0.0f);
		G_B285_1 = G_B283_0;
		goto IL_0f10;
	}

IL_0f0b:
	{
		float L_698;
		L_698 = ConstantHelper_GetSingleWithAllBitsSet_m66FC11C0680F744EB8315278910061C9535818C0_inline(NULL);
		G_B285_0 = L_698;
		G_B285_1 = G_B284_0;
	}

IL_0f10:
	{
		G_B285_1->___single_1 = G_B285_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_699 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_700 = L_699.___register;
		float L_701 = L_700.___single_2;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_702 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_703 = L_702.___register;
		float L_704 = L_703.___single_2;
		if ((((float)L_701) == ((float)L_704)))
		{
			G_B287_0 = (&V_20);
			goto IL_0f36;
		}
		G_B286_0 = (&V_20);
	}
	{
		G_B288_0 = (0.0f);
		G_B288_1 = G_B286_0;
		goto IL_0f3b;
	}

IL_0f36:
	{
		float L_705;
		L_705 = ConstantHelper_GetSingleWithAllBitsSet_m66FC11C0680F744EB8315278910061C9535818C0_inline(NULL);
		G_B288_0 = L_705;
		G_B288_1 = G_B287_0;
	}

IL_0f3b:
	{
		G_B288_1->___single_2 = G_B288_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_706 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_707 = L_706.___register;
		float L_708 = L_707.___single_3;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_709 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_710 = L_709.___register;
		float L_711 = L_710.___single_3;
		if ((((float)L_708) == ((float)L_711)))
		{
			G_B290_0 = (&V_20);
			goto IL_0f61;
		}
		G_B289_0 = (&V_20);
	}
	{
		G_B291_0 = (0.0f);
		G_B291_1 = G_B289_0;
		goto IL_0f66;
	}

IL_0f61:
	{
		float L_712;
		L_712 = ConstantHelper_GetSingleWithAllBitsSet_m66FC11C0680F744EB8315278910061C9535818C0_inline(NULL);
		G_B291_0 = L_712;
		G_B291_1 = G_B290_0;
	}

IL_0f66:
	{
		G_B291_1->___single_3 = G_B291_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_713;
		memset((&L_713), 0, sizeof(L_713));
		Vector_1__ctor_m48CD7847B9597F3193C9C0BA97ED64E276F4340A((&L_713), (&V_20), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		return L_713;
	}

IL_0f73:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_714 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_715;
		L_715 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_714, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_716 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		Type_t* L_717;
		L_717 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_716, NULL);
		bool L_718;
		L_718 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_715, L_717, NULL);
		if (!L_718)
		{
			goto IL_0ff4;
		}
	}
	{
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_719 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_720 = L_719.___register;
		double L_721 = L_720.___double_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_722 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_723 = L_722.___register;
		double L_724 = L_723.___double_0;
		if ((((double)L_721) == ((double)L_724)))
		{
			G_B295_0 = (&V_20);
			goto IL_0fb3;
		}
		G_B294_0 = (&V_20);
	}
	{
		G_B296_0 = (0.0);
		G_B296_1 = G_B294_0;
		goto IL_0fb8;
	}

IL_0fb3:
	{
		double L_725;
		L_725 = ConstantHelper_GetDoubleWithAllBitsSet_mF43AF77A6C93B7590B35B20458E80F2BC66AD5F2_inline(NULL);
		G_B296_0 = L_725;
		G_B296_1 = G_B295_0;
	}

IL_0fb8:
	{
		G_B296_1->___double_0 = G_B296_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_726 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_727 = L_726.___register;
		double L_728 = L_727.___double_1;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_729 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_730 = L_729.___register;
		double L_731 = L_730.___double_1;
		if ((((double)L_728) == ((double)L_731)))
		{
			G_B298_0 = (&V_20);
			goto IL_0fe2;
		}
		G_B297_0 = (&V_20);
	}
	{
		G_B299_0 = (0.0);
		G_B299_1 = G_B297_0;
		goto IL_0fe7;
	}

IL_0fe2:
	{
		double L_732;
		L_732 = ConstantHelper_GetDoubleWithAllBitsSet_mF43AF77A6C93B7590B35B20458E80F2BC66AD5F2_inline(NULL);
		G_B299_0 = L_732;
		G_B299_1 = G_B298_0;
	}

IL_0fe7:
	{
		G_B299_1->___double_1 = G_B299_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_733;
		memset((&L_733), 0, sizeof(L_733));
		Vector_1__ctor_m48CD7847B9597F3193C9C0BA97ED64E276F4340A((&L_733), (&V_20), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		return L_733;
	}

IL_0ff4:
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_734 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_734, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE310274B02A605A3985345944A620D7D2E019A1A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_734, method);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline (const RuntimeMethod* method) 
{
	uint8_t V_0 = 0x0;
	{
		V_0 = (uint8_t)0;
		*((int8_t*)((uintptr_t)(&V_0))) = (int8_t)((int32_t)255);
		uint8_t L_0 = V_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int8_t ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline (const RuntimeMethod* method) 
{
	int8_t V_0 = 0x0;
	{
		V_0 = (int8_t)0;
		*((int8_t*)((uintptr_t)(&V_0))) = (int8_t)(-1);
		int8_t L_0 = V_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline (const RuntimeMethod* method) 
{
	uint16_t V_0 = 0;
	{
		V_0 = (uint16_t)0;
		*((int16_t*)((uintptr_t)(&V_0))) = (int16_t)((int32_t)65535);
		uint16_t L_0 = V_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int16_t ConstantHelper_GetInt16WithAllBitsSet_m70C5F99E624490970E2D4093FE6E800D1849DDFC_inline (const RuntimeMethod* method) 
{
	int16_t V_0 = 0;
	{
		V_0 = (int16_t)0;
		*((int16_t*)((uintptr_t)(&V_0))) = (int16_t)(-1);
		int16_t L_0 = V_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t ConstantHelper_GetUInt32WithAllBitsSet_m78CBFE0C29CF227C16D2A9021972A0D54744BCAF_inline (const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		V_0 = 0;
		*((int32_t*)((uintptr_t)(&V_0))) = (int32_t)(-1);
		uint32_t L_0 = V_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ConstantHelper_GetInt32WithAllBitsSet_m245101340DDE7277600327D319DF86F1FFEA4FD0_inline (const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		*((int32_t*)((uintptr_t)(&V_0))) = (int32_t)(-1);
		int32_t L_0 = V_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t ConstantHelper_GetUInt64WithAllBitsSet_mB7F3E046EE6B1B20C552BF7CF619416E239A5A96_inline (const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	{
		V_0 = ((int64_t)0);
		*((int64_t*)((uintptr_t)(&V_0))) = (int64_t)((int64_t)(-1));
		uint64_t L_0 = V_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t ConstantHelper_GetInt64WithAllBitsSet_m56A9AB64BA5DDD9ECC99424875824591DEFD5C40_inline (const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	{
		V_0 = ((int64_t)0);
		*((int64_t*)((uintptr_t)(&V_0))) = (int64_t)((int64_t)(-1));
		int64_t L_0 = V_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ConstantHelper_GetSingleWithAllBitsSet_m66FC11C0680F744EB8315278910061C9535818C0_inline (const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		V_0 = (0.0f);
		*((int32_t*)((uintptr_t)(&V_0))) = (int32_t)(-1);
		float L_0 = V_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double ConstantHelper_GetDoubleWithAllBitsSet_mF43AF77A6C93B7590B35B20458E80F2BC66AD5F2_inline (const RuntimeMethod* method) 
{
	double V_0 = 0.0;
	{
		V_0 = (0.0);
		*((int64_t*)((uintptr_t)(&V_0))) = (int64_t)((int64_t)(-1));
		double L_0 = V_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_0 = ((Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___s_count;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector_1_ScalarEquals_m4E13E30219B0D2AADB58AD6E5CB2B54B9FCBFAAE_gshared_inline (uint16_t ___0_left, uint16_t ___1_right, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_0034;
		}
	}
	{
		uint16_t L_5 = ___0_left;
		uint16_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_6);
		uint16_t L_8 = ___1_right;
		uint16_t L_9 = L_8;
		RuntimeObject* L_10 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_9);
		return (bool)((((int32_t)((*(uint8_t*)((uint8_t*)(uint8_t*)UnBox(L_7, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var))))) == ((int32_t)((*(uint8_t*)((uint8_t*)(uint8_t*)UnBox(L_10, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var))))))? 1 : 0);
	}

IL_0034:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		bool L_15;
		L_15 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_12, L_14, NULL);
		if (!L_15)
		{
			goto IL_0068;
		}
	}
	{
		uint16_t L_16 = ___0_left;
		uint16_t L_17 = L_16;
		RuntimeObject* L_18 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_17);
		uint16_t L_19 = ___1_right;
		uint16_t L_20 = L_19;
		RuntimeObject* L_21 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_20);
		return (bool)((((int32_t)((*(int8_t*)((int8_t*)(int8_t*)UnBox(L_18, SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var))))) == ((int32_t)((*(int8_t*)((int8_t*)(int8_t*)UnBox(L_21, SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var))))))? 1 : 0);
	}

IL_0068:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_22 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_23;
		L_23 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_22, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var) };
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		bool L_26;
		L_26 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_23, L_25, NULL);
		if (!L_26)
		{
			goto IL_009c;
		}
	}
	{
		uint16_t L_27 = ___0_left;
		uint16_t L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_28);
		uint16_t L_30 = ___1_right;
		uint16_t L_31 = L_30;
		RuntimeObject* L_32 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_31);
		return (bool)((((int32_t)((*(uint16_t*)((uint16_t*)(uint16_t*)UnBox(L_29, UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var))))) == ((int32_t)((*(uint16_t*)((uint16_t*)(uint16_t*)UnBox(L_32, UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var))))))? 1 : 0);
	}

IL_009c:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_33 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_34;
		L_34 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_33, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_35 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		Type_t* L_36;
		L_36 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_35, NULL);
		bool L_37;
		L_37 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_34, L_36, NULL);
		if (!L_37)
		{
			goto IL_00d0;
		}
	}
	{
		uint16_t L_38 = ___0_left;
		uint16_t L_39 = L_38;
		RuntimeObject* L_40 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_39);
		uint16_t L_41 = ___1_right;
		uint16_t L_42 = L_41;
		RuntimeObject* L_43 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_42);
		return (bool)((((int32_t)((*(int16_t*)((int16_t*)(int16_t*)UnBox(L_40, Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var))))) == ((int32_t)((*(int16_t*)((int16_t*)(int16_t*)UnBox(L_43, Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var))))))? 1 : 0);
	}

IL_00d0:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_44 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_45;
		L_45 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_44, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_46 = { reinterpret_cast<intptr_t> (UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var) };
		Type_t* L_47;
		L_47 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_46, NULL);
		bool L_48;
		L_48 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_45, L_47, NULL);
		if (!L_48)
		{
			goto IL_0104;
		}
	}
	{
		uint16_t L_49 = ___0_left;
		uint16_t L_50 = L_49;
		RuntimeObject* L_51 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_50);
		uint16_t L_52 = ___1_right;
		uint16_t L_53 = L_52;
		RuntimeObject* L_54 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_53);
		return (bool)((((int32_t)((*(uint32_t*)((uint32_t*)(uint32_t*)UnBox(L_51, UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var))))) == ((int32_t)((*(uint32_t*)((uint32_t*)(uint32_t*)UnBox(L_54, UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var))))))? 1 : 0);
	}

IL_0104:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_55 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_56;
		L_56 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_55, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_57 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		Type_t* L_58;
		L_58 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_57, NULL);
		bool L_59;
		L_59 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_56, L_58, NULL);
		if (!L_59)
		{
			goto IL_0138;
		}
	}
	{
		uint16_t L_60 = ___0_left;
		uint16_t L_61 = L_60;
		RuntimeObject* L_62 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_61);
		uint16_t L_63 = ___1_right;
		uint16_t L_64 = L_63;
		RuntimeObject* L_65 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_64);
		return (bool)((((int32_t)((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_62, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var))))) == ((int32_t)((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_65, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var))))))? 1 : 0);
	}

IL_0138:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_66 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_67;
		L_67 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_66, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_68 = { reinterpret_cast<intptr_t> (UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var) };
		Type_t* L_69;
		L_69 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_68, NULL);
		bool L_70;
		L_70 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_67, L_69, NULL);
		if (!L_70)
		{
			goto IL_016c;
		}
	}
	{
		uint16_t L_71 = ___0_left;
		uint16_t L_72 = L_71;
		RuntimeObject* L_73 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_72);
		uint16_t L_74 = ___1_right;
		uint16_t L_75 = L_74;
		RuntimeObject* L_76 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_75);
		return (bool)((((int64_t)((*(uint64_t*)((uint64_t*)(uint64_t*)UnBox(L_73, UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var))))) == ((int64_t)((*(uint64_t*)((uint64_t*)(uint64_t*)UnBox(L_76, UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var))))))? 1 : 0);
	}

IL_016c:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_77 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_78;
		L_78 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_77, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_79 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		Type_t* L_80;
		L_80 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_79, NULL);
		bool L_81;
		L_81 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_78, L_80, NULL);
		if (!L_81)
		{
			goto IL_01a0;
		}
	}
	{
		uint16_t L_82 = ___0_left;
		uint16_t L_83 = L_82;
		RuntimeObject* L_84 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_83);
		uint16_t L_85 = ___1_right;
		uint16_t L_86 = L_85;
		RuntimeObject* L_87 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_86);
		return (bool)((((int64_t)((*(int64_t*)((int64_t*)(int64_t*)UnBox(L_84, Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var))))) == ((int64_t)((*(int64_t*)((int64_t*)(int64_t*)UnBox(L_87, Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var))))))? 1 : 0);
	}

IL_01a0:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_88 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_89;
		L_89 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_88, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_90 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		Type_t* L_91;
		L_91 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_90, NULL);
		bool L_92;
		L_92 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_89, L_91, NULL);
		if (!L_92)
		{
			goto IL_01d4;
		}
	}
	{
		uint16_t L_93 = ___0_left;
		uint16_t L_94 = L_93;
		RuntimeObject* L_95 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_94);
		uint16_t L_96 = ___1_right;
		uint16_t L_97 = L_96;
		RuntimeObject* L_98 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_97);
		return (bool)((((float)((*(float*)((float*)(float*)UnBox(L_95, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var))))) == ((float)((*(float*)((float*)(float*)UnBox(L_98, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var))))))? 1 : 0);
	}

IL_01d4:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_99 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_100;
		L_100 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_99, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_101 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		Type_t* L_102;
		L_102 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_101, NULL);
		bool L_103;
		L_103 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_100, L_102, NULL);
		if (!L_103)
		{
			goto IL_0208;
		}
	}
	{
		uint16_t L_104 = ___0_left;
		uint16_t L_105 = L_104;
		RuntimeObject* L_106 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_105);
		uint16_t L_107 = ___1_right;
		uint16_t L_108 = L_107;
		RuntimeObject* L_109 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_108);
		return (bool)((((double)((*(double*)((double*)(double*)UnBox(L_106, Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var))))) == ((double)((*(double*)((double*)(double*)UnBox(L_109, Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var))))))? 1 : 0);
	}

IL_0208:
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_110 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_110, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE310274B02A605A3985345944A620D7D2E019A1A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_110, method);
	}
}
