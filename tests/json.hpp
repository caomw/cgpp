#ifndef _CGPP_JSON1_HPP_
#define _CGPP_JSON1_HPP_

#pragma once

const std::string json = "{\"version\":\"1\",\"guid\":\"201c3501-9867-48c8-8065-a0400a723c4c\",\"creator\":\"null\",\"relations\":[{\"label\":\"needed\",\"id\":\"04418253-0315-4206-86ea-ad395ea6e911\",\"index\":\"1\",\"postag\":\"NA\"},{\"label\":\"over\",\"id\":\"cd529225-15b1-4a2a-996a-37b8162d22c3\",\"index\":\"2\",\"postag\":\"NA\"}],\"concepts\":[{\"label\":\"Clarity\",\"id\":\"8bb0b3ec-7c20-4338-9195-4362a9db487c\",\"index\":\"0\",\"postag\":\"NA\"},{\"label\":\"resuscitation\",\"id\":\"450a9368-e978-4e47-b879-603ce3eb4c0a\",\"index\":\"3\",\"postag\":\"NA\"}],\"adjacencies\":[{\"nodeFrom\":\"8bb0b3ec-7c20-4338-9195-4362a9db487c\",\"nodeTo\":\"04418253-0315-4206-86ea-ad395ea6e911\",\"index\":\"1\",\"order\":\"cr\"},{\"nodeFrom\":\"8bb0b3ec-7c20-4338-9195-4362a9db487c\",\"nodeTo\":\"cd529225-15b1-4a2a-996a-37b8162d22c3\",\"index\":\"2\",\"order\":\"cr\"},{\"nodeFrom\":\"cd529225-15b1-4a2a-996a-37b8162d22c3\",\"nodeTo\":\"450a9368-e978-4e47-b879-603ce3eb4c0a\",\"index\":\"1\",\"order\":\"rc\"}]}";

const std::string json1a = "{\"version\":\"1\",\"guid\":\"a6089d27-3112-4859-8470-e04325da0341\",\"creator\":\"null\",\"relations\":[{\"label\":\"introduced\",\"id\":\"cb2743ac-2684-403c-8b9c-1837db00285e\",\"index\":\"3\",\"postag\":\"NA\"},{\"label\":\"DIY\",\"id\":\"52281bcc-2c38-45b3-a78e-9a27851de558\",\"postag\":\"NA\",\"index\":\"0\"},{\"label\":\"personal\",\"id\":\"519dc365-2e56-455d-91d4-80c516632b64\",\"postag\":\"NA\",\"index\":\"1\"}],\"concepts\":[{\"label\":\"care\",\"id\":\"18652565-2b37-4de0-9129-e23aab516348\",\"index\":\"2\",\"postag\":\"NA\"}],\"adjacencies\":[{\"nodeFrom\":\"52281bcc-2c38-45b3-a78e-9a27851de558\",\"nodeTo\":\"18652565-2b37-4de0-9129-e23aab516348\",\"index\":\"1\",\"order\":\"rc\"},{\"nodeFrom\":\"519dc365-2e56-455d-91d4-80c516632b64\",\"nodeTo\":\"18652565-2b37-4de0-9129-e23aab516348\",\"index\":\"1\",\"order\":\"rc\"},{\"nodeFrom\":\"18652565-2b37-4de0-9129-e23aab516348\",\"nodeTo\":\"cb2743ac-2684-403c-8b9c-1837db00285e\",\"index\":\"1\",\"order\":\"cr\"}]}";

