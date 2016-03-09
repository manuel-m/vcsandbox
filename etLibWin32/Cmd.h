#pragma once
#ifndef __ETCMD__
#define __ETCMD__

#include <string>

namespace et {

	class Cmd {

	private:
		std::string m_label;
		mutable std::size_t m_label_len;
		mutable bool m_label_len_valid;

	public:

		Cmd();
		explicit Cmd(const std::string &);
		explicit Cmd(const Cmd&);

		static const std::string label_default;
		const std::string & getLabel() const;
		void setLabel(const std::string &);

		std::size_t getLabelLen() const;
		std::size_t getLabelLen();

	};

}

#endif
