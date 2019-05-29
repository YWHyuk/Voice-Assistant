#include "Speaker.h"


void Speaker::synthesizeSpeech(std::string str)
{
	// Creates an instance of a speech config with specified subscription key and service region.
	// Replace with your own subscription key and service region (e.g., "westus").
	auto config = SpeechConfig::FromSubscription("006dac530f224a82a80cb67d1c833be4", "koreacentral");

	// Creates a speech synthesizer using the default speaker as audio output. The default spoken language is "en-us".
	auto synthesizer = SpeechSynthesizer::FromConfig(config);

	// Receive a text from console input and synthesize it to speaker.
	std::string text;
	text = str;
	//getline(cin, text);

	//말하는 부분
	auto result = synthesizer->SpeakTextAsync(text).get();

	// Checks result.
	if (result->Reason == ResultReason::SynthesizingAudioCompleted)
	{
		cout << "Speech synthesized to speaker for text [" << text << "]" << std::endl;
	}
	else if (result->Reason == ResultReason::Canceled)
	{
		auto cancellation = SpeechSynthesisCancellationDetails::FromResult(result);
		cout << "CANCELED: Reason=" << (int)cancellation->Reason << std::endl;

		if (cancellation->Reason == CancellationReason::Error)
		{
			cout << "CANCELED: ErrorCode=" << (int)cancellation->ErrorCode << std::endl;
			cout << "CANCELED: ErrorDetails=[" << cancellation->ErrorDetails << "]" << std::endl;
			cout << "CANCELED: Did you update the subscription info?" << std::endl;
		}
	}
}