const std::string json1b = "{\"version\":\"1\",\"guid\":\"0ee76341-cbd4-48bb-88d8-474b3e6eecd3\",\"creator\":\"null\",\"relations\":[{\"label\":\"Fluorescent\",\"id\":\"486b222a-2ea0-45cc-8e5e-3ea5e4d2a8da\",\"index\":\"0\",\"postag\":\"NA\"},{\"label\":\"can\",\"id\":\"65a9c3d8-4e30-466b-9433-48357ccd6432\",\"index\":\"2\",\"postag\":\"NA\"},{\"label\":\"about\",\"id\":\"9974481d-8eac-4592-be37-19060ce6894c\",\"postag\":\"NA\",\"index\":\"5\"}],\"concepts\":[{\"label\":\"mouse\",\"id\":\"e21dab60-99e6-485c-91e7-124e3b5499ab\",\"index\":\"1\",\"postag\":\"NA\"},{\"label\":\"us\",\"id\":\"eb1c2035-6648-4212-bd5b-b498039217c4\",\"index\":\"4\",\"postag\":\"NA\"},{\"label\":\"many\",\"id\":\"d5d80d71-5d1d-4015-b33a-20173132dc5e\",\"index\":\"6\",\"postag\":\"NA\"},{\"label\":\"diseases\",\"id\":\"129bb6a4-d01d-4629-921b-3352a14aaae4\",\"index\":\"7\",\"postag\":\"NA\"},{\"label\":\"teach\",\"id\":\"eba0345d-b564-418c-90ea-a79452293b17\",\"postag\":\"NA\",\"index\":\"3\"}],\"adjacencies\":[{\"nodeFrom\":\"486b222a-2ea0-45cc-8e5e-3ea5e4d2a8da\",\"nodeTo\":\"e21dab60-99e6-485c-91e7-124e3b5499ab\",\"index\":\"1\",\"order\":\"rc\"},{\"nodeFrom\":\"e21dab60-99e6-485c-91e7-124e3b5499ab\",\"nodeTo\":\"65a9c3d8-4e30-466b-9433-48357ccd6432\",\"index\":\"1\",\"order\":\"cr\"},{\"nodeFrom\":\"9974481d-8eac-4592-be37-19060ce6894c\",\"nodeTo\":\"d5d80d71-5d1d-4015-b33a-20173132dc5e\",\"index\":\"1\",\"order\":\"rc\"},{\"nodeFrom\":\"9974481d-8eac-4592-be37-19060ce6894c\",\"nodeTo\":\"129bb6a4-d01d-4629-921b-3352a14aaae4\",\"index\":\"2\",\"order\":\"rc\"},{\"nodeFrom\":\"eb1c2035-6648-4212-bd5b-b498039217c4\",\"nodeTo\":\"9974481d-8eac-4592-be37-19060ce6894c\",\"index\":\"1\",\"order\":\"cr\"},{\"nodeFrom\":\"65a9c3d8-4e30-466b-9433-48357ccd6432\",\"nodeTo\":\"eba0345d-b564-418c-90ea-a79452293b17\",\"index\":\"1\",\"order\":\"rc\"},{\"nodeFrom\":\"eba0345d-b564-418c-90ea-a79452293b17\",\"nodeTo\":\"9974481d-8eac-4592-be37-19060ce6894c\",\"index\":\"1\",\"order\":\"cr\"}]}";

const std::string json1c = "{\"version\":\"1\",\"guid\":\"410704c1-6dc3-451c-b062-a37c37eb5e29\",\"creator\":\"null\",\"relations\":[{\"label\":\"but\",\"id\":\"94c9b45d-db92-4cc2-9372-1bb36a56802e\",\"index\":\"2\",\"postag\":\"NA\"},{\"label\":\"is\",\"id\":\"a6e1009d-3863-4b38-8b3d-5d109aa79d23\",\"index\":\"4\",\"postag\":\"NA\"},{\"label\":\"not\",\"id\":\"74c89a1a-2a06-41cc-8c11-1eed74ee7b02\",\"index\":\"5\",\"postag\":\"NA\"}],\"concepts\":[{\"label\":\"Four\",\"id\":\"a96e4853-ae14-419e-93a4-00e5949bd699\",\"index\":\"0\",\"postag\":\"NA\"},{\"label\":\"abortions\",\"id\":\"80238a02-98a0-4bb7-96ed-da2aa075bd3d\",\"index\":\"1\",\"postag\":\"NA\"},{\"label\":\"termination\",\"id\":\"c7911004-ee07-4ea1-8cde-5544160b69eb\",\"index\":\"3\",\"postag\":\"NA\"},{\"label\":\"right\",\"id\":\"848de52d-ed3b-41b9-b199-432072346e74\",\"index\":\"6\",\"postag\":\"NA\"}],\"adjacencies\":[{\"nodeFrom\":\"a96e4853-ae14-419e-93a4-00e5949bd699\",\"nodeTo\":\"94c9b45d-db92-4cc2-9372-1bb36a56802e\",\"index\":\"1\",\"order\":\"cr\"},{\"nodeFrom\":\"80238a02-98a0-4bb7-96ed-da2aa075bd3d\",\"nodeTo\":\"94c9b45d-db92-4cc2-9372-1bb36a56802e\",\"index\":\"1\",\"order\":\"cr\"},{\"nodeFrom\":\"94c9b45d-db92-4cc2-9372-1bb36a56802e\",\"nodeTo\":\"c7911004-ee07-4ea1-8cde-5544160b69eb\",\"index\":\"1\",\"order\":\"rc\"},{\"nodeFrom\":\"c7911004-ee07-4ea1-8cde-5544160b69eb\",\"nodeTo\":\"a6e1009d-3863-4b38-8b3d-5d109aa79d23\",\"index\":\"1\",\"order\":\"cr\"},{\"nodeFrom\":\"a6e1009d-3863-4b38-8b3d-5d109aa79d23\",\"nodeTo\":\"848de52d-ed3b-41b9-b199-432072346e74\",\"index\":\"1\",\"order\":\"rc\"},{\"nodeFrom\":\"74c89a1a-2a06-41cc-8c11-1eed74ee7b02\",\"nodeTo\":\"848de52d-ed3b-41b9-b199-432072346e74\",\"index\":\"1\",\"order\":\"rc\"}]}";

const std::string json2a = "{\"version\":\"1\",\"guid\":\"201c3501-9867-48c8-8065-a0400a723c4c\",\"creator\":\"null\",\"relations\":[{\"label\":\"needed\",\"id\":\"04418253-0315-4206-86ea-ad395ea6e911\",\"index\":\"1\",\"postag\":\"NA\"},{\"label\":\"over\",\"id\":\"cd529225-15b1-4a2a-996a-37b8162d22c3\",\"index\":\"2\",\"postag\":\"NA\"}],\"concepts\":[{\"label\":\"Clarity\",\"id\":\"8bb0b3ec-7c20-4338-9195-4362a9db487c\",\"index\":\"0\",\"postag\":\"NA\"},{\"label\":\"resuscitation\",\"id\":\"450a9368-e978-4e47-b879-603ce3eb4c0a\",\"index\":\"3\",\"postag\":\"NA\"}],\"adjacencies\":[{\"nodeFrom\":\"8bb0b3ec-7c20-4338-9195-4362a9db487c\",\"nodeTo\":\"04418253-0315-4206-86ea-ad395ea6e911\",\"index\":\"1\",\"order\":\"cr\"},{\"nodeFrom\":\"8bb0b3ec-7c20-4338-9195-4362a9db487c\",\"nodeTo\":\"cd529225-15b1-4a2a-996a-37b8162d22c3\",\"index\":\"2\",\"order\":\"cr\"},{\"nodeFrom\":\"cd529225-15b1-4a2a-996a-37b8162d22c3\",\"nodeTo\":\"450a9368-e978-4e47-b879-603ce3eb4c0a\",\"index\":\"1\",\"order\":\"rc\"}]}";

const std::string json2b = "{\"version\":\"1\",\"guid\":\"a6089d27-3112-4859-8470-e04325da0341\",\"creator\":\"null\",\"relations\":[{\"label\":\"introduced\",\"id\":\"cb2743ac-2684-403c-8b9c-1837db00285e\",\"index\":\"3\",\"postag\":\"NA\"},{\"label\":\"DIY\",\"id\":\"52281bcc-2c38-45b3-a78e-9a27851de558\",\"postag\":\"NA\",\"index\":\"0\"},{\"label\":\"personal\",\"id\":\"519dc365-2e56-455d-91d4-80c516632b64\",\"postag\":\"NA\",\"index\":\"1\"}],\"concepts\":[{\"label\":\"care\",\"id\":\"18652565-2b37-4de0-9129-e23aab516348\",\"index\":\"2\",\"postag\":\"NA\"}],\"adjacencies\":[{\"nodeFrom\":\"52281bcc-2c38-45b3-a78e-9a27851de558\",\"nodeTo\":\"18652565-2b37-4de0-9129-e23aab516348\",\"index\":\"1\",\"order\":\"rc\"},{\"nodeFrom\":\"519dc365-2e56-455d-91d4-80c516632b64\",\"nodeTo\":\"18652565-2b37-4de0-9129-e23aab516348\",\"index\":\"1\",\"order\":\"rc\"},{\"nodeFrom\":\"18652565-2b37-4de0-9129-e23aab516348\",\"nodeTo\":\"cb2743ac-2684-403c-8b9c-1837db00285e\",\"index\":\"1\",\"order\":\"cr\"}]}";

const std::string json2c = "{\"version\":\"1\",\"guid\":\"410704c1-6dc3-451c-b062-a37c37eb5e29\",\"creator\":\"null\",\"relations\":[{\"label\":\"but\",\"id\":\"94c9b45d-db92-4cc2-9372-1bb36a56802e\",\"index\":\"2\",\"postag\":\"NA\"},{\"label\":\"is\",\"id\":\"a6e1009d-3863-4b38-8b3d-5d109aa79d23\",\"index\":\"4\",\"postag\":\"NA\"},{\"label\":\"not\",\"id\":\"74c89a1a-2a06-41cc-8c11-1eed74ee7b02\",\"index\":\"5\",\"postag\":\"NA\"}],\"concepts\":[{\"label\":\"Four\",\"id\":\"a96e4853-ae14-419e-93a4-00e5949bd699\",\"index\":\"0\",\"postag\":\"NA\"},{\"label\":\"abortions\",\"id\":\"80238a02-98a0-4bb7-96ed-da2aa075bd3d\",\"index\":\"1\",\"postag\":\"NA\"},{\"label\":\"termination\",\"id\":\"c7911004-ee07-4ea1-8cde-5544160b69eb\",\"index\":\"3\",\"postag\":\"NA\"},{\"label\":\"right\",\"id\":\"848de52d-ed3b-41b9-b199-432072346e74\",\"index\":\"6\",\"postag\":\"NA\"}],\"adjacencies\":[{\"nodeFrom\":\"a96e4853-ae14-419e-93a4-00e5949bd699\",\"nodeTo\":\"94c9b45d-db92-4cc2-9372-1bb36a56802e\",\"index\":\"1\",\"order\":\"cr\"},{\"nodeFrom\":\"80238a02-98a0-4bb7-96ed-da2aa075bd3d\",\"nodeTo\":\"94c9b45d-db92-4cc2-9372-1bb36a56802e\",\"index\":\"1\",\"order\":\"cr\"},{\"nodeFrom\":\"94c9b45d-db92-4cc2-9372-1bb36a56802e\",\"nodeTo\":\"c7911004-ee07-4ea1-8cde-5544160b69eb\",\"index\":\"1\",\"order\":\"rc\"},{\"nodeFrom\":\"c7911004-ee07-4ea1-8cde-5544160b69eb\",\"nodeTo\":\"a6e1009d-3863-4b38-8b3d-5d109aa79d23\",\"index\":\"1\",\"order\":\"cr\"},{\"nodeFrom\":\"a6e1009d-3863-4b38-8b3d-5d109aa79d23\",\"nodeTo\":\"848de52d-ed3b-41b9-b199-432072346e74\",\"index\":\"1\",\"order\":\"rc\"},{\"nodeFrom\":\"74c89a1a-2a06-41cc-8c11-1eed74ee7b02\",\"nodeTo\":\"848de52d-ed3b-41b9-b199-432072346e74\",\"index\":\"1\",\"order\":\"rc\"}]}";



#endif
